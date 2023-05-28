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
#include "boardDriver.hpp"
#include "auxCommands.hpp"

namespace Actuators
{
  namespace R4WD
  {
    using DUNE_NAMESPACES;

    static const uint8_t c_max_channels = 3;
    static const float c_period_data_get = 0.5;
    static const int c_max_data_type_to_ask = 2;

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
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! BAUX BOARD.
      AUXDriver* m_aux;
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
      //! Task Arguments.
      Arguments m_args;
      //! Step counter for ask data.
      int m_step_counter_data;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_critical_error(false),
        m_is_active(false),
        m_first_run(true),
        m_step_counter_data(0)
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
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_wdog.setTop(5000);
        m_aux = new AUXDriver(this, m_args.uart_dev, m_args.uart_baud);
        m_aux->getFirmwareVersion();
      }

      void
      onResourceRelease(void)
      {
        if(m_is_active)
        {
          //stop machines
        }
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
        m_fuel.value = 85;
        m_fuel.confidence = 100;
        dispatch(m_fuel, DF_KEEP_TIME);
      }

      void
      dispatchGPSData(void)
      {

      }

      void
      onMain(void)
      {
        m_is_active = true;
        m_wdog.setTop(5.0);
        m_wdog_get_data.setTop(c_period_data_get);
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
              m_wdog_aux.setTop(m_args.timeout_com_baux);
              m_first_run = false;
            }
          }
          waitForMessages(0.001);
          m_aux->auxMachine();

          if(!m_first_run)
          {
            if(m_aux->newINAData() && m_aux->newGPSData())
            {
              m_aux->clearNewGPSDataFlag();
              m_aux->clearNewInaDataFlag();
              dispatchINAData();
              dispatchGPSData();
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
            switch(m_step_counter_data)
            {
              case 0:
                m_aux->askINAData();
                break;

              case 1:
                m_aux->askGPSData();
                break;

              default:
                m_step_counter_data = 0;
                break;
            }
            m_step_counter_data++; 
            if(m_step_counter_data >= c_max_data_type_to_ask)
              m_step_counter_data = 0;
          }
        }
      }
    };
  }
}

DUNE_TASK