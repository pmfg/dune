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

#ifndef USER_INTERFACES_LED_MACHINE_HPP_INCLUDED_
#define USER_INTERFACES_LED_MACHINE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "boardDriver.hpp"

namespace Actuators
{
    namespace R4WD
    {
        using DUNE_NAMESPACES;

        class LedMachine
        {
        public:
            enum LedSates
            {
                LED_STATE_NORMAL,
                LED_STATE_ERROR,
                LED_STATE_POWEROFF,
                LED_STATE_NO_FIX,
                LED_STATE_MANEUVER,
                LED_STATE_CALIBRATION,
                LED_STATE_PLAN_EXECUTION,
                LED_STATE_BOOT
            };

            LedMachine(AUXDriver *aux)
            {
                m_aux = aux;
                m_wdog.setTop(0.001);
                m_wdog.reset();
                m_counter_state = 0;
                m_led_state = LED_STATE_BOOT;
                m_last_led_state = LED_STATE_BOOT;
                m_fix_state = LED_STATE_NO_FIX;
            }

            ~LedMachine(void)
            {
            }

            void
            ledStateUpdate(void)
            {
                switch (m_led_state)
                {
                case LED_STATE_BOOT:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_ON);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.2);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.2);
                            m_counter_state++;
                            break;

                        case 2:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(1.0);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;

                case LED_STATE_ERROR:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_ON);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.150);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.150);
                            m_counter_state++;
                            break;

                        case 2:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_ON);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.550);
                            m_counter_state++;
                            break;

                        case 3:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.550);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;

                case LED_STATE_POWEROFF:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_ON);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.5);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.5);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;

                case LED_STATE_NO_FIX:
                case LED_STATE_NORMAL:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.500);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            if(m_fix_state == LED_STATE_NORMAL)
                                m_wdog.setTop(2.0);
                            else
                                m_wdog.setTop(0.5);
                            m_counter_state++;
                            break;

                        case 2:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.500);
                            m_counter_state++;
                            break;

                        case 3:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            if(m_fix_state == LED_STATE_NORMAL)
                                m_wdog.setTop(3.0);
                            else
                                m_wdog.setTop(1.0);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;

                case LED_STATE_MANEUVER:
                case LED_STATE_PLAN_EXECUTION:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_ON);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_OFF);
                            m_wdog.setTop(0.5);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.5);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;

                    case LED_STATE_CALIBRATION:
                    if (m_wdog.overflow())
                    {
                        switch (m_counter_state)
                        {
                        case 0:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.150);
                            m_counter_state++;
                            break;

                        case 1:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.150);
                            m_counter_state++;
                            break;

                        case 2:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.550);
                            m_counter_state++;
                            break;

                        case 3:
                            m_aux->setLed(AUXDriver::LED_RED, AUXDriver::POWER_OFF);
                            m_aux->setLed(AUXDriver::LED_GREEN, AUXDriver::POWER_ON);
                            m_wdog.setTop(0.550);
                            m_counter_state = 0;
                            break;

                        default:
                            m_counter_state = 0;
                            break;
                        }
                    }
                    break;


                default:
                    break;
                }
            }

            void
            turnLedOn(uint8_t led_id)
            {
                m_aux->setLed(led_id, true);
            }

            void
            turnLedOff(uint8_t led_id)
            {
                m_aux->setLed(led_id, false);
            }

            void
            setState(uint8_t state)
            {
                if(m_last_led_state != state)
                {
                    m_led_state = state;
                    m_last_led_state = state;
                    m_counter_state = 0;
                    m_wdog.setTop(0.001);
                }
            }

            void
            setGPSFixState(bool state_of_gps_fix)
            {
                if(state_of_gps_fix)
                    m_fix_state = LED_STATE_NORMAL;
                else
                    m_fix_state = LED_STATE_NO_FIX;
            }

            uint8_t
            getLedState(void)
            {
                return m_led_state;
            }

        private:
            //! GPIO Objects
            AUXDriver *m_aux;
            //! Watchdog.
            Counter<double> m_wdog;
            //! Led state
            uint8_t m_led_state;
            //! Counter state of led state
            uint8_t m_counter_state;
            //! Save last led state
            uint8_t m_last_led_state;
            //! Control state og GPSFix
            uint8_t m_fix_state;
        };
    }
}

#endif