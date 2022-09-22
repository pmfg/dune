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

namespace UserInterfaces
{
  namespace LEDsASV
  {
    using DUNE_NAMESPACES;

    static const int c_max_led = 3;

    struct Arguments
    {
      // Led Name
      std::string led_name[c_max_led];
      // Led id
      int led_pin[c_max_led];
      // Invert output
      bool led_invert[c_max_led];
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! GPIOs.
      Hardware::GPIO* m_gpio[c_max_led];
      //! LED Machine
      LedMachine* m_led;
      //! State of system
      uint8_t m_system_state;
      //! Flag of critical error
      bool m_critical_error;
      // Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_critical_error(false)
      {
        for (unsigned i = 0; i < c_max_led; ++i)
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
        }

        // Register message listeners.
        bind<IMC::VehicleState>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::EntityState>(this);
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        for (uint8_t i = 0; i < c_max_led; ++i)
        {
          inf("LED %s at pin %d: output %s", m_args.led_name[i].c_str(), m_args.led_pin[i], m_args.led_invert[i]?"inverted":"not inverted");
          m_gpio[i] = new Hardware::GPIO(m_args.led_pin[i]);
          m_gpio[i]->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        }
        m_led = new LedMachine(m_gpio, m_args.led_invert);
      }

      void
      onResourceRelease(void)
      {
        /*Memory::clear(m_gpio[0]);
        Memory::clear(m_gpio[1]);
        Memory::clear(m_gpio[2]);*/
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->state != IMC::EntityState::ESTA_FAILURE)
          return;

        //Add code to monitor entity for critical error
        //use m_args to get entity to filter
        m_led->setState(LedMachine::LED_STATE_ERROR);
        m_critical_error = true;
      }

      void
      consume(const IMC::PowerOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

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
        if (m_critical_error)
          return;

        // If system is shutting down don't update LEDs.
        if (m_led->getLedState() == LedMachine::LED_STATE_POWEROFF)
          return;

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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        while (!stopping())
        {
          waitForMessages(0.01);
          m_led->ledStateUpdate();
        }
        Memory::clear(m_gpio[0]);
        Memory::clear(m_gpio[1]);
        Memory::clear(m_gpio[2]);
      }
    };
  }
}

DUNE_TASK
