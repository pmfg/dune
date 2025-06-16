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
#include "AUXDriver.hpp"
#include "AuxCommands.hpp"
#include "LedMachine.hpp"

namespace Actuators
{
  namespace R4WD
  {
    using DUNE_NAMESPACES;

    static const uint8_t c_max_channels = 3;
    static const int c_max_data_type_to_ask = 3;
    static const float c_period_data_get = 1.0 / c_max_data_type_to_ask;
    static const int c_max_motors = 2;
    static const int c_max_led = 2;

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
      //! Timeout baux communication
      float timeout_com_baux;
      //! Minimum Voltage Level
      float minimum_voltage_level;
      //! Maximum Voltage Level
      float maximum_voltage_level;
      //! Nominal Voltage Level
      float nominal_voltage_level;
      //! Rpm entity labels
      std::string motor_elabels[c_max_motors];
      //! Distance to stop motors
      float distance_stop;
      //! Get Lidar Distance
      bool get_lidar;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! BAUX BOARD.
      AUXDriver* m_aux;
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
      //! Watchdog for com to baux board
      Counter<double> m_wdog_aux;
      //! Watchdog for ask data
      Counter<double> m_wdog_get_data;
      //! Flag to control first run of task
      bool m_first_run;
      //! Voltage message
      IMC::Voltage m_volt[c_max_channels];
      //! Voltage of batteries message
      IMC::Voltage m_bat_volt;
      //! Current message
      IMC::Current m_amp[c_max_channels];
      //! Fuel Level message
      IMC::FuelLevel m_fuel;
      //! GPS Fix message.
      IMC::GpsFix m_fix;
      //! Task Arguments.
      Arguments m_args;
      //! Step counter for ask data.
      int m_step_counter_data;
      //! Rpm message
      IMC::Rpm m_rpm[c_max_motors];
      //! Power operation.
      IMC::PowerOperation m_pwr_op;
      //! Flag to control gps fix state
      bool m_fix_ok;
      //!  Altitude messages
      IMC::Distance m_altitude[2];
      //! BMP Pressure
      IMC::Pressure m_pressure;
      //! BMP Temperature
      IMC::Temperature m_temperature;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_critical_error(false),
        m_is_active(false),
        m_first_run(true),
        m_step_counter_data(0),
        m_fix_ok(false)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the BAUX Board");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("921600")
        .description("Serial port baudrate");

        param("Timeout AUX Communication", m_args.timeout_com_baux)
          .defaultValue("3000")
          .description("Timeout AUX Communication in seconds.");

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

        param("Minimum Voltage Level", m_args.minimum_voltage_level)
          .defaultValue("9.5")
          .description("Minimum Voltage Level");

        param("Maximum Voltage Level", m_args.maximum_voltage_level)
          .defaultValue("12.6")
          .description("Maximum Voltage Level");

        param("Nominal Voltage Level", m_args.nominal_voltage_level)
          .defaultValue("11.1")
          .description("Nominal Voltage Level");

        // Extract motor configurations
        for(unsigned i = 1; i <= c_max_motors; ++i)
        {
          std::string option = String::str("Motor %u - Entity Label", i);
          param(option, m_args.motor_elabels[i-1])
          .defaultValue("")
          .description("Motor Entity Label");
        }

        param("Distance to Stop Motors", m_args.distance_stop)
          .defaultValue("0.15")
          .description("Distance to Stop Motors in meters.");

        param("Get Data Lidar", m_args.get_lidar)
          .defaultValue("false")
          .description("Get Data Lidar.");

        bind<IMC::SetThrusterActuation>(this);
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

        unsigned eid = 0;

        for (unsigned i = 0; i < c_max_motors; ++i)
        {
          if (m_args.motor_elabels[i].empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.motor_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.motor_elabels[i]);
          }
          m_rpm[i].setSourceEntity(eid);
        }

