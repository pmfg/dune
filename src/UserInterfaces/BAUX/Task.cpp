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
    static const uint8_t c_max_channels = 6;

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
      //! Channel entity labels
      std::string channels_elabels[c_max_channels];
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
      //! IMC - IMU Data
      IMC::EulerAngles m_euler_angles;
      //! Magnetic field message.
      IMC::MagneticField m_mag;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! AngularVelocity message
      IMC::AngularVelocity m_gyro;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Voltage message
      IMC::Voltage m_volt[c_max_channels];
      //! Voltage of batteries message
      IMC::Voltage m_bat_volt;
      //! Current message
      IMC::Current m_amp[c_max_channels];
      //! Fuel Level message
      IMC::FuelLevel m_fuel;
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

        // Extract Channels entity label
        for (uint8_t i = 1; i <= c_max_channels; ++i)
        {
          std::string option = String::str("Channel Name %u", i);
          param(option, m_args.channels_elabels[i - 1])
          .defaultValue("")
          .description("Channel Entity Label");
        }

        // Register message listeners.
        bind<IMC::VehicleState>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::GpsFix>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for (uint8_t i = 0; i < c_max_channels; ++i)
        {

          if (m_args.channels_elabels[i].empty())
            continue;

          m_volt[i].setSourceEntity(getEid(m_args.channels_elabels[i]));
          m_amp[i].setSourceEntity(getEid(m_args.channels_elabels[i]));
        }

        m_bat_volt.setSourceEntity(getEid("Batteries"));
        m_temp.setSourceEntity(getEid("IMU"));
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }

        return eid;
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
          m_baux->setFlowOfINAData(false);
          for(uint8_t i = 0; i < c_max_led; i++)
          {
            m_led->turnLedOff(i);
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
      dispatchIMUData(void)
      {
        m_euler_angles.setTimeStamp();
        m_euler_angles.psi = m_baux->getYaw();
        m_euler_angles.theta = m_baux->getPitch();
        m_euler_angles.phi = m_baux->getRoll();
        m_euler_angles.psi_magnetic = m_baux->getYaw();
        dispatch(m_euler_angles, DF_KEEP_TIME);

        m_accel.setTimeStamp(m_euler_angles.getTimeStamp());
        m_accel.x = m_baux->getAx();
        m_accel.y = m_baux->getAy();
        m_accel.z = m_baux->getAz();
        dispatch(m_accel, DF_KEEP_TIME);

        m_gyro.setTimeStamp(m_euler_angles.getTimeStamp());
        m_gyro.x = m_baux->getGx();
        m_gyro.y = m_baux->getGy();
        m_gyro.z = m_baux->getGz();
        dispatch(m_gyro, DF_KEEP_TIME);

        m_mag.setTimeStamp(m_euler_angles.getTimeStamp());
        m_mag.x = m_baux->getMx();
        m_mag.y = m_baux->getMy();
        m_mag.z = m_baux->getMz();
        dispatch(m_mag, DF_KEEP_TIME);

        m_temp.setTimeStamp(m_euler_angles.getTimeStamp());
        m_temp.value = m_baux->getIMUTemp();
        dispatch(m_temp, DF_KEEP_TIME);
      }

      void
      dispatchINAData(uint8_t ina_id)
      {
        m_volt[0].setTimeStamp();
        double time_stamp = m_volt[0].getTimeStamp();
        switch (ina_id)
        {
          case 0:
            debug("Channel 1: %.3fV | %.3fA", m_baux->getINAVoltage(0), m_baux->getINACurrent(0));
            debug("Channel 2: %.3fV | %.3fA", m_baux->getINAVoltage(1), m_baux->getINACurrent(1));
            debug("Channel 3: %.3fV | %.3fA\n", m_baux->getINAVoltage(2), m_baux->getINACurrent(2));

            for(uint8_t i = 0; i < 3; i++)
            {
              m_volt[i].setTimeStamp(time_stamp);
              m_volt[i].value = m_baux->getINAVoltage(i);
              m_amp[i].setTimeStamp(time_stamp);
              m_amp[i].value = m_baux->getINACurrent(i);
              dispatch(m_volt[i], DF_KEEP_TIME);
              dispatch(m_amp[i], DF_KEEP_TIME);

              if(m_args.channels_elabels[i].find("Batteries") != std::string::npos)
              {
                m_bat_volt.setTimeStamp(time_stamp);
                m_bat_volt.value = m_baux->getINAVoltage(i);
                dispatch(m_bat_volt, DF_KEEP_TIME);
              }
            }
            break;

          case 1:
            debug("Channel 4: %.3fV | %.3fA", m_baux->getINAVoltage(3), m_baux->getINACurrent(3));
            debug("Channel 5: %.3fV | %.3fA", m_baux->getINAVoltage(4), m_baux->getINACurrent(4));
            debug("Channel 6: %.3fV | %.3fA\n", m_baux->getINAVoltage(5), m_baux->getINACurrent(5));

            for(uint8_t i = 3; i < 6; i++)
            {
              m_volt[i].setTimeStamp(time_stamp);
              m_volt[i].value = m_baux->getINAVoltage(i);
              m_amp[i].setTimeStamp(time_stamp);
              m_amp[i].value = m_baux->getINACurrent(i);
              dispatch(m_volt[i], DF_KEEP_TIME);
              dispatch(m_amp[i], DF_KEEP_TIME);

              if(m_args.channels_elabels[i].find("Batteries") != std::string::npos)
              {
                m_bat_volt.setTimeStamp(time_stamp);
                m_bat_volt.value = m_baux->getINAVoltage(i);
                dispatch(m_bat_volt, DF_KEEP_TIME);
              }
            }
            break;
          
          default:
            break;
        }
        //debug values for fuel level
        m_fuel.setTimeStamp(time_stamp);
        m_fuel.value = 85;
        m_fuel.confidence = 100;
        dispatch(m_fuel, DF_KEEP_TIME);
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
              char entity_state_text[128];
              std::sprintf(entity_state_text, "active | %s | %d", m_args.uart_dev.c_str(), m_args.uart_baud);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(entity_state_text)));
              m_baux->setFlowOfIMUData(true);
              m_baux->setFlowOfINAData(true);
              m_first_run = false;
            }
          }
          waitForMessages(0.001);
          m_led->ledStateUpdate();
          m_baux->bauxMachine();

          if(m_baux->newIMUData())
          {
            dispatchIMUData();
          }
          if(m_baux->newINAData(0))
          {
            dispatchINAData(0);
          }
          if(m_baux->newINAData(1))
          {
            dispatchINAData(1);
          }

          if (m_baux->isSwitchOn() && !is_powero_off)
          {
            war("%s", DTR(Status::getString(Status::CODE_POWER_DOWN)));
            m_pwr_op.op = IMC::PowerOperation::POP_PWR_DOWN_IP;
            dispatch(m_pwr_op, DF_LOOP_BACK);
            is_powero_off = true;
            m_led->setState(LedMachine::LED_STATE_POWEROFF);
            m_wdog.setTop(5);
            m_wdog.reset();
          }
          else if(is_powero_off)
          {
            if(m_wdog.overflow())
            {
              war("Powering off CPU");
              onResourceRelease();
              m_led->turnLedOn(BAUX::BAUXDriver::LED_RED);
              Time::Delay::wait(2);
              if (std::system("poweroff") == -1)
              {
                setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
                err(DTR("failed to execute poweroff command"));
                m_wdog.setTop(1);
                m_wdog.reset();
              }
              else
              {
                while (!stopping());
              }
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
