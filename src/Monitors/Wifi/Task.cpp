//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
#include <cstdlib>
#include <ctime>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Wifi
  {
    using DUNE_NAMESPACES;

    static const float c_time_to_check_rssi = 1.0f; // Time to check RSSI in seconds

    struct Arguments
    {
      // Interface name for the wifi connection.
      std::string interface_name;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Task Arguments.
      Arguments m_args;
      // Watchdog for the task.
      Time::Counter<float> m_watchdog;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Interface Name", m_args.interface_name)
          .defaultValue("wlan0")
          .description("Interface Name");
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_watchdog.setTop(c_time_to_check_rssi);
      }

      void
      onResourceRelease(void)
      { }

      bool
      isWifiConnected()
      {
        // Try to check if Wi-Fi is active using the 'iw dev wlan0 link' command
        //FILE* fp = popen("iw dev wlan0 link", "r");
        FILE* fp = popen(("iw dev " + m_args.interface_name + " link").c_str(), "r");
        if (fp == NULL)
        {
          war("Error opening iw command!");
          war("Make sure 'iw' command is installed and the interface name is correct.");
          war("Failed to open iw command for interface: %s", m_args.interface_name.c_str());
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IO_ERROR);
          return false;
        }

        char buffer[256];
        bool is_connected = false;

        while (std::fgets(buffer, sizeof(buffer), fp))
        {
          if (std::strstr(buffer, "Connected to") != NULL)
          {
            is_connected = true;
            break;
          }
        }

        std::fclose(fp);
        return is_connected;
      }

      int
      getRssi()
      {
        // Use the 'iw dev <interface_name> link' command
        FILE* fp = popen(("iw dev " + m_args.interface_name + " link").c_str(), "r");
        if (fp == NULL)
        {
          war("Error opening iw command!");
          war("Make sure 'iw' command is installed and the interface name is correct.");
          war("Failed to open iw command for interface: %s", m_args.interface_name.c_str());
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IO_ERROR);
          return -1;
        }

        char buffer[256];
        int rssi = 0;

        while (std::fgets(buffer, sizeof(buffer), fp))
        {
          // Check if 'signal:' exists in the buffer
          if (std::strstr(buffer, "signal:") != NULL)
          {
            // Look for 'signal: ' and then extract the integer value after it
            std::string line(buffer);
            size_t pos = line.find("signal:");
            if (pos != std::string::npos)
            {
              // Extract the value after 'signal:'
              std::string rssi_str = line.substr(pos + 7);  // Skip "signal: " (7 characters)
              try
              {
                rssi = std::stoi(rssi_str);  // Convert string to integer
              }
              catch (const std::invalid_argument& e)
              {
                war("Error parsing RSSI value: %s", e.what());
                rssi = 0;  // Default to 0 if parsing fails
              }
            }
            break;  // Exit the loop after finding the signal
          }
        }

        fclose(fp);
        return rssi;
      }

      int
      rssiToPercentage(int rssi)
      {
        // Convert RSSI value to percentage
        // Adjust according to your experience with signal:
        // -50 dBm is excellent signal, -100 dBm is weak or no signal
        int max_rssi = -50;   // Maximum good RSSI value
        int min_rssi = -100;  // Minimum RSSI value (no signal)

        if (rssi == 0)
        {
          return 0;
        }

        int percentage = ((rssi - min_rssi) * 100) / (max_rssi - min_rssi);
        return (percentage < 0) ? 0 : (percentage > 100 ? 100 : percentage);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          Time::Delay::waitMsec(100);
          if(m_watchdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_watchdog.reset();
            trace("Checking Wi-Fi connection and RSSI...");
            // Check if Wi-Fi is connected
            if (!isWifiConnected())
            {
              war("Wi-Fi is not connected (%s).", m_args.interface_name.c_str());
              continue;
            }
            // Get the RSSI value
            int rssi = getRssi();
            if (rssi == -1)
            {
              war("Error getting the RSSI value.");
              continue;
            }
            // Dispatch the RSSI message
            IMC::RSSI rssi_msg;
            rssi_msg.value = rssiToPercentage(rssi);
            trace("RSSI: %d dBm (%d%%)", rssi, (int)rssi_msg.value);
            dispatch(rssi_msg);
          }
        }
      }
    };
  }
}

DUNE_TASK