        m_altitude[0].setSourceEntity(getEid("Altitude BMP"));
        m_altitude[1].setSourceEntity(getEid("Distance Lidar"));
        m_pressure.setSourceEntity(getEid("Pressure BMP"));
        m_temperature.setSourceEntity(getEid("Temperature BMP"));
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
        m_aux = new AUXDriver(this, m_args.uart_dev, m_args.uart_baud);
        m_led = new LedMachine(m_aux);
        m_wdog.setTop(1);
        while(!m_aux->haveFirmwareName())
        {
          if(m_wdog.overflow())
          {
            inf("Asking firmware version of board.");
            m_aux->getFirmwareVersion();
            m_wdog.setTop(1000);
          }
          m_aux->auxMachine();
          m_led->ledStateUpdate();
        }
        m_wdog.setTop(5000);
      }

      void
      onResourceRelease(void)
      {
        if(m_is_active)
        {
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
            if(m_fix_ok)
              m_led->setState(LedMachine::LED_STATE_NORMAL);
            else
              m_led->setState(LedMachine::LED_STATE_NO_FIX);
            break;
        }
      }

      //! Consume message IMC::SetThrusterActuation
      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        debug("ID:%d | %f", msg->id, msg->value);
        if(msg->value > 0 && m_args.distance_stop > 0)
        {
          if(m_args.distance_stop >= m_aux->getDistanceLidar())
          {
            war("Stoping Motor %d, object to close ( < %.2f m)", msg->id, m_args.distance_stop);
            m_rpm[msg->id].value = m_aux->sendSpeedMotor(msg->id, 0);
          }
          else
          {
            m_rpm[msg->id].value = m_aux->sendSpeedMotor(msg->id, msg->value);
          }
        }
        else
        {
          m_rpm[msg->id].value = m_aux->sendSpeedMotor(msg->id, msg->value);
        }
        dispatch(m_rpm[msg->id]);
      }

      void
      dispatchBMPData(void)
      {
        m_pressure.value = m_aux->getPressureBMP();
        m_temperature.value = m_aux->getLocalTemperatureBMP();
        dispatch(m_pressure);
        dispatch(m_temperature);

        
        m_altitude[0].value = m_aux->getAltitudeBMP();
        m_altitude[0].validity = IMC::Distance::DV_VALID;
        dispatch(m_altitude[0]);

        m_altitude[1].value = m_aux->getDistanceLidar();
        m_altitude[1].validity = IMC::Distance::DV_VALID;
        dispatch(m_altitude[1]);

        // war("Pressure: %.2f Pa | Temperature: %.2f C", m_pressure.value, m_temperature.value);
        
      }

      void
      dispatchHeadingData(void)
      {
        //TODO
        int heading = m_aux->getHeading();
        //war("heading : %d", heading);
        IMC::EulerAngles euler;
        euler.setTimeStamp();
        euler.psi = Angles::radians(heading);
        euler.psi_magnetic = Angles::radians(heading);
        euler.phi = 0.0;
        euler.theta = 0.0;
        dispatch(euler, DF_KEEP_TIME);
      }

      void
      dispatchINAData(void)
      {
        m_volt[0].setTimeStamp();
        double time_stamp = m_volt[0].getTimeStamp();
        //debug("Channel 1: %.3fV | %.3fA", m_aux->getINAVoltage(0), m_aux->getINACurrent(0));
        //debug("Channel 2: %.3fV | %.3fA", m_aux->getINAVoltage(1), m_aux->getINACurrent(1));
        //debug("Channel 3: %.3fV | %.3fA\n", m_aux->getINAVoltage(2), m_aux->getINACurrent(2));

        for (uint8_t i = 0; i < 3; i++)
        {
          m_volt[i].setTimeStamp(time_stamp);
          m_volt[i].value = m_aux->getINAVoltage(i);
          m_amp[i].setTimeStamp(time_stamp);
          m_amp[i].value = m_aux->getINACurrent(i);
          dispatch(m_volt[i], DF_KEEP_TIME);
          dispatch(m_amp[i], DF_KEEP_TIME);

          if (m_args.channels_elabels[i].find("Batteries") != std::string::npos)
          {
            m_bat_volt.setTimeStamp(time_stamp);
            m_bat_volt.value = m_aux->getINAVoltage(i);
            dispatch(m_bat_volt, DF_KEEP_TIME);
          }
        }
        // debug values for fuel level
        m_fuel.setTimeStamp(time_stamp);

        m_fuel.value = getFuelLevel(m_bat_volt.value);
        m_fuel.confidence = 50;
        dispatch(m_fuel, DF_KEEP_TIME);
      }

      double getFuelLevel(double voltage)
      {
        if (voltage < m_args.minimum_voltage_level || voltage > m_args.maximum_voltage_level)
        {
          war("Voltage is out of range.");
          return 0;
        }
        return (voltage - m_args.minimum_voltage_level) / (m_args.maximum_voltage_level - m_args.minimum_voltage_level) * 100.0;
      }

      void
      dispatchGPSData(void)
      {
        //double time_stamp = m_volt[0].getTimeStamp();
        m_fix.setTimeStamp();
        //dst = (h * 3600) + (m * 60) + s + sfp;
        struct R4WD::AUXDriver::GPSData m_gps_data;
        m_gps_data = m_aux->getGPSData();
        // war("GPS Data: %d | %f | %f | %f | %f | %f | %f | %d | %d",
        //     m_gps_data.valid_fix, m_gps_data.latitude, m_gps_data.longitude,
        //     m_gps_data.hdop, m_gps_data.course, m_gps_data.altitude,
        //     m_gps_data.speed, m_gps_data.sat, m_gps_data.year);
        if(m_gps_data.valid_fix)
        {
          m_fix_ok = true;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_TIME;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_DATE;
          m_fix.type = IMC::GpsFix::GFT_STANDALONE;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
          m_fix.utc_time = (m_gps_data.hour * 3600) + (m_gps_data.minute * 60) + m_gps_data.second;
          m_fix.utc_day = m_gps_data.day;
          m_fix.utc_month = m_gps_data.month;
          m_fix.utc_year = m_gps_data.year;
        }
        else
        {
          m_fix_ok = false;
        }
        m_fix.lat = Angles::radians(m_gps_data.latitude);
        m_fix.lon = Angles::radians(m_gps_data.longitude);
        m_fix.hdop = m_gps_data.hdop;
        m_fix.satellites = m_gps_data.sat;
        m_fix.height = m_gps_data.altitude;
        m_fix.validity |= IMC::GpsFix::GFV_VALID_HDOP;
        m_fix.cog = Angles::normalizeRadian(Angles::radians(m_gps_data.course));
        m_fix.validity |= IMC::GpsFix::GFV_VALID_COG;
        m_fix.sog = m_gps_data.speed;
        m_fix.validity |= IMC::GpsFix::GFV_VALID_SOG;

        dispatch(m_fix);
      }

      void
      onMain(void)
      {
        bool is_powero_off = false;
        m_is_active = true;
        m_wdog.setTop(5.0);
        m_wdog_get_data.setTop(c_period_data_get);
        while (!stopping())
        {
          if(m_first_run)
          {
            if(m_wdog.overflow())
            {
              char entity_state_text[128];
              std::sprintf(entity_state_text, "active | %s | %d | GPS(%d|%.1f|%.1f)", m_args.uart_dev.c_str(), m_args.uart_baud,
                            m_fix.satellites, m_fix.hdop, m_fix.height);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(entity_state_text)));
              m_wdog_aux.setTop(m_args.timeout_com_baux);
              m_first_run = false;
              for(uint8_t i = 0; i < c_max_motors; i++)
              {
                m_rpm[i].value = 0;
                dispatch(m_rpm[i]);
              }
            }
          }
          waitForMessages(0.001);
          m_aux->auxMachine();
          m_led->ledStateUpdate();

          if(!m_first_run)
          {
            if(m_aux->newAllData())
            {
              m_aux->clearNewAllDataFlag();
              char entity_state_text[128];
              std::sprintf(entity_state_text, "active | %s | %d | GPS(%d|%.1f|%.1f)", m_args.uart_dev.c_str(), m_args.uart_baud,
                            m_fix.satellites, m_fix.hdop, m_fix.height);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(entity_state_text)));
              dispatchINAData();
              dispatchGPSData();
              dispatchBMPData();
              dispatchHeadingData();
              m_wdog_aux.reset();
            }
          }

          if(m_wdog_aux.overflow() && !m_first_run)
          {
            m_first_run = true;
            m_aux->resetBoard();
            err("%s", DTR(Status::getString(CODE_COM_ERROR)));
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
          }

          if(m_wdog_get_data.overflow())
          {
            m_wdog_get_data.reset();
            m_aux->askAllData();
          }

          if (m_aux->isSwitchOn() && !is_powero_off)
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
              m_led->turnLedOn(AUXDriver::LED_RED);
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