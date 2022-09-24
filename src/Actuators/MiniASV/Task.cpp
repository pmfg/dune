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
// Author: Pedro Gonçalves                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Actuators
{
  namespace MiniASV
  {
    using DUNE_NAMESPACES;

    /*struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Rpm entity labels
      std::string motor_elabels[c_max_motors];
      //! Internal conversion factors RPM
      double ifactor_rpm[c_max_motors];
      //! Internal conversion factors TEMPERATURE
      int ifactor_orientation[c_max_motors];
      //! Motor state
      bool motor_state[c_max_motors];
    };*/

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      //Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        bind<IMC::SetThrusterActuation>(this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Consume message IMC::SetThrusterActuation
      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        inf("SetThrusterActuation: motor_id: %d | speed: %f", msg->id, msg->value);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);
        }
      }
    };
  }
}

DUNE_TASK
