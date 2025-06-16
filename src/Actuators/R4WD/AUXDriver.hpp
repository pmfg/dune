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
#include "AuxCommands.hpp"

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
        m_new_all_data = false;
        m_first_read = true;
        m_speed.motor_1 = 0;
        m_speed.motor_2 = 1;
        m_pressure = 0;
        m_altitude = 0;
        m_local_temp = 0;
        m_is_switch_on = false;
        m_get_firmware_version = false;
        m_heading = 0;
        m_lidar_dist = 0;
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
      askAllData(void)
      {
        char cmd[64];
        std::sprintf(cmd, "%c,%c%c", BYTE_PREAMBLE, BYTE_SEND_ALL_DATA, '\0');
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
      newAllData(void)
      {
        return m_new_all_data;
      }

      void
      clearNewAllDataFlag(void)
      {
        m_new_all_data = false;
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
              m_get_firmware_version = true;
              IMC::VersionInfo vi;
              vi.version = vrs;
              vi.op = IMC::VersionInfo::OP_REPLY;
              m_task->dispatch(vi);
            }
            else if (std::strstr(bfrUart, "$,i,E,") != NULL)
            {
              m_task->war("INA in error, no data power from INA");
            }
            else if (std::strstr(bfrUart, "$,D,") != NULL)
            {
              parseAllData(bfrUart);
            }
            else if (std::strstr(bfrUart, "$,p,") != NULL)
            {
              m_is_switch_on = true;
            }
          }
          else
          {
            m_task->inf("Wrong csum %s", bfrUart);
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
      getPressureBMP(void)
      {
        return m_pressure;
      }

      float
      getAltitudeBMP(void)
      {
        return m_altitude;
      }

      float
      getLocalTemperatureBMP(void)
      {
        return m_local_temp;
      }

      bool
      haveFirmwareName(void)
      {
        return m_get_firmware_version;
      }

      float
      getDistanceLidar(void)
      {
        return m_lidar_dist/100.0;
      }

      int
      getHeading(void)
      {
        return m_heading;
      }

      struct GPSData gps;

    private:
      struct INAData
      {
        float voltage;
        float current;
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
      //! Switch State
      bool m_is_switch_on;
      //! Pressure
      float m_pressure;
      //! Altitude
      float m_altitude;
      //! Local Temperature
      float m_local_temp;
      //! Flag to control new data payload from
      bool m_new_all_data;
      //! Flag to control firmware name
      bool m_get_firmware_version;
      //! Heading (AHRS)
      int m_heading;
      //! Distance from Lidar
      int m_lidar_dist;

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
        return result | 0x80;
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
      parseAllData(char *ina_data_input)
      {
        std::sscanf(ina_data_input, "$,D,%d,%d,%d,%d,%d,%d,%d,%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d,%f,%f,%f,%f,%f,%f,*%*s",
          &gps.year, &gps.month, &gps.day, &gps.hour, &gps.minute, &gps.second,
          &gps.valid_fix, &gps.sat, &gps.hdop, &gps.speed, &gps.course, &gps.altitude,
          &gps.latitude, &gps.longitude,
          &m_local_temp, &m_pressure, &m_altitude,
          &m_heading, &m_lidar_dist,
          &m_ina_data[0].voltage, &m_ina_data[0].current,
          &m_ina_data[1].voltage, &m_ina_data[1].current,
          &m_ina_data[2].voltage, &m_ina_data[2].current);

        m_new_all_data = true;

        m_task->trace("Channel 1: %.3fV | %.3fA", m_ina_data[0].voltage, m_ina_data[0].current);
        m_task->trace("Channel 2: %.3fV | %.3fA", m_ina_data[1].voltage, m_ina_data[1].current);
        m_task->trace("Channel 3: %.3fV | %.3fA", m_ina_data[2].voltage, m_ina_data[2].current);
        m_task->trace("%04d-%02d-%02d | %02d:%02d:%02d", gps.year, gps.month, gps.day, gps.hour, gps.minute, gps.second);
        m_task->trace("Valid fix: %s | Sat: %d | Hdop: %.2f", gps.valid_fix ? "true" : "false", gps.sat, gps.hdop);
        m_task->trace("Speed: %.2f m/s | Course: %.2f º | Altitude: %.2f m", gps.speed, gps.course, gps.altitude);
        m_task->trace("Latitude: %f | Longitude: %f", gps.latitude, gps.longitude);
        m_task->trace("Local Temperature: %.2f ºC | Pressure: %.2f hPa | Altitude: %.2f m", m_local_temp, m_pressure, m_altitude);
        m_task->trace("Heading: %d | Lidar Distance: %d", m_heading, m_lidar_dist);
      }
    };
  }
}

#endif