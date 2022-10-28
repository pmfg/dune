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

#ifndef USER_INTERFACES_BAUX_DRIVER_HPP_INCLUDED_
#define USER_INTERFACES_BAUX_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
    namespace BAUX
    {
        using DUNE_NAMESPACES;

        class BAUXDriver
        {
        public:
            enum PowerStates
            {
                POWER_OFF = 0,
                POWER_ON = 1
            };

            enum LEDId
            {
                LED_RED = 0,
                LED_GREEN = 1,
                LED_BLUE = 2
            };

            BAUXDriver(DUNE::Tasks::Task *task, std::string device_uart, unsigned baud_uart)
            {
                m_task = task;
                m_device = device_uart;
                m_baud = baud_uart;
                m_is_switch_on = false;
                m_new_imu_data = false;
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

            ~BAUXDriver(void)
            {
                if (m_uart != NULL)
                {
                    m_poll.remove(*m_uart);
                    Memory::clear(m_uart);
                }
            }

            void
            setFlowOfIMUData(bool start_flow)
            {
                if (start_flow)
                    m_uart->writeString(buildCmdMsg("IMU,1").c_str());
                else
                    m_uart->writeString(buildCmdMsg("IMU,0").c_str());
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

                case LED_BLUE:
                    led_char = 'B';
                    break;

                default:
                    break;
                }
                std::sprintf(led_power_cmd, "LED,%c,%d", led_char, power_led_state);
                m_uart->writeString(buildCmdMsg(led_power_cmd).c_str());
            }

            void
            getFirmwareVersion(void)
            {
                m_uart->writeString(buildCmdMsg("FIRM").c_str());
            }

            bool
            isSwitchOn(void)
            {
                return m_is_switch_on;
            }

            bool
            newIMUData(void)
            {
                if(m_new_imu_data)
                {
                    m_new_imu_data = false;
                    return true;
                }
                return m_new_imu_data;
            }

            double
            getYaw(void)
            {
                return m_imu_data.yaw;
            }

            double
            getPitch(void)
            {
                return m_imu_data.pitch;
            }

            double
            getRoll(void)
            {
                return m_imu_data.roll;
            }

            double
            getAx(void)
            {
                return m_imu_data.ax;
            }

            double
            getAy(void)
            {
                return m_imu_data.ay;
            }

            double
            getAz(void)
            {
                return m_imu_data.az;
            }

            double
            getGx(void)
            {
                return m_imu_data.gx;
            }

            double
            getGy(void)
            {
                return m_imu_data.gy;
            }

            double
            getGz(void)
            {
                return m_imu_data.gz;
            }

            double
            getMx(void)
            {
                return m_imu_data.mx;
            }

            double
            getMy(void)
            {
                return m_imu_data.my;
            }

            double
            getMz(void)
            {
                return m_imu_data.mz;
            }

            double
            getIMUTemp(void)
            {
                return m_imu_data.temp;
            }

            void
            bauxMachine(void)
            {
                if (Poll::poll(*m_uart, 0.001))
                {
                    char bfrUart[512];
                    unsigned cnt_char = m_uart->readString(bfrUart, sizeof(bfrUart));
                    m_task->debug("Reply: %s(%d)", bfrUart, cnt_char);
                    if (csumOK(bfrUart))
                    {
                        if (std::strstr(bfrUart, "$FIRM,") != NULL)
                        {
                            char *vrs = std::strtok(bfrUart, ",");
                            vrs = std::strtok(NULL, ",");
                            m_task->inf("Firmware version: %s", vrs);
                        }
                        else if (std::strstr(bfrUart, "$IMU,") != NULL)
                        {
                            parseIMUData(bfrUart);
                        }
                        else if (std::strstr(bfrUart, "$SWITCH,") != NULL)
                        {
                            int switch_value;
                            std::sscanf(bfrUart, "$SWITCH,%d,*", &switch_value);
                            m_task->debug("Switch State: %d", switch_value);
                            if (switch_value == 0 || switch_value == 1)
                                m_is_switch_on = (bool)switch_value;
                        }
                    }
                    else
                    {
                        m_task->debug("Wrong csum");
                    }
                }
            }

        private:
            struct IMUData
            {
                double roll;
                double pitch;
                double yaw;
                double ax;
                double ay;
                double az;
                double gx;
                double gy;
                double gz;
                double mx;
                double my;
                double mz;
                double temp;
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
            //! Switch State
            bool m_is_switch_on;
            //! IMU Data
            IMUData m_imu_data;
            //! Flag to control new imu data
            bool m_new_imu_data;

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
                std::sprintf(text_data_build, "$%s,*", cmd.c_str());
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
            parseIMUData(char* imu_data_input)
            {
                // parse imu data
                //m_task->inf("%s", imu_data_input);
                std::sscanf(imu_data_input, "$IMU,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,*%*s", 
                            &m_imu_data.yaw, &m_imu_data.pitch, &m_imu_data.roll,
                            &m_imu_data.ax, &m_imu_data.ay, &m_imu_data.az,
                            &m_imu_data.gx, &m_imu_data.gy, &m_imu_data.gz,
                            &m_imu_data.mx, &m_imu_data.my, &m_imu_data.mz,
                            &m_imu_data.temp);
                
                m_imu_data.yaw = Angles::radians(m_imu_data.yaw);
                m_imu_data.pitch = Angles::radians(m_imu_data.pitch);
                m_imu_data.roll = Angles::radians(m_imu_data.roll);

                m_imu_data.ax = Math::c_gravity * (m_imu_data.ax * 1000.0);
                m_imu_data.ay = Math::c_gravity * (m_imu_data.ay * 1000.0) * -1;
                m_imu_data.az = Math::c_gravity * (m_imu_data.az * 1000.0) * -1;

                m_imu_data.gx = Angles::radians(m_imu_data.gx);
                m_imu_data.gy = Angles::radians(m_imu_data.gy);
                m_imu_data.gz = Angles::radians(m_imu_data.gz);

                m_imu_data.mx = Angles::radians(m_imu_data.mx * 1000.0);
                m_imu_data.my = Angles::radians(m_imu_data.my * 1000.0);
                m_imu_data.mz = Angles::radians(m_imu_data.mz * 1000.0);

                m_task->debug("YAW: %f | PITCH: %f | ROLL: %f", m_imu_data.yaw, m_imu_data.pitch, m_imu_data.roll);
                m_task->debug("AX: %f | AY: %f | AZ: %f", m_imu_data.ax, m_imu_data.ay, m_imu_data.az);
                m_task->debug("GX: %f | GY: %f | GZ: %f", m_imu_data.gx, m_imu_data.gy, m_imu_data.gz);
                m_task->debug("MX: %f | MY: %f | MZ: %f", m_imu_data.mx, m_imu_data.my, m_imu_data.mz);
                m_task->debug("IMU TEMP: %f", m_imu_data.temp);
                m_new_imu_data = true;
            }
        };
    }
}

#endif
