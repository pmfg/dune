//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "LedMachine.hpp"
#include "BAUXDriver.hpp"

namespace UserInterfaces
{
  namespace BAUX
  {
    using DUNE_NAMESPACES;

    static const int c_max_led = 3;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      // Min Number of satellites to validate GPSFix
      int min_sat;
      // Min HDop to validate GPSFix
      float min_hdop;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! BAUX BOARD.
      BAUXDriver* m_baux;
      //! LED Machine
      LedMachine* m_led;
      //! State of system
      uint8_t m_system_state;
      //! Flag of critical error
      bool m_critical_error;
      //! Flag to control state of task
      bool m_is_active;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Flag to control first run of task
      bool m_first_run;
      //! Power operation.
      IMC::PowerOperation m_pwr_op;
      // Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_critical_error(false),
        m_is_active(false),
        m_first_run(true)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the BAUX Board");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("921600")
        .description("Serial port baudrate");

        param("Minimum Satellites for GPSFix state", m_args.min_sat)
          .defaultValue("5")
          .description("Minimum Satellites for GPSFix state");

        param("Minimum HDop for GPSFix state", m_args.min_hdop)
          .defaultValue("1.5")
          .description("Minimum HDop for GPSFix state");

        /*for (unsigned i = 0; i < c_max_led; ++i)
        {
          std::string option = String::str("LED %u - Invert Output", i);
          param(option, m_args.led_invert[i])
          .defaultValue("false")
          .description("Led invert output");

          option = String::str("LED %u - PinOut", i);
          param(option, m_args.led_pin[i])
          .description("Led pin");

          option = String::str("LED %u - Name", i);
          param(option, m_args.led_name[i])
          .description("Led Name");
        }*/

        // Register message listeners.
        bind<IMC::VehicleState>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::GpsFix>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_pwr_op.setDestination(getSystemId());
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_wdog.setTop(5000);
        m_baux = new BAUXDriver(this, m_args.uart_dev, m_args.uart_baud);
        m_led = new LedMachine(m_baux);
        m_baux->getFirmwareVersion();
      }

      void
      onResourceRelease(void)
      {
        if(m_is_active)
        {
          m_baux->setFlowOfIMUData(false);
          for(uint8_t i = 0; i < c_max_led; i++)
          {
            m_led->turnLedOff(i);
            //Memory::clear(m_led);
            //Memory::clear(m_baux);
          }
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSource() != getSystemId() || m_first_run)
          return;

        debug("GpsFix %d %f", msg->satellites, msg->hdop);
        if(msg->satellites >= m_args.min_sat && msg->hdop <= m_args.min_hdop)
          m_led->setGPSFixState(true);
        else
          m_led->setGPSFixState(false);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->state != IMC::EntityState::ESTA_FAILURE || m_first_run)
          return;

        inf("EntityState %s", resolveEntity(msg->getId()).c_str());
        //Add code to monitor entity for critical error
        //use m_args to get entity to filter
        ////m_led->setState(LedMachine::LED_STATE_ERROR);
        ////m_critical_error = true;
        if(m_first_run)
          m_wdog.reset();
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId() || m_first_run)
          return;

        inf("PowerOperation %d", msg->op);

        switch (msg->op)
        {
          case IMC::PowerOperation::POP_PWR_DOWN_IP:
            m_led->setState(LedMachine::LED_STATE_POWEROFF);
            break;
          case IMC::PowerOperation::POP_PWR_DOWN_ABORTED:
            m_led->setState(LedMachine::LED_STATE_NORMAL);
            break;
        }
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if (m_critical_error || m_first_run)
          return;

        // If system is shutting down don't update LEDs.
        if (m_led->getLedState() == LedMachine::LED_STATE_POWEROFF)
          return;

        debug("VehicleState %d | %s", msg->op_mode, resolveEntity(msg->getSourceEntity()).c_str());

        switch (msg->op_mode)
        {
          case IMC::VehicleState::VS_BOOT:
            m_led->setState(LedMachine::LED_STATE_BOOT);
            break;
          case IMC::VehicleState::VS_ERROR:
            m_led->setState(LedMachine::LED_STATE_ERROR);
            break;
          case IMC::VehicleState::VS_CALIBRATION:
            m_led->setState(LedMachine::LED_STATE_CALIBRATION);
            break;
          case IMC::VehicleState::VS_MANEUVER:
          case IMC::VehicleState::VS_EXTERNAL:
            m_led->setState(LedMachine::LED_STATE_PLAN_EXECUTION);
            break;
          case IMC::VehicleState::VS_SERVICE:
            m_led->setState(LedMachine::LED_STATE_NORMAL);
            break;
        }
      }

      void
      onMain(void)
      {
        bool is_powero_off = false;
        m_is_active = true;
        m_wdog.setTop(5.0);
        while (!stopping())
        {
          if(m_first_run)
          {
            if(m_wdog.overflow())
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_baux->setFlowOfIMUData(true);
              m_first_run = false;
            }
          }
          waitForMessages(0.001);
          m_led->ledStateUpdate();
          m_baux->bauxMachine();

          if (m_baux->isSwitchOn() && !is_powero_off)
          {
            war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
            m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            dispatch(m_pwr_op);
            is_powero_off = true;
            m_wdog.setTop(5);
            m_wdog.reset();
            onResourceRelease();
          }
          else if(is_powero_off)
          {
            if(m_wdog.overflow())
            {
              war("Powering off CPU");
              (void) system("poweroff");
            }
          }
        }
      }
    };
  }
}

DUNE_TASK