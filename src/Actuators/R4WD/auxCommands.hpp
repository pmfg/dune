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

#ifndef USER_INTERFACES_AUX_COMMAND_HPP_INCLUDED_
#define USER_INTERFACES_AUX_COMMAND_HPP_INCLUDED_

#define BYTE_PREAMBLE         '$'
#define BYTE_TERMINATOR       '*'
#define BYTE_ACK              'A'
#define BYTE_NACK             'N'
#define BYTE_ERRO             'E'
#define BYTE_VERSION          'v'
#define BYTE_SET_SPEED        's'
#define BYTE_GPS_DATA         'g'
#define BYTE_INA_DATA         'i'
#define BYTE_RESET            'R'
#define BYTE_DISTANCE         'd'
#define BYTE_LED              'L'
#define BYTE_POWEROFF         'p'
#define BYTE_BMP              'B'

#endif