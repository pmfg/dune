//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef USER_INTERFACES_BOARD_DRIVER_HPP_INCLUDED_
#define USER_INTERFACES_BOARD_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "auxCommands.hpp"

namespace Actuators
{
  namespace R4WD
  {
    using DUNE_NAMESPACES;

    static const int c_max_power_channels = 3;

    class AUXDriver
    {
    public:
      struct GPSData
      {
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
        float latitude;
        float longitude;
        float hdop;
        float course;
        float altitude;
        float speed;
        int sat;
        int valid_fix;
      };

      enum LEDId
      {
        LED_RED = 0,
        LED_GREEN = 1
      };

      enum PowerStates
      {
        POWER_OFF = 0,
        POWER_ON = 1
      };

      AUXDriver(DUNE::Tasks::Task *task, std::string device_uart, unsigned baud_uart)
      {
        m_task = task;
        m_device = device_uart;
        m_baud = baud_uart;
        m_new_ina_data = false;
        m_new_gps_data = false;
        m_first_read = true;
        m_speed.motor_1 = 0;
        m_speed.motor_2 = 1;
        m_hc_echo = 0;
        m_is_switch_on = false;
        try
        {
          m_uart = new SerialPort(m_device, m_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
          m_poll.add(*m_uart);
        }
        catch (std::runtime_error &e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      ~AUXDriver(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      void
      askINAData(void)
      {
        char cmd[64];
        std::sprintf(cmd, "%c,%c%c", BYTE_PREAMBLE, BYTE_INA_DATA, '\0');
        m_uart->writeString(buildCmdMsg(cmd).c_str());
      }

      void
      askGPSData(void)
      {
        char cmd[64];
        std::sprintf(cmd, "%c,%c%c", BYTE_PREAMBLE, BYTE_GPS_DATA, '\0');
        m_uart->writeString(buildCmdMsg(cmd).c_str());
      }

      void
      getFirmwareVersion(void)
      {
        char cmd[64];
        std::sprintf(cmd, "%c,%c%c", BYTE_PREAMBLE, BYTE_VERSION, '\0');
        m_uart->writeString(buildCmdMsg(cmd).c_str());
      }

      void
      resetBoard(void)
      {
        char cmd[64];
        std::sprintf(cmd, "%c,%c%c", BYTE_PREAMBLE, BYTE_RESET, '\0');
        m_uart->writeString(buildCmdMsg(cmd).c_str());
      }

      void
      setLed(uint8_t led_id, bool power_led_state)
      {
        char led_power_cmd[32];
        char led_char = 'A';
        switch (led_id)
        {
          case LED_RED:
            led_char = 'R';
            break;

          case LED_GREEN:
            led_char = 'G';
            break;

          default:
            break;
        }
        std::sprintf(led_power_cmd, "%c,%c,%c,%d%c", BYTE_PREAMBLE, BYTE_LED,
                    led_char, power_led_state, '\0');
        m_uart->writeString(buildCmdMsg(led_power_cmd).c_str());
      }

      bool
      isSwitchOn(void)
      {
        return m_is_switch_on;
      }

      bool
      newINAData(void)
      {
        return m_new_ina_data;
      }

      bool
      newGPSData(void)
      {
        return m_new_gps_data;
      }

      void
      clearNewInaDataFlag(void)
      {
        m_new_ina_data = false;
      }

      void
      clearNewGPSDataFlag(void)
      {
        m_new_gps_data = false;
      }

      float
      getINAVoltage(uint8_t channel_id)
      {
        if (channel_id <= c_max_power_channels)
          return m_ina_data[channel_id].voltage;
        else
          return -1;
      }

      float
      getINACurrent(uint8_t channel_id)
      {
        if (channel_id <= c_max_power_channels)
          return m_ina_data[channel_id].current;
        else
          return -1;
      }

      void
      auxMachine(void)
      {
        if (Poll::poll(*m_uart, 0.001))
        {
          char bfrUart[512];
          unsigned cnt_char = m_uart->readString(bfrUart, sizeof(bfrUart));
          m_task->debug("Reply: %s(%d)", bfrUart, cnt_char);
          if (csumOK(bfrUart))
          {
            if (std::strstr(bfrUart, "$,v,") != NULL)
            {
              char *vrs = std::strtok(bfrUart, ",");
              vrs = std::strtok(NULL, ",");
              vrs = std::strtok(NULL, ",");
              m_task->inf("Firmware version: %s", vrs);
            }
            else if (std::strstr(bfrUart, "$,i,E,") != NULL)
            {
              m_task->war("INA in error, no data power from INA");
            }
            else if (std::strstr(bfrUart, "$,i,") != NULL)
            {
              parseINAData(bfrUart);
            }
            else if (std::strstr(bfrUart, "$,g,") != NULL)
            {
              parseGPSData(bfrUart);
            }
            else if (std::strstr(bfrUart, "$,d,") != NULL)
            {
              std::sscanf(bfrUart, "$,d,%d,*", &m_hc_echo);
              m_task->debug("Distance HC: %.2f m", m_hc_echo/100.0);
            }
            else if (std::strstr(bfrUart, "$,p,") != NULL)
            {
              m_is_switch_on = true;
            }
          }
          else
          {
            m_task->debug("Wrong csum");
          }
        }
      }

      struct GPSData
      getGPSData(void)
      {
        return gps;
      }

      int
      sendSpeedMotor(uint8_t motor_id, float value_speed)
      {
        if(motor_id == 0)
        {
          m_speed.motor_1 = value_speed * 100;
        }
        else if(motor_id == 1)
        {
          m_speed.motor_2 = value_speed * 100;
        }
        char cmd[64];
        std::sprintf(cmd, "%c,%c,%d,%d%c", BYTE_PREAMBLE, BYTE_SET_SPEED, m_speed.motor_1, m_speed.motor_2, '\0');
        m_uart->writeString(buildCmdMsg(cmd).c_str());

        return value_speed * 100;
      }

      float
      getDistanceHC(void)
      {
        return m_hc_echo / 100.0;
      }

      struct GPSData gps;

    private:
      struct INAData
      {
        double voltage;
        double current;
      };

      struct MotorSpeed
      {
        int motor_1;
        int motor_2;
      };

      //! Parent task.
      DUNE::Tasks::Task *m_task;
      //! Serial Object
      SerialPort *m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Device uart
      std::string m_device;
      //! Buadrate
      unsigned m_baud;
      //! INA Data Power
      INAData m_ina_data[c_max_power_channels];
      //! Flag to control new power ina data
      bool m_new_ina_data;
      //! Flag to control new GPS data
      bool m_new_gps_data;
      //! First read of imu values
      bool m_first_read;
      //! Struct to save motor speeds in percentage.
      MotorSpeed m_speed;
      //! Echo Distance value
      int m_hc_echo;
      //! Switch State
      bool m_is_switch_on;

      char
      calcCRC8(char *data_in)
      {
        char result = 0x00;
        uint16_t cnt = 0;
        while (data_in[cnt] != '*')
        {
          result ^= data_in[cnt];
          cnt++;
        }
        return result;
      }

      std::string
      buildCmdMsg(std::string cmd)
      {
        char text_data_build[512];
        std::sprintf(text_data_build, "%s,*", cmd.c_str());
        char csum = calcCRC8(text_data_build);
        char text_data_final[532];
        std::sprintf(text_data_final, "%s%c\n", text_data_build, csum);
        m_task->debug("MSG TO SEND:%s", text_data_final);
        std::string s(text_data_final);
        return s;
      }

      bool
      csumOK(char *input_data)
      {
        char *ptr = std::strtok(input_data, "*");
        char data_in[512];
        std::sprintf(data_in, "%s*", ptr);
        ptr = std::strtok(NULL, "*");
        if (ptr != NULL)
        {
          char csum_rx = ptr[0];
          char csum_calc = calcCRC8(data_in);
          m_task->debug("String to calculate csum:%s", data_in);
          m_task->debug("CSUM RX:%c | CSUM CALC:%c", csum_rx, csum_calc);
          if (csum_rx == csum_calc)
            return true;
          else
            return false;
        }
        else
        {
          return false;
        }
      }

      void
      parseINAData(char *ina_data_input)
      {
        // TODO filter erro message
        // parse ina data
        // m_task->inf("%s", ina_data_input);
        std::sscanf(ina_data_input, "$,i,%lf,%lf,%lf,%lf,%lf,%lf,*%*s",
                    &m_ina_data[0].voltage, &m_ina_data[0].current,
                    &m_ina_data[1].voltage, &m_ina_data[1].current,
                    &m_ina_data[2].voltage, &m_ina_data[2].current);

        m_task->debug("Channel 1: %.3fV | %.3fA", m_ina_data[0].voltage, m_ina_data[0].current);
        m_task->debug("Channel 2: %.3fV | %.3fA", m_ina_data[1].voltage, m_ina_data[1].current);
        m_task->debug("Channel 3: %.3fV | %.3fA", m_ina_data[2].voltage, m_ina_data[2].current);
        m_new_ina_data = true;
      }

      void
      parseGPSData(char *gps_data_input)
      {
        // m_task->war("%s", gps_data_input);
        switch (gps_data_input[4])
        {
          case '0':
            std::sscanf(gps_data_input, "$,g,0,%d,%d,%d,%d,%d,%d,",
                        &gps.year, &gps.month, &gps.day, &gps.hour, &gps.minute, &gps.second);
            m_task->debug("%04d-%02d-%02d | %02d:%02d:%02d",
                        gps.year, gps.month, gps.day, gps.hour, gps.minute, gps.second);
            break;

          case '1':
            std::sscanf(gps_data_input, "$,g,1,%d,%d,%f,",
                        &gps.valid_fix, &gps.sat, &gps.hdop);
            m_task->debug("Valid fix: %s | Sat: %d | Hdop: %.2f", gps.valid_fix ? "true" : "false",
                        gps.sat, gps.hdop);
            break;

          case '2':
            std::sscanf(gps_data_input, "$,g,2,%f,%f,%f,",
                        &gps.speed, &gps.course, &gps.altitude);
            m_task->debug("Speed: %.2f m/s | Course: %.2f º | Altitude: %.2f m",
                        gps.speed, gps.course, gps.altitude);
            break;

          case '3':
            std::sscanf(gps_data_input, "$,g,3,%f,%f,",
                        &gps.latitude, &gps.longitude);
            m_task->debug("Latitude: %f | Longitude: %f",
                        gps.latitude, gps.longitude);
            m_new_gps_data = true;
            break;

          default:
            break;
        }
      }
    };
  }
}

#endif