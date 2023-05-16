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

// ISO C++ 98 headers.
#include <queue>
#include <cstring>
#include <string>
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! This task is responsible to monitor RPi system CPU.
  //!
  //! @author Pedro Gonçalves
  namespace CPURpi
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Set CPU in powersave.
      bool is_power_save;
      // Entity Label of temperature to read
      std::string temp_to_read;
    };

    //! %Medium task.
    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! CPU temperature
      float m_temperature;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("Set CPU in PowerSave", m_args.is_power_save)
        .units(Units::Second)
        .defaultValue("true")
        .description("Set CPU in PowerSave");

        param("Entity Label - Temperature", m_args.temp_to_read)
          .defaultValue("Mainboard (Core)")
          .description("Entity Label - Temperature");

        bind<IMC::Temperature>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        if(setCpuGovernor(m_args.is_power_save) < 0)
          throw RestartNeeded("Cannot set cpu governor", 10);
        int cpu_max = getValueFromFileSystem("cat /sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq")/1000;
        int cpu_min = getValueFromFileSystem("cat /sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq")/1000;
        inf("CPU Speed: Max: %d MHz | Min: %d MHz", cpu_max, cpu_min);
      }

      void
      consume(const IMC::Temperature* msg)
      {
        std::string sysName = resolveSystemId(msg->getSource());
        if(sysName != getSystemName())
          return;

        if (resolveEntity(msg->getSourceEntity()).c_str() != m_args.temp_to_read)
          return;

        m_temperature = msg->value;
        debug("Temp value: %.2f", m_temperature);
      }

      int
      setCpuGovernor(bool is_powersave)
      {
        char buffer[16];
        char governor[16];
        std::string result = "";
        FILE* pipe;
        if ((pipe = popen("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", "r")) == NULL)
        {
          war("popen() failed - set_cpu_governor!");
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
        }
        else
        {
          std::memset(&buffer, '\0', sizeof(buffer));
          try
          {
            while (!std::feof(pipe))
            {
              if (std::fgets(buffer, sizeof(buffer), pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            std::fclose(pipe);
            throw;
          }
          std::fclose(pipe);
          std::sscanf(buffer, "%s", governor);
          if(is_powersave)
          {
            if( std::strcmp(governor, "powersave") == 0)
            {
              inf("CPU governor is already powersave");
              return 0;
            }
            else
            {
              war("CPU governor is not in ondemand, setting to powersave");
              return std::system("echo powersave > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
            }
          }
          else
          {
            if( std::strcmp(governor, "ondemand") == 0)
            {
              inf("CPU governor is already ondemand");
              return 0;
            }
            else
            {
              war("CPU governor is not in ondemand, setting to ondemand");
              return std::system("echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
            }
          }
        }

        return -1;
      }

      float
      getValueFromFileSystem(std::string file_path)
      {
        char buffer[16];
        float file_value = 0;
        std::string result = "";
        FILE* pipe;
        if ((pipe = popen(file_path.c_str(), "r")) == NULL)
        {
          war("popen() failed - %s", file_path.c_str());
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          return 0;
        }
        else
        {
          std::memset(&buffer, '\0', sizeof(buffer));
          try
          {
            while (!std::feof(pipe))
            {
              if (std::fgets(buffer, sizeof(buffer), pipe) != NULL)
                result += buffer;
            }
          }
          catch (...)
          {
            std::fclose(pipe);
            throw;
          }
          std::fclose(pipe);
          std::sscanf(buffer, "%f", &file_value);
          debug("File value: %f", file_value);
          return file_value;
        }
        return 0;
      }

      void
      getCpuSpeed(void)
      {
        int cpu_speed = getValueFromFileSystem("cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq")/1000;
        debug("CPU Speed: %d MHz", cpu_speed);
        char bufer_entity[64];
        char gov_mode;
        if(m_args.is_power_save)
          gov_mode = 'P';
        else
          gov_mode = 'O';
        std::sprintf(bufer_entity, "active | G:%c | S:%dMHz | T:%.1fºC", gov_mode, cpu_speed, m_temperature);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(bufer_entity)));
      }

      void
      task(void)
      {
        getCpuSpeed();
      }
    };
  }
}

DUNE_TASK
