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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "IrFragments.hpp"

namespace Monitors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Payload
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Payload timeout.
      double timeout;
      //! List of messages to send.
      std::vector<std::string> msgs;
      //! Maximum iridium message size.
      size_t max_payload;
      //! Iridium messages destination.
      std::string destination;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Watchdog for sending payload messages.
      Counter<double> m_send_wdog;
      //! List of messages to send.
      std::list<const IMC::Message*> m_msgs;
      //! Request identifier.
      uint16_t m_req_id;
      //! Transmission fragment id.
      uint8_t m_transmission_id;
      //! Map with messages waiting for send ack.
      std::map<uint16_t, const IMC::Message*> m_ack_map;
      //! Iridium fragment message map.
      std::map<uint16_t, IrFragment*> m_ir_map;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_req_id(0)
      {
        param("Payload timeout", m_args.timeout)
          .defaultValue("60.0")
          .description("Payload timeout in seconds.");

        param("Messages list", m_args.msgs)
          .defaultValue("")
          .description("List of messages to send using Iridium.");

        param("Maximum iridium payload size", m_args.max_payload)
          .defaultValue("259")
          .description("Maximum size of iridium payload messages in bytes.");

        param("Destination", m_args.destination)
          .defaultValue("caravel")
          .description("Destination for iridium messages.");

        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::IridiumMsgRx>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_send_wdog.setTop(m_args.timeout);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        for (auto&& i : m_args.msgs)
        {
          debug("Registering message %s", i.c_str());
        }

        // Register normal messages.
        bind(this, m_args.msgs);

        m_send_wdog.setTop(m_args.timeout);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      { }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      consume(const IMC::Message* msg)
      {
        debug("pushing message %s", msg->getName());
        m_msgs.push_back(msg->clone());
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        if (msg->getDestination() != getSystemId() && msg->getDestinationEntity() != getEntityId())
          return;

        if (m_ack_map.find(msg->req_id) == m_ack_map.end())
          return;

        switch (msg->status)
        {
          case IMC::IridiumTxStatus::TXSTATUS_OK:
          {
            spew("Received ack for message %d", msg->req_id);
            const Message*& sent = m_ack_map[msg->req_id];

            Memory::clear(sent);
            m_ack_map.erase(msg->req_id);
          }
          break;

          case IMC::IridiumTxStatus::TXSTATUS_EXPIRED:
          {
            spew("received expired ack for message %d", msg->req_id);
            Message* sent = const_cast<Message*>(m_ack_map[msg->req_id]);
            dispatch(sent);
          }
          break;

          default:
            break;
        }
      }

      //! Split buffer into chunks.
      //! @param[in] bfr buffer to split.
      //! @param[in] bfr_size buffer size.
      //! @param[in] chunk_size size of each chunk.
      //! @param[out] chunks vector of chunks.
      void
      sliptBuffer(const uint8_t* bfr, size_t bfr_size, size_t chunk_size,
                  std::vector<std::vector<char>>& chunks)
      {
        for (size_t offset = 0; offset < bfr_size; offset += chunk_size)
        {
          size_t size = std::min(bfr_size - offset, chunk_size);

          const uint8_t* iter = bfr + offset;
          std::vector<char> chunk(iter, iter + size);

          chunks.push_back(chunk);
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IrFragment* ir_msg = nullptr;
        try
        {
          uint8_t* bfr = (uint8_t*)msg->data.data();
          uint16_t bfr_len = msg->data.size();

          debug("received message with %d bytes", bfr_len);
          ir_msg = deserializeFragment(bfr, bfr_len);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
          return;
        }

        debug("Received fragment %d/%d", ir_msg->hdr.frag_id, ir_msg->hdr.num_frags);
        if (ir_msg->hdr.frag_id == 0)
          debug("imc id %d", ir_msg->imc_id);

        if (m_ir_map.find(ir_msg->hdr.trans_id) == m_ir_map.end())
        {
          m_ir_map[ir_msg->hdr.trans_id] = ir_msg;
          debug("new msg for transmission %d", ir_msg->hdr.trans_id);
          return;
        }

        IMC::Message* imc_msg = m_ir_map[ir_msg->hdr.trans_id]->merge(ir_msg);
        if (imc_msg == nullptr)
        {
          IrFragment* data = m_ir_map[ir_msg->hdr.trans_id];
          for (auto& iter : data->frag_map)
            debug("message has fragment %d", iter.first);

          return;
        }

        inf("received message as fragments %s", imc_msg->getName());
        dispatch(imc_msg);
        Memory::clear(imc_msg);
        m_ir_map.erase(ir_msg->hdr.trans_id);
      }

      /**
       * Message layout
       *
       * *** Iridium Header ***
       * src_id: 2 bytes
       * dst_id: 2 bytes
       * iridium_id: 2 bytes -> 2012
       * *** Fragment Message ***
       * transmission_id: 1 byte
       * n_fragments: 1 byte
       * fragment_id: 1 byte
       * fragment_data: n bytes
       * *In fragment data first two bytes are for msg_id: 2 bytes
       * checksum: 2 byte (do not fill, calculated by IridiumSDB)
       */
      //! Send message as fragments.
      void
      sendFragments(const IMC::Message* msg)
      {
        uint16_t src_id = 1234;
        uint16_t dst_id = 4567;
        uint16_t iridium_id = ID_FRAGMENT;  //? New iridium message id.

        //* Serialize IMC message
        uint16_t msg_id = msg->getId();
        uint8_t bfr[4096];
        uint16_t offset = IMC::serialize(msg_id, bfr);

        msg->serializeFields(bfr + offset);
        unsigned size = msg->getPayloadSerializationSize();
        std::vector<std::vector<char>> chunks;

        sliptBuffer(bfr, size + 2, m_args.max_payload, chunks);
        uint8_t n_fragments = chunks.size();

        //! Checksum is calculated by IridiumSDB.
        //! Do not send in data.
        IMC::IridiumMsgTx ir_tx;
        ir_tx.setDestination(getSystemId());
        ir_tx.destination = m_args.destination;
        ir_tx.ttl = 60;

        ir_tx.data.reserve(11 + m_args.max_payload);

        // Iridium Header
        ir_tx.data.push_back(src_id);
        ir_tx.data.push_back(src_id >> 8);

        ir_tx.data.push_back(dst_id);
        ir_tx.data.push_back(dst_id >> 8);

        ir_tx.data.push_back(iridium_id);
        ir_tx.data.push_back(iridium_id >> 8);

        // Fragment message
        ir_tx.data.push_back(m_transmission_id++);
        ir_tx.data.push_back(n_fragments);

        // Save common data
        std::vector<char> header_data = ir_tx.data;
        uint8_t fragment_id = 0;

        debug("Sending message %s as %ld fragments", msg->getName(), chunks.size());
        for (auto& chunk : chunks)
        {
          ir_tx.req_id = m_req_id++;

          ir_tx.data.push_back(fragment_id++);
          ir_tx.data.insert(ir_tx.data.end(), chunk.begin(), chunk.end());

          spew("sending fragment %d", fragment_id - 1);
          dispatchRequest(ir_tx, ir_tx.req_id);

          ir_tx.data.clear();
          ir_tx.data = header_data;
        }
      }

      //! Send message as inline request.
      void
      sendInline(const IMC::Message* msg)
      {
        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());

        tr.req_id = m_req_id++;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.deadline = Clock::getSinceEpoch() + m_args.timeout * 60;
        tr.msg_data.set(*msg);

        dispatchRequest(tr, tr.req_id);
        debug("Sent message %s", msg->getName());
      }

      //! Send payload messages in buffer.
      //! @return true if messages were sent, false otherwise.
      bool
      sendPayloadMessages(void)
      {
        if (m_msgs.empty())
          return false;

        debug("Sending payload messages %lu", m_msgs.size());

        for (const Message* msg : m_msgs)
        {
          // Check if message needs to be fragmented.
          if (msg->getPayloadSerializationSize() > m_args.max_payload)
            sendFragments(msg);
          else
            sendInline(msg);

          Memory::clear(msg);
        }

        m_msgs.clear();
        return true;
      }

      void
      dispatchRequest(IMC::Message& msg, uint16_t id)
      {
        msg.setDestination(getSystemId());
        m_ack_map[id] = msg.clone();
        dispatch(msg);
      }

      //! Main loop.
      void
      onMain(void)
      {
        debug("Starting payload task %d", getEntityId());
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_send_wdog.overflow())
          {
            // Reset watchdog if at least one message was sent.
            if (sendPayloadMessages())
              m_send_wdog.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK