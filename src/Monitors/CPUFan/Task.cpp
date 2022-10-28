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
#include <string>
#include <ctime>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace CPUFan
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Pin of fan control
      int pin_fan;
      // Max temp
      double max_temp;
      // Min temp
      double min_temp;
      // Entity Label of temperature to read
      std::string temp_to_read;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! GPIOs.
      Hardware::GPIO* m_gpio_fan;
      //! Flag to control state of task
      bool m_is_active;
      //! Flag to control state of fan
      bool m_fan_on;
      //! Buffer forEntityState
      char m_bufer_entity[64];
      // Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_is_active(false),
        m_fan_on(false)
      {
        param("Fan PinOut", m_args.pin_fan)
          .defaultValue("23")
          .description("Fan PinOut");

        param("Max temperature", m_args.max_temp)
          .defaultValue("64")
          .description("Max temperature to turn fan on");

        param("Min temperature", m_args.min_temp)
          .defaultValue("54")
          .description("Min temperature to turn fan off");

        param("Entity Label - Temperature", m_args.temp_to_read)
          .defaultValue("Mainboard (Core)")
          .description("Entity Label - Temperature");

        bind<IMC::Temperature>(this);
      }

      void
      onResourceInitialization(void)
      {
        debug("Fan at pin %d", m_args.pin_fan);
        m_gpio_fan = new Hardware::GPIO(m_args.pin_fan);
        m_gpio_fan->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio_fan->setValue(0);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_is_active = true;
      }

      void
      onResourceRelease(void)
      {
        if(m_is_active)
        {
            m_gpio_fan->setValue(0);
            Memory::clear(m_gpio_fan);
        }
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (resolveEntity(msg->getSourceEntity()).c_str() != m_args.temp_to_read)
          return;

        debug("temp: %f %s %s", msg->value, resolveEntity(msg->getSourceEntity()).c_str(), m_args.temp_to_read.c_str());
        if(m_fan_on)
        {
          if(msg->value <= m_args.min_temp)
          {
            m_fan_on = false;
            m_gpio_fan->setValue(0);
            std::sprintf(m_bufer_entity, "F:OFF | V:%.1f | T:%.1f | D:%.1f", msg->value, m_args.max_temp, m_args.min_temp);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            std::sprintf(m_bufer_entity, "F:ON | V:%.1f | T:%.1f | D:%.1f", msg->value, m_args.max_temp, m_args.min_temp);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
        }
        else
        {
          if(msg->value > m_args.max_temp)
          {
            m_fan_on = true;
            m_gpio_fan->setValue(1);
            std::sprintf(m_bufer_entity, "F:ON | V:%.1f | T:%.1f | D:%.1f", msg->value, m_args.max_temp, m_args.min_temp);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
          else
          {
            std::sprintf(m_bufer_entity, "F:OFF | V:%.1f | T:%.1f | D:%.1f", msg->value, m_args.max_temp, m_args.min_temp);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
