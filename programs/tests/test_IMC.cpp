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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 632c16735daa602e06940c5c0e124ccb                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.9313511227851416);
    msg.setSource(52974U);
    msg.setSourceEntity(229U);
    msg.setDestination(36799U);
    msg.setDestinationEntity(43U);
    msg.state = 135U;
    msg.flags = 227U;
    msg.description.assign("GCXQFPQROJPITMCFRKULSKDIEYICNFEALHWQLMVOSKFPTLQOLAWJURUIJFWAWTQWIAGDECCTUYSNOUQIDZLZKAJANBWMLSGTOKHBRDWFWYHEBNTZVHOCVJLVUIDENFGIRLAXGNECNQAYYUXZSQGGMZFCPEZSVCXMRWNMBZKBHJYXHCOURPZPDQRJLZJJTXPHRYDTIFXDMHAUBYNVPMYKEZVXXHKVYORMPMBSGVFAUJDSXOENBWKBVITKDGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.9483238664380276);
    msg.setSource(31818U);
    msg.setSourceEntity(231U);
    msg.setDestination(9617U);
    msg.setDestinationEntity(128U);
    msg.state = 26U;
    msg.flags = 209U;
    msg.description.assign("EZUYDLDRDMKXDZQILMRMLIZIDVVNZWKLXKXVETRMQQQBVYUNHUXVIQWHDISFFBRFVLBVCEQWMLRHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6250136452273813);
    msg.setSource(14647U);
    msg.setSourceEntity(181U);
    msg.setDestination(41441U);
    msg.setDestinationEntity(189U);
    msg.state = 150U;
    msg.flags = 19U;
    msg.description.assign("EPHQMNHUJSVLCLVXSBCIUVGHSXTTSNYPHEASHKXAXRRMFNRMFXKYZAMHUIUYELAPSJSLKDTGYNWDFYMEADGUPTOBZIKHFMDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.0014223802140223007);
    msg.setSource(42141U);
    msg.setSourceEntity(9U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(202U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.5261474524570872);
    msg.setSource(12427U);
    msg.setSourceEntity(31U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.7241432164615037);
    msg.setSource(9959U);
    msg.setSourceEntity(222U);
    msg.setDestination(59601U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.039772340213725);
    msg.setSource(1032U);
    msg.setSourceEntity(179U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(89U);
    msg.id = 39U;
    msg.label.assign("DYZBQNIQGQTEUUUIBQDYQCSAWEJNJPKUKIQFHLAROSWZGCMVNRYHLIBFOFXPTJQGFWJBFNXIARYBLJKDOIXQXWTHUAQSLKTGWBDVETPNMTNXEZFJZWXALZMUUWKSFYHOSEJAFVUDZKZWCYIODLTDLYGXCPEEBXEXKCZVNMHCFDICCLZVMNK");
    msg.component.assign("MKFIWWOFQLQLYQCPWUAIIZNJDMXUAQGVRRCOIBDQUOETGAMXCNZEQRDAUYEXMZPBNQQXJZPVKTLMGLPYATLPLJHHYYIINRVYRXEFUTKSVTBQWBWDKVBHXIFSVOJUCRZKKGCMJKHSTFKAGMJZSGLGEZXCLGNRLBRUYCIJX");
    msg.act_time = 30832U;
    msg.deact_time = 59128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.715121625061552);
    msg.setSource(10322U);
    msg.setSourceEntity(93U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(150U);
    msg.id = 21U;
    msg.label.assign("ONTURAVTCIYCWQWMZW");
    msg.component.assign("MBKJXXGIESREJGMJHATUDSBZKHYSFABWUHUYRGXNHRUSDXZCLBRUQXZPHHWLIJOZZTWRHWDFAKXQCWEJBETKLVGZLJOUZQLCGLCKKEDQNMYTIWEFFJCIPAJWXTWEUIZOLQTRVQAISDJGKAVPANIWNVORLBEONVHONRCES");
    msg.act_time = 11452U;
    msg.deact_time = 56297U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.4361646482402748);
    msg.setSource(42842U);
    msg.setSourceEntity(22U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(181U);
    msg.id = 28U;
    msg.label.assign("XVDHQDSFXHMBVSLKUPVLCAZXNBBSRQPNRTGOXRUZPVZTSTMPYCWZEEAEDJILCQPNSNCMTMHWEIPQBIOHOWZSHYJFGTMJTXPJPYUTBEQDFUKNFBLZZGHVJHYGANUMASOIFJPBOIZQZXFVCCWFXSTDDCKVDGWYVHWRAUWSQGFJLHIJLOOLMWCYFOERUDB");
    msg.component.assign("USMNNFSDBOWDXRBFKVOEGLQVVETRKPTGUDOLUHKKJTIETMZIWNEDWQZ");
    msg.act_time = 38389U;
    msg.deact_time = 31829U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.514207897714202);
    msg.setSource(52555U);
    msg.setSourceEntity(122U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(65U);
    msg.id = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.20685715090677637);
    msg.setSource(26009U);
    msg.setSourceEntity(42U);
    msg.setDestination(55229U);
    msg.setDestinationEntity(78U);
    msg.id = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.08800334805924992);
    msg.setSource(13425U);
    msg.setSourceEntity(138U);
    msg.setDestination(16158U);
    msg.setDestinationEntity(175U);
    msg.id = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.2682240199744461);
    msg.setSource(25032U);
    msg.setSourceEntity(177U);
    msg.setDestination(43184U);
    msg.setDestinationEntity(253U);
    msg.op = 8U;
    msg.list.assign("AJIYSSSOXGIREACNIQKUUWFNTEYWNQVIRRCMCWFSOYRFYZYKHQHDKIPQIQFHDAXWODVGLQLWWCYSLBTVZTJJVWMEBAEWRDCWBDLLPUTUXVOEILFCLGLRJAHFTJUKTXMAUGXKDSLDRRNUOJJHKZKPBRXBNNKEAMVPBYNUXHOKUQPOOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.25519974723695305);
    msg.setSource(57657U);
    msg.setSourceEntity(6U);
    msg.setDestination(11885U);
    msg.setDestinationEntity(84U);
    msg.op = 104U;
    msg.list.assign("ZUNDUWSOWWPLZCBLXKTFVOULWVGJAIQMATARBKJNISVQMHKDBPHWQUMEBRFKCWRIXVLNZJOXMBMAEDJAILZPTYEVGYJPOXKOIYZFIWCXZIPHNRDVIBSYDKQSAQOFABMOWOBAMNELBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.09591493241844762);
    msg.setSource(45154U);
    msg.setSourceEntity(66U);
    msg.setDestination(36201U);
    msg.setDestinationEntity(224U);
    msg.op = 214U;
    msg.list.assign("DGLDYFHCULYBMPPBZUVZQKHQCEJMJEQPEOMKRIKVTIGUIOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.6669074368452699);
    msg.setSource(48508U);
    msg.setSourceEntity(43U);
    msg.setDestination(20497U);
    msg.setDestinationEntity(178U);
    msg.value = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.379668891485312);
    msg.setSource(62987U);
    msg.setSourceEntity(4U);
    msg.setDestination(845U);
    msg.setDestinationEntity(71U);
    msg.value = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.18948738663515163);
    msg.setSource(23286U);
    msg.setSourceEntity(115U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(13U);
    msg.value = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.8261616169830533);
    msg.setSource(33231U);
    msg.setSourceEntity(181U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("CFLSAFRWNCVGMSOYGNEVSIOXXBXILUOVCCNQLTERSGGURNHTGDFHHKZKAWKRQCXJIJNLMFITBZYZZWDWWZYOOVDPUPQLBUKFIVFFZGPWNLQYJUUANATRMPUMMFGCHQLPIJGVVTPRDADKXRPGEQJXKSPKZHTYOBVHECOWXPRSTFKSYEAUIECXNBLGBYAJCHBQFDIIZQTCTTXJMRSDJLDMSEZAKNUDVEWQAWKHEOYAEMYHOBRINDZLVSMM");
    msg.message_id = 29425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.9002217065602818);
    msg.setSource(34593U);
    msg.setSourceEntity(75U);
    msg.setDestination(39461U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("VZMWOANGPYCXMQIYZTIDAFDZZBGLOQJBVJHOLWTQLWHPTCGRZBTKIIWWHUDGTAUIPJXUJEYULFSSNDIJENVCHAUFPKENKDRVUXSGBQYBLFVHIRNPEQKKHTAMFRRMHJMQZDCLOECQNFJITNVBRKWVKQRBPELPOEGHZNGSLKJWYJWWXVGSYHRMUMXXDOXBRVOFTPFJKFNMBTCYHSCGNMQEKBAECSMRXUYPASVDQXOGOFSLPWOELTUADII");
    msg.message_id = 21102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.6295862824551354);
    msg.setSource(48U);
    msg.setSourceEntity(0U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(85U);
    msg.consumer.assign("IBNDXWEGWVUKVTYSROIQZHPUGTEAILYVFCDDFWLDQXEUDCBRVKSAWMWNSAXAVLXGQOCTARZIEDWKCVGUXBWQDORZEHSGJAFXKRPMMOZCCNRJKTXHWEHYLLDLNXBIYNJBLPNVJPOXNJJBIHHDESQYRKYMFHRSCCAHGCUMPBKECTWGMMQFSKIEFYNTJGHEAZAZKYNMBLU");
    msg.message_id = 38875U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.4784357022897686);
    msg.setSource(48287U);
    msg.setSourceEntity(113U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(211U);
    msg.type = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.7286245435751358);
    msg.setSource(35262U);
    msg.setSourceEntity(6U);
    msg.setDestination(47756U);
    msg.setDestinationEntity(13U);
    msg.type = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.7347410822863855);
    msg.setSource(27162U);
    msg.setSourceEntity(26U);
    msg.setDestination(60063U);
    msg.setDestinationEntity(30U);
    msg.type = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.3161364071833823);
    msg.setSource(55923U);
    msg.setSourceEntity(225U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(96U);
    msg.op = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.4533520912008163);
    msg.setSource(46327U);
    msg.setSourceEntity(35U);
    msg.setDestination(3889U);
    msg.setDestinationEntity(106U);
    msg.op = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.5449391444189476);
    msg.setSource(221U);
    msg.setSourceEntity(88U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(202U);
    msg.op = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.4039874979263627);
    msg.setSource(61535U);
    msg.setSourceEntity(72U);
    msg.setDestination(3917U);
    msg.setDestinationEntity(191U);
    msg.total_steps = 24U;
    msg.step_number = 193U;
    msg.step.assign("NRTQXHHBMJLDQKATISUNZSYGBJRZMHKPICKHJXVXMEJIEFPGHWONUPEODZDKSJIGYTUSCWGZRAKOPQESFLYJDNHIYNEFYDYTWRPFVEDXYPAHVBBNCULVAGU");
    msg.flags = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.7995579176455754);
    msg.setSource(44504U);
    msg.setSourceEntity(249U);
    msg.setDestination(41516U);
    msg.setDestinationEntity(184U);
    msg.total_steps = 37U;
    msg.step_number = 38U;
    msg.step.assign("XCHZTLCZNKVLS");
    msg.flags = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.380733409154667);
    msg.setSource(35537U);
    msg.setSourceEntity(166U);
    msg.setDestination(334U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 205U;
    msg.step_number = 76U;
    msg.step.assign("OZUGROKEAJNLCMDZUXIXVPRLDBKDJKHYEDZZWAGGIPCTHRJBTJBZHGNYXWKDAYKJUXGYBINSAFPREOWGWHXSKMEIEDQRSTYNLNHCMLLRRBSTSHEATENJVVFXIQHMINOEPXSYOPKOJELLTPTUFXQCOMNZQVJNMUCHXFRGLRIPVMQYFTVCUKYKQMWMWHKDUYP");
    msg.flags = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.27435292739283434);
    msg.setSource(61466U);
    msg.setSourceEntity(122U);
    msg.setDestination(61750U);
    msg.setDestinationEntity(8U);
    msg.state = 127U;
    msg.error.assign("MRKGJVTREKICYOEYULDNBPRJNNNJIAAKHFIUSLFRUVNKWUCIBMDSNTMKADREQCSNJPJLPQYAAIFPYHRWTOGGKWOSKQYTNGXKUVWTMHMJEFVEMWBJOFEFVQCJDCTARXQLPXEZMOZZGENXOJCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.5225324376339623);
    msg.setSource(58507U);
    msg.setSourceEntity(120U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(185U);
    msg.state = 83U;
    msg.error.assign("RIFCQMMLBSRWBOWEVLCJRXBZUKJDZKOFYHGXORGZRVNCFAZMTINBVBIZVDPJVJEDAIRIICTGOMTHPOTAUWGNSQJLXCEOVMZFZEMHAXVWSTNJHWUIXWSUAEXQPSYFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.5483516930284065);
    msg.setSource(46519U);
    msg.setSourceEntity(21U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(20U);
    msg.state = 178U;
    msg.error.assign("CMUHVKCYWCQLIUATSBOZRPHQJWGKDWPRSKBUDLHBUZRNGNNHCJZMXZCXPACKSMHUAVNOOUHSXRXZCEKGRFGKSAMYFVTYMYTHNUSOGOBFPOAUPMFJWDEVXYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.4623473799899833);
    msg.setSource(14990U);
    msg.setSourceEntity(191U);
    msg.setDestination(38225U);
    msg.setDestinationEntity(74U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.04590270119645057);
    msg.setSource(41767U);
    msg.setSourceEntity(14U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.3568592008837649);
    msg.setSource(57965U);
    msg.setSourceEntity(157U);
    msg.setDestination(23369U);
    msg.setDestinationEntity(134U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.617752819013245);
    msg.setSource(34285U);
    msg.setSourceEntity(222U);
    msg.setDestination(58798U);
    msg.setDestinationEntity(210U);
    msg.op = 147U;
    msg.speed_min = 0.6228460837670655;
    msg.speed_max = 0.5723465694631577;
    msg.long_accel = 0.827078363113233;
    msg.alt_max_msl = 0.12743288674406772;
    msg.dive_fraction_max = 0.1636681490316091;
    msg.climb_fraction_max = 0.2326803431953316;
    msg.bank_max = 0.9665071053039264;
    msg.p_max = 0.6433877569823507;
    msg.pitch_min = 0.5293946148541577;
    msg.pitch_max = 0.4589361378833804;
    msg.q_max = 0.9928401329309974;
    msg.g_min = 0.9460547547156543;
    msg.g_max = 0.8565453332679834;
    msg.g_lat_max = 0.49453912950330026;
    msg.rpm_min = 0.5207790621065177;
    msg.rpm_max = 0.5884335589254527;
    msg.rpm_rate_max = 0.6013824619047143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.4884757239697156);
    msg.setSource(64120U);
    msg.setSourceEntity(72U);
    msg.setDestination(31274U);
    msg.setDestinationEntity(204U);
    msg.op = 171U;
    msg.speed_min = 0.15395978226193185;
    msg.speed_max = 0.6131647498160493;
    msg.long_accel = 0.7263818522618847;
    msg.alt_max_msl = 0.7265919624390637;
    msg.dive_fraction_max = 0.06863233905968014;
    msg.climb_fraction_max = 0.7692935682041022;
    msg.bank_max = 0.8150795182178769;
    msg.p_max = 0.37121486604780185;
    msg.pitch_min = 0.8334390752788178;
    msg.pitch_max = 0.43268970207302837;
    msg.q_max = 0.8255969744171413;
    msg.g_min = 0.20341364237451542;
    msg.g_max = 0.5734463604015811;
    msg.g_lat_max = 0.4684524908608225;
    msg.rpm_min = 0.6848486856643871;
    msg.rpm_max = 0.36047478391142596;
    msg.rpm_rate_max = 0.33828559362643806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.6768571404083819);
    msg.setSource(24575U);
    msg.setSourceEntity(210U);
    msg.setDestination(1583U);
    msg.setDestinationEntity(202U);
    msg.op = 152U;
    msg.speed_min = 0.2867895044431593;
    msg.speed_max = 0.04473516361119778;
    msg.long_accel = 0.5276207687351491;
    msg.alt_max_msl = 0.9460751390232541;
    msg.dive_fraction_max = 0.18343972996254487;
    msg.climb_fraction_max = 0.7588227118463627;
    msg.bank_max = 0.27127070655777863;
    msg.p_max = 0.8900572175209421;
    msg.pitch_min = 0.31437840094474867;
    msg.pitch_max = 0.8270591866959855;
    msg.q_max = 0.8468160617713489;
    msg.g_min = 0.46614414924894054;
    msg.g_max = 0.5652019718067081;
    msg.g_lat_max = 0.4978283235401072;
    msg.rpm_min = 0.445184802334194;
    msg.rpm_max = 0.34807279880926156;
    msg.rpm_rate_max = 0.3091840733313025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.2255931605664082);
    msg.setSource(43449U);
    msg.setSourceEntity(14U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(132U);
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.1721879271072213;
    tmp_msg_0.lon = 0.12098226151727587;
    tmp_msg_0.z = 0.5886723404751067;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.radius = 0.4164923425718803;
    tmp_msg_0.duration = 35679U;
    tmp_msg_0.speed = 0.8725292224151859;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.custom.assign("JZUKXXNEGMPLGVYBJGRFSBRLJOWBLJFIDLAHQLOYTRTAYCCHPJIWLCMPFLMEUXFD");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.3572418590014206);
    msg.setSource(40980U);
    msg.setSourceEntity(19U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.3843700057197832);
    msg.setSource(36435U);
    msg.setSourceEntity(141U);
    msg.setDestination(1529U);
    msg.setDestinationEntity(184U);
    IMC::AcousticRelease tmp_msg_0;
    tmp_msg_0.system.assign("MTBIJANEMTOFGUOZOVRBFIJNEHMPYXSVSWAXVHRJIUMHYXPDFUQNIELDWWBHTHWBGCIJXLORILNGTGZDGALJLRLTMJUBQMEWOZTCUIYPBNMEADETZXFMOASPSQKUEORHDSJVYCWNZVKDDKZKUIFUBKMYPMTCVUWQ");
    tmp_msg_0.op = 135U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.8710738558531018);
    msg.setSource(55000U);
    msg.setSourceEntity(69U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.9679099133293817;
    msg.lon = 0.5187189654501868;
    msg.height = 0.6166851696123757;
    msg.x = 0.8521737433383367;
    msg.y = 0.37276727665351195;
    msg.z = 0.748081296829263;
    msg.phi = 0.22510833494423477;
    msg.theta = 0.6003440062004165;
    msg.psi = 0.020011604796260962;
    msg.u = 0.0453425879282755;
    msg.v = 0.8824020831241473;
    msg.w = 0.19591074208295245;
    msg.p = 0.7940575199150761;
    msg.q = 0.46515806571898755;
    msg.r = 0.5085102445441044;
    msg.svx = 0.23976544018685486;
    msg.svy = 0.5111959176486957;
    msg.svz = 0.925522396958092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9801218557520105);
    msg.setSource(27597U);
    msg.setSourceEntity(28U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.6146436452527972;
    msg.lon = 0.7825463514692548;
    msg.height = 0.2688551294884801;
    msg.x = 0.6467879663368671;
    msg.y = 0.5279941277373522;
    msg.z = 0.14184455254865702;
    msg.phi = 0.6672273833157711;
    msg.theta = 0.6420768894472912;
    msg.psi = 0.5032800746695232;
    msg.u = 0.34026365448600837;
    msg.v = 0.5371451900091285;
    msg.w = 0.9976004484217306;
    msg.p = 0.4816433028415831;
    msg.q = 0.41231115381942407;
    msg.r = 0.6301871396056853;
    msg.svx = 0.25154650599643624;
    msg.svy = 0.8881201008040102;
    msg.svz = 0.007531097485977578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.890336904768223);
    msg.setSource(27750U);
    msg.setSourceEntity(172U);
    msg.setDestination(47042U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.1401267287134207;
    msg.lon = 0.8649567801245309;
    msg.height = 0.31101317184189936;
    msg.x = 0.8156545443481322;
    msg.y = 0.4178624292112131;
    msg.z = 0.4970123039240707;
    msg.phi = 0.4187238616576936;
    msg.theta = 0.06613476603642887;
    msg.psi = 0.22578608285021773;
    msg.u = 0.2936154237237165;
    msg.v = 0.8061768871399131;
    msg.w = 0.038455109211565364;
    msg.p = 0.9905144641485086;
    msg.q = 0.7329829268382106;
    msg.r = 0.7087288713386158;
    msg.svx = 0.6230328750513037;
    msg.svy = 0.18298508964984517;
    msg.svz = 0.1952800526156966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.28314724933436775);
    msg.setSource(38436U);
    msg.setSourceEntity(170U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(42U);
    msg.op = 163U;
    msg.entities.assign("GYEXURDZUJYRGRPKLRFALYDLNCGLYMHNAJXCFTIAISMHLNNUARMSMOZSCAWKTIPGHJIPIABOXEBZYSETTQZRYYLKLEEOTMGLOVXOLHZJTOJETCACDUCKNKRVUIQBQCOZZYJMOCDUPHXVXDRCMNVXKWBMHCNAVEHGWHFPRGUQXQVNSDNYLBQGPPIVBUWQDFJQVWHVKTTMJXWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.16414082625206738);
    msg.setSource(10034U);
    msg.setSourceEntity(149U);
    msg.setDestination(34752U);
    msg.setDestinationEntity(35U);
    msg.op = 188U;
    msg.entities.assign("EZHMFFGLVSAJAFXDBKEIAMKJCUERHYSDGOJMQPOMCQSJEFKKQMLDWDLYVOFVNVLNYWLCWEZZVVRZYQVSCXUJXHEBLEESAWBAXRYXJINIOGQSTQVFHDXOWCROHNPBUKJMIIXRLSXRRUNEPQLINBGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.5682221447312237);
    msg.setSource(17111U);
    msg.setSourceEntity(148U);
    msg.setDestination(29868U);
    msg.setDestinationEntity(51U);
    msg.op = 139U;
    msg.entities.assign("PTGXJJANONAKWASHAALMGIQQOZZRLCFBGKIDYRTBHRJYSPZMLONMFFLGCHEUCXLSBPZMVQJIIEQXNLIIJGNZTEWOSABKVRXFEZCVEDIWMGABICVOYDAOWUPEPYGQYKVMTQQJKMEXVOTUWYCJYKHIDXDRSXMMWNAQBPPFKFDHVEKXBBZLYTASHRTRWUPJZNUXRDSFVUKCYEMDBCNUJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.37668250798482905);
    msg.setSource(16604U);
    msg.setSourceEntity(252U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(96U);
    msg.type = 167U;
    msg.speed = 28964U;
    const signed char tmp_msg_0[] = {-67, 24, -24, -96, 107, -31, -5, -69, -28, 52, -28, 69, 3, -31, 6, 4, 79, 124, -92, -45, 13, -63, -40, -10, 113, -9, -74, 28, -111, 107, -30, -23, -27, -91, -82, -58, 59, -92, 24, -111, 58, 3, -98, 83, 6, 46, 56, -76, -97, 79, -96, -96, 21, -42, 44, 20, 10, -109, -75, 121, -13, -65, 67, -88, 89, 3, -4, -37, 57, -18, 43, 18, -34, -90, -62, -63, 35, -23, 67, 84, -66, 94, -102, -81, -94, -121, -100, 117, 7, 48, 29, -94, -31, -55, -40, -100, -111, -20, 93, 112, -84, 40, 92, 67, -97, 12, 16, 63, -96, -118, 23, 48, -51, 26, 77, -31, 41, -27, -74, 6, -63, -2, -29, 83, 48, -66, -27, -90, -58, 16, 2, -109, -11, -8, 19, 81, 55, -64, -69, -56, 115, 90, -117, 29, -78, 19, 71, -49, 119, 89, 8, -127, -59, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.870516934706107);
    msg.setSource(23661U);
    msg.setSourceEntity(192U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(69U);
    msg.type = 238U;
    msg.speed = 27428U;
    const signed char tmp_msg_0[] = {-119, 58, 78, -21, -108, -42, 104, -94, -84, -64, 120, -126, 4, -122, 53, 74, -87, 42, -107, 74, -95, -108, 12, 99, 70, -77, -70, -54, 24, -29, -5, 78, 59, -66, -32, 28, 19, 78, 39, 22, -65, -115, -8, -29, -33, 125, -29, -127, -122, 108, 125, -98, 31, -89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.7309913042230683);
    msg.setSource(19402U);
    msg.setSourceEntity(74U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(192U);
    msg.type = 3U;
    msg.speed = 10209U;
    const signed char tmp_msg_0[] = {-29, -70, 15, -70, 47, 68, 114, 1, -101, 29, -82, 10, 6, 26, 105, 117, 17, -10, 68, 1, -83, -23, -97, 71, -71, -53, -27, 48, -51, 9, -69, 73, -94, -35, 118, 12, 52, 31, -11, -69, 81, 125, -127, 38, -55, -111, 111, 79, -112, 91, -55, -29, 0, 70, 29, 79, -113, 82, -18, -119, 17, 27, -17, -35, 83, 16, 124, -4, 96, -21, -8, -107, -35, -43, -2, -112, -71, 62, -74, -23, -8, -40, 123, 33, -62, 45, -71, 120, -103, -37, 114, -13, 110, -12, 122, 108, 21, -3, -22, -26, 13, -124, 59, -98, -78, -49, -19, -44, 58, -62, 19, 19, 83, -10, 93, -55, 79, 95, -9, 9, 38, 17, -71, -119, -108, -97, 62, 9, -126, 125, -77, 102, 56, -28, 110, 41, 30, 79, 33, -34, 113, 15, 41, 44, 10, -102, -4, -18, -83, 110, -86, -104, -128, -20, 23, 101, 55, 11, 83, 99, 121, -21, -75, 64, 52, -115, 91, 58, -24, -63, 5, 66, 13, -103, -96, 112, -28, 126, 39, -100, -109, 15, -38, 117, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.598649615737054);
    msg.setSource(8331U);
    msg.setSourceEntity(39U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(251U);
    msg.op = 249U;
    msg.tas2acc_pgain = 0.21263851764163544;
    msg.bank2p_pgain = 0.7233947489394517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.48954702290663876);
    msg.setSource(27160U);
    msg.setSourceEntity(63U);
    msg.setDestination(34640U);
    msg.setDestinationEntity(113U);
    msg.op = 233U;
    msg.tas2acc_pgain = 0.9332937439157178;
    msg.bank2p_pgain = 0.4417154144717411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.8885883917514458);
    msg.setSource(61651U);
    msg.setSourceEntity(165U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(48U);
    msg.op = 47U;
    msg.tas2acc_pgain = 0.5206548496472038;
    msg.bank2p_pgain = 0.397444241669186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.367754065069951);
    msg.setSource(12231U);
    msg.setSourceEntity(116U);
    msg.setDestination(6065U);
    msg.setDestinationEntity(193U);
    msg.available = 926450794U;
    msg.value = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.47036186699498983);
    msg.setSource(18408U);
    msg.setSourceEntity(246U);
    msg.setDestination(52840U);
    msg.setDestinationEntity(48U);
    msg.available = 3892573046U;
    msg.value = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.3180799755828221);
    msg.setSource(54554U);
    msg.setSourceEntity(5U);
    msg.setDestination(35135U);
    msg.setDestinationEntity(143U);
    msg.available = 3323425320U;
    msg.value = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.6449996116298412);
    msg.setSource(26777U);
    msg.setSourceEntity(248U);
    msg.setDestination(39290U);
    msg.setDestinationEntity(147U);
    msg.op = 161U;
    msg.snapshot.assign("CIHMXUTJPZFKABUMAYWTEITRBKPNJPXIFFDZWVSPRFKUTRFWLDVWCQBMOCVAKLKCXBAWPCBOXHBVFMSHKOIAEAGVNVDOVBYHOJIYPPSEZQOMPERINEGYMNFYXDKODMOYZJQPXEHSHZFJISNCHUGYLEWLLCOXNTACOTQESTTDHPRXWEYZQRFBRSGLNKSDJVGQNUUIWSLQWLJTURZZZKHGGUAIXRMBUMDIAGUMVNZLQS");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 182U;
    tmp_msg_0.actions.assign("USHVXUYOGHZHSERMBQMOLEUAAPYSFGKFIODJSNKRHQFNBWSSHEGGDPBBOKWXPCSCGIFQTJGHDQDYTOUNYJFVRYZAHTBPTPJZXIGOVRLSYSLBMBZSPG");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.7611325405770902);
    msg.setSource(53402U);
    msg.setSourceEntity(238U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(101U);
    msg.op = 119U;
    msg.snapshot.assign("YLSUCKUFUXYYWWJZRVMARRYXTGCMTRAVVOBWPPTOQMENPJQSKYILSWOWVTIIPDUABKITGOEDTTGFAPBXXMAWUBLTKJJTFYFOREMNHOGROZUEICBRU");
    IMC::Abort tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.09466954895145208);
    msg.setSource(51259U);
    msg.setSourceEntity(10U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(161U);
    msg.op = 226U;
    msg.snapshot.assign("WAODCMAVLNLZYAMLEETSJHSOXMQJIRTYHMDRWNFYTYZRCHPSRGRHQXKKPPQAKHSZEXPVSGPXMOKAUKLYJQIIKWLQZCFYNIYBDBGSVSHCAIBBJBRPPXLTJFQTRWZERXFWIGFCIASOHFKXNAQBFIROOPKJJNECPNQULMXNDKUGUVGHWDYNWSXEOOVGNQUCHETWUWGYCSZEZMDBUKDATIOTMHUJVIMGDCBWUYLZBDRXVZEMVTFTUOFDPFZNEJ");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.6680930323585589;
    tmp_msg_0.y = 0.2173261344193037;
    tmp_msg_0.z = 0.1435728261756054;
    tmp_msg_0.vx = 0.4205637682749739;
    tmp_msg_0.vy = 0.40477110040568953;
    tmp_msg_0.vz = 0.35543464439656514;
    tmp_msg_0.ax = 0.028322689981908455;
    tmp_msg_0.ay = 0.7265554186405361;
    tmp_msg_0.az = 0.44491253275701703;
    tmp_msg_0.flags = 55760U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.6408313377054062);
    msg.setSource(60985U);
    msg.setSourceEntity(228U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(178U);
    msg.op = 227U;
    msg.name.assign("MBXNSHAARJUHJIAOAWREOCSOBPIJWINJQDSTWOZCIBLNQPKJXWLWVPZREZJXVELWMQHTKRXMREKRLUGPBWWGRVTJOXCVLEFBCLEYKHFLYJBQTRMUGQVTKSOCTHTFRFDGUAVWEZIFGIVTIYSVRLDHZBIBJZYZVCNTEPPTPNKGNFUGQUCUSUXBKUOKOSZXZMFPFQMQBHSSDANYINMFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.8730584376455582);
    msg.setSource(58411U);
    msg.setSourceEntity(122U);
    msg.setDestination(27231U);
    msg.setDestinationEntity(254U);
    msg.op = 142U;
    msg.name.assign("VPNKFVKOIXDNHMGBZTQFMGOMBIYZEUGZZVSRZMXGRNSDNAYJUFYOLXJCMTCHWGLAGFWTZRJWLZZSXKURLGUVXPTEDXCQFHBVKCWSBZLYAHJSPLGXPNDUQPTHDMCEIUMOJPQYJOKBVUNLGNMFQVDDIJWBHDROECWFROJTSIADLFSAPOXERBYMEFQCOPEVHEUEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.042260834050085516);
    msg.setSource(56643U);
    msg.setSourceEntity(149U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(100U);
    msg.op = 73U;
    msg.name.assign("RPHGHSBPIQVNELJWNJBXHBLFMPZWOEVCAMREBQLWKXCUFOVHFKQCDZYXSMBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7105690568351415);
    msg.setSource(4114U);
    msg.setSourceEntity(142U);
    msg.setDestination(24404U);
    msg.setDestinationEntity(62U);
    msg.type = 226U;
    msg.htime = 0.5177362315866497;
    msg.context.assign("XTUWPJARUHEAZZWYRFBLMF");
    msg.text.assign("VGAQJEHMVUDPQYWPOAATJMHATZRAJLFSPYKEECBGWPXVZLUHYPQCBFGXIYTRZJSLBOILMIYTFSBUXJCIBVRDTQDOIXUXDJRXZDEZQKMEBHDRZPEEYFLGUBUDBOXEHMGVKFUGNHVZPWWNSOCLVOATFSGRFFUJSTDSNTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.8150266275341939);
    msg.setSource(8052U);
    msg.setSourceEntity(159U);
    msg.setDestination(34384U);
    msg.setDestinationEntity(64U);
    msg.type = 39U;
    msg.htime = 0.6866355705824789;
    msg.context.assign("ZZETSDKDGNXPPOMNMTHHRVBKZOWUURGNVHHNYMEUUBOGFXXOIEVFPWUYVDKACJEAFWWSDJRMSVEWOIDEMCFVEAQHYUGXCDZSOXBTCGGMXBNITLSWASYHGCVYWOLJAIMZQRRZCZASDKKQLFEQROMRGHLJLYWPVVIYPBQFPETXFROCEWVLQWKTHUTLSBYBPBIAOYDURJZCMQIHALGPMLFBIDJRZNJQKTTFCJXAGHXIKN");
    msg.text.assign("WLHLZEXBHURXQMCWQZSJLULNQJCFZQDGKCDEYVRQOMRZCVJEUTENRAPMNYJGIIPPXAOXPYHAKJNGATEAKSDSUOTRBSRRAHQGKVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.21913324815843094);
    msg.setSource(7679U);
    msg.setSourceEntity(11U);
    msg.setDestination(42648U);
    msg.setDestinationEntity(94U);
    msg.type = 159U;
    msg.htime = 0.5342177150022099;
    msg.context.assign("ESLAWGSEBLCKSABPLRJBHUMVXTWTHRFBIAWDGFJQIDHOSXICNRUZOTBONJXIAFKHMEQBWKSYU");
    msg.text.assign("RVBRIIDXZCJMAMPDNKELBWTUXKFWMVLVVKHGDLJTVVAJLMHLZETLUZLRVWTPHXEOGCJSUQZGBOPCECFFUFAHXCRSRTEUTWFNFXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.7101779859444197);
    msg.setSource(37898U);
    msg.setSourceEntity(97U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(150U);
    msg.command = 157U;
    msg.htime = 0.7829712417563334;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 135U;
    tmp_msg_0.htime = 0.21712153864922223;
    tmp_msg_0.context.assign("DBBUFGPAXFJLBQRNHHGEYDLRUOBBQQPIKGHMAAJDYRHNJSEKCCVWVEPSVOQXGLASBENWTVOVDWTSBRJUKHEZTMXPRHITXXOYIGLXANOFZIGYSXLGGQCPMM");
    tmp_msg_0.text.assign("UZWVBLCMSOZDWYTWOMAIFRSYROQXNPXCQNKGDKFHRHAKWXCIGLZCZRDEZSNYYCOLVLHAFENZNRBWYOPTXEPXDNCBJTHTCYAEDRNQEKTGMMDEBBQPYWWUXGWDBQJOGPBCMLCPFEIKXMRVHKUAOVQKAHJYGJIJUARVQJKFVCYEGTGXMZPKSUNKFSOTFAWPHOM");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.293583536763508);
    msg.setSource(24473U);
    msg.setSourceEntity(166U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(197U);
    msg.command = 233U;
    msg.htime = 0.5185886418855481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.6872210486884649);
    msg.setSource(12228U);
    msg.setSourceEntity(237U);
    msg.setDestination(26410U);
    msg.setDestinationEntity(187U);
    msg.command = 153U;
    msg.htime = 0.619646665563775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.9707341897517646);
    msg.setSource(59903U);
    msg.setSourceEntity(11U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(74U);
    msg.op = 76U;
    msg.file.assign("VYXFVEEQAFCWMVHHKZOMFYHDDCHVGTIRNBUXAUZJJDNLTCDUNPHOUSNOGVEGRSWLGYISOTQHLZMZQLLZQEBXHSNCEXWYRRJUSNJRTFRJBAUYEOJHIGPBIONGFYRMFWNKGMRWAIZASVXADQCRUCVQDQTBBVKGVQDOYBUKVCTXAZZOYAJPWFLAYGZBJNUDDIBDPOCYLTLNSWISILMPCKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.7344705343568891);
    msg.setSource(37583U);
    msg.setSourceEntity(78U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(190U);
    msg.op = 250U;
    msg.file.assign("VOFXCAUCHNACQSWOXUUMYOQDMNSJTEBLVCOIZPKOYVYALKDNLPTPGWFXKCQGMTMHFAFBCUWNKCWKMUWMRQBDHRSIGJNXXGMNYAHEWPPPYOGHDWPUVPBXGQGLCWGRYJLHUXVYDKBZRELFKOIIOKRTWMMZJQRTLKZZZRUIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.46865295128279827);
    msg.setSource(31483U);
    msg.setSourceEntity(212U);
    msg.setDestination(44674U);
    msg.setDestinationEntity(43U);
    msg.op = 98U;
    msg.file.assign("MVLOFEHKIDBZACQWMXVMRTQGSNKXBUBSVYPCAQKGQTOAHOCHVPRXDKNYQAJPIQEMPXJMWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.4684655653449248);
    msg.setSource(11520U);
    msg.setSourceEntity(30U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(142U);
    msg.op = 23U;
    msg.clock = 0.40599761064952467;
    msg.tz = 88;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.5206662822136136);
    msg.setSource(45224U);
    msg.setSourceEntity(182U);
    msg.setDestination(40665U);
    msg.setDestinationEntity(94U);
    msg.op = 151U;
    msg.clock = 0.3562084853563722;
    msg.tz = 76;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.09075033295640123);
    msg.setSource(63688U);
    msg.setSourceEntity(111U);
    msg.setDestination(3370U);
    msg.setDestinationEntity(186U);
    msg.op = 39U;
    msg.clock = 0.7650470448184489;
    msg.tz = 49;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.3885863219507293);
    msg.setSource(31981U);
    msg.setSourceEntity(144U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(120U);
    msg.conductivity = 0.39426516894140085;
    msg.temperature = 0.12436770368833716;
    msg.depth = 0.49889192562288587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.48294528380950386);
    msg.setSource(25722U);
    msg.setSourceEntity(114U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(174U);
    msg.conductivity = 0.5487876884934993;
    msg.temperature = 0.4421354775210544;
    msg.depth = 0.6732588691609546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.13267859439889662);
    msg.setSource(16095U);
    msg.setSourceEntity(249U);
    msg.setDestination(22470U);
    msg.setDestinationEntity(233U);
    msg.conductivity = 0.9382853976395057;
    msg.temperature = 0.0167018042824274;
    msg.depth = 0.598430860010094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.285982860765688);
    msg.setSource(41638U);
    msg.setSourceEntity(231U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.9121366919090503;
    msg.roll = 32146U;
    msg.pitch = 37743U;
    msg.yaw = 48842U;
    msg.speed = 25788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.3720691219505653);
    msg.setSource(63462U);
    msg.setSourceEntity(35U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(6U);
    msg.altitude = 0.9876206653019982;
    msg.roll = 13305U;
    msg.pitch = 46204U;
    msg.yaw = 15005U;
    msg.speed = -25090;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.4036465004094142);
    msg.setSource(26681U);
    msg.setSourceEntity(203U);
    msg.setDestination(55051U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.24270713217145023;
    msg.roll = 49868U;
    msg.pitch = 49310U;
    msg.yaw = 22992U;
    msg.speed = 12925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.737232624886648);
    msg.setSource(56777U);
    msg.setSourceEntity(19U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.6838218292983765;
    msg.width = 0.6652709315470628;
    msg.length = 0.16990459698162963;
    msg.bearing = 0.2646697183851934;
    msg.pxl = -21494;
    msg.encoding = 204U;
    const signed char tmp_msg_0[] = {88, 109, 39, -78, 14, 7, 29, -106, -93, 61, -124, 122, 11, 16, 120, 89, -27, 34, -32, -85, 20, 116, 94, -66, -1, 25, -1, 29, 24, -105, 120, 15, -68, -11, -128, -125, 47, -83, -80, -3, 97, 43, -49, 35, -36, 103, 100, 104, -35, -73, 62, 50, -9, 124, 73, -27, 72, 5, 38, -126, 57, 103, 94, -79, 49, -98, -36, 71, -100, -76, -68, 52, 64, -95, 111, 94, -115, -39, -4, 20, 109, -34, -123, -33, -39, -26, -49, 97, -36, 76, -88, 13, -92, 77, -9, -41, -20, 16, -112, 7, -128, -61, 100, 63, 5, -98, -123, -107, -38, 34, -115, 103, -84, 18, -126, 64, 75, 93, -115, 51, -106, 13, 57, -51, -83, 64, 86, 40, -22, -95, -104, -24, 27, -124, 61, -77, -3, -44, 40, 68, 100, 56, -57, 66, 62, 48, 116, 69, -107, 122, 23, 112, -84, -43, 22, 46, 49, 26, -21, 65, -103, 2, 103, -118, -61, 110, 6, 120, -60, 41, 27, 57, -29, 54, 80, -90, -105, 80, 39, -76, -99, -93, -47, -105, 72, -36, -27, -104, -22, -123, 126, 116, 95, -16, -108, 8, -64, -76, 26, 55, 82, 100, -93, 82, 34, -122, -116, 61, 42, 100, 110};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.43668923833621065);
    msg.setSource(56019U);
    msg.setSourceEntity(214U);
    msg.setDestination(61979U);
    msg.setDestinationEntity(147U);
    msg.altitude = 0.24162847078954486;
    msg.width = 0.19130519753372754;
    msg.length = 0.46109361655249614;
    msg.bearing = 0.9548516857445747;
    msg.pxl = -31496;
    msg.encoding = 231U;
    const signed char tmp_msg_0[] = {26, 24, 123, -15, 2, -66, 46, 29, -85, -81, 12, -124, -54, -93, 28, 44, 40, 34, -20, 23, -4, 123, -88, -51, 21, 1, 80, 89, 25, 111, 46, -100, 50, 38, 95, 103, 4, 53, -23, 81, -17, 73, 57, 83, 71, 108, 58, 92, -101, 35, 53, -124, 30, 100, 99, -114, 76, -89, -99, -86, 109, -59, 87, 104, -88, -9, 101, -68, -103, -41, 54, -117, -30, -6, 88, -74, -71, 84, -40, -61, -91, 86, 32, -45, -2, 49, 93, 107, 116, -35, -32, 69, 92, -117, -66, 45, -8, 102, 37, -84, -128, -83, 0, -62, -115, 6, -128, 33, -36, -7, 85, 114, -115, 76, -48, -54, -44, -125, -26, 6, -25, -41, 63, -100, 21, -74, 53, 94, -28, -113, -99, 5, 113, 26, 18, -13, -87, -43, 95, 112, -29, -70, 48, 41, 25, -34, 40, 67, 69, -35, 99, 51, -72, -59, -13, -90, -125, 1, 91};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.5089473968134541);
    msg.setSource(48643U);
    msg.setSourceEntity(234U);
    msg.setDestination(23545U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.7061153948414383;
    msg.width = 0.6645253089138704;
    msg.length = 0.6899868275708646;
    msg.bearing = 0.29752345230224586;
    msg.pxl = -20387;
    msg.encoding = 146U;
    const signed char tmp_msg_0[] = {50, -4, -57, -41, 16, 116, 80, 104, 43, 63, 80, -29, 113, 112, -102, 42, 20, -98, 111, 49, -88, -82, 60, -52, 30, 42, 41, 16, 66, 54, 33, 120, -25, 121, 66, 94, 116, 35, 38, -76, -49, -34, 34, 27, 82, -63, -112, 108, 41, 100, -128, -19, -75, 75, -9, 120, 13, -31, 43, 34, -16, 108, -14, -39, 23, -74, 53, -80, 121, -115, 120, 81, -73, 26, 44, 67, 34, -56, 63, 58, 23, 107, -67, -95, 27, -10, 98, -96, -90, 37, 95, 53, -41, -114, 7, 61, 91, 57, -102, -87, -123, -95, 16, -2, 100, 81, -24, -13, 99, -50, -97, -8, 39, -22, 92, 85, 94, 63, -44, 36, -78, 102, -3, 39, -122, 49, -62, 122, 31, 9, -20, -102, 94, -103, -111, 120, 82, -5, -127, -1, 123, 73, 56, -125, 22, -89, -74, -37, -79, -45, -35, -83, -65, 76, 102};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5932956166475464);
    msg.setSource(39797U);
    msg.setSourceEntity(172U);
    msg.setDestination(8826U);
    msg.setDestinationEntity(247U);
    msg.text.assign("VNDLVMJUMNHUTCLTKIZJULSBFLICTUUWLPWMYBNOECCNYOKKHPGPQBZJESWQMOFNLKUFLQBSDPVT");
    msg.type = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.6546343051921468);
    msg.setSource(22010U);
    msg.setSourceEntity(0U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(52U);
    msg.text.assign("BDXSIJIKGWYDTYVMQOHOKTVDMVHXKAAHEACKVOGAXSUTZGINUGJQXPNOQORVRYESMDMUSCLNTUWHEJBMNBSTFOHGBFASRGOBDMIRYEELHQPMQDTPITXETECZZCVSHVOILIKICYGKSXEQFMCYSADCFHIGCAPTWNZOGUWPVNLIULVYJXAWGNUURHUYFDMXQJQUPRLTKKRPYFNWFVZCYQKZZPJBJHWJCDXFSEBL");
    msg.type = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.15263205928608903);
    msg.setSource(22584U);
    msg.setSourceEntity(90U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(231U);
    msg.text.assign("CCTEFYTWSQ");
    msg.type = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.25066445785176006);
    msg.setSource(31502U);
    msg.setSourceEntity(161U);
    msg.setDestination(64229U);
    msg.setDestinationEntity(86U);
    msg.parameter = 142U;
    msg.numsamples = 201U;
    msg.lat = 0.6940712656499834;
    msg.lon = 0.8400705817784442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.42640182797914505);
    msg.setSource(6176U);
    msg.setSourceEntity(86U);
    msg.setDestination(39504U);
    msg.setDestinationEntity(247U);
    msg.parameter = 25U;
    msg.numsamples = 142U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47162U;
    tmp_msg_0.avg = 0.8178493310061411;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4095147869197342;
    msg.lon = 0.5222476871547687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.262060062612545);
    msg.setSource(23703U);
    msg.setSourceEntity(217U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(113U);
    msg.parameter = 2U;
    msg.numsamples = 165U;
    msg.lat = 0.6541228904649178;
    msg.lon = 0.023026458387952586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.9847722438269093);
    msg.setSource(24222U);
    msg.setSourceEntity(137U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(100U);
    msg.depth = 26449U;
    msg.avg = 0.0749679141830979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.6231460325222804);
    msg.setSource(31578U);
    msg.setSourceEntity(162U);
    msg.setDestination(14173U);
    msg.setDestinationEntity(86U);
    msg.depth = 33433U;
    msg.avg = 0.586511675488994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.08144842751392178);
    msg.setSource(34282U);
    msg.setSourceEntity(52U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(24U);
    msg.depth = 31372U;
    msg.avg = 0.18853575663464295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.8413272859022844);
    msg.setSource(12268U);
    msg.setSourceEntity(172U);
    msg.setDestination(2580U);
    msg.setDestinationEntity(240U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.440683136745074);
    msg.setSource(39393U);
    msg.setSourceEntity(80U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.4571319499403764);
    msg.setSource(65205U);
    msg.setSourceEntity(128U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(253U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.8675927412417332);
    msg.setSource(20345U);
    msg.setSourceEntity(191U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(8U);
    msg.sys_name.assign("TALCFPYUZXEGYYQFAAEIPTSLIQQQBVPTAPSDEXQGSJKJPPJZLVLEHSKWVNXKHGQBAZYMCOBSMBFILRMBYSODVQGKENCUUGXWRFRTYCKJPYATSDPQGOLBFQITOCVIZAUULYTNODLDXKHOHXBYOJSKBANPGFQNUZHIUVBTGJBXVDSJYADMZHMDRNRRFVVKLHORZMAVJMXZEHZXWPWFZMKNEGWOIIRNREFCXNEDUSO");
    msg.sys_type = 248U;
    msg.owner = 31501U;
    msg.lat = 0.4975121594583738;
    msg.lon = 0.46350860712846;
    msg.height = 0.7468716458782444;
    msg.services.assign("YLOPJWZASPWTFQRRQTCSFEDSDUIVWGLJIGTMSHGPGXRTECDMVCQAABJOMVIOPNYBDUOVQKNTBASDSFGEHHGFJHZVNXCBZNCUBINCZQSMRZIKPWOTMNRJDXXWJEWODANHLWEENMSJBIHGETKRXYYFQWEQRLLXIFUPUJAEYPQULKDZKZCLVELQVSAKFCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.8253611409788841);
    msg.setSource(24836U);
    msg.setSourceEntity(15U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("ZPWCFYIMOWYGEUNBALRZEUKFBRCWLRAVTJZDOQJPVFVUSKENBDUXGJTWMKXHEKKOZNCEAMOJTQQALVKU");
    msg.sys_type = 96U;
    msg.owner = 29344U;
    msg.lat = 0.4520493586029618;
    msg.lon = 0.9042746424815297;
    msg.height = 0.19052824070619923;
    msg.services.assign("KFYNDTFDKNNDBKOYECZDVBPOGTEPUHTMMUHKJAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6178972001843616);
    msg.setSource(56048U);
    msg.setSourceEntity(45U);
    msg.setDestination(40921U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("UULZUCHGYIWVRHGHNENMQJWGQUVIHJWIAHLNMXLXWVQBVNFVNYEBUUFEI");
    msg.sys_type = 233U;
    msg.owner = 33433U;
    msg.lat = 0.008951712463417527;
    msg.lon = 0.18081075048142847;
    msg.height = 0.9278935614616634;
    msg.services.assign("DFZBLNYMPCCPFCFDFWLHXAVQNGXIVCWVHUFOEUROLJLDRTCHNKBRMIXWBAQTHKYLYNFHKWRNIMUGSDRTNBKDSEYAKRAPUHHPZHJJQKEOCMBYXUKPMYEQOAGMVTLTXRSEZOPWZGBGTYATOGEGBKDAIUYEVJIFQMCZUEAIULLBZIJMXUDVYLDWBCCNQPWJCIISXXVMTNPFLATMSWSURJSBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.4138396711842681);
    msg.setSource(59976U);
    msg.setSourceEntity(179U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(180U);
    msg.service.assign("GGAIXLSRJMVWOKRTVPBDI");
    msg.service_type = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.1559517597514175);
    msg.setSource(38384U);
    msg.setSourceEntity(58U);
    msg.setDestination(54790U);
    msg.setDestinationEntity(249U);
    msg.service.assign("LTDYPUOFXPWPZAMXMWCEHMNLPTMPWPTAEHFIXFCSTXYJIRWFXVWNFGCLCQYKQMVMRRMDNZQVKXGZKEVQAXUGNNQJMTNSOIHUKRZSZKSBPOGDWUFDDOVWSNQRDAZWDRUAECKIKKJZSBTWCSGIUBSYARSUPTMKQGLAEYAYODHDIXHTYHBJILUNKBVSAYFIXZGFCG");
    msg.service_type = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.3294085116698371);
    msg.setSource(49988U);
    msg.setSourceEntity(91U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(132U);
    msg.service.assign("WJCKNYREWMVWCBJRPYDSYTFVNYMNBZBXCIMOZGXUJNIBLLEBWHNZULRQSVLXQKFGEPPQOFGTDZKGAYIQUUKMNSVPMEZMVXKITVYKZXGLXFITMJXWDOLJCYGQZODJSHIWPZTEDVRDHHEJBAVFMOBYPLFHGXDSFDFACDEPAAAGTCS");
    msg.service_type = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.062031822838930495);
    msg.setSource(47600U);
    msg.setSourceEntity(254U);
    msg.setDestination(60084U);
    msg.setDestinationEntity(60U);
    msg.value = 0.005147950802206758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.011060186131602312);
    msg.setSource(54714U);
    msg.setSourceEntity(81U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7448890735056537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7370634478011314);
    msg.setSource(45677U);
    msg.setSourceEntity(227U);
    msg.setDestination(15834U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6382124749828172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.6608865575355832);
    msg.setSource(34512U);
    msg.setSourceEntity(218U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(115U);
    msg.value = 0.31748123327403566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.13309460962715614);
    msg.setSource(31393U);
    msg.setSourceEntity(232U);
    msg.setDestination(23032U);
    msg.setDestinationEntity(23U);
    msg.value = 0.6762427383612714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.346457473490715);
    msg.setSource(55875U);
    msg.setSourceEntity(142U);
    msg.setDestination(56445U);
    msg.setDestinationEntity(226U);
    msg.value = 0.1997612422525411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.4575747267225263);
    msg.setSource(33999U);
    msg.setSourceEntity(232U);
    msg.setDestination(1529U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5555271678931156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.5776512181901431);
    msg.setSource(26120U);
    msg.setSourceEntity(198U);
    msg.setDestination(41818U);
    msg.setDestinationEntity(164U);
    msg.value = 0.793048225925136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.811440909958171);
    msg.setSource(47441U);
    msg.setSourceEntity(169U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(83U);
    msg.value = 0.3442427380903397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.9740993792161278);
    msg.setSource(32243U);
    msg.setSourceEntity(144U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(68U);
    msg.number.assign("FVOHXCQXREJJFAUKUBMFWSFQQCIUTDQRKIRCWGWQNOHTASIKZCOCXLNAHQSSKJTANNKECEGZYTTPUXWRSCOLEDPJBTTKGKODY");
    msg.timeout = 26034U;
    msg.contents.assign("STIWBRZDNJUFFMMWCFHOUXOBGZFACNQADTVWQUPOQBQWSCMYJKGSZRDSRJHLCDCFXAEWVRRGTKZASML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.17282856654697842);
    msg.setSource(33996U);
    msg.setSourceEntity(107U);
    msg.setDestination(51603U);
    msg.setDestinationEntity(223U);
    msg.number.assign("FRPYXNITUGAQTWOJBFGXNJMJAPKPQTGWYYSQKOHTWVLTAQHRJJXMMYMZEMTSBDBEKSSBISMPVKYXBLNNGZYHZAYKWDOOVFLTECZHRVJSIHGGDDCLXDZMRMMSWQCSPAXQUZHVRUHIOFCFNVUQCEWAGUIREQANLFOJRKZEOFVVSLXIMCLBQPYBDJUVEDTIQEAFGXTRNNBCWPOXUELSYBGKNAOZJDTJDCIKUGWUIOHCPXNZLIYDFEKBH");
    msg.timeout = 46425U;
    msg.contents.assign("AKOWYYCEYFQBLXXMZOWSVPBKJYADUFCQGKUTBAHNABWZCIZUPMAWCWVROFTXJKXPMQJHEDEDANKGENJSUYRXKBRNRXFNYLFTANFXUDMSIZNKRBBGRVITPRYOOSZVVCYZHMLEITWLWCGCHPTZFOMLVUKNPQRQYZMUDSOVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.8671909979875697);
    msg.setSource(18367U);
    msg.setSourceEntity(16U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(161U);
    msg.number.assign("RWDYDOOZCRGMDTXSZDIHSXZQQACQEPDWGNVJOWDIWOSYSKODDRKAZNFJGMMWUFVDMWWYQFCALGAHCQERYKIWVVCUFSCVRYBBXYSJZXNTLLPFEPPNPFCZZKOBEXQXMTNEPPGIJNVJGJPNTUOECIZFN");
    msg.timeout = 18137U;
    msg.contents.assign("BFXLVGTXYJDBUXEMFHKTZHBYBTEBOHPOWGBUUZITYIBUEUPYQSIRIXCZAGIJGVATAWAWMWRQRMKNHLFKUSSCLGMXRXELRMYPDLJOYRFXQKOCDQHSFHQHKONJOUCIPOLPSJIUPGKFCJUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.7516114704860107);
    msg.setSource(16812U);
    msg.setSourceEntity(125U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(251U);
    msg.seq = 3455838640U;
    msg.destination.assign("GWINPUQEGGEBMYSVXIUKLLLFCFIFXPHVKOYSNRIMJHLTOKQFYUVJGDRUGFEHVEMZITRPPCSBEPAOYRTXBQYZCAQGDAJSRVAMHFLAKIIEQJDHMAKWCFWBNQURXBHQWFNFXICLSPDJMVUPPQOWPVKTTRMGSMEODIBIKYNROHLYGOCUPLOSZVKXYTXSQNETYUZOZJWUMCASATBWYABJRJEQZCNDDRODHHSLTEGJCXDTNBGUH");
    msg.timeout = 51127U;
    const signed char tmp_msg_0[] = {-110, -12, 71, -8, 2, 100, 110, -7, -24, -26, 54, -90, -101, -85, -101, -50, 93, 33, 55, 92, 110, 35, 64, -75, 47, 25, -29, -101, -81, -25, 27, -6, -90, -76, 19, -18, -66, 84, 75, -52, 6, -5, 1, -58, -105, -57, -123, -42, 78, -33, 74, -59, 35, 72, 12, 42, -42, -48, 34, -123, 13, -107, 28, -47, 35, 12, 52, -123, -102, -34, 29, 126, -81, 8, 67, 102, 64, 28, -38, -25, 7, 3, 27, 77, 46, -5, -19, -115, 21, -56, 106, -12, -52, 50, 32, 12, 29, -22, 5, -82, -33, 92, 21, -78, -56, 86, -24, 83, -58, 87, -121, 7, -4, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5215778131631743);
    msg.setSource(19825U);
    msg.setSourceEntity(210U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(93U);
    msg.seq = 1475681995U;
    msg.destination.assign("HNMQCZDUQZRXMAVVGZYJTLFAHKYJTKJUGILIYSHQDARIPDTXFPNVZIWWWUQWKEBMWMKUIUXELQAYOEKBFWEZGBJQKIUBRAOPIACYOODHPQRZJNCMWKZETYAFJHSSWDMIBUVTVVXQCCJEYCPNEYFPPHSYY");
    msg.timeout = 33068U;
    const signed char tmp_msg_0[] = {-24, 75, -81, -122, 124, 119, 9, -20, 15, 60, 103, 88, 115, -109, 53, -109, -69, -123, -26, 78, 84, -107, 119, -25, 86, -105, -2, -49, 4, 120, 90, 93, -49, -94, -8, -27, -68, -106, 109, 22, 126, -14, 9, -110, 106, -63, 97, 42, -74, -30, 106, 105, -5, -2, -16, -29, 30, -121, 61, -14, -96, 118, 6, 120, 55, -13, 24, -60, 91, 31, -70, -11, -57, 117, 99, -42, 42, 99, -28, -124, 60, 6, -62, -89, -6, -4, 7, 103, -98, -3, -10, -38, -4, 78, -23, 31, -21, -46, 56, -27, 2, -11, 101, -14, -93, -109, 77, -32, 22, -95, 89, 63, -117, 42, 37, 7, -34, 57, 87, 45, 85, -53, 90, -118, 57, 120, -101, 44, -24, -43, -88, 59, -116, -20, 121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.7752385438170735);
    msg.setSource(28582U);
    msg.setSourceEntity(252U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(204U);
    msg.seq = 1595137027U;
    msg.destination.assign("WFFSGQXIJJALQAMJTJID");
    msg.timeout = 61320U;
    const signed char tmp_msg_0[] = {-71, -106, 81, -23, 100, -66, -109, 64, 90, -111, -107, -50, -11, 84, -7, 36, -18, 26, 107, 18, 107, 56, -58, 115, 87, -106, 117, 16, -35, 60, 50, 98, -78, 12, -44, -93, 33, 31, -37, 74, 102, 61, -70, -91, 20, 83, -88, 52, -15, 15, 5, -13, -95, -35, -94, 47, -34, -28, 94, 44, -77, -119, -7, -95, 58, 5, -32, 60, 40, 79, -79, 103, 99, 110, -32, 118, 121, 118, -52, -85, -89, -14, 84, 92, 30, -98, -31, 44, -48, 68, 2, 11, 106, 82, -39, 120, -90, 77, -6, 29, 45, 108, 36, -115, -105, -9, 112, -33, -90, -110, -30, -3, 20, -116, 18, 68, -107, -85, 3, -76, 51, -26, 35, 11, -68, -36, -75, -57, 15, 105, -47, -70, -89, 17, 111, 75, -67, -16, -117, -59, -88, 14, 105, 26, -115, -87, -126, -97, 22, -121, 28, 83, 17, -51, 43, 31, 35, 123, 94, -24, -68, -126, -79, -59, -24, 73, -79, 5, -52, -17, -9, -75, -75, 56, -10, 58, 61, -94, -57, -36, -71, -82, -20, -30, 68, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.4122859434689272);
    msg.setSource(19771U);
    msg.setSourceEntity(55U);
    msg.setDestination(25428U);
    msg.setDestinationEntity(39U);
    msg.source.assign("ASFAOVMKCDRPYXPPGEMYSAAFASHTYAQPTCLIRLBYUMSOCKAYQIPWEVJLMFNGEYCBIVXIH");
    const signed char tmp_msg_0[] = {92, -121, -92, -45, -89, 114, -64, -12, 115, 32, 110, 69, -126, -56, -96, 120, 106, -47, 48, -109, 113, 58, -1, 116, -67, 97, 58, -91, -25, -122, 93, 7, 37, 75, -89, -47, -95, 88, -42, -90, -32, 102, -80, 90, 33, -121, -99, -16, -99, 65, 45, -57, -99, -62, -32, 35, -37, -10, -104, -14, -111, -88, -119, -128, 65, -76, -46, -69, 47, -49, 105, 77, -83, 45, -121, -36, -18, 51, -64, 96, 61, 35, -5, -120, -32, -125, -107, -116, -101, 63, 84, 56, 105, -87, 9, -16, 54, -59, -114, 107, 35, -24, -59, -109, 75, 122, 107, -28, 126, -98, -123, 107, -44, 72, 83, -65, 78, -60, -127, -44, 63, 98, -32, 88, -34, 27, -37, 53, -73, 114, -71, 89, 5, 25, 111, 121, 94, 24, -7, -107, 34, -127, 111, 94, 19, 123, 47, -83, -23, -62, 126, -104, -33, 124, -23, 93, -128, -105, -63, -107, 94, -68, 124, 8, -76, -13, 124, -101, -16, 38, -108, -103, -7, 40, 25, -37, 6, 16, -93, 105, 60, 0, 60, -128, -31, -66, -68, 87, 86, 107, 109, -98, -51, 108, 23, 76, 120, -24, 123, 88, 86, 120, 119, -69, -100, -79, -68, 20, -97, -96, -4, -38, -39, -62, -113, -55, 6, -48, 118, -20, -110, 43, -125, -58, 45, 51, -116, 33, -106, 51, 90, 25, -44, 75, -16, 125, -39, 89, 83, 86, 26, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.5317246052432052);
    msg.setSource(60048U);
    msg.setSourceEntity(165U);
    msg.setDestination(34785U);
    msg.setDestinationEntity(67U);
    msg.source.assign("QSHUYOASPEIMCPPHEUVZXASKEPWVRMGMXXGRIVLELGPBCOJFNYDCUSCFCZTTENJUMUYNBGULZNUPYRDKZEWYZNBYHMMBDKKGABFQWYRDFQURRISLEDBKKXEHWJNVYVLBFTNGYXTIUDYTWVILOBPMOVCJOSF");
    const signed char tmp_msg_0[] = {73, -1, -38, -29, 17, 2, 86, 112, 91, 40, 54, -109, 121, -63, 11, 78, 67, -108, -63, -22, -105, 74, 0, -81, -44, -113, 88, 126, 63, -23, 95, -54, 94, -109, -95, 16, 121, 80, -98, 25, 41, -105, 107, 111, -11, -123, -88, 120, 23, -13, -116, -6, 21, -2, -82, 59, 116, 57, 67, 65, -36, -27, 82, 99, 27, 96, 73, 78, -17, 104, -71, 119, 119, -19, 2, 36, 88, 116, -128, 103, 106, 46, 116, -103, -101, -86, 81, -59, 86, -74, 14, 14, 117, 25, 48, 34, 61, 77, -86, -119, -33, -19, 16, -72, 73, -48, -39, -111, 36, 79, 49, -52, -112, 76, -3, 118, 8, -99, -61, 91, 99, -33, 116, -1, 23, -19, 8, -41, -53, 79, 100, 51, -65, -15, 95, -113, -86, -92, -47, 63, 88, -55, 53, 18, 83, -37, 90, 104, -26, 88, -117, 90, 17, -114, -102, -12, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.19073108826402219);
    msg.setSource(24282U);
    msg.setSourceEntity(107U);
    msg.setDestination(64665U);
    msg.setDestinationEntity(11U);
    msg.source.assign("GWJBQRMNWMYGRCVRGNLGNYGFRYMVZZHDTONPGGSRIVCZQMGQBDKPZWEYKRKBFXTOEUJAMEJZHJPNDUCLUUOPWJUQOZKTSASQNCIRWLEYDCXGKYZXXAFJYIWABMALRXFSWXFBXZAVIBCVMTCIUBKOTKKJGVTZRTPIBQSTFRTXDMOHYXLYEFDLHNWPVQKDJONEEHXLJPVULQMPUIHEFSIBUQQSVIEOBHUZMDP");
    const signed char tmp_msg_0[] = {67, -99, -15, -95, -43, 120, -98, -78, 98, -108, 97, 75, 68, -26, -1, 74, -19, 6, -105, -98, 75, 38, -41, -108, -111, -9, 84, -77, 31, -113, 31, 65, 17, -75, 71, -58, 64, 34, 2, 80, -127, 12, -59, 91, 12, 41, -84, 3, 108, -77, 106, 67, -40, -80, -16, -23, 68, -6, -72, -16, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.7167559633199916);
    msg.setSource(29072U);
    msg.setSourceEntity(158U);
    msg.setDestination(38270U);
    msg.setDestinationEntity(75U);
    msg.seq = 861197936U;
    msg.state = 83U;
    msg.error.assign("NZPNBQLCXHEBLWIKGNHRDESHVIFBTTZFEQOMSYOAWJKUPMEAUYJPLPQBHQBFRWNPSMSDAMHPUBKUEPJESZCKDIUYDBKZEPMPPJIOMAIRSXGWZNAQNDKHYRCCJTGYTWQUVXUZXFAHNRNIUAKNOVIMRUFOCZYOQSSLAVRTDBOQTNLFGSWXVMDHYGZXYGOIXMVJKFAYCIOJJFCWFVTHCGLVZBXDQOHCRLSGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.23797608344570853);
    msg.setSource(53552U);
    msg.setSourceEntity(208U);
    msg.setDestination(14983U);
    msg.setDestinationEntity(216U);
    msg.seq = 2137207278U;
    msg.state = 153U;
    msg.error.assign("PJTRJAOSRURIKEGOPTULFTQKEIYQBBSAHYFGCBRFZTEHFZDXQXHIAIAWELWRGDJURLZEWSVUMMZEPWXMZQLLXINHBYSTHUBADORNWUKTNYHSXVCGPDHSDVUPNDLLTYMGQFVNNOWLJCOSCACPKCAPJGBVEGSKQFMPIVNCSJNCRVJFIUKQKEUZOIFJRPRGWKLJNXXIMLXDVYACTZZTYXHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.9158561743790095);
    msg.setSource(37178U);
    msg.setSourceEntity(59U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(91U);
    msg.seq = 2588476111U;
    msg.state = 61U;
    msg.error.assign("ICHHNOEGGGIATEGPRQCRTUPNEYZILBJXFQGNNLKCOVLRYMBZUKUTEAVANTURJHRWFCKTMWEICXLOMLMDTDEVOKRIQYUJSSYDSXZHONTHJNYFKOLKAAGEYHOXJDQDCRRUZFSGTDISATJWXIUDOXMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.699342002244787);
    msg.setSource(63068U);
    msg.setSourceEntity(26U);
    msg.setDestination(24479U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("UYBWZHMXLCRASCQNDWBSYUKIIAWQGFFOBPXNZINAEWVINWUNYECDSPYBSAYGVIXSOEODAYMWXSWZFQITXBVJZXKFHPKQRUKRJHJJGXEVTADUMFERWJMZGFFOQHWAGUZTRLZXVOTQHVXCEMBCOKRJJNHDMSPGLNVUMPBNVOBGWDYHGCLYZLELHERECPPBTQFSFGCSUQJQAVJAVFPILLKLIDTJUMQIUODTDRTINTRSGCCZP");
    msg.text.assign("GAERZHSQWOBCLHRDXCKIIUMNXXIBUBGMDDXVRZNZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.6225071653748806);
    msg.setSource(42210U);
    msg.setSourceEntity(58U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("IDOUSUUFVJTPJKHNQYMYGCOMKEPCHONJPAGSEKAYVEQUYQPZKVBUIWJDSXHSWLTHBBOCKBEZZJRTUCKVWUIALSVMQFWFGBZAVRNAZSJGDPDUNHXMEXISDIXOFOOEVAKMOXZFTLXGMRKCAWWRTIIYPLCVNFDZJYISMBMRZXXHHCDRAKOHYPHFAOPLJNWWLJPCQRVFTSGTLPFMSYUGYRVBDIDQTEGQTZYUHGLNFDNEA");
    msg.text.assign("FMBYQVCMGENFMIIFHUJKQQEJPINAOMJXLXHHDYPOGTSWWAQPVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.14270708031682722);
    msg.setSource(33329U);
    msg.setSourceEntity(214U);
    msg.setDestination(2674U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("MAFGYRLOKTGITCSNDDDDCMUNEMHLEKWZWVTOAAUMIXJPRFQEJBBVVRFXELPLOYCIXSPYNNFKCIZQIXMPPDPKZNJDJOLPG");
    msg.text.assign("FZLBFPMNDYICGVDOAHBWTMSUOLHTEPWVOXQJELSIEJUDMAXRHCSGWHXFDNZJTHQAHTJGGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.24297798176462881);
    msg.setSource(50149U);
    msg.setSourceEntity(96U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("OVLLAGOFIUTDZXATOFKMNAHERZKVPJGHBIWJFKZAVRMCWKRKVLBXFULKBFTYDLEBODZUSXTWREGZKQGNVOENSULYMMUAIW");
    msg.htime = 0.6186939069331076;
    msg.lat = 0.422165500629775;
    msg.lon = 0.583428941887914;
    const signed char tmp_msg_0[] = {-80, 87, 71, 45, 95, 106, -43, 121, 7, -120, 87, -56, -77, 31, -64, 26, 9, -10, -57, 61, -11, -9, 73, 62, -122, 42, -8, -119, -103, -13, 3, -54, 79, 63, -99, -127, -63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.5754024187554921);
    msg.setSource(15184U);
    msg.setSourceEntity(19U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("OBLXEVFOSXJCNLKCLYBEUYDKZICWLWYSHWDGVUWYKPDJSMQQZYYMHAJJKNZXEVBARKTMXXVGWH");
    msg.htime = 0.4962949882270259;
    msg.lat = 0.30138567980697895;
    msg.lon = 0.2670833087030078;
    const signed char tmp_msg_0[] = {82, 74, -81, -112, 54, 60, 56, 19, 77, 118, -37, -16, 89, 109, 69, -73, 73, -82, 91, 93, 66, 39, -40, -22, 118, -116, -59, 44, 78, 99, -72, -21, 35, -47, 42, 71, -73, 8, 106, 75, -119, 38, -117, -118, -118, 3, -128, -47, 109, 75, 119, -28, 110, 37, -20, -83, -37, -22, 112, -80, -74, 19, 87, 37, 85, -7, -101, 24, -127, 42, -23, 78, -116, 62, 96, 16, 95, -105, 100, 110, 32, 80, -110, 41, -126, -51, 97, 105, 47, -30, -81, 113, 14, 60, -22, 7, -65, 105, 80, -111, 76, -13, -119, -72, -3, 37, 94, 99, 121, 109, -54, -2, 126, -83, -82, 49, 57, -53, -52, 2, -59, -128, 63, -10, -111, -14, 22, 92, -124, -91, -95, -128, -49, 102, 107, 22, 58, -57, -125, 31, 30, 120, -21, 53, 93, -20, 78, -26, 108, 89, -18, -110, 90, 6, 16, 27, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.6195652124933984);
    msg.setSource(36940U);
    msg.setSourceEntity(5U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("WVITCVEPMYABWJEATGLKORZAZSVLQQCEYIVFFDKAQTXVUCOVWKAEDKVGWYOXNCRLUUCWIBWBGJRPRSVMNJGRYPFZNFDQEHYPTUGT");
    msg.htime = 0.8781412434899978;
    msg.lat = 0.9976605880897884;
    msg.lon = 0.8249695188470981;
    const signed char tmp_msg_0[] = {104, -86, 21, -117, 9, 107, 17, -84, -56, -34, -121, 125, 28, 81, -25, 8, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.6332998550326628);
    msg.setSource(42278U);
    msg.setSourceEntity(37U);
    msg.setDestination(24579U);
    msg.setDestinationEntity(110U);
    msg.req_id = 29807U;
    msg.ttl = 7235U;
    msg.destination.assign("AWNISRMKXFUOZKYAXZOQFIRQGJSHXJBLORFQLCLNODDLHSZVNPSPLGYAWEUNYETPYCIDGSVBLJJMUFZRKKCTVONCVUEYJWQAUTKPSFRSKQJRXAGQVOMCYDYEWRJBWZGLLSHEIUCXVXFHITBAFMPAQNWPDDKQAHCZMYUIVPMDCK");
    const signed char tmp_msg_0[] = {71, 25, -89, 65, -14, -42, -15, 102, -37, 10, -113, -93, 85, 31, 125, 92, 70, 105, 27, 30, -39, -29, 44, -14, -45, 107, 95, 74, 112, -15, -96, 21, -63, 121, -56, -96, 49, -103, -45, 3, 76, -118, -65, -119, 104, 1, -8, 31, -113, 18, -90, -59, 44, -45, -12, -41, -29, -30, 91, -50, 25, 16, 6, -19, -94, -87, -27, -79, -72, -21, 59, 25, 36, -87, 2, -100, -56, 21, 22, -117, -105, 25, -83, -72, 5, -11, 85, -105, -69, -128, 17, 53, -42, -5, -76, 14, 8, 67, -32, -115, -51, 66, 24, 101, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.9105616261549371);
    msg.setSource(18290U);
    msg.setSourceEntity(86U);
    msg.setDestination(12825U);
    msg.setDestinationEntity(90U);
    msg.req_id = 2647U;
    msg.ttl = 56859U;
    msg.destination.assign("TEAEBKBBTX");
    const signed char tmp_msg_0[] = {-44, 23, -58, -99, -66, -39, -33, -68, 126, 17, -20, -80, -51, 25, 30, -43, 34, -14, -9, 41, 4, 64, 23, 84, -19, 12, -6, 11, 98, 0, -98, 95, 96, 107, -80, 69, -76, 95, 94, -118, 54, 15, -55, -93, -54, 9, 3, -127, -36, -17, 79, -68, -26, 124, 21, -70, 77, -2, 85, -45, -12, -11, -62, 117, 98, -64, -73, 106, -69, -10, 17, 47, -28, -25, -106, 75, -99, -1, -10, 4, -32, 12, -55, -46, -82, 6, 67, -110, 99, 63, -22, -94, -30, -16, 87, 64, 95, 101, -15, 67, 49, -20, 36, -92, -37, 30, 116, -46, 109, 80, 97, -35, 96, 42, 98, 81, 36, 89, 2, 19, -96, -78, 96, -126, -82, -113, 106, 56, -75, 11, 25, -124, 96, 11, -21, -81, 81, -21, -55, 2, 87, 50, 99, 50, 8, -38, 43, -100, 86, 53, 68, -39, 3, 55, -121, 34, -52, -97, -101, -75, 100, 14, 104, 9, 52, -17, -28, 119, -127, 53, 67, -5, 44, 108, -14, -106, 70, -16, -17, 105, 54, 0, -34, -28, -118, -19, -35, 59, -18, 106, 56, 1, -58, 13, 90, 93, -110, 43, 99, 74, 97, -121, 12, -88, 41, 4, -3, 63, 100, 80, -33, 42, 41, -74, 56, -106, 46, -91, 101, 15, 2, 121, 6, 89, -89, 48, 25, 82, -19, -23};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.953959127834454);
    msg.setSource(16568U);
    msg.setSourceEntity(207U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(139U);
    msg.req_id = 57694U;
    msg.ttl = 2560U;
    msg.destination.assign("CKOOBFMJVCUJUJSSMKDIZXWVRYENL");
    const signed char tmp_msg_0[] = {-27, 49, -5, 78, 22, 94, -69, -91, 10, 39, -122, 62, -51, -113, -28, 11, 97, 99, -73, 76, -3, 120, -119, -61, -44, -9, 44, -116, -37, 4, -24, 87, 51, 47, 33, 116, -37, -9, 106, 125, -96, -24, -65, -98, 70, 56, -62, 114, 26, -79, -70, -74, 11, 14, 41, -123, -98, 36, 37, 9, 54, 51, 34, 123, -78, -25, -68, 107, 95, 87, -26, 20, -18, 23, -33, 97, -59, 47, 33, 92, 11, -91, -54, 71, 108, 34, 87, -19, 95, -127, -7, 104, 33, 100, 118, -72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.8094977119046162);
    msg.setSource(34739U);
    msg.setSourceEntity(142U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(138U);
    msg.req_id = 64636U;
    msg.status = 108U;
    msg.text.assign("DLRKVKFDICQXOAMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.35480622377539495);
    msg.setSource(33015U);
    msg.setSourceEntity(251U);
    msg.setDestination(56205U);
    msg.setDestinationEntity(197U);
    msg.req_id = 60179U;
    msg.status = 38U;
    msg.text.assign("NINHMUYLUAHBNRPQPOPYVNJJVYBBJDTLCGINXLNWXFHOACDUYSOJENPTLAWIASFHSPNJUPBCCZZGHDKQXVWGOGSTRSPZCBFQHKZWCSRDNRTRXRPGBHQDOVBJSMSIZPAUYFXEEMCXCKTKGQFWTYTRUXWWIBZRYSOMHBLAVQEFJLTOKQIOEQWEXJZUGIJDCKLAREOMQQMDKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7765834450700108);
    msg.setSource(5731U);
    msg.setSourceEntity(132U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(8U);
    msg.req_id = 27334U;
    msg.status = 253U;
    msg.text.assign("ZTQSPSANPOJGVFJQEOPPBNGBYQCQBDCWRYSLOGFYISVHZWLWHIAQXGSUMBFHAMNUWPZVWWKMTOIFBFNTEIDKLEWIBNGEBFXGCUMLRJYTVPVTUDRRLDKTZTAPXOYJUTXQIAVLACUVWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.6063995746617353);
    msg.setSource(36662U);
    msg.setSourceEntity(7U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("ODSITSQECFTUOOGCOYEJZDHPDNLXNQPFTJHUZXUGIRNLODSUQWYHUNEFXYSIJMAPBRGCSHBRZNIMZZXZXNBIVLLMIWODPVNJWPJHZALDMBJUOOHVQSKAPBWFFHTLANQFPRGAMRZABCLXYVXABTYVUDTMOIEPDFATURUEGCEMPALFWBITGXLCBCQRWGLKRVFZCEUCRTVDEWIVMKGQSSYYEQ");
    msg.links = 1334162589U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.8996949580369653);
    msg.setSource(36270U);
    msg.setSourceEntity(159U);
    msg.setDestination(52062U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("IXJTOHSWPRHGZXEFLQHNBHEDMWSOIJHXTWMVLODMYARZLIBAVGRZMUQNWYHUOWWNWSTJZTYSSIDFUXDLKKKPSCIJLBQTKQRIDNADQWAYURMELJABOEJDHXPEJAEKDLYTXFBQCYNVRDNVTCVAVUGREEJZRBHKUNCUSXOYXBPJGCMIAOXGKFPAILCPFHZEDKCGUSZIGNTU");
    msg.links = 3573254610U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.1675730515198105);
    msg.setSource(189U);
    msg.setSourceEntity(129U);
    msg.setDestination(33191U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("UVMPBBYORNKGVVTGDFMJBEJSIUOHHFRECMVYFSSBQUJXGWZERTZAKCJOSREWSDGTIHQUJWDOINZHCTUOMJENDKQSNKXWBPLCSOGFDXQMKEDLQLLWGXOZZXXUHHPEHNAHZXCFFDFMNCDHOXIAWRYSJJORTTYRBIHJAWKZMAUAFMWYBGOQEYTPPCCNBDNYAVAIZVGWXRPPENTYBL");
    msg.links = 3847322812U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7009937923802178);
    msg.setSource(41274U);
    msg.setSourceEntity(25U);
    msg.setDestination(21578U);
    msg.setDestinationEntity(13U);
    msg.groupname.assign("CYLBWMTYZKDWRDENKXYXYWMKEDRCTUCAILHOMTPVVBNFMLARNRTXDNRYJYAABLONMEPCZFNRTGIRBSKGFBZZXLLGWJKCZGMJSQAMSOIJFEYHXWUGOPTQCHAOOQDZBOJDEQZJPGIEZGFAVBPXISQSERXNIWWTP");
    msg.action = 229U;
    msg.grouplist.assign("DFXHBPUBWXICTYJFWGBCHRDGRYPXLUMAGOIELKWNTLKJPJMZBPOPQKJJFENQYUZHUDDFYGDPDPGMSOOCLCNHXVVPLDFCMFZNCIWRWVTFMGQRCSBGMTYDVVFVQVSSLTRKEQCRKQRHSJLINIGQMXAFCKZEZWYWWXEGLNEYSVJAAOXRKFUSBZCNNJTWUSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.4440413552078165);
    msg.setSource(37616U);
    msg.setSourceEntity(198U);
    msg.setDestination(48392U);
    msg.setDestinationEntity(44U);
    msg.groupname.assign("WQOYUSFXPTSJLENWQMEMYEOOOSKIXXCGDHVMMLPYBHZXXPKCQFOCBKAWRUSAAPUNPNBURBFKQWTENENXQSKIWLVTSZGLIHZVTTARLACXETTQKTHYUHYWCEZBJPAUWHVRRYCUNFVZOCFDGL");
    msg.action = 108U;
    msg.grouplist.assign("OPJONVEGJHDOFGLYWYZFSLGBMWNDYGRWZNKPAXEVOFCOLWINKQCJUZMDHNLTIIXBTRHQAAJUJTKIOQFSSESWQDUHVZVXLSBMRAEWNMHLFHSVEIXCZNBEYJTPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7029044939124856);
    msg.setSource(12196U);
    msg.setSourceEntity(73U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("NZMIVSIZMECFIAAEQOOZSHVD");
    msg.action = 185U;
    msg.grouplist.assign("OXYWUPUMSCKAYCEXTLCJLVIDKHJNZILKPQFZSAQOBUPHWFJLWNSAZTJCMDLQVSCWLAODLUXBEPEJGQHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.7503722608829831);
    msg.setSource(36180U);
    msg.setSourceEntity(71U);
    msg.setDestination(44257U);
    msg.setDestinationEntity(9U);
    msg.value = 0.1275099115059889;
    msg.sys_src = 21657U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.7151039330925867);
    msg.setSource(2781U);
    msg.setSourceEntity(22U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(152U);
    msg.value = 0.1495444016593913;
    msg.sys_src = 14064U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.07745288460504351);
    msg.setSource(42772U);
    msg.setSourceEntity(184U);
    msg.setDestination(29233U);
    msg.setDestinationEntity(104U);
    msg.value = 0.20780565574690113;
    msg.sys_src = 28241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.8142719598805883);
    msg.setSource(12638U);
    msg.setSourceEntity(195U);
    msg.setDestination(9318U);
    msg.setDestinationEntity(93U);
    msg.value = 0.9401641459370771;
    msg.units = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.8491018334087852);
    msg.setSource(19565U);
    msg.setSourceEntity(228U);
    msg.setDestination(20876U);
    msg.setDestinationEntity(188U);
    msg.value = 0.850795825297573;
    msg.units = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.10559491232791929);
    msg.setSource(27679U);
    msg.setSourceEntity(145U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(234U);
    msg.value = 0.1606786974185609;
    msg.units = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.4244050957306378);
    msg.setSource(33700U);
    msg.setSourceEntity(170U);
    msg.setDestination(40925U);
    msg.setDestinationEntity(229U);
    msg.base_lat = 0.8327733814343043;
    msg.base_lon = 0.827417737978328;
    msg.base_time = 0.37422161466681236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.6602783278074843);
    msg.setSource(31766U);
    msg.setSourceEntity(67U);
    msg.setDestination(8298U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.6888209020188102;
    msg.base_lon = 0.998572035537969;
    msg.base_time = 0.7679329519809418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.08777776739180099);
    msg.setSource(26706U);
    msg.setSourceEntity(222U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.16171314304178708;
    msg.base_lon = 0.35528402472298737;
    msg.base_time = 0.0461776462454363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.05227320722951612);
    msg.setSource(26576U);
    msg.setSourceEntity(107U);
    msg.setDestination(58947U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.42604778261711906;
    msg.base_lon = 0.06469524900417944;
    msg.base_time = 0.16248268648709074;
    const signed char tmp_msg_0[] = {-52, -13, -69, 93, -118, 23, 90, 116, 88, 40, -21, 121, -109, 9, 42, 98, -71, -60, 99, 116, -40, -13, 35, 7, 102, -14, -121, 118, 5, 101, -43, -124, 109, -119, -63, -70, 74, 46, -42, 8, -97, 4, 96, 85, -42, -103, 63, -34, 73, 10, 10, -105, 91, -124, -56, 19, 124, 34, 58, 0, 7, -50, 40, -86, 26, 115, -128, -64, -75, -58, -96, -88, -101, -100, 13, -80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.5129472635684954);
    msg.setSource(6241U);
    msg.setSourceEntity(116U);
    msg.setDestination(9728U);
    msg.setDestinationEntity(197U);
    msg.base_lat = 0.005380841982168705;
    msg.base_lon = 0.15687591379027277;
    msg.base_time = 0.8894674135358066;
    const signed char tmp_msg_0[] = {-46, -35, -111, 95, -72, 41, -8, 55, 17, 33, 32, 23, -19, 40, -39, -62, 54, 44, -115, -82, 51, -54, -85, 117, -41, -23, -66, 30, 102, -47, -17, 104, -49, 89, 67, -63, 95, -4, -112, 2, 120, 78, -32, -71, 82, 60, 92, 53, -31, 17, -21, 72, -114, 69, 4, -61, 73, 19, -70, -51, -95, -87, -107, 45, -61, 119, -84, 93, 111, 38, -124, -83, -3, -47, -53, -27, 118, 96, -45, -46, -31, -41, 117, 38, 75, 35, 49, -79, -121, -18, -82, -10, 95, 54, -4, -3, -13, 35, 13, -103, 110, -112, 29, 67, -34, 6, 123, -66, 66, -30, -36, -121, -126, 52, 115, 99, -30, -112, 89, 109, 59, -127, 20, 89, 88, -73, 112, 71, 53, -89, -49, -58, -22, 75, -40, 54, 102, -14, 124, 13, 43, 23, -128, -111, 52, -68, 3, -40, 32, 124, -11, 45, -106, -87, 10, 57, -105, -97, -58, -73, 48, 64, -122, 90, 102, -122, -34, 71, 62, -5, -36, -78, 22, 30, -43, -33, -58, -23, -125, 49, 65, -127, -30, -118, 68, 113, -64, -16, 25, -33, 59, -10, 89, 70, 67, 51, -50, -92, -77, -45, 93, -46, -72, 75, -3, -98, -104, 97, 115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.7417945318732282);
    msg.setSource(64957U);
    msg.setSourceEntity(217U);
    msg.setDestination(33508U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.49299785598123946;
    msg.base_lon = 0.1514315208430539;
    msg.base_time = 0.8653397542538647;
    const signed char tmp_msg_0[] = {-123, -125, -74, -31, -63, -65, 108, 78, -58, -33, -19, 51, -47, -52, 102, -121, 96, 73, 51, -6, 95, -32, -82, 119, -35, -40, -108, 120, -54, 6, 15, 94, -123, -70, 10, -118, -74, -1, -29, 0, -16, -59, 76, -111, -99, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.8135669321804271);
    msg.setSource(62984U);
    msg.setSourceEntity(30U);
    msg.setDestination(64500U);
    msg.setDestinationEntity(107U);
    msg.sys_id = 39876U;
    msg.priority = 95;
    msg.x = 15871;
    msg.y = -15833;
    msg.z = -903;
    msg.t = -442;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.error.assign("FNIQMSSROPUJIJSRYUOAHCXAGSMDVWUVCYYAAJGYIOCGAODTRVQZNQHHTKLNUEIEGUEI");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.2580433520891703);
    msg.setSource(47614U);
    msg.setSourceEntity(4U);
    msg.setDestination(22240U);
    msg.setDestinationEntity(105U);
    msg.sys_id = 44089U;
    msg.priority = 81;
    msg.x = -18507;
    msg.y = 7683;
    msg.z = 25016;
    msg.t = -8085;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.6671854999862187;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.6355299478937737);
    msg.setSource(16612U);
    msg.setSourceEntity(34U);
    msg.setDestination(28886U);
    msg.setDestinationEntity(85U);
    msg.sys_id = 13352U;
    msg.priority = 50;
    msg.x = -26603;
    msg.y = -15711;
    msg.z = -32168;
    msg.t = 11851;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("DGMETBWDZAUCGTMVIAQYPEOJKJTRFAOVHPLTMXSRGIGOHV");
    tmp_msg_0.links = 2754444256U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.3320830095632269);
    msg.setSource(35891U);
    msg.setSourceEntity(164U);
    msg.setDestination(54899U);
    msg.setDestinationEntity(190U);
    msg.req_id = 53994U;
    msg.type = 207U;
    msg.max_size = 60413U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.798907561213215;
    tmp_msg_0.base_lon = 0.9242494460597003;
    tmp_msg_0.base_time = 0.03099734111897401;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.4681793118342047);
    msg.setSource(11057U);
    msg.setSourceEntity(125U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(49U);
    msg.req_id = 3231U;
    msg.type = 46U;
    msg.max_size = 11886U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8175468112789829;
    tmp_msg_0.base_lon = 0.35659794772897224;
    tmp_msg_0.base_time = 0.9599903386788585;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 8156U;
    tmp_tmp_msg_0_0.priority = 113;
    tmp_tmp_msg_0_0.x = -3870;
    tmp_tmp_msg_0_0.y = -18710;
    tmp_tmp_msg_0_0.z = -31568;
    tmp_tmp_msg_0_0.t = 8239;
    IMC::Brake tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 188U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.4072119824802205);
    msg.setSource(31161U);
    msg.setSourceEntity(52U);
    msg.setDestination(59423U);
    msg.setDestinationEntity(225U);
    msg.req_id = 24515U;
    msg.type = 194U;
    msg.max_size = 8856U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.047765800997176755;
    tmp_msg_0.base_lon = 0.3717897504190075;
    tmp_msg_0.base_time = 0.09370919267641042;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.6135841220214868);
    msg.setSource(61738U);
    msg.setSourceEntity(151U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(179U);
    msg.original_source = 36593U;
    msg.destination = 4256U;
    msg.timeout = 0.5798666141954812;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("IZNWEJNSQPTSJKFNPBNDUTUQFYIMGRVONMMVTZFGSRCTJNWEAGXHLNGERCKYEWKTLDIXPOLBZLUPTHGFKRCDYVOLQDIVRHZBHTDLDBVWXHOZMXDBREYVEMCCCUDYGAFMFJKSOYIDVUKSHAHMXPUPZUAGOOIAZXBMUNSPTYLWBVNWQYROCYKLEJAQQJAJJECFPRWIMWKGZESLZFPWWQXZUK");
    tmp_tmp_msg_0_0.lat = 0.4521801551440814;
    tmp_tmp_msg_0_0.lon = 0.6657031608175183;
    tmp_tmp_msg_0_0.depth = 0.004593001600965985;
    tmp_tmp_msg_0_0.query_channel = 29U;
    tmp_tmp_msg_0_0.reply_channel = 234U;
    tmp_tmp_msg_0_0.transponder_delay = 71U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.3337523278999689;
    tmp_msg_0.y = 0.26679322482259393;
    tmp_msg_0.var_x = 0.7466056923429264;
    tmp_msg_0.var_y = 0.4725371799366117;
    tmp_msg_0.distance = 0.06626421573672814;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.03506328391980129);
    msg.setSource(51004U);
    msg.setSourceEntity(100U);
    msg.setDestination(19434U);
    msg.setDestinationEntity(170U);
    msg.original_source = 22168U;
    msg.destination = 3258U;
    msg.timeout = 0.34757147613252926;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TVYLAIOYUKWGNJXSIUFHNFTDNKSSQMTLRHVAMWYOYZDWSECVRCOUHZBZEWENKVFHDTUKEPRPNCFTQQDXRPYLGCSBWEERFWIUXTQALGGBEGHGHKFJXPXGKOPCYVAGACFZXJKIDZQAURQVDCPQIYZTNBVZOLWODQTWRVGIDTYWIBOLRXYPOJZJXJAJFJRJDIMAAMVSKJMUGDCCUNOHNLTNSERLZFULXUFSEBHPSPBMIZBMHXL");
    tmp_msg_0.sys_type = 238U;
    tmp_msg_0.owner = 33107U;
    tmp_msg_0.lat = 0.7109981138592941;
    tmp_msg_0.lon = 0.8119105469870568;
    tmp_msg_0.height = 0.19961853233986493;
    tmp_msg_0.services.assign("UFQWXUJDZIBOMWRUSVMYAYNHPJEZXFUYILGTLAAQQCHBDNNAOCVBDZPAEMBVIYKTTMUEZXGETJBRPIZTCNZGKBSCWWHMAJXGURXQMSGQDYVVRLLQPELKNFSPCSZKEHFHQFRSXIKYAWDKARBDFYFDSTZLYXNNELVXFPZJCOUGBIYFKOVMMASWFYKRIHEQHIHABGMCJRGHMQGJDW");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.08624504384580378);
    msg.setSource(47411U);
    msg.setSourceEntity(253U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(125U);
    msg.original_source = 17567U;
    msg.destination = 47405U;
    msg.timeout = 0.4475316834027432;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.14406252974146538;
    tmp_msg_0.x = 0.9165459282370582;
    tmp_msg_0.y = 0.8067446916476543;
    tmp_msg_0.z = 0.7843186046821549;
    tmp_msg_0.timestep = 0.7889022054308212;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.876425703907422);
    msg.setSource(20095U);
    msg.setSourceEntity(245U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(207U);
    msg.type = 14U;
    msg.comm_interface = 61909U;
    msg.model = 45499U;
    msg.list.assign("JQWOTMVSATGLYEECUUUHMCFGKDWFUIDPIRLNEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.9324146414927359);
    msg.setSource(7708U);
    msg.setSourceEntity(21U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(58U);
    msg.type = 146U;
    msg.comm_interface = 31560U;
    msg.model = 55420U;
    msg.list.assign("RUENDTNYAJYHHAEBAVODGVKVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.800414181550491);
    msg.setSource(5871U);
    msg.setSourceEntity(105U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(156U);
    msg.type = 38U;
    msg.comm_interface = 12531U;
    msg.model = 31566U;
    msg.list.assign("NGRNQXGFWKHLIQLGBRDXYQKPXUFJXORIJCMEYHBAWPGOZDKIYWHGCZPAECHXPJVSPRUCCARGHXOTHUAVEIWHTQGKAJBFWMJISKAKWSFTPYKBUMEVLVKAOXAJKJGONSMRQYQJCEKUMWVYCEJUSFEVPLSBLQBBFPOZID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.8279080747667166);
    msg.setSource(14477U);
    msg.setSourceEntity(21U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(143U);
    msg.type = 135U;
    msg.req_id = 3847000982U;
    msg.ttl = 4199U;
    msg.code = 63U;
    msg.destination.assign("IEOQMEZMARWASUQINJSJRCJVRTTUPEOLUWYQSDRIYGCBHKMDMODFVTCXMBOGLBCKFVF");
    msg.source.assign("DLJCQYAXIQECIPOMYIGRBLOWCUXMYCVRXRKDTUHAVYKAGTXLDJHJTSGFSNYJAFZPRYOOOKEUBUNTTVDFBSXJZDALKBCXTVQILEPBAUQDECPHVIDOFRQRMGQQWZWWNWEEQTVSOZFGLTHSSGCDAHHILKTUYRVYGSIGAVNQWNKJZFKIUEAUTCEENORMJRHFJPLSCZPNKANQDMKDBHEJZMMGMZUXPBIMBRNSCFW");
    msg.acknowledge = 12U;
    msg.status = 250U;
    const signed char tmp_msg_0[] = {30, 43, 35, 115, 121, 121, -42, -3, -33, 19, 72, -21, 18, 110, 31, 101, 82, -3, 93, 124, -17, -27, 48, 7, -109, 45, 49, 58, 64, 42, 11, -25, -77, 7, -107, -37, -115, -16, -115, -123, -43, 100, 14, 77, 115, -93, -78, -108, 96, -99, 109, 106, -69, 108, 84, 56, -102, -85, 22, -49, -97, -66, 43, -91, -95, 112, 16, -49, -91, -11, -68, 71, -73, 105, 27, 53, 62, 79, 83, -55, -62, 26, -107, -119, 107, -102, -103, -86, 85, -104, -62, -102, -107, -52, 38, -78, -53, 39, 11, 14, 62, -53, 47, 55, -76, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.3951574552564142);
    msg.setSource(18370U);
    msg.setSourceEntity(189U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(193U);
    msg.type = 74U;
    msg.req_id = 914020553U;
    msg.ttl = 54887U;
    msg.code = 206U;
    msg.destination.assign("UZETGYJDSWQBFQSWJLMAFLMBYHYWPIQLAYUCTZSWTPCXRVDF");
    msg.source.assign("JWNVYUYJQTPTXKDEMXSALGHICYHHOCUKKWKCVRDWVBPVVTQTYEYUVBLRRTVOFMTMJJMUJKBHFGKONKIZOVIAINXFQBXGDYIPPDFIAWSMQZPYEBLFUDHSVRTMXNY");
    msg.acknowledge = 0U;
    msg.status = 133U;
    const signed char tmp_msg_0[] = {119, 121, 21, -24, 58, -5, -1, -89, 71, -117, 108, 85, 13, -110, 103, -97, -61, 17, 36, 2, 19, -121, 37, -92, -25, -80, -106, -10, 13, 65, 38, 97, -51, -98, 17, 110, -99, -9, 3, -93, -123, -25, -17, 52, -112, 69, 80, -85, -34, 10, 43, -119, -124, 30, -44, -45, 56, 104, -124, 103, 104, 54, -14, 46, -84, 107, 92, -85, 40, 122, -65, 24, -93, -102, -25, -2, 25, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.8216856350799455);
    msg.setSource(65086U);
    msg.setSourceEntity(224U);
    msg.setDestination(318U);
    msg.setDestinationEntity(146U);
    msg.type = 248U;
    msg.req_id = 1827637208U;
    msg.ttl = 21239U;
    msg.code = 19U;
    msg.destination.assign("OGGCYAIECEYRWACEOVRXNGKYJTJUKMFWMANKMDKCDDFNWBGFZIXNHTBCZOPAYKCDJIDBINEYGHIYTEBXMTHPZFWMSMDIMCGHPZVNHKNVHXQSHFYBRKDT");
    msg.source.assign("ZHNYPOYGZHKOBROHWRTWIUFQBNXYIQKXWXNGBRSPOCVKMUVGOHEZMUMJQJTKRXURDFAGDMESVWVCLMWJQZOENXCSUFFANFHTTBKSILRTTSKSSHJWTMCGLEMHVBJLHKAXJTBGYFPAGWSUGQIEMIYLPIYZAVFUKSUELFXZAIDQBDJNOJCYURPBADLDHXVQWYKBIJCNDNSGJOYECPATVNDF");
    msg.acknowledge = 163U;
    msg.status = 76U;
    const signed char tmp_msg_0[] = {74, 25, 60, -108, -71, 25, -67, -20, -64, 86, 69, -79, -123, -43, 34, 123, 14, 54, 126, -26, -102, 53, 120, -28, -30, -67, -83, 116, -69, 52, -46, -48, 57, 106, -93, -72, 3, -119, -41, -20, -117, 75, 85, -100, -123, -79, -52, 14, -77, 4, 117, 106, 118, 12, -32, -6, -23, -27, 42, 5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.34919749017227897);
    msg.setSource(26493U);
    msg.setSourceEntity(84U);
    msg.setDestination(6797U);
    msg.setDestinationEntity(42U);
    msg.id = 210U;
    msg.range = 0.4788526154957794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.6782904884584352);
    msg.setSource(15861U);
    msg.setSourceEntity(252U);
    msg.setDestination(65467U);
    msg.setDestinationEntity(16U);
    msg.id = 138U;
    msg.range = 0.8145021635339158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.8568617625049832);
    msg.setSource(56316U);
    msg.setSourceEntity(197U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(239U);
    msg.id = 117U;
    msg.range = 0.6310596722255596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.446582754391909);
    msg.setSource(11092U);
    msg.setSourceEntity(199U);
    msg.setDestination(17025U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("PBTISCKXNHFSQSQWUCSMRXYLRAKHUWBLJDDGHCCSULNVSMNHVDRTNILHXYZCRWPJEUZETLDHAMOILADBBCYNGLPMKIVZRFSJQJQVHYYFYNCQHYUCXOIBCQYFYOQOWMAVKVMUZWZBODWZGVFXGEANISVLOZGIDZZIRFSDAJYIQWXBEGLKTLFGRKMDOQCTMFTPKPGVNGJJERBJEAIGPPMT");
    msg.lat = 0.8625511771585136;
    msg.lon = 0.8884192650649775;
    msg.depth = 0.7900299125552953;
    msg.query_channel = 149U;
    msg.reply_channel = 208U;
    msg.transponder_delay = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.635846353872891);
    msg.setSource(29922U);
    msg.setSourceEntity(140U);
    msg.setDestination(59434U);
    msg.setDestinationEntity(60U);
    msg.beacon.assign("YJSNQFVYPPSZVLPJEEFBOKHCXJBZETKBWQZVHOYASHLKKCXJQOIMODAUYIBMQCXECODFJKACRHXPOBGWJGZAXZUAWDAJZTMJQKILMHVJCWCHCOISWDTAKMRNIYXMEGQMGPSRHFBDWVNPFIFYQCCWBRYVDBPTDPROLTERXUMRSTSU");
    msg.lat = 0.9424486277896827;
    msg.lon = 0.14855264330165874;
    msg.depth = 0.244639803241252;
    msg.query_channel = 130U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.6692099963426619);
    msg.setSource(12666U);
    msg.setSourceEntity(200U);
    msg.setDestination(51798U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("REBTNXPJVMKWAWUDGNLMVEPJQXQJAYOBULBGEFTXXKNPTRBCDROIISNQUFCGJZFURYUVMYXGCVHKSVHKUFQJKLKROOCWEMJTEZNKMYRMDNBHWDOMALEEELHIYANJADEAAKGDBHZMGVHRSKJFZNRUTPIOLJWXFHBPOIOTLHBQVDNZMZHOFFYWXXSASPTQDIVLKCLMEIBVSFGDQDIY");
    msg.lat = 0.9378424024272508;
    msg.lon = 0.20174587939174748;
    msg.depth = 0.6027664395938779;
    msg.query_channel = 26U;
    msg.reply_channel = 98U;
    msg.transponder_delay = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.07554499401584858);
    msg.setSource(55757U);
    msg.setSourceEntity(50U);
    msg.setDestination(51710U);
    msg.setDestinationEntity(65U);
    msg.op = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.27862781315971696);
    msg.setSource(49806U);
    msg.setSourceEntity(2U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(69U);
    msg.op = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.4653138143736847);
    msg.setSource(23092U);
    msg.setSourceEntity(137U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(70U);
    msg.op = 176U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SUUADLKINTAEQQFSCGTIXGDSQHHPJAJPJYXCXYDJYODUJBABNNYOTQBIONSJKQVUMSSDUGPFUIHVDDQBAKANYTVAYPGPONRYCMERLBUOFBZLBJRTMEJEHHKSHLDZVEHSSZARAMKRNXKLHMZGPJKOIWOERQXIZWTVGPQFXDH");
    tmp_msg_0.lat = 0.036857916771824595;
    tmp_msg_0.lon = 0.624644292691438;
    tmp_msg_0.depth = 0.5560224621838883;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 200U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.00802453708147477);
    msg.setSource(7062U);
    msg.setSourceEntity(39U);
    msg.setDestination(36342U);
    msg.setDestinationEntity(41U);
    IMC::GetParametersXml tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.7462753181514107);
    msg.setSource(8299U);
    msg.setSourceEntity(102U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(173U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PGJIMJZSEKFOZDCWANQMMKYHJLAGFZKFWCDTRUNRVIJNNEDLGBPYGLMCDBPPRVIFZNWOAZFFQBNUWABXAXCBIOXOIYXHZGYHWIRJSPHJULCXRYUBHSKDQVZPEZGTUCMPU");
    tmp_msg_0.dest_man.assign("DRPYIKBBINVGGALQJXSSRICHPTTUFJAMCEJOBADPXJOPAEQRHENWITCHASYCLIWAXBVXKJHWVTGFADZBVTPIICYGGKAWJEHIAGDUFZEQMZEXUMEEADTKCCQHRZRGJKCWSVBBEMYYKLRUYWMZFCNVLGXDXFKWWNMYUKHYLBDQVQSOFHZXTPSJSLSKGPFZLMNMRCZRUOQMIYRGLTOQNUHT");
    tmp_msg_0.conditions.assign("TBZKIYESEVFHCZCWZICZVVNBNRZXUWNIUIMSKJFTATIGRAESRIELOMVDXVYQHGLKPWGGJCQLLWFYBRBFRTG");
    IMC::UsblPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 35331U;
    tmp_tmp_msg_0_0.x = 0.48244160534378233;
    tmp_tmp_msg_0_0.y = 0.6276401242908926;
    tmp_tmp_msg_0_0.z = 0.8094006218906836;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.794120695572565);
    msg.setSource(25088U);
    msg.setSourceEntity(217U);
    msg.setDestination(994U);
    msg.setDestinationEntity(33U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 62875U;
    tmp_msg_0.lat = 0.9945886815650858;
    tmp_msg_0.lon = 0.999826334968759;
    tmp_msg_0.z = 0.4255477827259979;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.speed = 0.11602955552879357;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.bearing = 0.745514815255039;
    tmp_msg_0.cross_angle = 0.6703553962095244;
    tmp_msg_0.width = 0.5333568285714075;
    tmp_msg_0.length = 0.9851296086624352;
    tmp_msg_0.hstep = 0.7435901989133219;
    tmp_msg_0.coff = 122U;
    tmp_msg_0.alternation = 80U;
    tmp_msg_0.flags = 52U;
    tmp_msg_0.custom.assign("XSFNUMKCFQNSUDSEYKKJRMOLZMXPAIAQYIPWFBMBU");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.19970414521488045);
    msg.setSource(29491U);
    msg.setSourceEntity(253U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.2666968468579092;
    msg.lon = 0.18571125365005503;
    msg.depth = 0.22877891991919586;
    msg.sentence.assign("BWAPGEIQUFAAKKGLDTCANWHZWQQFYXNUFJXLIZGXWGUUDTCTWSPHDCRLLSJLIVFRYTNOYMKRUEMGPLDWECNJTTKFHKKEYLGSRDOMCFHBEXRKBGDADCMIUXPIFPYBIQACRJCVTBZSBKROUPFJWTDNAJCLHRMVZVYCE");
    msg.txtime = 0.6092471071725114;
    msg.modem_type.assign("MRJUDYSVNINARLBODPW");
    msg.sys_src.assign("TQKIVLOOYJXRLGJBLPRDUQMBNWSYUHNHEPRVIZXZWRNGXOAFJKNMAFKYWZDIMODYTGFSVWTWPADURFTKSDJIDAHMZTHEVDJDNBMNHEASYHYESVOLELXPGIAQYLENNSIPWNUMECPMKPKCOZACVEGUHSCVGAQPUQMLJRLJYTBVXTRQFTVJQJZPXFLBPJKI");
    msg.seq = 26128U;
    msg.sys_dst.assign("EZPVBLVGTJUHAIYWXPZETPLBYYSLOMIYSNDNFJVPZSXWQTZHQQCXFSMXDYFJGVAFWWNOUBFRMYNBLFAIUHRUDSQEHXPBIKFHETGNWKCVJXBFAUUG");
    msg.flags = 117U;
    const signed char tmp_msg_0[] = {118, 77, 2, -2, 121, -126, -49, 1, -79, 64, 54, 44, -21, 25, 104, -96, -75, 123, 19, -104, 79, 49, -77, 107, 79, -56, -71, -119, -40, -8, -50, -99, 87, -110, -91, -77, -84, -46, 29, -95, 9, 59, 37, 81, -34, 88, 103, 79, -17, 125, -115, -2, -119, 119, 94, -57, -92, -66, 51, 114, 50, 34, 55, 83, -83, 44, -25, 46, 102, -124, 14, 27, -67, -19, 21, 106, -60, 79, 126, -67, 95, 17, 114, -117, -95, -111, -18, 32, 47, -18, 57, 72, -38, 30, 78, -24, -114, -122, -124, 36, 113, -7, 66, -60, -76, 18, 32, -52, -74, 98, -90, -53, 107, -105, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.29477358502995643);
    msg.setSource(18955U);
    msg.setSourceEntity(47U);
    msg.setDestination(27382U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.7573236855757558;
    msg.lon = 0.8053015795432319;
    msg.depth = 0.030903573087860514;
    msg.sentence.assign("FWSNWYXFSPIMHXIOZTLUQCDYSEQNROMPNUCZKLVGJCEXGIOTFVMPVLETLDZQZZTWDEZBHDETAEUMOAHXUZOJS");
    msg.txtime = 0.559080809033264;
    msg.modem_type.assign("KYXNMSZENOOMSFPDFVGPNX");
    msg.sys_src.assign("AFZASESUFSDMKRPRDTZNTAVOYUQLSCXVILIWUPHZZQVFBXHGUREYOBQSAHRLCPGDFFBCNMEDMDSCGDHVGJGGULEKAPZPDRJTIQHBYAPVHTBDBKAVEYWEJJNSTGLWMWOFXIXCSZPCNUNZWZLMTWNELAVJNBLCKHJISUFFMXZKKPQIKRTKWCPWYBIKVGMJVFJQX");
    msg.seq = 46821U;
    msg.sys_dst.assign("YZMZCNQPANIGTZYEYOCCAVTAHMMUMOESXYVLWUCELCLZJEOYETDHAPRNPNUTRKZBRXKERYUFNYAIGHQRSTDKPSTIXPDODPWZQISLFPCOGATBVSQKIVQJQSJIETZZLJKGRULNWJCOFIQVWAWDMGRUZQFJUHYSGJIOGRAHDAYHGFBNHNNXBJJFBXRGPXHMMBDCUESUTVNUVXWSFIDZOEKMGTEXLVXF");
    msg.flags = 48U;
    const signed char tmp_msg_0[] = {110, 108, 117, -121, -74, 88, 39, 55, 11, 82, -114, 63, 102, -23, 123, 49, -116, -23, -32, -9, -44, -88, 6, 60, -97, -71, 90, -117, -92, 75, 36, -49, 29, -103, -61, -38, -34, 67, -90, 9, -58, -17, -62, -1, 43, 64, -32, -102, -14, -25, 47, 90, 76, -66, -116, 124, -27, 118, -69, 14, -54, -116, -39, 48, -12, -34, -4, -103, -100, -95, 71, 6, 75, 1, 29, -27, -36, 120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.2722069615180325);
    msg.setSource(56126U);
    msg.setSourceEntity(77U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.9638156596029224;
    msg.lon = 0.7527649515262413;
    msg.depth = 0.018437115066907706;
    msg.sentence.assign("KTBUPMBRNEAHFICQMCHUJDMDYBDQPLVBJSGHGZURDRRGVKIXZHUAYWVZNZYDNKQAFNCOPJXFQGOJJCYXTGJBXKEETLFCPRENIUVSDTDQYKEXMTEMLMSIOS");
    msg.txtime = 0.4687397877316466;
    msg.modem_type.assign("ZLSEOWRTJKOAWAQXMHGIKGHCBIUUFRDSLHJATZSJPLEXSFXQGCMURNJAUKFLBWVAZXORQQSNSJMRVDNKHUEE");
    msg.sys_src.assign("UTGZCVAPXTZNBBRNGMEXCPSZPEPGUAVQCQFWXXNZLETCKAZJHOJDIFQHDVYWVRUXUEFCQJDJSGPGDLXSKECVK");
    msg.seq = 16096U;
    msg.sys_dst.assign("TKPNZVWTZXEGOIMSGUTLQWNFHXNNZLLMEXGWWVEKZXD");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {-60, -64, -100, 34, 70, 44, -125, 85, 117, -74, -73, -7, -80, 107, -58, 55, 99, 32, 90, -104, -2, 52, 24, 21, -24, 5, -64, 91, 110, 43, -99, -64, -95, -82, -69, 54, -120, -88, 14, 32, 112, -13, 121, -46, -116, -112, -120, -2, 47, -89, -117, 37, -128, -72, 113, -23, 19, 21, -103, 112, -126, -115, 79, -109, -29, -57, -71, -30, 118, 33, 2, 126, 16, -118, -51, 63, 60, -53, -84, 126, 105, -91, 48, 86, -27, 66, -84, -76, -106, 28, 37, 18, -81, -12, 31, -123, -34, -101, 31, -9, 42, 100, -61, -100, -113, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.87964509149408);
    msg.setSource(49403U);
    msg.setSourceEntity(244U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(71U);
    msg.op = 134U;
    msg.system.assign("EAPCYJAJUPCELBDLMRNMLHPQVRIYOJKGVQTKGDNIJVNGAEDRHLGTKOQXDXFSCKIGGSOGIIQTQESJHTCYSCWJRQGKMTEKBOJEXGMEKOIJMAADUZFIH");
    msg.range = 0.8953142957343981;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 11U;
    tmp_msg_0.range = 0.6666425931771938;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.5581607134520052);
    msg.setSource(27033U);
    msg.setSourceEntity(88U);
    msg.setDestination(65132U);
    msg.setDestinationEntity(123U);
    msg.op = 114U;
    msg.system.assign("CDVZHRQQAZDGZFNJYSWBYLRMZMQVKJRZZSXRUXGYFYAUOFPWDLSXNHMFIMHIRBTQNKMEPJUTMKIGCQGSOPPAEDMQVVIGIHAACTDOGHWYJEKHBBBVMIXFFTKCPEOAANKPDLSNPNPRBHQTFNSETOZCYAUABUTGXQSTOQUNTYIMRYCHDWJWWVBHTGYOLVRSFKVFUDLSDZUBXZLUFWIXEUVRVLYKNEEWJZCCGCJLMJE");
    msg.range = 0.7081843918084963;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("JLEDUDQGFZKRLMUWBZXZYTHJGHBZRKAIYBAJRVAYYEERJSRQFESBOUYBSIGGDGMWUPJUEGDFKKGIDWCINGXBEAXG");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.2702258259846638);
    msg.setSource(27980U);
    msg.setSourceEntity(153U);
    msg.setDestination(59636U);
    msg.setDestinationEntity(36U);
    msg.op = 250U;
    msg.system.assign("YLXWJHKARZIPYCBCACQWXEIERNTXOQCMFBMKLWRAXBNVGDUUJHLWEMRJJY");
    msg.range = 0.9375665785515397;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 156U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("YRXWIHNGWLDIPGAAOHWPUOMXVDWMXZGZCKLTDTDIJANZBIOJPRYTCDSWIYWMRGERKIQSSTVPQJAZEGJXHQAZZFKOJMACWHQNAKUTOVONYAHEYPEQHTJQPJVBFWGHYUJSZZDARNUIHDMLSQVFPXPVELKXMEUEDYDBLLZNGFHQUPNXKBNCBGLUBPYTIURXLHFRVESBMTRMCQ");
    tmp_tmp_msg_0_0.description.assign("MMOBNZUJDLSFHXGQEKSABPJAHUMSDNIIACPGDSUAXECLKTATNMKIYEKFIGWPRDFJXXLFBRUGURXYGHZVRHJZBSQOYRFBWXHATJWTMQEVCTBTOKUJJ");
    tmp_tmp_msg_0_0.vnamespace.assign("KMJQWOETTYAJBHKWZRTOOMWYOUGPDKROYXAXCRPJRAQSLWXEYDWMQXXXZXNZTJDBHGIFDHDCASFPIGNPUXBFUYLIRZVKBZWNCKLJCLPJKESUBWAYTPJKDQFABBMLCBOIUQEHSGZNOYEEJHUSVRQGMIECBLYAPMFARVKMCWZLSLHFDHTZXICNIFGTJUHUIDDGJRFNDBOHTHEVPSVFLA");
    tmp_tmp_msg_0_0.start_man_id.assign("UASCFDKYDJRKTUEBOBEEPWJXFIJQKWSYWLPHGWYTBQEFNENFEXCTZPCZTIPPGIHXHBUOIQNBQVRYKDZBFLCNJHCVQHMKUZWUWMGOIRXS");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("XFNLDWSFIQRZKJIYMOFDGQTQVGQHMAWSIIRTGPJQHVSLPHXCIKPKBSDEGNANQWYAAOSLBZNSPOTWHXJPVLMZGLFJJPXFFNCAUWXAJCJCHHBENPNJRVRSOYXTFBBPUWRUOQLXUWMLHOMIVTWBCXCSCIQDCGGANVHDRTMUWEYFDVCGYUDZDEHQWSUKEAIBLFTMCEZRYTMEL");
    IMC::Drop tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 49377U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.18489256049014013;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.7334351761821245;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.10341212566753655;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 8U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.9322973525518783;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 246U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("FKQTTABZRTWHUUXDHWIBRAIKWGGNCXNTXAHJUTCS");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::LedBrightness tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.name.assign("HMYUHCJHAUHBRTPTCJLALUEZWTWVSYWZYVKXPTSDBULFPZPDRMIATOLFBXFKRUDHVCEGWXGBKEWXIZMOUXLDVAYSNDIJFKRJEEPAJFHBVNQQGXMEAGNYYLGKBSCZHNRXOAIPGCNZDLCOCMHKINULIBQMWSYWSBOAHTTFQOSPQMQUAGMQFYUCDNZVOREHSIBJDVGIWTLJWMXSATFFVJOYNDFRLIGCJEMUX");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.value = 71U;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.3945198568469672);
    msg.setSource(35088U);
    msg.setSourceEntity(44U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.29764375932665577);
    msg.setSource(42582U);
    msg.setSourceEntity(200U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(71U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.6926613493365809);
    msg.setSource(34802U);
    msg.setSourceEntity(70U);
    msg.setDestination(54285U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.5227539216172393);
    msg.setSource(48623U);
    msg.setSourceEntity(143U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(91U);
    msg.list.assign("FBMXCRNJBIUAHZQKTAFEOGMFLBYUNSIZEDVOVYZJTSGPVCQIXCWNLVDLGIEOKASIIROXGYAUPPAFLIKTMKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.4346562719349244);
    msg.setSource(47873U);
    msg.setSourceEntity(121U);
    msg.setDestination(48840U);
    msg.setDestinationEntity(16U);
    msg.list.assign("XLTHGYPLEQVYUBZTDIYXVUSOFUPYFBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.27945709384357165);
    msg.setSource(9606U);
    msg.setSourceEntity(219U);
    msg.setDestination(49124U);
    msg.setDestinationEntity(26U);
    msg.list.assign("SPZWMFZULOOMPIJFMWKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8662704448710673);
    msg.setSource(55170U);
    msg.setSourceEntity(8U);
    msg.setDestination(25597U);
    msg.setDestinationEntity(42U);
    msg.peer.assign("AQRKSFPFKTTUPNARVBJBZDTPDUNBWAVPJEANVLVYCNLFZDGALJZPWHIOJQHTFPHIMSWGXZVXISGKYQYXBNAWHSKISQIZFKCRWDQYPXYSCHJOJBBZZXHIQEESOKWRFW");
    msg.rssi = 0.33712611640767565;
    msg.integrity = 41769U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.21657360991623242);
    msg.setSource(52529U);
    msg.setSourceEntity(118U);
    msg.setDestination(2226U);
    msg.setDestinationEntity(111U);
    msg.peer.assign("UTMEAVBBACJKRLEDOKNSGCUSQNV");
    msg.rssi = 0.44405884193750034;
    msg.integrity = 5050U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8278598371132507);
    msg.setSource(20899U);
    msg.setSourceEntity(167U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(174U);
    msg.peer.assign("MPQOTJHOSYFWUVUDCQXFXJJRRXSYLUVRUSCRNVKJUWMUGKSIPRLNFZPIOJVVEDABYKMDZYMHFNUGIROGPWS");
    msg.rssi = 0.4795926230635127;
    msg.integrity = 18831U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.9189183631290682);
    msg.setSource(63943U);
    msg.setSourceEntity(244U);
    msg.setDestination(39358U);
    msg.setDestinationEntity(136U);
    msg.req_id = 32211U;
    msg.destination.assign("GCPSCMXKYILJFAPEPPUJKIRZERKSFFNV");
    msg.timeout = 0.657309590151586;
    msg.range = 0.8167349439212251;
    msg.type = 25U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZVGSASFWPLBYOXYNNLVKJAYUWHQNIMWD");
    tmp_msg_0.visibility.assign("OBYPHAVEEMDDCZIXWBIJOTJXAOUYUZJKLKKKGLQLNUIKCTSFKIVSUREVXBYSDVCLAILTFXNSHAUDZDMAPSFZWQNWEWRHYIRQMECLXIFZUWFNRTTMRMQEKEJNKCBAUUOGCNXWHHOQMRAYGUFPLWBNDJMKFOQHHHIQWXGDDDGBMGWGYTHNBJPSQGQSOOJEZRPNWMRTOPPTMQFLVALBTJNGPSEVZYSVYRF");
    tmp_msg_0.scope.assign("WBYOPRQIRFKQPAOHSCQRJADGNMBXXUXYPIORMSWBPEYOAMSLJPCSDHMZZAOFARIFLEUENSUDHDHLUNVNKWGTECYGLZXUOWCTHLEGIYTPWDDQINRIXGUKCWBFOHCIJQWSMYOBZGUCPNNQXHZNDVMQMYDFNMCVTIFKHLEAVKEARIDHJYMVVYZZTUBAEJFRFYLPJUJH");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.4120203304771719);
    msg.setSource(1353U);
    msg.setSourceEntity(140U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(7U);
    msg.req_id = 47641U;
    msg.destination.assign("ZNDXPKTPZSVD");
    msg.timeout = 0.05839771187097054;
    msg.range = 0.644408045775188;
    msg.type = 91U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 4U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.007065590473378847);
    msg.setSource(28152U);
    msg.setSourceEntity(55U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(166U);
    msg.req_id = 51740U;
    msg.destination.assign("RPTRPOQECKNXVVKMMIOGSPDKXKNVFVWSUSLYGEBTOIZFKOTDIRTUAFXDADCGTKRNELAOCJAIQYWRVQXBXOHQEBLYKEJJRSVJQMBIGYCIQVEDRJAHZWWWAPZGWUELTHYCNUHCZETZZFBGBYYQJEGXXPAHSFRUSGNZMYOUGHN");
    msg.timeout = 0.9845365362092051;
    msg.range = 0.7841857267006644;
    msg.type = 129U;
    IMC::StopManeuver tmp_msg_0;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.9664163565962544);
    msg.setSource(43233U);
    msg.setSourceEntity(128U);
    msg.setDestination(64159U);
    msg.setDestinationEntity(33U);
    msg.req_id = 39832U;
    msg.type = 192U;
    msg.status = 99U;
    msg.info.assign("ZRVBNLMLXVAAGG");
    msg.range = 0.8925111085564652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.46087020500252684);
    msg.setSource(56123U);
    msg.setSourceEntity(82U);
    msg.setDestination(44212U);
    msg.setDestinationEntity(172U);
    msg.req_id = 45686U;
    msg.type = 11U;
    msg.status = 188U;
    msg.info.assign("YAILFNSYHODVYRXZZCIPQWEMRGAVUSCTFSIOFLDIIONGIVAALURKYEMCPDKMGYMHGNJAMQXCBMYCASQWPIRFGQRJYGRRWDXDJVXAVABLWFNEYRFQXVBCPPNOPSSZOWJCSKDTLTZOJDWNT");
    msg.range = 0.181807471000884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.4695203064772301);
    msg.setSource(20410U);
    msg.setSourceEntity(46U);
    msg.setDestination(64788U);
    msg.setDestinationEntity(176U);
    msg.req_id = 2448U;
    msg.type = 174U;
    msg.status = 217U;
    msg.info.assign("BEUVKIYVUZUIBXPAFEPEBTHNUYOXFTWBFXFIWRALDLZLMZVRCMAQZVYSAJZTDCHPKMTMNSIURLOYDPEKZGDOSGUPLWHQQBJXOJFBFMUSCRVPUYGRLASHXWJQHVSGHJDYINHRHADQOENEGBIMLKGCGESUXNOONCOCAHNTETTOMRIKJFWFUYZ");
    msg.range = 0.2327180863466557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6840896297498269);
    msg.setSource(33199U);
    msg.setSourceEntity(41U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(193U);
    msg.system.assign("KZAATADULSJCFNMNXWPAGZ");
    msg.op = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.31397650476337546);
    msg.setSource(34262U);
    msg.setSourceEntity(67U);
    msg.setDestination(26942U);
    msg.setDestinationEntity(62U);
    msg.system.assign("JSYZYPCXIGSUKOPKJMXCWFCDZBQGJVTVGCRISETKZUXVVCEEQNJFOAWALLGUBPMIMHFCMDDOBOOSLHANFCJLSFQLNRURDYUPRZGEEONRVJYSNQOEYAGDHVHQAQNMZSQTAVHLKARNSJDMEROCBDKPSBGBOUWTDNYFFKBXNVTFLAKZUDFBKKGXWMUQWJJZXTXVZHGZYEWYZIWPTIRIFAXWGQWERB");
    msg.op = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.5892394803912517);
    msg.setSource(64137U);
    msg.setSourceEntity(43U);
    msg.setDestination(20566U);
    msg.setDestinationEntity(197U);
    msg.system.assign("ZKRNGMWSRYXRHFGBPSDOQNEFPBGNTTXUOYMIUWRHVEHOCSPBIAZMKJZHACXJWANSEBVQZXRZWAENZSUOBGKFGGTQNKPBXKACBFGYSNLEBLHOSCVXXJXMQQEJTLRMUKEKNTDAIWCADVSIZMQVFOVQPXUOTZGMKYSEYQMVG");
    msg.op = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.3611305453858078);
    msg.setSource(36438U);
    msg.setSourceEntity(32U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(198U);
    msg.value = -20990;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.38321502988172684);
    msg.setSource(4341U);
    msg.setSourceEntity(70U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(221U);
    msg.value = -14350;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.20694125005529562);
    msg.setSource(37176U);
    msg.setSourceEntity(51U);
    msg.setDestination(10934U);
    msg.setDestinationEntity(78U);
    msg.value = -22608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.004666578161636958);
    msg.setSource(18774U);
    msg.setSourceEntity(185U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9715572241069259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.19666233482128903);
    msg.setSource(3971U);
    msg.setSourceEntity(101U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(83U);
    msg.value = 0.432533082501665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.278085351452211);
    msg.setSource(25869U);
    msg.setSourceEntity(91U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8303788813069467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.21392420504982101);
    msg.setSource(21201U);
    msg.setSourceEntity(53U);
    msg.setDestination(16722U);
    msg.setDestinationEntity(95U);
    msg.value = 0.7091667896541282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.48328161122642155);
    msg.setSource(33161U);
    msg.setSourceEntity(136U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(162U);
    msg.value = 0.42612103585806715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.6967009399445144);
    msg.setSource(12667U);
    msg.setSourceEntity(164U);
    msg.setDestination(39874U);
    msg.setDestinationEntity(248U);
    msg.value = 0.890228889137416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.9321244265344358);
    msg.setSource(16112U);
    msg.setSourceEntity(140U);
    msg.setDestination(62832U);
    msg.setDestinationEntity(147U);
    msg.validity = 25056U;
    msg.type = 80U;
    msg.utc_year = 7215U;
    msg.utc_month = 13U;
    msg.utc_day = 132U;
    msg.utc_time = 0.18364612580703876;
    msg.lat = 0.9199095172252091;
    msg.lon = 0.8196119257689696;
    msg.height = 0.132722440378493;
    msg.satellites = 55U;
    msg.cog = 0.9584688267177056;
    msg.sog = 0.745028291393089;
    msg.hdop = 0.5425940622061826;
    msg.vdop = 0.3288762466216745;
    msg.hacc = 0.1550230990495327;
    msg.vacc = 0.16269856620741674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.8280072739244825);
    msg.setSource(56344U);
    msg.setSourceEntity(211U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(117U);
    msg.validity = 52660U;
    msg.type = 10U;
    msg.utc_year = 57966U;
    msg.utc_month = 81U;
    msg.utc_day = 135U;
    msg.utc_time = 0.9220301576949533;
    msg.lat = 0.5177335449745433;
    msg.lon = 0.6040392823578228;
    msg.height = 0.2950177787995546;
    msg.satellites = 118U;
    msg.cog = 0.7849307627759319;
    msg.sog = 0.10669693021739834;
    msg.hdop = 0.5418852100999256;
    msg.vdop = 0.6611814142672922;
    msg.hacc = 0.14390709034529703;
    msg.vacc = 0.21518455367059053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.38850805043712056);
    msg.setSource(21741U);
    msg.setSourceEntity(179U);
    msg.setDestination(41379U);
    msg.setDestinationEntity(217U);
    msg.validity = 39911U;
    msg.type = 99U;
    msg.utc_year = 47012U;
    msg.utc_month = 111U;
    msg.utc_day = 157U;
    msg.utc_time = 0.40942198222264103;
    msg.lat = 0.033073522978370296;
    msg.lon = 0.9289865801953446;
    msg.height = 0.6437828369574368;
    msg.satellites = 38U;
    msg.cog = 0.45141558116775105;
    msg.sog = 0.6423426609830477;
    msg.hdop = 0.7778915831114981;
    msg.vdop = 0.1534400092565842;
    msg.hacc = 0.7429480576200043;
    msg.vacc = 0.9997859727458843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.6416723357873682);
    msg.setSource(18183U);
    msg.setSourceEntity(13U);
    msg.setDestination(27665U);
    msg.setDestinationEntity(37U);
    msg.time = 0.40775316047249077;
    msg.phi = 0.021101077732341156;
    msg.theta = 0.08668263077695115;
    msg.psi = 0.619359519407746;
    msg.psi_magnetic = 0.9237766904857718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.2508411132357933);
    msg.setSource(33419U);
    msg.setSourceEntity(177U);
    msg.setDestination(47873U);
    msg.setDestinationEntity(144U);
    msg.time = 0.8898084241718994;
    msg.phi = 0.48200057131899676;
    msg.theta = 0.3363979292821808;
    msg.psi = 0.6411035956636384;
    msg.psi_magnetic = 0.7134988761031431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.8605923074921498);
    msg.setSource(31124U);
    msg.setSourceEntity(88U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(130U);
    msg.time = 0.49476013589872125;
    msg.phi = 0.14420349197208915;
    msg.theta = 0.0542991792051124;
    msg.psi = 0.9005083074454739;
    msg.psi_magnetic = 0.5586164906344215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.24689515117046723);
    msg.setSource(37627U);
    msg.setSourceEntity(100U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(88U);
    msg.time = 0.6715571229459536;
    msg.x = 0.21931323650319812;
    msg.y = 0.43615679128015616;
    msg.z = 0.5887027366506947;
    msg.timestep = 0.244886034199296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.25858173973657617);
    msg.setSource(29588U);
    msg.setSourceEntity(212U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(40U);
    msg.time = 0.0973576624723883;
    msg.x = 0.7433360628433444;
    msg.y = 0.13395639451957064;
    msg.z = 0.9475143163783234;
    msg.timestep = 0.38394135406379015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.6499231081139538);
    msg.setSource(23903U);
    msg.setSourceEntity(106U);
    msg.setDestination(17873U);
    msg.setDestinationEntity(163U);
    msg.time = 0.5971775101164198;
    msg.x = 0.5809066774592189;
    msg.y = 0.4778833158285274;
    msg.z = 0.9054389334576217;
    msg.timestep = 0.4216316375230885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.03442872549347753);
    msg.setSource(46550U);
    msg.setSourceEntity(152U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(60U);
    msg.time = 0.7649034808135144;
    msg.x = 0.9068085178468139;
    msg.y = 0.992040121913774;
    msg.z = 0.29818932686968735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.22602413401326216);
    msg.setSource(18314U);
    msg.setSourceEntity(52U);
    msg.setDestination(852U);
    msg.setDestinationEntity(155U);
    msg.time = 0.22949445929618073;
    msg.x = 0.3609909133829531;
    msg.y = 0.8046581965836422;
    msg.z = 0.7726574786290533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.7002433763383669);
    msg.setSource(46945U);
    msg.setSourceEntity(56U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(170U);
    msg.time = 0.4708304668649971;
    msg.x = 0.04483627961784287;
    msg.y = 0.020365870092038274;
    msg.z = 0.805600934420458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9853922840757262);
    msg.setSource(6240U);
    msg.setSourceEntity(169U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(202U);
    msg.time = 0.23749612762287464;
    msg.x = 0.9648037176085825;
    msg.y = 0.8623019979616313;
    msg.z = 0.1906827247660513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.7658351733465862);
    msg.setSource(11593U);
    msg.setSourceEntity(242U);
    msg.setDestination(31958U);
    msg.setDestinationEntity(188U);
    msg.time = 0.5541382140959741;
    msg.x = 0.7382464344243526;
    msg.y = 0.5003476416586177;
    msg.z = 0.708813580084754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.8980833407643505);
    msg.setSource(14761U);
    msg.setSourceEntity(150U);
    msg.setDestination(15632U);
    msg.setDestinationEntity(11U);
    msg.time = 0.1828093520030626;
    msg.x = 0.0479389507768494;
    msg.y = 0.5964661079841338;
    msg.z = 0.5397389006239536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.8960112931927157);
    msg.setSource(1182U);
    msg.setSourceEntity(215U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(188U);
    msg.time = 0.17118015210349524;
    msg.x = 0.9429573036463124;
    msg.y = 0.11271488434601118;
    msg.z = 0.8088803545278401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.3930639178911953);
    msg.setSource(16608U);
    msg.setSourceEntity(234U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(186U);
    msg.time = 0.32583397358749977;
    msg.x = 0.3676669487074884;
    msg.y = 0.5169594280536224;
    msg.z = 0.427588989603078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.35467307869299536);
    msg.setSource(35798U);
    msg.setSourceEntity(197U);
    msg.setDestination(19484U);
    msg.setDestinationEntity(5U);
    msg.time = 0.15430399526441296;
    msg.x = 0.5795023580185175;
    msg.y = 0.6225230132021081;
    msg.z = 0.26508770539504456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.5459533104579465);
    msg.setSource(57431U);
    msg.setSourceEntity(160U);
    msg.setDestination(31979U);
    msg.setDestinationEntity(160U);
    msg.validity = 108U;
    msg.x = 0.5150918160458646;
    msg.y = 0.5897577911231616;
    msg.z = 0.9063384933556377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.24353642971421308);
    msg.setSource(22459U);
    msg.setSourceEntity(133U);
    msg.setDestination(32156U);
    msg.setDestinationEntity(116U);
    msg.validity = 120U;
    msg.x = 0.14722339039347954;
    msg.y = 0.6956695317810404;
    msg.z = 0.0008594491506750401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.9767351132502515);
    msg.setSource(63611U);
    msg.setSourceEntity(138U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(153U);
    msg.validity = 71U;
    msg.x = 0.9784197378357042;
    msg.y = 0.836696102287678;
    msg.z = 0.08119081814858775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.11657869047815828);
    msg.setSource(52704U);
    msg.setSourceEntity(149U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(197U);
    msg.validity = 102U;
    msg.x = 0.9399814337726582;
    msg.y = 0.894391689278913;
    msg.z = 0.1621077952159451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.5227095311021935);
    msg.setSource(36289U);
    msg.setSourceEntity(156U);
    msg.setDestination(37366U);
    msg.setDestinationEntity(1U);
    msg.validity = 118U;
    msg.x = 0.5239873753079508;
    msg.y = 0.5095070798779284;
    msg.z = 0.12247360662813322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.5478282162205347);
    msg.setSource(36144U);
    msg.setSourceEntity(200U);
    msg.setDestination(36445U);
    msg.setDestinationEntity(235U);
    msg.validity = 131U;
    msg.x = 0.9678443674143997;
    msg.y = 0.318848518890653;
    msg.z = 0.46966672322318515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.43880073695320143);
    msg.setSource(60243U);
    msg.setSourceEntity(84U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(80U);
    msg.time = 0.033177283390964374;
    msg.x = 0.15585939884111533;
    msg.y = 0.8130105586580306;
    msg.z = 0.006124386048133368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.09309659981616047);
    msg.setSource(18525U);
    msg.setSourceEntity(76U);
    msg.setDestination(51989U);
    msg.setDestinationEntity(109U);
    msg.time = 0.5261399882043674;
    msg.x = 0.8222594483211232;
    msg.y = 0.4734541836551882;
    msg.z = 0.4029817207745029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.7542696075686212);
    msg.setSource(27804U);
    msg.setSourceEntity(12U);
    msg.setDestination(39028U);
    msg.setDestinationEntity(75U);
    msg.time = 0.5983932509005386;
    msg.x = 0.8283581823343128;
    msg.y = 0.5756189328001897;
    msg.z = 0.27841095783039604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.10592540459296984);
    msg.setSource(21942U);
    msg.setSourceEntity(109U);
    msg.setDestination(63017U);
    msg.setDestinationEntity(13U);
    msg.validity = 109U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9572195501545332;
    tmp_msg_0.y = 0.7095991999558118;
    tmp_msg_0.z = 0.47217303884529016;
    tmp_msg_0.phi = 0.3684956259850035;
    tmp_msg_0.theta = 0.901701465086619;
    tmp_msg_0.psi = 0.1659609563774137;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.15839332000838913;
    tmp_msg_1.beam_height = 0.46163431621225703;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7938599115122538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.27617866185124884);
    msg.setSource(21269U);
    msg.setSourceEntity(159U);
    msg.setDestination(31502U);
    msg.setDestinationEntity(78U);
    msg.validity = 31U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9458119377656905;
    tmp_msg_0.beam_height = 0.5347557354180632;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6083956300456881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.09779893706014087);
    msg.setSource(24657U);
    msg.setSourceEntity(182U);
    msg.setDestination(37841U);
    msg.setDestinationEntity(120U);
    msg.validity = 129U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.688322728599604;
    tmp_msg_0.beam_height = 0.1037690587099821;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1401452565821829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.6681591182881242);
    msg.setSource(14876U);
    msg.setSourceEntity(48U);
    msg.setDestination(44261U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9967238843650102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.632987194692131);
    msg.setSource(1529U);
    msg.setSourceEntity(56U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(229U);
    msg.value = 0.0929039417324723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.7283739669699074);
    msg.setSource(3166U);
    msg.setSourceEntity(16U);
    msg.setDestination(25793U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6630869935284371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.9714527267306903);
    msg.setSource(22349U);
    msg.setSourceEntity(15U);
    msg.setDestination(7037U);
    msg.setDestinationEntity(56U);
    msg.value = 0.321325787085011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.6749881019304448);
    msg.setSource(47629U);
    msg.setSourceEntity(166U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(96U);
    msg.value = 0.35553009190188967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.5770637601448327);
    msg.setSource(35852U);
    msg.setSourceEntity(214U);
    msg.setDestination(45328U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6966635183283143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.06840572462409433);
    msg.setSource(35740U);
    msg.setSourceEntity(108U);
    msg.setDestination(29957U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8391051920411869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9360254384995046);
    msg.setSource(13U);
    msg.setSourceEntity(247U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(85U);
    msg.value = 0.9296642256327667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.6003375961013564);
    msg.setSource(9541U);
    msg.setSourceEntity(2U);
    msg.setDestination(21774U);
    msg.setDestinationEntity(195U);
    msg.value = 0.5165307555299211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.30893349320578556);
    msg.setSource(19071U);
    msg.setSourceEntity(89U);
    msg.setDestination(10926U);
    msg.setDestinationEntity(80U);
    msg.value = 0.11173600940069162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.33745611377226836);
    msg.setSource(41741U);
    msg.setSourceEntity(190U);
    msg.setDestination(55002U);
    msg.setDestinationEntity(19U);
    msg.value = 0.47406516785877795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.0953589081907682);
    msg.setSource(63877U);
    msg.setSourceEntity(137U);
    msg.setDestination(55364U);
    msg.setDestinationEntity(82U);
    msg.value = 0.3255878606968944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.6383909128781551);
    msg.setSource(8938U);
    msg.setSourceEntity(83U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7820894926017883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.7127838617955081);
    msg.setSource(42381U);
    msg.setSourceEntity(147U);
    msg.setDestination(15210U);
    msg.setDestinationEntity(153U);
    msg.value = 0.4870801818709295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.827003334835643);
    msg.setSource(15635U);
    msg.setSourceEntity(120U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(104U);
    msg.value = 0.96610004652282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.6551880127791884);
    msg.setSource(26514U);
    msg.setSourceEntity(121U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4853177368397392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8905718227076279);
    msg.setSource(50239U);
    msg.setSourceEntity(92U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8631777043905199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.976275418475926);
    msg.setSource(34051U);
    msg.setSourceEntity(105U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(210U);
    msg.value = 0.2643641577173341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.3465714050847334);
    msg.setSource(25494U);
    msg.setSourceEntity(40U);
    msg.setDestination(9633U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7466159424449073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.04099976851803111);
    msg.setSource(35353U);
    msg.setSourceEntity(109U);
    msg.setDestination(11680U);
    msg.setDestinationEntity(214U);
    msg.value = 0.822200334177813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.1615632953715741);
    msg.setSource(32537U);
    msg.setSourceEntity(26U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6595863213795865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.8209753212613478);
    msg.setSource(30099U);
    msg.setSourceEntity(197U);
    msg.setDestination(41454U);
    msg.setDestinationEntity(26U);
    msg.value = 0.49514342669539335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.04406147417261386);
    msg.setSource(16856U);
    msg.setSourceEntity(208U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(8U);
    msg.value = 0.00744071925201284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.5904581419897684);
    msg.setSource(26140U);
    msg.setSourceEntity(8U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9532537953935255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.5006084180942432);
    msg.setSource(26656U);
    msg.setSourceEntity(218U);
    msg.setDestination(27056U);
    msg.setDestinationEntity(160U);
    msg.direction = 0.796686872499472;
    msg.speed = 0.08523666957144271;
    msg.turbulence = 0.0337719781478274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.792121112761037);
    msg.setSource(10271U);
    msg.setSourceEntity(245U);
    msg.setDestination(12359U);
    msg.setDestinationEntity(105U);
    msg.direction = 0.5514457433286974;
    msg.speed = 0.8086725625635993;
    msg.turbulence = 0.10390159357455508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.1379721859014571);
    msg.setSource(16208U);
    msg.setSourceEntity(40U);
    msg.setDestination(41314U);
    msg.setDestinationEntity(6U);
    msg.direction = 0.616398811917632;
    msg.speed = 0.1437637635830321;
    msg.turbulence = 0.3668245862955062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.27439830517589303);
    msg.setSource(24965U);
    msg.setSourceEntity(216U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(12U);
    msg.value = 0.06812174015120753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.48104322033365354);
    msg.setSource(46374U);
    msg.setSourceEntity(28U);
    msg.setDestination(60864U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5754235784579763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.44595094905801747);
    msg.setSource(795U);
    msg.setSourceEntity(16U);
    msg.setDestination(27624U);
    msg.setDestinationEntity(99U);
    msg.value = 0.28329088357138843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.6037991238576647);
    msg.setSource(23U);
    msg.setSourceEntity(57U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(166U);
    msg.value.assign("YVSVMESSCSULHDULFCMAIRHGKQQQDXDGCKIMZSNKUOZSLRBXLUERJMCTNWKAOONFIQSYVJEWNJVRBXPZEWZBVBZSBUDCYNKVWWYUBPJUNFGNWODLYPQXTJDQGIMVODSJZHSLENXTTHQGMZNFBFAAOTYAAPRFAWWQCIXOFLWDOTIFKEYOAGJRLZRLMVQEABXMJPEJEPCPCHMBYAFUPIDYGURDTTCYUKKIHKZJXGLXHBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.08457085611341442);
    msg.setSource(37022U);
    msg.setSourceEntity(104U);
    msg.setDestination(17920U);
    msg.setDestinationEntity(115U);
    msg.value.assign("RMLFUZLROEEHLNGYCYYTZBZFPWEIFQEBQKAHDUPHIGLVQQERTMDJSDRFNHDYAZMTIAJQPEZRNVLNVXTNUOZFTIMMROYSJDPMOCIPJGJFYGZAZPAVTMKCCLRQGHBUKGBWPKSXIFJBUKRCIOVKSJJWFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.5517195639396646);
    msg.setSource(35511U);
    msg.setSourceEntity(71U);
    msg.setDestination(33490U);
    msg.setDestinationEntity(97U);
    msg.value.assign("MQBOOYERTFDISWMSDSUPCVVSPEASVQLLHYSKWVZSDOSWRNTKFEHILZKXFTBDMOLJLRENIHKBMQVAJECGVAYAIRERRCQGRVTOUGFMEJAKOSJICHNZMQDUUXSCJFNLXAPDAWWMKABFIPQNTPJINGGZQGWDBLUOEQPXHTKWDFMYXRGOCIYZHKVXZUCPUPLFWEYQZBZXOHUGCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.23564589564786598);
    msg.setSource(49793U);
    msg.setSourceEntity(36U);
    msg.setDestination(28902U);
    msg.setDestinationEntity(17U);
    const signed char tmp_msg_0[] = {88, -77, 11, 38, 105, 115, -69, -48, -69, -103, 113, 8, -25, -8, -117, 27, 35, -83, 87, 49, -32, 45, -91, -63, -112, -111, 86, 49, -93, -18, -125, 55, -65, 83, -72, -15, 33, -103, 102, 80, -102, 78, 102, 31, -72, 31, -86, 30, 20, -105, -23, 63, -111, -4, -46, 116, 90, 63, -52, 112, 87, 28, 18, -63, 14, -114, -49, 89, 68};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.43980672891350403);
    msg.setSource(18778U);
    msg.setSourceEntity(64U);
    msg.setDestination(24768U);
    msg.setDestinationEntity(208U);
    const signed char tmp_msg_0[] = {-49, 121, 106, -59, -41, 37, 101, -80, 79, 119, -99, 81, 83, 111, -59, -84, 79, -14, 102, 95, 110, 47, 59, 52, 103, 65, 75, -123, 94, -5, 55, 84, -100, 26, 58, 21, 4, -42, 87, -106, 23, -28, -70, 56, -95, 40, 50, -55, -89, -33, 45, 83, -38, -18, 112, 42, -17, -81, -80, -93, 2, 110, 56, 46, -122, 53, -22, -52, -121, 72, -76, 111, -65, -118, -75, -33, 6, 84, 80, 54, -114, 10, 29, 19, 6, 105, -3, -63, 46, -2, -60, 9, -42, -90, -90, 37, 58, 53, -10, 81, 103, -71, -38, 67, 57, -103, 121, 79, 89, -72, -67, -38, 11, -127, -117, 33, -88, -124, 89, -125, -18, -107, -11, 103, -58, 118, -61, -109, -80, -110, 115, 38, -31, -67, -42, -93, -70, 60, 119, 80, -93};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.7861305700653748);
    msg.setSource(36745U);
    msg.setSourceEntity(108U);
    msg.setDestination(2033U);
    msg.setDestinationEntity(94U);
    const signed char tmp_msg_0[] = {-25, -122, 24, -125, -79, 16, 86, 41, 81, -3, -63, 89, 26, -18, 38, 42, 2, 50, -12, -80, -78, -12, -94, 60, -42, 74, 29, 45, 106, 9, 53, -42, 51, 106, 30, -45, -74, 111, -96, -4, -48, -32, 84, 7, -84, -5, -18, 41, 34, -18, 79, 93, -44, 54, -101, 21, -124, -31, 73, -14, -82, -77, -68, -109, 33, -69, 2, -25, 27, 11, -88, -39, -120, -50, -84, -55, 95, 12, -1, 97, 87, 30, -90, 11, 47, 5, 13, 34, 57, -52, 104, 30, 42, 52, 5, 39, 71, 62, 53, -102, -91, -82, 24, 30, 78, -7, 21, 95, 65, -59, 30, 125, -53, 49, 108, -112, 104, -86, -81, 62, -14, -83, -101, 84, -38, 24, 113, -21, 83, -53, 71, -65, 47, 23, 106, 14, 116, 73, 56, 84, 29, -61, 86, -82, 1, 105, -15, 52, 68, 123, -89, 57, 125, -66, 64, -117, -112, 98, -70, -72, 52};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.7193918474815248);
    msg.setSource(37368U);
    msg.setSourceEntity(112U);
    msg.setDestination(39337U);
    msg.setDestinationEntity(205U);
    msg.value = 0.4021182885986476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.5997036363207484);
    msg.setSource(5522U);
    msg.setSourceEntity(236U);
    msg.setDestination(17088U);
    msg.setDestinationEntity(234U);
    msg.value = 0.13272423424621638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.28985275076141626);
    msg.setSource(30932U);
    msg.setSourceEntity(205U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5422542091668537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.1935294144302543);
    msg.setSource(5438U);
    msg.setSourceEntity(156U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(195U);
    msg.type = 130U;
    msg.frequency = 756527474U;
    msg.min_range = 23915U;
    msg.max_range = 16582U;
    msg.bits_per_point = 43U;
    msg.scale_factor = 0.2872164773330349;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.956641306730741;
    tmp_msg_0.beam_height = 0.04631839083764;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {69, -7, -118, 28, 15, -108, -23, 36, 50, -102, 32, 12, -15, -119, 8, 63, -28, 7, 40, 42, 116, -72, 91, 48, 9, -124, -27, 8, 59, 36, 85, 22, -79, 121, -57, -21, -112, 64, -103, 16, -67, 119, 51, -3, -38, -78, -114, -118, -56, -42, -123, -97, -75, -44, -92, 70, -111, -15, -56, -97, -70, 126, -21, 41, 42, 1, -94, -7, 20, 89, 45, -28, 28, -92, 81, 62, 37, 13, 115, -88, 6, 93, -12, 29, -113, -97, -99, -88, 61, 10, 10, 13, 104, -113, 23, 82, 71, 98, 101, 52, 68, 96, 86, 79, -4, -78, -13, -14, -56, -61, 70, 47, 56, 29, -118, -123, 57, 73, -54, 74, -2, -116, -121, -35, 0, 107, -67, -13, -39, -113, -106, -85, -116, 43, 126, 62, -18, 92, 9, -3, -52, 71, -60, -73, -106, -95, 35, 91, 57, -93, -81, 71, 122, -62, -3, 108, 35, -84, -41, 98, -40, -125, -122, 107, 105, -78, 53, -96, 115, -17, 43, 114, 8, -56, 102, -64, -43, -23, -61, -66, 12, -29, 20, 78, 33, -73, 7, 126, -44, 27, -109, -8, 72, 65, -50, -68, -8, 11, -85, 86, -21, -73, -51, -114, -27, 91, -107, 1, -86, 69, 11, -109};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.12793063353861922);
    msg.setSource(45682U);
    msg.setSourceEntity(142U);
    msg.setDestination(27470U);
    msg.setDestinationEntity(111U);
    msg.type = 75U;
    msg.frequency = 1994537223U;
    msg.min_range = 62178U;
    msg.max_range = 65401U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.4533742677970688;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6760689235257241;
    tmp_msg_0.beam_height = 0.23615993185499662;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-68, 102, -47, -89, 90, 31, 67, -16, -54, -30, -83, 25, 16, -22, -109, 94, -74, -126, 98, -36, 66, -52, -71, -62, 18, -122, 37, -126, 118, -79, 28, -74, 81, -26, -58, 123, 20, 85, 105, -53, -30, 57, 99, 38, 107, 51, -49, 22, 105, -91, -18, -33, -30, -27, 46, -111, -8, 63, 109, -51, -98, 90, -120, -6, 15, 80, 36, 88, 110, 86, -2, -35, -84, -96, -1, -57, -82, 76, -106, 49, -13, -83, -104, -124, -12, -84, -122, -36, -76, 104, -111, 108, -27, 28, 21, 78, 9, 61, 98, -69, -76, -128, -103, 103, -112, 45, -107, -120, -38, -74, -12, -75, -95, 49, -123, -124, 34, 24, 48, 15, -90, 25, 29, 83, -63, -95, 49, 9, -77, 110, 121, 32, -47, -75, 99, -79, 112, 32, 13, 23, -21, 99, -41, 60, 56, 64, -33, -25, -117, 74, 28, 33, 40, 24, -3, -54, 67, 43, 31, -47, -13, -75, -37, 12, 70};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.5859023831814869);
    msg.setSource(61623U);
    msg.setSourceEntity(48U);
    msg.setDestination(36728U);
    msg.setDestinationEntity(197U);
    msg.type = 224U;
    msg.frequency = 2041849656U;
    msg.min_range = 9883U;
    msg.max_range = 34175U;
    msg.bits_per_point = 223U;
    msg.scale_factor = 0.3746281577728978;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8197697301424438;
    tmp_msg_0.beam_height = 0.750069719475299;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-12, 17, -64, -94, -104, -9, 13, 74, 55, 64, 109, 120, 92, 71, 116, 22, -40, 71, 26, -69, -32, -37, 102, -43, 92, 78, 116, -32, 90, -16, -107, -1, 2, -79, -38, -41, -85, -46, -75, -81, 49, -30, 56, 89, 6, 21, -84, 96, 103, -52, -44, -58, -3, -125, -1, -65, -78, 9, -88, -106, -95, -70, 79, -98, 31, 119, 54, 93, 121, -44, -101, -26, 0, -76, -5, 68, 14, 115, 60, 116, 66, 72, -125, 51, 105, -62, 5, -122, 46, -105, 28, 0, -97, -108, -23, 103, -26, -114, -108, 72, 57, -118, -128, 50, 121, -44, 3, 112, -67, -87, 85, 126, 64};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.8802498799991522);
    msg.setSource(9488U);
    msg.setSourceEntity(171U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.5446931126743716);
    msg.setSource(31184U);
    msg.setSourceEntity(119U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(167U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.4682758189604508);
    msg.setSource(5290U);
    msg.setSourceEntity(218U);
    msg.setDestination(19461U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.09297006854773138);
    msg.setSource(46826U);
    msg.setSourceEntity(39U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(105U);
    msg.op = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.03140863804822369);
    msg.setSource(32463U);
    msg.setSourceEntity(46U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(55U);
    msg.op = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.5963301289707543);
    msg.setSource(55163U);
    msg.setSourceEntity(34U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(219U);
    msg.op = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.6932018645647956);
    msg.setSource(36208U);
    msg.setSourceEntity(10U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7287901599473228;
    msg.confidence = 0.17089713274961793;
    msg.opmodes.assign("MLAKJHMDVLOEWHDUUZEAUQHRCGWPTPSMKUYJJIXIHIONUZOOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.1304338439117011);
    msg.setSource(17075U);
    msg.setSourceEntity(149U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(81U);
    msg.value = 0.4685199784886499;
    msg.confidence = 0.15866567414817923;
    msg.opmodes.assign("ILXOTTPVMRTYTCLVUFDRSOSLMNTXJZNPIVPHJFRYQJWHMHGVWEYHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.5348490589805497);
    msg.setSource(11481U);
    msg.setSourceEntity(136U);
    msg.setDestination(26948U);
    msg.setDestinationEntity(77U);
    msg.value = 0.12680736120937286;
    msg.confidence = 0.045807313309558784;
    msg.opmodes.assign("CAAMMXCSESPDOJRFKABYEXGORQQNCRLFRDCJHQYELBTTUMIUVLMRFEGCTSMJEZLAFAQENFDQFHWOVMQZWXVFRITNPHZNQYONADHFOPBUMDBJWGPHSWDPPVVUZXKBGKJXBRIKZTPEKLGJQLZWXKASGKLLRVPOCNYAUOITWTYLHGRSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.9479331272606646);
    msg.setSource(23605U);
    msg.setSourceEntity(9U);
    msg.setDestination(28117U);
    msg.setDestinationEntity(6U);
    msg.itow = 1455377219U;
    msg.lat = 0.3112164035496532;
    msg.lon = 0.12400576668784269;
    msg.height_ell = 0.3617970857609619;
    msg.height_sea = 0.2879289493886148;
    msg.hacc = 0.7119127207745422;
    msg.vacc = 0.7844008689229813;
    msg.vel_n = 0.5336631300311;
    msg.vel_e = 0.07618128748219277;
    msg.vel_d = 0.08680818103964294;
    msg.speed = 0.8007521003127729;
    msg.gspeed = 0.6084541992390113;
    msg.heading = 0.9085729573472378;
    msg.sacc = 0.5406574862307418;
    msg.cacc = 0.8445664504235108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.062322066890897365);
    msg.setSource(61717U);
    msg.setSourceEntity(36U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(71U);
    msg.itow = 1217518291U;
    msg.lat = 0.6226011646832325;
    msg.lon = 0.3038609857524628;
    msg.height_ell = 0.10739791585947822;
    msg.height_sea = 0.5759932985322339;
    msg.hacc = 0.8896232982480745;
    msg.vacc = 0.4854089455293358;
    msg.vel_n = 0.5276734907667864;
    msg.vel_e = 0.7107271915033736;
    msg.vel_d = 0.7577256076452322;
    msg.speed = 0.3651837315277082;
    msg.gspeed = 0.954310481026643;
    msg.heading = 0.1812470170600129;
    msg.sacc = 0.6105991568392695;
    msg.cacc = 0.8361008120012232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.8297042292670224);
    msg.setSource(58707U);
    msg.setSourceEntity(196U);
    msg.setDestination(20951U);
    msg.setDestinationEntity(164U);
    msg.itow = 2354595214U;
    msg.lat = 0.5583218318095712;
    msg.lon = 0.33751302914440284;
    msg.height_ell = 0.24699215780157635;
    msg.height_sea = 0.03959196782739283;
    msg.hacc = 0.8519099416621928;
    msg.vacc = 0.793396557277318;
    msg.vel_n = 0.363785333725828;
    msg.vel_e = 0.11635249399120406;
    msg.vel_d = 0.5431156827969389;
    msg.speed = 0.29647341521108017;
    msg.gspeed = 0.7072405346841751;
    msg.heading = 0.27190947844194324;
    msg.sacc = 0.11731838225018243;
    msg.cacc = 0.917600589165383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.17600634323046382);
    msg.setSource(12951U);
    msg.setSourceEntity(245U);
    msg.setDestination(13886U);
    msg.setDestinationEntity(242U);
    msg.id = 22U;
    msg.value = 0.28935613392862713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.49330012988152205);
    msg.setSource(62218U);
    msg.setSourceEntity(231U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(199U);
    msg.id = 219U;
    msg.value = 0.5080154143604035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.1708972082911281);
    msg.setSource(42484U);
    msg.setSourceEntity(122U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(106U);
    msg.id = 47U;
    msg.value = 0.6536910092374565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.4901457280864473);
    msg.setSource(5639U);
    msg.setSourceEntity(190U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(26U);
    msg.x = 0.06987498153907257;
    msg.y = 0.8878010942992228;
    msg.z = 0.1961746675399162;
    msg.phi = 0.3023891051078027;
    msg.theta = 0.9530771076399437;
    msg.psi = 0.7638532032455709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.4937346692727679);
    msg.setSource(26299U);
    msg.setSourceEntity(204U);
    msg.setDestination(32719U);
    msg.setDestinationEntity(21U);
    msg.x = 0.491859423460992;
    msg.y = 0.17409784486109947;
    msg.z = 0.37142056178441885;
    msg.phi = 0.14483543427176804;
    msg.theta = 0.20319160865837194;
    msg.psi = 0.07072941924629328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.9920383303027189);
    msg.setSource(57436U);
    msg.setSourceEntity(174U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(180U);
    msg.x = 0.8141568051760305;
    msg.y = 0.3219913027082918;
    msg.z = 0.6747487232277596;
    msg.phi = 0.7258689779180111;
    msg.theta = 0.2759167448239884;
    msg.psi = 0.2966616381621898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.3023887305108961);
    msg.setSource(25178U);
    msg.setSourceEntity(215U);
    msg.setDestination(37832U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.9667086354572448;
    msg.beam_height = 0.6670178590509622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.19609548750781258);
    msg.setSource(65354U);
    msg.setSourceEntity(35U);
    msg.setDestination(11281U);
    msg.setDestinationEntity(130U);
    msg.beam_width = 0.9704008170477783;
    msg.beam_height = 0.5830362863103501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.6451758015982264);
    msg.setSource(42558U);
    msg.setSourceEntity(193U);
    msg.setDestination(8189U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.8438793410492754;
    msg.beam_height = 0.8544651695240548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.8820429631974298);
    msg.setSource(23427U);
    msg.setSourceEntity(196U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(139U);
    msg.sane = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.3224057646514735);
    msg.setSource(19196U);
    msg.setSourceEntity(144U);
    msg.setDestination(650U);
    msg.setDestinationEntity(175U);
    msg.sane = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.1630506966185603);
    msg.setSource(7325U);
    msg.setSourceEntity(23U);
    msg.setDestination(45174U);
    msg.setDestinationEntity(81U);
    msg.sane = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.6010512293373861);
    msg.setSource(1437U);
    msg.setSourceEntity(228U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(47U);
    msg.value = 0.7859499482006768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.2840920096427447);
    msg.setSource(39413U);
    msg.setSourceEntity(127U);
    msg.setDestination(20889U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5486694507193224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.46665995921250913);
    msg.setSource(21462U);
    msg.setSourceEntity(147U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(88U);
    msg.value = 0.008106440431897677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.46480178943545924);
    msg.setSource(20324U);
    msg.setSourceEntity(17U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7292279555795903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.862300871466159);
    msg.setSource(57171U);
    msg.setSourceEntity(81U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(93U);
    msg.value = 0.9778161793027943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7571694828558587);
    msg.setSource(62224U);
    msg.setSourceEntity(67U);
    msg.setDestination(5785U);
    msg.setDestinationEntity(192U);
    msg.value = 0.11593795398962137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.2126781956042676);
    msg.setSource(44616U);
    msg.setSourceEntity(115U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6510042554942878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.2842372808046918);
    msg.setSource(22850U);
    msg.setSourceEntity(158U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6959480626455418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.5738520156124612);
    msg.setSource(24282U);
    msg.setSourceEntity(111U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(81U);
    msg.value = 0.052250957375877705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.918400643029231);
    msg.setSource(45706U);
    msg.setSourceEntity(33U);
    msg.setDestination(12630U);
    msg.setDestinationEntity(43U);
    msg.value = 0.413954429095296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.1133175875144683);
    msg.setSource(10864U);
    msg.setSourceEntity(114U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4507646755610798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.12656839594725322);
    msg.setSource(58719U);
    msg.setSourceEntity(45U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(220U);
    msg.value = 0.44131971098301204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5515801458167523);
    msg.setSource(52122U);
    msg.setSourceEntity(227U);
    msg.setDestination(44337U);
    msg.setDestinationEntity(227U);
    msg.value = 0.021807025136328706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5954867347508652);
    msg.setSource(60237U);
    msg.setSourceEntity(128U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9970958766587168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.8411423410628562);
    msg.setSource(5270U);
    msg.setSourceEntity(176U);
    msg.setDestination(63337U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7177490404783468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.19624840658880505);
    msg.setSource(32842U);
    msg.setSourceEntity(220U);
    msg.setDestination(53234U);
    msg.setDestinationEntity(183U);
    msg.value = 0.16624155787052397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.1851990625215869);
    msg.setSource(2259U);
    msg.setSourceEntity(67U);
    msg.setDestination(8334U);
    msg.setDestinationEntity(103U);
    msg.value = 0.15524317075854055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.769623545359162);
    msg.setSource(64019U);
    msg.setSourceEntity(126U);
    msg.setDestination(26913U);
    msg.setDestinationEntity(55U);
    msg.value = 0.41897348889537156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.7629023487204527);
    msg.setSource(24902U);
    msg.setSourceEntity(249U);
    msg.setDestination(53548U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8674535346425926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.6741515771953693);
    msg.setSource(25455U);
    msg.setSourceEntity(201U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(124U);
    msg.value = 0.6604924678705447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.09443824285278923);
    msg.setSource(46539U);
    msg.setSourceEntity(84U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8143038119072337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.3933915747558865);
    msg.setSource(2857U);
    msg.setSourceEntity(2U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(200U);
    msg.value = 0.041118431767216634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7591689690528762);
    msg.setSource(12266U);
    msg.setSourceEntity(22U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(143U);
    msg.value = 0.44849425966870893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.21841071125978073);
    msg.setSource(21371U);
    msg.setSourceEntity(69U);
    msg.setDestination(20854U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0020254600792009025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.25662879248739534);
    msg.setSource(35080U);
    msg.setSourceEntity(102U);
    msg.setDestination(40080U);
    msg.setDestinationEntity(21U);
    msg.validity = 3365U;
    msg.type = 105U;
    msg.tow = 3993088545U;
    msg.base_lat = 0.4765934014911457;
    msg.base_lon = 0.7506616849014753;
    msg.base_height = 0.051722053043413596;
    msg.n = 0.7386120035089349;
    msg.e = 0.4311296553682551;
    msg.d = 0.3540804960030375;
    msg.v_n = 0.7459215152285279;
    msg.v_e = 0.5585497251079516;
    msg.v_d = 0.39253419337323003;
    msg.satellites = 122U;
    msg.iar_hyp = 1513U;
    msg.iar_ratio = 0.3943276056212275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.8043044284930039);
    msg.setSource(16551U);
    msg.setSourceEntity(12U);
    msg.setDestination(62639U);
    msg.setDestinationEntity(13U);
    msg.validity = 18919U;
    msg.type = 31U;
    msg.tow = 731025834U;
    msg.base_lat = 0.16728279381936828;
    msg.base_lon = 0.4278939468223605;
    msg.base_height = 0.718530617100563;
    msg.n = 0.7137085592080481;
    msg.e = 0.782444607315099;
    msg.d = 0.3798809969283846;
    msg.v_n = 0.6536501093513765;
    msg.v_e = 0.32075430756682355;
    msg.v_d = 0.0024401605081915134;
    msg.satellites = 118U;
    msg.iar_hyp = 42489U;
    msg.iar_ratio = 0.8924785618110659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.10271642784017643);
    msg.setSource(36265U);
    msg.setSourceEntity(23U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(138U);
    msg.validity = 17797U;
    msg.type = 50U;
    msg.tow = 1510333451U;
    msg.base_lat = 0.9269809690221367;
    msg.base_lon = 0.32884211773575633;
    msg.base_height = 0.49452864473780556;
    msg.n = 0.9388665769976383;
    msg.e = 0.5869920372577907;
    msg.d = 0.02103475048147352;
    msg.v_n = 0.6601526854470948;
    msg.v_e = 0.917803503775957;
    msg.v_d = 0.014964831843900739;
    msg.satellites = 85U;
    msg.iar_hyp = 36686U;
    msg.iar_ratio = 0.8311162031144376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.18713724957982447);
    msg.setSource(45118U);
    msg.setSourceEntity(108U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(99U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4163623278947832;
    tmp_msg_0.lon = 0.447485661319582;
    tmp_msg_0.height = 0.4429547748039977;
    tmp_msg_0.x = 0.5186277824846968;
    tmp_msg_0.y = 0.8518997424876705;
    tmp_msg_0.z = 0.21239420809126586;
    tmp_msg_0.phi = 0.8893156370613402;
    tmp_msg_0.theta = 0.5478253428277134;
    tmp_msg_0.psi = 0.652705477917839;
    tmp_msg_0.u = 0.18757285429929083;
    tmp_msg_0.v = 0.11744911760963694;
    tmp_msg_0.w = 0.36845986259812713;
    tmp_msg_0.vx = 0.9666176622691554;
    tmp_msg_0.vy = 0.08722858346916529;
    tmp_msg_0.vz = 0.4689498208787318;
    tmp_msg_0.p = 0.02641050742270279;
    tmp_msg_0.q = 0.5569432492761571;
    tmp_msg_0.r = 0.2663033337226691;
    tmp_msg_0.depth = 0.8072545321307139;
    tmp_msg_0.alt = 0.3920375679420812;
    msg.state.set(tmp_msg_0);
    msg.type = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.04063483233749543);
    msg.setSource(39134U);
    msg.setSourceEntity(161U);
    msg.setDestination(25851U);
    msg.setDestinationEntity(193U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9706794665660955;
    tmp_msg_0.lon = 0.9197312241167374;
    tmp_msg_0.height = 0.44628184169910756;
    tmp_msg_0.x = 0.37332152749073566;
    tmp_msg_0.y = 0.32295490649866043;
    tmp_msg_0.z = 0.4324172542656509;
    tmp_msg_0.phi = 0.26875251719459636;
    tmp_msg_0.theta = 0.7035367226131587;
    tmp_msg_0.psi = 0.21813055719866803;
    tmp_msg_0.u = 0.10318344705919102;
    tmp_msg_0.v = 0.3898102075675235;
    tmp_msg_0.w = 0.8543067468987111;
    tmp_msg_0.vx = 0.4709083726920137;
    tmp_msg_0.vy = 0.14013863608643562;
    tmp_msg_0.vz = 0.6997223806941715;
    tmp_msg_0.p = 0.7775982033456291;
    tmp_msg_0.q = 0.033538809569086836;
    tmp_msg_0.r = 0.5282476707947471;
    tmp_msg_0.depth = 0.13963393790166612;
    tmp_msg_0.alt = 0.7140916714138739;
    msg.state.set(tmp_msg_0);
    msg.type = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8819425454042353);
    msg.setSource(46409U);
    msg.setSourceEntity(84U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(166U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.08289907223330695;
    tmp_msg_0.lon = 0.6039096485348519;
    tmp_msg_0.height = 0.9841419379685143;
    tmp_msg_0.x = 0.4132594481621207;
    tmp_msg_0.y = 0.3892781461364253;
    tmp_msg_0.z = 0.06984978279100873;
    tmp_msg_0.phi = 0.07105911688368882;
    tmp_msg_0.theta = 0.21034465622650012;
    tmp_msg_0.psi = 0.7105660969879148;
    tmp_msg_0.u = 0.48227530708595967;
    tmp_msg_0.v = 0.4592893368353872;
    tmp_msg_0.w = 0.6316351061736227;
    tmp_msg_0.vx = 0.05452323516038882;
    tmp_msg_0.vy = 0.6083546716880995;
    tmp_msg_0.vz = 0.1710509836679105;
    tmp_msg_0.p = 0.3072935515731159;
    tmp_msg_0.q = 0.3627268545445874;
    tmp_msg_0.r = 0.13893351280040545;
    tmp_msg_0.depth = 0.401449611337914;
    tmp_msg_0.alt = 0.2300229938311097;
    msg.state.set(tmp_msg_0);
    msg.type = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.7015025238137323);
    msg.setSource(21769U);
    msg.setSourceEntity(159U);
    msg.setDestination(54988U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6883515374384332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.2947878330287219);
    msg.setSource(47479U);
    msg.setSourceEntity(98U);
    msg.setDestination(20876U);
    msg.setDestinationEntity(0U);
    msg.value = 0.1408903380819332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.38728661056628744);
    msg.setSource(5127U);
    msg.setSourceEntity(108U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(173U);
    msg.value = 0.06271776530792894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.6329150449402523);
    msg.setSource(51254U);
    msg.setSourceEntity(110U);
    msg.setDestination(12840U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7541659040517362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9562305376833166);
    msg.setSource(10400U);
    msg.setSourceEntity(17U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(90U);
    msg.value = 0.3187003443171669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9964407686094989);
    msg.setSource(31366U);
    msg.setSourceEntity(88U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(115U);
    msg.value = 0.34984641411493655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.5757997750498073);
    msg.setSource(45415U);
    msg.setSourceEntity(39U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(4U);
    msg.value = 0.11557810734472762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.4785668877001782);
    msg.setSource(12998U);
    msg.setSourceEntity(23U);
    msg.setDestination(65436U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0637485861366065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.1786951628566824);
    msg.setSource(6264U);
    msg.setSourceEntity(246U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(62U);
    msg.value = 0.05658447828908686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0018424745695628797);
    msg.setSource(61870U);
    msg.setSourceEntity(4U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9847862341193602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.7875969808844621);
    msg.setSource(63419U);
    msg.setSourceEntity(101U);
    msg.setDestination(38610U);
    msg.setDestinationEntity(144U);
    msg.value = 0.47273859257191797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.17271427077084445);
    msg.setSource(53430U);
    msg.setSourceEntity(62U);
    msg.setDestination(45445U);
    msg.setDestinationEntity(180U);
    msg.value = 0.1036930876244434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.7402794805516945);
    msg.setSource(5765U);
    msg.setSourceEntity(87U);
    msg.setDestination(41477U);
    msg.setDestinationEntity(213U);
    msg.value = 0.45586167685426804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.09029151740857011);
    msg.setSource(1454U);
    msg.setSourceEntity(109U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(216U);
    msg.value = 0.004407022526426552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.8735151720905493);
    msg.setSource(41529U);
    msg.setSourceEntity(128U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5821352062029979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.5631026905217652);
    msg.setSource(16663U);
    msg.setSourceEntity(56U);
    msg.setDestination(33365U);
    msg.setDestinationEntity(65U);
    msg.id = 253U;
    msg.zoom = 28U;
    msg.action = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.5970818770873624);
    msg.setSource(44385U);
    msg.setSourceEntity(16U);
    msg.setDestination(35952U);
    msg.setDestinationEntity(200U);
    msg.id = 155U;
    msg.zoom = 41U;
    msg.action = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7243460987929483);
    msg.setSource(26926U);
    msg.setSourceEntity(57U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(30U);
    msg.id = 176U;
    msg.zoom = 33U;
    msg.action = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.41752928931228783);
    msg.setSource(40243U);
    msg.setSourceEntity(22U);
    msg.setDestination(45454U);
    msg.setDestinationEntity(173U);
    msg.id = 162U;
    msg.value = 0.6404351074989294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.7593276246182568);
    msg.setSource(30600U);
    msg.setSourceEntity(166U);
    msg.setDestination(28554U);
    msg.setDestinationEntity(211U);
    msg.id = 116U;
    msg.value = 0.9481250088963781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.5038610925857252);
    msg.setSource(3155U);
    msg.setSourceEntity(243U);
    msg.setDestination(58775U);
    msg.setDestinationEntity(154U);
    msg.id = 235U;
    msg.value = 0.6012273981579953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5628883137282169);
    msg.setSource(970U);
    msg.setSourceEntity(200U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(88U);
    msg.id = 146U;
    msg.value = 0.4266951955082623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.8851769055087587);
    msg.setSource(50628U);
    msg.setSourceEntity(26U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(121U);
    msg.id = 93U;
    msg.value = 0.6538866115576556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5343763036933049);
    msg.setSource(12607U);
    msg.setSourceEntity(175U);
    msg.setDestination(14211U);
    msg.setDestinationEntity(77U);
    msg.id = 103U;
    msg.value = 0.399739346041589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8947964613976099);
    msg.setSource(34886U);
    msg.setSourceEntity(239U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(230U);
    msg.id = 168U;
    msg.angle = 0.19785365988176917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8056700213519585);
    msg.setSource(44097U);
    msg.setSourceEntity(228U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(198U);
    msg.id = 30U;
    msg.angle = 0.9193405173642786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.7852424495990276);
    msg.setSource(13690U);
    msg.setSourceEntity(114U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(254U);
    msg.id = 173U;
    msg.angle = 0.41700858604932145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.3156346847864079);
    msg.setSource(25913U);
    msg.setSourceEntity(57U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(200U);
    msg.op = 31U;
    msg.actions.assign("VPDOLPBEHQMINIWZMVELTFWFCAYAVYXEVKSJIBAUBQQJHGFQYHQMHRJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.595139656465444);
    msg.setSource(11045U);
    msg.setSourceEntity(27U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(10U);
    msg.op = 79U;
    msg.actions.assign("DLCOCSRXGMDCTEGSVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.8433902105284489);
    msg.setSource(54731U);
    msg.setSourceEntity(112U);
    msg.setDestination(31772U);
    msg.setDestinationEntity(117U);
    msg.op = 119U;
    msg.actions.assign("KLUCQWGXSJEASESGNBOAFWCDOVQXRYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.8405089102686915);
    msg.setSource(26750U);
    msg.setSourceEntity(247U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("VEYUCMFGXUTCRERAMKKGFZDOMOYUEWSMVGVZIUZKQUJIQKQTZLZGWSRAPAYVKHBXULDPIDNBIYEBJJCKEPWMWWOCYFLSHQONWPHXHBULFEIQVLTHLHJSGDACSSTLDXDNMCDETWWNCQKDZAGXZGSHKTVJUMSYBICOBNVUGNFXRXNYTPSJLJBKGHMPTAAROISDVXWJQFOKRHXEORRPYLYJNBIDRITQFTQGLVPWRAOCOFEUVCNPMAFYHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.8213005764973693);
    msg.setSource(38448U);
    msg.setSourceEntity(0U);
    msg.setDestination(13001U);
    msg.setDestinationEntity(193U);
    msg.actions.assign("LETALUKUGROVVRTRRFDQHJEBSHCIMFMKLAAVUBVMYYDFTPFIGXGLWGDMWQZMUFJXQBZFRWPXWKDZZXYOEPTIINHBAWBCOVAQNUWLHUNUXDPCLZNJKLFHTXKNYBSPUOJEWIOOKEXYZJSHPNBLTVWGSGJHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.149067380862414);
    msg.setSource(50135U);
    msg.setSourceEntity(193U);
    msg.setDestination(31772U);
    msg.setDestinationEntity(137U);
    msg.actions.assign("OBQITEXLTUSJUIYOEFSFNWCGGQEWUJSBMQVQEBMNSJZUJLWBCXKKXCODKRHVWGTZRISGHGAOBMHWQDCOKAWELFBRPXZRRJXZZQAZTKNSNNUPBPVMYMYAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.32369591970808187);
    msg.setSource(60027U);
    msg.setSourceEntity(132U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(154U);
    msg.button = 103U;
    msg.value = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.29997472399710345);
    msg.setSource(27964U);
    msg.setSourceEntity(251U);
    msg.setDestination(52229U);
    msg.setDestinationEntity(82U);
    msg.button = 176U;
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.4727504459817675);
    msg.setSource(24226U);
    msg.setSourceEntity(137U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(91U);
    msg.button = 107U;
    msg.value = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.056878249610937015);
    msg.setSource(19647U);
    msg.setSourceEntity(220U);
    msg.setDestination(28280U);
    msg.setDestinationEntity(182U);
    msg.op = 2U;
    msg.text.assign("EEXGSLDPUWSFLYKCJWQHIOVJHJZONXCSPAZANKHZUNRZXCDCVRECMKWQPGIZTSUHLBBAIITGSROHMOIKETCJCYGIQDJYQKMOGQPNPRHMLBKBTNFXRHFUGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.7625753721483014);
    msg.setSource(40098U);
    msg.setSourceEntity(15U);
    msg.setDestination(61196U);
    msg.setDestinationEntity(77U);
    msg.op = 93U;
    msg.text.assign("AJRVQNYZDBULNZAJDUZFLZOMXTYCGWMUEVENCKMEKHBDOGFFUGTWXRPBDWCJHPUTQWMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.6903124314920263);
    msg.setSource(19365U);
    msg.setSourceEntity(251U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(101U);
    msg.op = 16U;
    msg.text.assign("MKKXFMNIGAOQYDLFNZTCZWPGNTVESIFEZIEQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.27246932411653424);
    msg.setSource(47271U);
    msg.setSourceEntity(216U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(216U);
    msg.op = 119U;
    msg.time_remain = 0.38363526747970456;
    msg.sched_time = 0.1332778432548506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.38830041097781887);
    msg.setSource(886U);
    msg.setSourceEntity(45U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(107U);
    msg.op = 194U;
    msg.time_remain = 0.3301818069734108;
    msg.sched_time = 0.9390021842882228;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.769021941509387);
    msg.setSource(21954U);
    msg.setSourceEntity(70U);
    msg.setDestination(16587U);
    msg.setDestinationEntity(116U);
    msg.op = 176U;
    msg.time_remain = 0.9372485027426032;
    msg.sched_time = 0.47164968526280293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.5049187938801343);
    msg.setSource(10685U);
    msg.setSourceEntity(127U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(152U);
    msg.name.assign("LVZNXTBELRYIDENPWFGKZBLGVTSAHRKZGKIPJWCVAUKQYQDAWNKCUUICERYTDAUGVZQ");
    msg.op = 25U;
    msg.sched_time = 0.81759213899717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.8744598877412386);
    msg.setSource(6577U);
    msg.setSourceEntity(90U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(173U);
    msg.name.assign("DDTHZNCCCLKRMELTTVYSAFBXKZPKWRGXXPRILZYYXYUHZNSPWUXEJDMBUGAGXILQIVASXAKNBDDSOESQFJWBJNHMVIPNUTTPTWDDGMRQMBTKKONHVGDPGXXNWSCHFNYUOVCYORFNIAZITOQJUIFJNHJBHYKYFBRJCULZQPDIZZHOAITMGKWEGHCOWLFGRRLYVVLQUMAJZYMOGUEEFABUCHSFPJTK");
    msg.op = 226U;
    msg.sched_time = 0.6949233025321366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.3999877957106779);
    msg.setSource(63842U);
    msg.setSourceEntity(180U);
    msg.setDestination(55338U);
    msg.setDestinationEntity(160U);
    msg.name.assign("OKUPDLKDBCMLYQOBA");
    msg.op = 240U;
    msg.sched_time = 0.03843118090122222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.36581431486843496);
    msg.setSource(7871U);
    msg.setSourceEntity(127U);
    msg.setDestination(64370U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.7943329323082279);
    msg.setSource(276U);
    msg.setSourceEntity(216U);
    msg.setDestination(1653U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5458352746390004);
    msg.setSource(29201U);
    msg.setSourceEntity(155U);
    msg.setDestination(41708U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.2083060567090399);
    msg.setSource(50319U);
    msg.setSourceEntity(143U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(13U);
    msg.name.assign("TOWIHLNGPUMLVFHXDZOPSYXLVYTZXKNQFJLOGPDCQNWCZVUWWQIADRGYVMUZBPJYX");
    msg.state = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6520267994929745);
    msg.setSource(35055U);
    msg.setSourceEntity(143U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(50U);
    msg.name.assign("WBZQYXBQISCYPGTIKGJ");
    msg.state = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.3031909360722077);
    msg.setSource(31716U);
    msg.setSourceEntity(42U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(174U);
    msg.name.assign("JJBWZEUPIGFTSEHZPMYPVLGHTESHMJPOJQUQVYYAYVJMYSSCKKEARYRMRBAJKCWOVDLVKFYGQEANAJSGMQQHZWRDTFGNRXIVKONUWZBZXOVHNUPHDBLFXCWWPGBRDBTTOPCASXLTEUFCNFZBQJOLEZGUWYREFFTDHVMUZCFDKXNTONIILIVUKIBACMRPKASEXWSHNYAYXIDTDZXGLRJOPLMHSJAOLHQLQT");
    msg.state = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.699923727834236);
    msg.setSource(26703U);
    msg.setSourceEntity(251U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(36U);
    msg.name.assign("JQKNDUSTOQUJFIDCMNKDFNMLIRIDHHPBQJMBNDYFIXLAEQCPBJBXYVZQPCPCZEKVCZWMNIGMPRFZSUMGLBWTVCRPGSDIKRUUOKRXGLRXWWFAQLXZLMAVTKQTNIVTZRFGTYUUJBPAWVWAYNKQCEVXBOQOEAYDSTLEYEZOHYHMNBIXUDGJTOMEVAQHLYT");
    msg.value = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.8988747248244002);
    msg.setSource(47433U);
    msg.setSourceEntity(196U);
    msg.setDestination(9021U);
    msg.setDestinationEntity(65U);
    msg.name.assign("JNTVJYXPURLQJFTGPFFQQIWHDVNUTROYFGKTRYBAAIMVJVGFLCOVEPKFYIJKETCIVHDZINYZLKXBAQKSBCLSDHCEBWFTBZEQBIJOPODHYOOKCTBEWZDQGBDXPYGCNELULPWLMORXSZMHSWSABSCIPJCWQGODXNMAVXXZJHFDNGTSKXWVRXUQRCMNITFZEAHPAPNRGRYOUNMTS");
    msg.value = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5162598212926669);
    msg.setSource(57723U);
    msg.setSourceEntity(66U);
    msg.setDestination(2397U);
    msg.setDestinationEntity(13U);
    msg.name.assign("ZXTFVMIYNGJBJIQDMUQRWJSPGFERGRBBPFSRYMJNNIVQOACGYWHEVSFLTGXRIEXOHOFLVNNEUDNHBDRQCFSPMUDWTARAXKMKOKWZOKNIAZNLFBCGAXCQPBIVLWUHXSYGCAQDGYKBOJSDVOVFTQPVWXCHVKZJJUYQJSZWDBCARHPIETHHSZLPTDCPNGLRTYSFVBEUZOMEJWXWKUILEZUDH");
    msg.value = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.009526988310733953);
    msg.setSource(38033U);
    msg.setSourceEntity(131U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(121U);
    msg.name.assign("FKNYIIIUWUWWJSFBKXNSGPHZJACVTKGEXGVDZJOZZADXNSIWXDLKEVFPRXWYCYGEYJUCMHQJKFSTOLTEYOEFCHJDBLQYPWXVJMAWKWOYRFTOGIXASTCAZIQDPAKNZOUQKUPTFLINYBPHSRQOKTNPHSGMGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.6522913143367235);
    msg.setSource(43851U);
    msg.setSourceEntity(98U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(150U);
    msg.name.assign("AYHISPDNGVBNWQCWWIJVUGWFFCYFRUKEPOEJLLYFVMNCYZNCCBCWZJBVMQWVKDSQZRGBDVILPGKDJXHRFNEEBMIRDBLLGQSBNSEFUZDHJCOZJTUEMJTKGSKYOHOKVAMNXBAYLXWSKXJCCTLXRLFRSHDMQSHXYNTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.9450548777410923);
    msg.setSource(21178U);
    msg.setSourceEntity(101U);
    msg.setDestination(34276U);
    msg.setDestinationEntity(8U);
    msg.name.assign("MQHSVZQHMNODKBYSZRKFMJIVLCNMMJHBTQXOTEGEVTVLPPAIOIDETRZTZXRNFAOQTXMVSHRURGXBSOICEAYBFQQYJUUUWEPCYIXFTPWCZWBQGPUAKNSZSHOKUWUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.7225484156917158);
    msg.setSource(26802U);
    msg.setSourceEntity(128U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(188U);
    msg.name.assign("UQFBHIODBAPTYVWHOYPXQLTSFLUFAZJUTQUFVFQQKFKHZJBEUOEMSJTMTBEPRCLBZOREDQVTAKOKIPSCMSRVPRKSVCKTFKGRYBDEYHRJURINNCAHXDBZNCWXATYALCLYEODKRGDCMRJOZYGGEWEGUPOYJLNPKIDUPICGMDL");
    msg.value = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9298908120453899);
    msg.setSource(19310U);
    msg.setSourceEntity(207U);
    msg.setDestination(2719U);
    msg.setDestinationEntity(140U);
    msg.name.assign("TXOPMUXIZJLLWVAMLCTASSRKQANNXEJDOLHIPDNEGJIRSAHCZSLEWOCJNRXSTPCMNGYUQKICCRDBVCOZGQIPCKAGHFTNPBWERBXLWKBHYMRRHUFUQUGYDNKHMWISYLKKMNYFMZBTJUWXKZVOHYKMFPEZGDEFWJFGTBITDPVMUERWQXSFXGKGVOTPDVDUSABYUZLOBTEOLPDIIDWRNZQAVAWYXJJVEQPQ");
    msg.value = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8739303310589123);
    msg.setSource(64436U);
    msg.setSourceEntity(110U);
    msg.setDestination(40436U);
    msg.setDestinationEntity(195U);
    msg.name.assign("ALBLBPFHSDRTPNTFTCEEQTJNPXJCCWTPDLEYNCWZBGGRVURVRMUJZFGTQYXNENKMJKFYWEDMBAOFLIKAYVQKOPJZVKSKRUDXRYLWNIFBELVMVNGCFTUUDGOHDFWOMASDHGKZUHAZSPDNAJUREBBYLZAHESIOACFBUJXTATGKSUVIYHXWMQNGDLJRAPCILIOQXBCYTPBXGMPDHRXJQEVFYXZMLEHZUCSKIQM");
    msg.value = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.42662709388935094);
    msg.setSource(7067U);
    msg.setSourceEntity(167U);
    msg.setDestination(65474U);
    msg.setDestinationEntity(249U);
    msg.id = 109U;
    msg.period = 1152848414U;
    msg.duty_cycle = 3544411475U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.21483199311355106);
    msg.setSource(26866U);
    msg.setSourceEntity(205U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(93U);
    msg.id = 114U;
    msg.period = 372506973U;
    msg.duty_cycle = 3139769986U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.5915097640233757);
    msg.setSource(6108U);
    msg.setSourceEntity(118U);
    msg.setDestination(16781U);
    msg.setDestinationEntity(222U);
    msg.id = 60U;
    msg.period = 4162434739U;
    msg.duty_cycle = 4051802622U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.090945892048367);
    msg.setSource(46546U);
    msg.setSourceEntity(142U);
    msg.setDestination(11251U);
    msg.setDestinationEntity(150U);
    msg.id = 13U;
    msg.period = 3996629040U;
    msg.duty_cycle = 1514304813U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.740060289862238);
    msg.setSource(5869U);
    msg.setSourceEntity(155U);
    msg.setDestination(22883U);
    msg.setDestinationEntity(216U);
    msg.id = 146U;
    msg.period = 750156617U;
    msg.duty_cycle = 1333962667U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.5096875179597804);
    msg.setSource(2710U);
    msg.setSourceEntity(253U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(146U);
    msg.id = 100U;
    msg.period = 3206110115U;
    msg.duty_cycle = 492823573U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.26827459242500895);
    msg.setSource(63576U);
    msg.setSourceEntity(190U);
    msg.setDestination(32364U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9291659225900383;
    msg.lon = 0.6863810336343801;
    msg.height = 0.26796868290090226;
    msg.x = 0.7163995374061847;
    msg.y = 0.6320162584230761;
    msg.z = 0.39188269875012705;
    msg.phi = 0.032942973322750535;
    msg.theta = 0.21964617365798256;
    msg.psi = 0.5522566358337655;
    msg.u = 0.653322662468325;
    msg.v = 0.40405858442075304;
    msg.w = 0.5071401929159662;
    msg.vx = 0.6039078170695612;
    msg.vy = 0.8814151896467511;
    msg.vz = 0.9254720803043381;
    msg.p = 0.195929579025105;
    msg.q = 0.3315483580632774;
    msg.r = 0.997666143721591;
    msg.depth = 0.009428038726440158;
    msg.alt = 0.759836524576063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.978955707097335);
    msg.setSource(41407U);
    msg.setSourceEntity(71U);
    msg.setDestination(14432U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.48124166347178055;
    msg.lon = 0.5600279994239152;
    msg.height = 0.8099933840235746;
    msg.x = 0.42625129281866836;
    msg.y = 0.7292662654309978;
    msg.z = 0.2660201187996297;
    msg.phi = 0.3765274070030984;
    msg.theta = 0.014564219277323986;
    msg.psi = 0.6202224509691311;
    msg.u = 0.3173005877624989;
    msg.v = 0.0550941539575861;
    msg.w = 0.4015043768119908;
    msg.vx = 0.5593816476369775;
    msg.vy = 0.8804610099912183;
    msg.vz = 0.36176833415679843;
    msg.p = 0.3546809485283996;
    msg.q = 0.2886182886409947;
    msg.r = 0.08850611739278424;
    msg.depth = 0.05330455802268319;
    msg.alt = 0.14255999468226954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.11130315899219267);
    msg.setSource(11449U);
    msg.setSourceEntity(167U);
    msg.setDestination(4868U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.9616300915963177;
    msg.lon = 0.7859155631107633;
    msg.height = 0.5958406297067858;
    msg.x = 0.7245674254502892;
    msg.y = 0.7685508854248017;
    msg.z = 0.32177323376008415;
    msg.phi = 0.7127590711193968;
    msg.theta = 0.10559869094309882;
    msg.psi = 0.06631787572809777;
    msg.u = 0.10687925498172157;
    msg.v = 0.01371663451234717;
    msg.w = 0.5641129355479053;
    msg.vx = 0.930215872990772;
    msg.vy = 0.5278593373335106;
    msg.vz = 0.7535106191587895;
    msg.p = 0.7728349864363575;
    msg.q = 0.27460359537356993;
    msg.r = 0.061938000871582743;
    msg.depth = 0.7554549103290217;
    msg.alt = 0.47917555609816187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.37602890036382997);
    msg.setSource(46653U);
    msg.setSourceEntity(177U);
    msg.setDestination(59100U);
    msg.setDestinationEntity(2U);
    msg.x = 0.8280072878960086;
    msg.y = 0.38901925169614304;
    msg.z = 0.045175853245035036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.6675787878729769);
    msg.setSource(3009U);
    msg.setSourceEntity(96U);
    msg.setDestination(62290U);
    msg.setDestinationEntity(121U);
    msg.x = 0.9876578206146551;
    msg.y = 0.47219333272403163;
    msg.z = 0.012479189590148154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.8642101644857311);
    msg.setSource(56935U);
    msg.setSourceEntity(91U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(248U);
    msg.x = 0.9853480672249565;
    msg.y = 0.3501586149207675;
    msg.z = 0.9959395620527866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.5506727017246289);
    msg.setSource(15178U);
    msg.setSourceEntity(82U);
    msg.setDestination(3413U);
    msg.setDestinationEntity(142U);
    msg.value = 0.4089092677627826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.1906300342126106);
    msg.setSource(34192U);
    msg.setSourceEntity(157U);
    msg.setDestination(1537U);
    msg.setDestinationEntity(86U);
    msg.value = 0.35073432314482555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.3284825588389043);
    msg.setSource(62504U);
    msg.setSourceEntity(176U);
    msg.setDestination(18946U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9723524890513847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.20593316996581468);
    msg.setSource(50239U);
    msg.setSourceEntity(9U);
    msg.setDestination(57405U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9883654146134643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.3815111397787979);
    msg.setSource(17337U);
    msg.setSourceEntity(174U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5981680050324348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.31135126685689885);
    msg.setSource(53510U);
    msg.setSourceEntity(12U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6308011372253737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.7745694544076521);
    msg.setSource(31876U);
    msg.setSourceEntity(66U);
    msg.setDestination(16252U);
    msg.setDestinationEntity(75U);
    msg.x = 0.8876860047253534;
    msg.y = 0.08118569828311761;
    msg.z = 0.9090412116233628;
    msg.phi = 0.7201017279434372;
    msg.theta = 0.526092584705941;
    msg.psi = 0.217271147693048;
    msg.p = 0.48097173131865334;
    msg.q = 0.8675728374537062;
    msg.r = 0.47038390879307734;
    msg.u = 0.8293548848976884;
    msg.v = 0.2694355654732731;
    msg.w = 0.48058518271552575;
    msg.bias_psi = 0.47554415771990133;
    msg.bias_r = 0.6692036741154866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.026063920551683162);
    msg.setSource(14716U);
    msg.setSourceEntity(21U);
    msg.setDestination(5685U);
    msg.setDestinationEntity(166U);
    msg.x = 0.7948272000009875;
    msg.y = 0.13992074925500197;
    msg.z = 0.04009932918887782;
    msg.phi = 0.23760451773068403;
    msg.theta = 0.07138044944884525;
    msg.psi = 0.1597340771046174;
    msg.p = 0.06430813645569411;
    msg.q = 0.9654713770032832;
    msg.r = 0.03811428515054538;
    msg.u = 0.8282805313832373;
    msg.v = 0.5065552821345775;
    msg.w = 0.9363316475186696;
    msg.bias_psi = 0.016679193459855912;
    msg.bias_r = 0.028183502034630936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.3756930497492328);
    msg.setSource(56589U);
    msg.setSourceEntity(111U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(35U);
    msg.x = 0.31429957794800434;
    msg.y = 0.43559636236211774;
    msg.z = 0.14946514738021122;
    msg.phi = 0.19134501940692983;
    msg.theta = 0.37467238306646844;
    msg.psi = 0.21494363702951702;
    msg.p = 0.059514100502517375;
    msg.q = 0.2850236525410209;
    msg.r = 0.8088269503315118;
    msg.u = 0.4883091086628658;
    msg.v = 0.18619862842626944;
    msg.w = 0.3520079606664688;
    msg.bias_psi = 0.8437779884533865;
    msg.bias_r = 0.08507053859231106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.7689241123845035);
    msg.setSource(18146U);
    msg.setSourceEntity(100U);
    msg.setDestination(46144U);
    msg.setDestinationEntity(94U);
    msg.bias_psi = 0.7081831719975754;
    msg.bias_r = 0.15383112683264144;
    msg.cog = 0.544832992109003;
    msg.cyaw = 0.0016184699544951053;
    msg.lbl_rej_level = 0.21784468463216822;
    msg.gps_rej_level = 0.25339276985081816;
    msg.custom_x = 0.7351357134187195;
    msg.custom_y = 0.9699031059964603;
    msg.custom_z = 0.4653406631873003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.9523423852363839);
    msg.setSource(39089U);
    msg.setSourceEntity(116U);
    msg.setDestination(28032U);
    msg.setDestinationEntity(22U);
    msg.bias_psi = 0.5536447523482642;
    msg.bias_r = 0.0407977523887707;
    msg.cog = 0.8963721570184696;
    msg.cyaw = 0.1343049698481803;
    msg.lbl_rej_level = 0.9559047247030579;
    msg.gps_rej_level = 0.11719701205822353;
    msg.custom_x = 0.7182034499564861;
    msg.custom_y = 0.087280100639896;
    msg.custom_z = 0.13484597755559535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.5273477863890068);
    msg.setSource(60395U);
    msg.setSourceEntity(49U);
    msg.setDestination(13561U);
    msg.setDestinationEntity(107U);
    msg.bias_psi = 0.031618681308800634;
    msg.bias_r = 0.05620256163040882;
    msg.cog = 0.3306015140513423;
    msg.cyaw = 0.7437986346781748;
    msg.lbl_rej_level = 0.8717266009305807;
    msg.gps_rej_level = 0.8414595677179066;
    msg.custom_x = 0.46310995649726716;
    msg.custom_y = 0.8346336189942429;
    msg.custom_z = 0.6353900503203364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.7573494952110132);
    msg.setSource(34352U);
    msg.setSourceEntity(74U);
    msg.setDestination(62481U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.05738623223728567;
    msg.reason = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.24174811835858379);
    msg.setSource(53832U);
    msg.setSourceEntity(15U);
    msg.setDestination(21218U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.20094045006830474;
    msg.reason = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9410757599158512);
    msg.setSource(8116U);
    msg.setSourceEntity(131U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.6240579568992343;
    msg.reason = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.4290229207064238);
    msg.setSource(8457U);
    msg.setSourceEntity(132U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(245U);
    msg.id = 77U;
    msg.range = 0.7682868739367075;
    msg.acceptance = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.12051609025625987);
    msg.setSource(39940U);
    msg.setSourceEntity(108U);
    msg.setDestination(53835U);
    msg.setDestinationEntity(36U);
    msg.id = 145U;
    msg.range = 0.9041536044482916;
    msg.acceptance = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.895985643909856);
    msg.setSource(64706U);
    msg.setSourceEntity(49U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(87U);
    msg.id = 82U;
    msg.range = 0.2615704031725108;
    msg.acceptance = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.5575354464687725);
    msg.setSource(42254U);
    msg.setSourceEntity(69U);
    msg.setDestination(25203U);
    msg.setDestinationEntity(223U);
    msg.type = 16U;
    msg.reason = 69U;
    msg.value = 0.219790276185429;
    msg.timestep = 0.17021712318668214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.09412758936194665);
    msg.setSource(30223U);
    msg.setSourceEntity(87U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(25U);
    msg.type = 126U;
    msg.reason = 75U;
    msg.value = 0.03125512634669303;
    msg.timestep = 0.9327928420684239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.7234941542109143);
    msg.setSource(33920U);
    msg.setSourceEntity(187U);
    msg.setDestination(13313U);
    msg.setDestinationEntity(250U);
    msg.type = 102U;
    msg.reason = 61U;
    msg.value = 0.054126827628080854;
    msg.timestep = 0.026596758351661753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.6741879711506003);
    msg.setSource(30699U);
    msg.setSourceEntity(139U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TQYQOMGTYLMRPWSUFZBYUJKFYZDLCZSVXKVBCEIBWKBHODHDKGJEDFHXXVARPSBGEEHLIPIYZTFVGAGTTHGHMRTZTIOLEJQEAGECCDGYHLVNPFKYNIJRUIWKJBRSKUDWAVGXJCJZZ");
    tmp_msg_0.lat = 0.08469809478975288;
    tmp_msg_0.lon = 0.9408660181528005;
    tmp_msg_0.depth = 0.8500990884003259;
    tmp_msg_0.query_channel = 176U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 134U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3931981408823455;
    msg.y = 0.35071154683477335;
    msg.var_x = 0.894632662201421;
    msg.var_y = 0.5171952358864532;
    msg.distance = 0.7277199296101738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0576953901040812);
    msg.setSource(37977U);
    msg.setSourceEntity(41U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(184U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EPHXNBXONTZWRZJPFAKBBICKDVMYRUMIDIVUMVZVVNQGBANAEFU");
    tmp_msg_0.lat = 0.647036529332671;
    tmp_msg_0.lon = 0.8082200900753452;
    tmp_msg_0.depth = 0.029065981017787568;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4930534576545209;
    msg.y = 0.015423588590408155;
    msg.var_x = 0.1357362202289808;
    msg.var_y = 0.36640819024833404;
    msg.distance = 0.30193817700514836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.22944982300689887);
    msg.setSource(57022U);
    msg.setSourceEntity(202U);
    msg.setDestination(29183U);
    msg.setDestinationEntity(135U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WZFTIEDRJYWXEMVHNSIABZZIGPUUCXHRGQBFGOKUDMJKPTGMSEUCYTVNAGJAPLHEBVEKTYBHYTIUWMDXLFIKLGNUQTOIIRANBEWOBDTSUJMLZRGUBARAYWCLIGHOJMDWKHZWQIQNRGWQYDCDZMRCPBFHRPVWQQVCDXNQKZXFKTGTFOQKEYPOSEFJLAFKUWT");
    tmp_msg_0.lat = 0.8469712510247897;
    tmp_msg_0.lon = 0.7612429269044766;
    tmp_msg_0.depth = 0.3806731654911356;
    tmp_msg_0.query_channel = 11U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8645279208108205;
    msg.y = 0.9316217821842732;
    msg.var_x = 0.30701463837955545;
    msg.var_y = 0.19760840283271996;
    msg.distance = 0.9706575550067209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.04292823100534082);
    msg.setSource(18312U);
    msg.setSourceEntity(250U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(5U);
    msg.state = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.3354183926163784);
    msg.setSource(8045U);
    msg.setSourceEntity(197U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(173U);
    msg.state = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.026289988621551408);
    msg.setSource(8913U);
    msg.setSourceEntity(1U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(244U);
    msg.state = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.9421018460668521);
    msg.setSource(56153U);
    msg.setSourceEntity(104U);
    msg.setDestination(24418U);
    msg.setDestinationEntity(192U);
    msg.x = 0.7483874897991286;
    msg.y = 0.8415913889551025;
    msg.z = 0.7278628393300411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.16471908738348506);
    msg.setSource(64150U);
    msg.setSourceEntity(65U);
    msg.setDestination(44745U);
    msg.setDestinationEntity(143U);
    msg.x = 0.38942149330497067;
    msg.y = 0.5450422575643797;
    msg.z = 0.8188854356095436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.737563016810314);
    msg.setSource(41642U);
    msg.setSourceEntity(209U);
    msg.setDestination(45957U);
    msg.setDestinationEntity(178U);
    msg.x = 0.07645876280509711;
    msg.y = 0.711992342736202;
    msg.z = 0.11453443253529783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.23436143571696688);
    msg.setSource(7868U);
    msg.setSourceEntity(245U);
    msg.setDestination(25900U);
    msg.setDestinationEntity(52U);
    msg.va = 0.9313078859650201;
    msg.aoa = 0.7509215031919296;
    msg.ssa = 0.46596987033147297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.737137893104087);
    msg.setSource(40347U);
    msg.setSourceEntity(105U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(227U);
    msg.va = 0.2028887738608438;
    msg.aoa = 0.4677898630829085;
    msg.ssa = 0.37904348483861117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.7315917291715117);
    msg.setSource(42711U);
    msg.setSourceEntity(98U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(219U);
    msg.va = 0.6884513080330494;
    msg.aoa = 0.7660949349047288;
    msg.ssa = 0.8545908845289287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.9151631266349397);
    msg.setSource(22895U);
    msg.setSourceEntity(162U);
    msg.setDestination(1543U);
    msg.setDestinationEntity(164U);
    msg.value = 0.36935814596701766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.40830700821953514);
    msg.setSource(14207U);
    msg.setSourceEntity(253U);
    msg.setDestination(42783U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6927441484904581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.4320811421827737);
    msg.setSource(56159U);
    msg.setSourceEntity(243U);
    msg.setDestination(29722U);
    msg.setDestinationEntity(120U);
    msg.value = 0.4889540884228971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.993272567340188);
    msg.setSource(38397U);
    msg.setSourceEntity(43U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(112U);
    msg.value = 0.4314452164733026;
    msg.z_units = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.8620253176734108);
    msg.setSource(42419U);
    msg.setSourceEntity(58U);
    msg.setDestination(24002U);
    msg.setDestinationEntity(175U);
    msg.value = 0.36423801977570214;
    msg.z_units = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.2687059153920739);
    msg.setSource(7091U);
    msg.setSourceEntity(73U);
    msg.setDestination(8196U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2667732066714421;
    msg.z_units = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.7169112053946252);
    msg.setSource(60450U);
    msg.setSourceEntity(85U);
    msg.setDestination(46790U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8961257587232011;
    msg.speed_units = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.8218204116458133);
    msg.setSource(10756U);
    msg.setSourceEntity(243U);
    msg.setDestination(889U);
    msg.setDestinationEntity(145U);
    msg.value = 0.2881492099999359;
    msg.speed_units = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.7507539439735668);
    msg.setSource(34496U);
    msg.setSourceEntity(89U);
    msg.setDestination(62458U);
    msg.setDestinationEntity(78U);
    msg.value = 0.2825715356166303;
    msg.speed_units = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.25895897007438573);
    msg.setSource(46524U);
    msg.setSourceEntity(176U);
    msg.setDestination(19094U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8037698137307991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.13191774785258092);
    msg.setSource(58774U);
    msg.setSourceEntity(113U);
    msg.setDestination(56899U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4031753636799661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.9139593757179076);
    msg.setSource(8834U);
    msg.setSourceEntity(68U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9369509159706186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.720313065932057);
    msg.setSource(61094U);
    msg.setSourceEntity(23U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3244251027825259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.9466862727603633);
    msg.setSource(59982U);
    msg.setSourceEntity(94U);
    msg.setDestination(28315U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5445945150182806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.04967602471415722);
    msg.setSource(23479U);
    msg.setSourceEntity(152U);
    msg.setDestination(11619U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6922412756288442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.8959180015316629);
    msg.setSource(13833U);
    msg.setSourceEntity(68U);
    msg.setDestination(38011U);
    msg.setDestinationEntity(138U);
    msg.value = 0.32173942893479024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.25895454710326216);
    msg.setSource(7818U);
    msg.setSourceEntity(160U);
    msg.setDestination(22629U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6563302861223915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.11285816170321528);
    msg.setSource(5555U);
    msg.setSourceEntity(180U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(168U);
    msg.value = 0.2329831916711994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.8446420067272935);
    msg.setSource(4900U);
    msg.setSourceEntity(110U);
    msg.setDestination(10901U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 2274263365U;
    msg.start_lat = 0.8629990887837695;
    msg.start_lon = 0.9382114742734978;
    msg.start_z = 0.31761775970695405;
    msg.start_z_units = 58U;
    msg.end_lat = 0.3883011358777757;
    msg.end_lon = 0.5372399100367431;
    msg.end_z = 0.8675269852055622;
    msg.end_z_units = 32U;
    msg.speed = 0.5819594853126356;
    msg.speed_units = 6U;
    msg.lradius = 0.5243735951225222;
    msg.flags = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.7799052905403799);
    msg.setSource(16739U);
    msg.setSourceEntity(41U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 3243710242U;
    msg.start_lat = 0.9287874076707145;
    msg.start_lon = 0.5891999615804867;
    msg.start_z = 0.3650555525144068;
    msg.start_z_units = 199U;
    msg.end_lat = 0.26680537912384494;
    msg.end_lon = 0.19488562252639796;
    msg.end_z = 0.8802141822652672;
    msg.end_z_units = 31U;
    msg.speed = 0.6968660970068999;
    msg.speed_units = 194U;
    msg.lradius = 0.9558672259337682;
    msg.flags = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.8549565125669023);
    msg.setSource(16344U);
    msg.setSourceEntity(3U);
    msg.setDestination(14793U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 2971743546U;
    msg.start_lat = 0.41278430565021607;
    msg.start_lon = 0.15798857774650144;
    msg.start_z = 0.10215589620674748;
    msg.start_z_units = 52U;
    msg.end_lat = 0.44692758198777605;
    msg.end_lon = 0.009818428069094165;
    msg.end_z = 0.538746682718541;
    msg.end_z_units = 71U;
    msg.speed = 0.1346560606342252;
    msg.speed_units = 143U;
    msg.lradius = 0.8426589039193263;
    msg.flags = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.14156134466918557);
    msg.setSource(52876U);
    msg.setSourceEntity(143U);
    msg.setDestination(866U);
    msg.setDestinationEntity(88U);
    msg.x = 0.7696273146782214;
    msg.y = 0.5411560860737759;
    msg.z = 0.9669934596854882;
    msg.k = 0.8540276039363341;
    msg.m = 0.9788739697420639;
    msg.n = 0.6716448615136326;
    msg.flags = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.3518156609916927);
    msg.setSource(19433U);
    msg.setSourceEntity(56U);
    msg.setDestination(939U);
    msg.setDestinationEntity(36U);
    msg.x = 0.4122130439680215;
    msg.y = 0.6795163983395573;
    msg.z = 0.9376074291709924;
    msg.k = 0.3073612655905853;
    msg.m = 0.5573100299029753;
    msg.n = 0.23429123311496547;
    msg.flags = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.5162117165768533);
    msg.setSource(61704U);
    msg.setSourceEntity(44U);
    msg.setDestination(62140U);
    msg.setDestinationEntity(77U);
    msg.x = 0.8347226811610133;
    msg.y = 0.27457774201283447;
    msg.z = 0.10759515062014169;
    msg.k = 0.626759174607159;
    msg.m = 0.33876628269509845;
    msg.n = 0.8415232616759712;
    msg.flags = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.18256087186491465);
    msg.setSource(8213U);
    msg.setSourceEntity(164U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5514823103879972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.48310770424812044);
    msg.setSource(57922U);
    msg.setSourceEntity(239U);
    msg.setDestination(55225U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6697470377415418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.8636377765158113);
    msg.setSource(45108U);
    msg.setSourceEntity(126U);
    msg.setDestination(283U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6112503550417383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.50442415200769);
    msg.setSource(50928U);
    msg.setSourceEntity(194U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(137U);
    msg.u = 0.42266555001358375;
    msg.v = 0.10371519772414683;
    msg.w = 0.8179581325462791;
    msg.p = 0.29482915419222466;
    msg.q = 0.17592100860199889;
    msg.r = 0.903104244373178;
    msg.flags = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.7543341289722781);
    msg.setSource(15682U);
    msg.setSourceEntity(91U);
    msg.setDestination(61040U);
    msg.setDestinationEntity(153U);
    msg.u = 0.03132674814875058;
    msg.v = 0.8366227436970202;
    msg.w = 0.2601958058797815;
    msg.p = 0.4776724877746079;
    msg.q = 0.40683059243952147;
    msg.r = 0.49813512215444355;
    msg.flags = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.13545618756815003);
    msg.setSource(48020U);
    msg.setSourceEntity(89U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(125U);
    msg.u = 0.6856900403961864;
    msg.v = 0.784560855609259;
    msg.w = 0.5223566027572233;
    msg.p = 0.029499616118898397;
    msg.q = 0.17035173731580944;
    msg.r = 0.22273055892989746;
    msg.flags = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.17386540349188684);
    msg.setSource(29961U);
    msg.setSourceEntity(181U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(56U);
    msg.path_ref = 792118233U;
    msg.start_lat = 0.5811053733544146;
    msg.start_lon = 0.5067562274366414;
    msg.start_z = 0.9501856028532911;
    msg.start_z_units = 228U;
    msg.end_lat = 0.4133674058732467;
    msg.end_lon = 0.9058161790697906;
    msg.end_z = 0.6821300324436319;
    msg.end_z_units = 107U;
    msg.lradius = 0.8564463178079275;
    msg.flags = 253U;
    msg.x = 0.015298411063475514;
    msg.y = 0.8831728193353843;
    msg.z = 0.8087052232422848;
    msg.vx = 0.6069908116191941;
    msg.vy = 0.15784441174434538;
    msg.vz = 0.2814869950030764;
    msg.course_error = 0.01437813809137456;
    msg.eta = 34447U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.4536060651580477);
    msg.setSource(40469U);
    msg.setSourceEntity(51U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(18U);
    msg.path_ref = 3516210866U;
    msg.start_lat = 0.3586418706416915;
    msg.start_lon = 0.5833837305592002;
    msg.start_z = 0.13124305597361408;
    msg.start_z_units = 49U;
    msg.end_lat = 0.415203426577458;
    msg.end_lon = 0.47516939883911524;
    msg.end_z = 0.7952076247416511;
    msg.end_z_units = 182U;
    msg.lradius = 0.328739211512148;
    msg.flags = 144U;
    msg.x = 0.6400674341541389;
    msg.y = 0.1367572809621055;
    msg.z = 0.7114254499442454;
    msg.vx = 0.2830752749517388;
    msg.vy = 0.33381388885494534;
    msg.vz = 0.8958591541095142;
    msg.course_error = 0.018995188122727935;
    msg.eta = 15680U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.2882374378009501);
    msg.setSource(40559U);
    msg.setSourceEntity(100U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(184U);
    msg.path_ref = 520326514U;
    msg.start_lat = 0.3137282886804823;
    msg.start_lon = 0.6411377528436673;
    msg.start_z = 0.8291248916715985;
    msg.start_z_units = 53U;
    msg.end_lat = 0.9453143619639498;
    msg.end_lon = 0.029992393287102126;
    msg.end_z = 0.8427801154681823;
    msg.end_z_units = 185U;
    msg.lradius = 0.9024501859555956;
    msg.flags = 160U;
    msg.x = 0.09845305363977508;
    msg.y = 0.4606140246302086;
    msg.z = 0.18237398876679745;
    msg.vx = 0.4451204393817422;
    msg.vy = 0.3078299917857382;
    msg.vz = 0.8311861270414327;
    msg.course_error = 0.30273933088052707;
    msg.eta = 52600U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.16026365432973466);
    msg.setSource(2590U);
    msg.setSourceEntity(68U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(212U);
    msg.k = 0.07337226436643296;
    msg.m = 0.9506398608240506;
    msg.n = 0.01593208285021097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.06186067135383222);
    msg.setSource(17750U);
    msg.setSourceEntity(104U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(184U);
    msg.k = 0.4128285734036221;
    msg.m = 0.10106094822489309;
    msg.n = 0.044236221247288654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.9255582103757992);
    msg.setSource(2834U);
    msg.setSourceEntity(23U);
    msg.setDestination(37038U);
    msg.setDestinationEntity(127U);
    msg.k = 0.7465958298145147;
    msg.m = 0.2753441961957358;
    msg.n = 0.12466059026631537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.9562462052640399);
    msg.setSource(17508U);
    msg.setSourceEntity(123U);
    msg.setDestination(57960U);
    msg.setDestinationEntity(93U);
    msg.p = 0.7094792717637849;
    msg.i = 0.3321035507075344;
    msg.d = 0.26593891532359926;
    msg.a = 0.720319671203847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.8871722915071613);
    msg.setSource(12084U);
    msg.setSourceEntity(171U);
    msg.setDestination(37562U);
    msg.setDestinationEntity(5U);
    msg.p = 0.16380924135837027;
    msg.i = 0.23923744474743114;
    msg.d = 0.4901780585781792;
    msg.a = 0.8514092584409951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.9677082968360291);
    msg.setSource(12633U);
    msg.setSourceEntity(95U);
    msg.setDestination(56640U);
    msg.setDestinationEntity(40U);
    msg.p = 0.1877200052592951;
    msg.i = 0.415620418799302;
    msg.d = 0.4988780879939283;
    msg.a = 0.48342747677009656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.6868343681431701);
    msg.setSource(13924U);
    msg.setSourceEntity(172U);
    msg.setDestination(39317U);
    msg.setDestinationEntity(46U);
    msg.op = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.9442820651436099);
    msg.setSource(48551U);
    msg.setSourceEntity(83U);
    msg.setDestination(43106U);
    msg.setDestinationEntity(185U);
    msg.op = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.064824149605619);
    msg.setSource(1668U);
    msg.setSourceEntity(229U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(122U);
    msg.op = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.8125529058970149);
    msg.setSource(55986U);
    msg.setSourceEntity(221U);
    msg.setDestination(53400U);
    msg.setDestinationEntity(138U);
    msg.x = 0.4227762539608181;
    msg.y = 0.8583816307939969;
    msg.z = 0.9018032013243638;
    msg.vx = 0.4574202722864017;
    msg.vy = 0.8000257946679921;
    msg.vz = 0.996924910775874;
    msg.ax = 0.8443844940735725;
    msg.ay = 0.6939613308106569;
    msg.az = 0.15762340986493273;
    msg.flags = 12536U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.14316036256243414);
    msg.setSource(38664U);
    msg.setSourceEntity(141U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(122U);
    msg.x = 0.06085401156462322;
    msg.y = 0.22419512923045637;
    msg.z = 0.8738804088996908;
    msg.vx = 0.01763943131857093;
    msg.vy = 0.6830810786899079;
    msg.vz = 0.6962685718606693;
    msg.ax = 0.5517382077193769;
    msg.ay = 0.9244678660361066;
    msg.az = 0.3913182604648092;
    msg.flags = 56015U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.28420436439811525);
    msg.setSource(10120U);
    msg.setSourceEntity(143U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(147U);
    msg.x = 0.25690892362707374;
    msg.y = 0.9835072997758407;
    msg.z = 0.7801237650851753;
    msg.vx = 0.8409600646577627;
    msg.vy = 0.2638729254519072;
    msg.vz = 0.30038624017951165;
    msg.ax = 0.8950369774548987;
    msg.ay = 0.3735252339385211;
    msg.az = 0.5326349391003657;
    msg.flags = 18410U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.6600390134010011);
    msg.setSource(16088U);
    msg.setSourceEntity(151U);
    msg.setDestination(25787U);
    msg.setDestinationEntity(163U);
    msg.value = 0.1751558112004219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.5308707247658475);
    msg.setSource(15130U);
    msg.setSourceEntity(147U);
    msg.setDestination(31511U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5282871013723031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.8748255586839585);
    msg.setSource(33580U);
    msg.setSourceEntity(38U);
    msg.setDestination(37689U);
    msg.setDestinationEntity(215U);
    msg.value = 0.08142817767485189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6841373851064755);
    msg.setSource(49616U);
    msg.setSourceEntity(75U);
    msg.setDestination(33246U);
    msg.setDestinationEntity(236U);
    msg.timeout = 7507U;
    msg.lat = 0.7846103870791303;
    msg.lon = 0.3440298944343526;
    msg.z = 0.6690961051463624;
    msg.z_units = 57U;
    msg.speed = 0.6204389230491664;
    msg.speed_units = 168U;
    msg.roll = 0.10379921316073637;
    msg.pitch = 0.12834939575963444;
    msg.yaw = 0.4867379247055622;
    msg.custom.assign("KPPZQIOQKJJTEUKQLSHZRRZVGOWGOOMNYUVCKGPZSHINCQAMWHJUEUJRBTFLWCVFENNONBBFNALCLOTFEGHDDLRITZTSEMADGRNBJEHFOIBVPTXGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.8849635205370644);
    msg.setSource(26633U);
    msg.setSourceEntity(190U);
    msg.setDestination(17198U);
    msg.setDestinationEntity(251U);
    msg.timeout = 32920U;
    msg.lat = 0.2004387072334568;
    msg.lon = 0.5373426130194188;
    msg.z = 0.6927482520350967;
    msg.z_units = 65U;
    msg.speed = 0.28967420518511766;
    msg.speed_units = 76U;
    msg.roll = 0.30280695033281824;
    msg.pitch = 0.608878296257008;
    msg.yaw = 0.1130599544769223;
    msg.custom.assign("MICZYPHWWQBNVMWFRGBLBNRLNIBAIKQJWZZYDXPJKSITPNPNMESYLOTKVZJBERDLZRBMNYWRCVLBXIRZDDUEZCJBCGJGMQKCKQECWUWDQJDGUCAUTTCHDRPKNVUIJPLOHUCAOIQOPXGTQEGJEMXREGISQZIXYSYSZBZIFLGTURTXVHDNHASGXMVYAADAFOTVPOVWTFUMKBSLOFVUHHEEWKDFYOJXMPFYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.7699947496940721);
    msg.setSource(26781U);
    msg.setSourceEntity(170U);
    msg.setDestination(62881U);
    msg.setDestinationEntity(184U);
    msg.timeout = 39510U;
    msg.lat = 0.738839432462667;
    msg.lon = 0.32400854163134385;
    msg.z = 0.21087703483189413;
    msg.z_units = 17U;
    msg.speed = 0.9366783761153459;
    msg.speed_units = 170U;
    msg.roll = 0.23511912270693858;
    msg.pitch = 0.818626804424472;
    msg.yaw = 0.7555712108717988;
    msg.custom.assign("KGPWQGXVHIGCEPNCNXJMGYZZOBYRJZHXDCTQPUTLRCXZTBDZABLDNWGTPLILXKSLAKLXUUFFIWTIMWQCKEUXHPIBSKNSQWGFVPECUDSANPVISIULWTZYQMYAORHAKQFOJQADYTZBIHJKDEHYHZRDBVQMYRFMBKWMSEORVUEGSJWTAMROVSXIYLUYHTEHRQLZKDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.05625504560351868);
    msg.setSource(59860U);
    msg.setSourceEntity(249U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(43U);
    msg.timeout = 4089U;
    msg.lat = 0.0039924425171874445;
    msg.lon = 0.3612677358239682;
    msg.z = 0.7757859172489345;
    msg.z_units = 140U;
    msg.speed = 0.7285175853277497;
    msg.speed_units = 91U;
    msg.duration = 58191U;
    msg.radius = 0.35726976473599814;
    msg.flags = 74U;
    msg.custom.assign("XVMLSALETAIEJWIXWDWGJHVAQPZLZJNDKOIUZQJQWJMSZEBXNVVHMZEHMSKSQYPFNOKRCYYQTZYRWUKEEDOICPVBBTTPKBPAYRQHICUTJXWGHFJARCIOYDGNKJDYZXUMQFXDTOOYUGRFOHVPWBECFPEMXMCVNQRIVBRLGNDSCZLPNUJFAAKCDHGTUNZHLGDULGABSOLUZBSCBQFNTLFAXTKEWSERKWGQHGPFMNMTRUBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.15742961482303208);
    msg.setSource(58838U);
    msg.setSourceEntity(47U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(102U);
    msg.timeout = 35448U;
    msg.lat = 0.10373357347792223;
    msg.lon = 0.6183071244023917;
    msg.z = 0.713875567784741;
    msg.z_units = 204U;
    msg.speed = 0.269905776615173;
    msg.speed_units = 131U;
    msg.duration = 25830U;
    msg.radius = 0.5007388797686577;
    msg.flags = 180U;
    msg.custom.assign("TJDUBUNWMHRMEPKKZOUFYXUYUODCFBQQOJKGMGQRYFQMNILQESRPCBPPMQNOYXGWILZFVVDJDDHSFKDFAHSHHJAASLAOZYSZJFYCLWOAXSISNHVENMMARMJXIPQSFHYGTEBSIVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.5843876208100368);
    msg.setSource(28875U);
    msg.setSourceEntity(107U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(157U);
    msg.timeout = 53450U;
    msg.lat = 0.6837145806902322;
    msg.lon = 0.11954977876229234;
    msg.z = 0.09714473733789797;
    msg.z_units = 12U;
    msg.speed = 0.5952802947390883;
    msg.speed_units = 204U;
    msg.duration = 20047U;
    msg.radius = 0.5023344280118008;
    msg.flags = 23U;
    msg.custom.assign("XFOTSOGPXWRIUJWRDQGRVTOPYQKJCATZAXGSVCCPUNSEVQZHLMGHRUCXDAFPDSNJHNMGAJLWMPBRVNWIQMJVLOYSAZTCCRLIKLWSNQGSCREMUMSPBYZZMADNQWIZLNSFTZVLZKKFXDSHYYQZDKDEJKJCMUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.4069886634576091);
    msg.setSource(10034U);
    msg.setSourceEntity(214U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(224U);
    msg.custom.assign("CHPBNYYRELUFWKMKRXJXGWQQSOKQVDQSAUAJEDAMLULUYEGGZZKVQYITJHZCELYDFTFHKUWAXHIPVRONXLBEKTBBGGJIYFCWYBQHEZFXYQSZFTNBPGVCFTTGDPNNXWNYTDTHPNROFOBHILAVULOIVJHCRBMHZFWDDOVAMKJUKXNMVPENRVMXCSFKIQSJMEZPDWQRJXDGISPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.546929470513994);
    msg.setSource(4104U);
    msg.setSourceEntity(253U);
    msg.setDestination(39693U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("EMDRJRYIQQBBBZTXLLAXQDVVSUAMUXTNZDKWJDJFMQDSAWFGEKNUJDYRKWSMWNTOHHXZBIZCYZKOMOAAZJDYJZGRDKHINGCKPAJVHEMCWNLSYOBERECSYGNZEJPCSPPYMPGTKMHQMRNYBWTHHWZQUDMVFJSSJGXVPCUFTLITBGTLOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.2278599956341969);
    msg.setSource(15669U);
    msg.setSourceEntity(118U);
    msg.setDestination(24761U);
    msg.setDestinationEntity(55U);
    msg.custom.assign("IOMYYGWVUTTAEMXMSKUQYPNSTOFMZUDUZCOAPUCKGTQAXHKESXWTKMCOMPNZVIKOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.32785671966013896);
    msg.setSource(48808U);
    msg.setSourceEntity(54U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(253U);
    msg.timeout = 5076U;
    msg.lat = 0.5614579674098118;
    msg.lon = 0.939037724689903;
    msg.z = 0.23068684262577022;
    msg.z_units = 193U;
    msg.duration = 20289U;
    msg.speed = 0.5540063360118131;
    msg.speed_units = 194U;
    msg.type = 179U;
    msg.radius = 0.6841799968312963;
    msg.length = 0.9285606396949057;
    msg.bearing = 0.34194820912632073;
    msg.direction = 213U;
    msg.custom.assign("BVCGEAMJTVTWQSJDXVALIUEHGNESPYEKFKYNQQRFTQBYDYPNGILJXBSFHLZJAMUVANUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.3955273152342965);
    msg.setSource(34028U);
    msg.setSourceEntity(217U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(200U);
    msg.timeout = 16567U;
    msg.lat = 0.3413896710254327;
    msg.lon = 0.5717230464211848;
    msg.z = 0.739960795766451;
    msg.z_units = 176U;
    msg.duration = 51518U;
    msg.speed = 0.5899252231283605;
    msg.speed_units = 206U;
    msg.type = 249U;
    msg.radius = 0.9035181382782429;
    msg.length = 0.5654455614966108;
    msg.bearing = 0.4127481589562163;
    msg.direction = 90U;
    msg.custom.assign("IFNDFWLJZXBRAKANWLMMNZHRBGEMZZPTSOQIRHDBGRPQQHTKCFCQFSBRVPTWZZUXCSTJLVAOTTWVNEAAHHKLROORMDQLZSWUUWGBDYYPZQDIXPWOLSMMUNKUUTLCJEDWVZSWPVJGUOPAKHOFATRKJNMVVOCSIUYFCNIFOAIJPGEJEAYZKBNQBHJNJEALUWPIKGVGFTXYYRBFQXDDCEDEHMGCHEXISLTSHICDQBJUYRXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.993602238815946);
    msg.setSource(63810U);
    msg.setSourceEntity(73U);
    msg.setDestination(19270U);
    msg.setDestinationEntity(19U);
    msg.timeout = 46701U;
    msg.lat = 0.08387100624263899;
    msg.lon = 0.8362998139726138;
    msg.z = 0.06797114659984516;
    msg.z_units = 132U;
    msg.duration = 37492U;
    msg.speed = 0.4221575957627183;
    msg.speed_units = 65U;
    msg.type = 182U;
    msg.radius = 0.31841219130380527;
    msg.length = 0.08077744696983546;
    msg.bearing = 0.09149988588999536;
    msg.direction = 71U;
    msg.custom.assign("FTWQROHAZQXWCHIOGHUEPXUCFRQYSPTTIFUUWQJLAZDANMDREHUKOSIRZJSLFMDHRXKSNJRCUXBRXZVIMVICGDNBUELVYCRBOMVCJKTISOKTPRWKKFUJCYKASWLLJMHAVOZVTDSNWHPQDCCVHDWEYKDXBWLZYDYJOPPFWBCQBLNYJSGEZZAGEPAMLGNUXXJZGNBGYHHGIIYTMABEQDOMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.09450084995341457);
    msg.setSource(63251U);
    msg.setSourceEntity(85U);
    msg.setDestination(40650U);
    msg.setDestinationEntity(250U);
    msg.duration = 22315U;
    msg.custom.assign("UQMYMZGHKRGWLELFVQZJMDWVIKVFRSETNVIPGTXLTBRCRJXYXPWNMLEKBCNJIWHPRANUOAHMRFPOTIIIZTZCMDPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.49734887674924444);
    msg.setSource(16554U);
    msg.setSourceEntity(166U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(59U);
    msg.duration = 56482U;
    msg.custom.assign("AWTSQHKZUHWNLVBZYCCEUTRFETKIMKSGDVVINMEHTOLLSZAJBNYWDJUACXFDNJZPLKCVHBMLGEAFJVTEBSRBACTBKFGDEJGWOJINOAXGIODIQKNZHZYGZLODISXEYIABPPSPACUMLHOXHQLKXZDJNVHUCQUYXPTITTGRSTWYPJQHQYNWRBOWMIFYXSBVQAUOCIEZVUXCRKFCLXJMGPNSPQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5356206114850288);
    msg.setSource(17806U);
    msg.setSourceEntity(195U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(220U);
    msg.duration = 58451U;
    msg.custom.assign("EUMFGPYWOYPMQGVPLDCSZBEOOQIXHXHUMTVYZTEFRZUZNHDJVTXUYKJHHHSGAYCXTBAXHVXEDNICWKVTFDLQKFMRJPPTTAANWEPROTMLLLWWBCKIVKERQGJJUBSMEMDBEISCBNZNYFMEGAFAJSCHLWYORXUDLBZFWOKFVBKCRYOQJINXGCUOHINQQNEBPINMZUOOLJTSNKUWGARCLCAAPIFXWFDYZDSMXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.30525590810275793);
    msg.setSource(23855U);
    msg.setSourceEntity(76U);
    msg.setDestination(42877U);
    msg.setDestinationEntity(39U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2250107959U;
    tmp_msg_0.start_lat = 0.889644089702648;
    tmp_msg_0.start_lon = 0.5960842064402294;
    tmp_msg_0.start_z = 0.8599632842325902;
    tmp_msg_0.start_z_units = 218U;
    tmp_msg_0.end_lat = 0.5081148873056621;
    tmp_msg_0.end_lon = 0.23907362261941467;
    tmp_msg_0.end_z = 0.2049072545716174;
    tmp_msg_0.end_z_units = 186U;
    tmp_msg_0.speed = 0.15247706562379693;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.lradius = 0.36635724411850623;
    tmp_msg_0.flags = 214U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54313U;
    msg.custom.assign("YJRGHJFXTRPODMNTTLJWNLGDJPAIZPUQGLQTVACUZXOIVQSXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.7374367300388505);
    msg.setSource(44450U);
    msg.setSourceEntity(195U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(248U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6806127640594997;
    msg.control.set(tmp_msg_0);
    msg.duration = 33842U;
    msg.custom.assign("HVHACRAFPMBHPHQAWSHIZODJOYRCOFLSFIZQLTCDEZLKLDDMNPLLAFYDJPVADIRPVNTRCTEFHOXNAKBPQVVGZLAVVSHTFLXDZFSOBAUJUGITBBSZFKBUQGEIKWGXERNECXSNNRQQRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.2553050002658739);
    msg.setSource(25U);
    msg.setSourceEntity(52U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(88U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.1842179515236414;
    msg.control.set(tmp_msg_0);
    msg.duration = 15043U;
    msg.custom.assign("CETUMHXIGSUCIQJTQUSDWGYYNAFQICXUPXAKUCUMLKRARFIJEWXEBPPYCTPIZBGSMNFDEROVOJNZEWVMIXUNYVWQSLGYAHTTFIOTREVEKZKGRXBBDHUFRMFHQNJANRQHSOWAFEJIKWOORGEHGKZSUBVBKVDFBLWZPOCALQDZMDQYNXTBFJGPDMXSHTLHLPNMLZKGFIVRTGBJCXPYMSVHBKKVOAJPYDNZQSDJACAZOOCHDLZLEVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.8866260662492584);
    msg.setSource(30440U);
    msg.setSourceEntity(116U);
    msg.setDestination(16356U);
    msg.setDestinationEntity(250U);
    msg.timeout = 36826U;
    msg.lat = 0.15347669651532203;
    msg.lon = 0.744162007847195;
    msg.z = 0.649212236771819;
    msg.z_units = 180U;
    msg.speed = 0.7202075191920275;
    msg.speed_units = 5U;
    msg.bearing = 0.9368832598739403;
    msg.cross_angle = 0.8295842630787948;
    msg.width = 0.8293903584262651;
    msg.length = 0.11564725813216925;
    msg.hstep = 0.06784127375689808;
    msg.coff = 46U;
    msg.alternation = 59U;
    msg.flags = 119U;
    msg.custom.assign("HRXAARAOLBRRHTMLHQGIWMNCQCYARAIGJLNEVWZVBEJJOFZVUYKIGCFRDIUKLPRSCMGEENVUUSIODITVDNSWKILZSYWOPARZNQGKWNVFXOGDTHJFVQYJMQPLDVWDPJHWPKFRBHADSMLWNBCYMXAJYCTBYXUBXBIWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.4752463529811616);
    msg.setSource(62730U);
    msg.setSourceEntity(190U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(64U);
    msg.timeout = 54373U;
    msg.lat = 0.6527760131007121;
    msg.lon = 0.6011608200001619;
    msg.z = 0.5514715746186052;
    msg.z_units = 197U;
    msg.speed = 0.9778899742598279;
    msg.speed_units = 37U;
    msg.bearing = 0.1891086825513385;
    msg.cross_angle = 0.9391301220596255;
    msg.width = 0.013114185480748386;
    msg.length = 0.5943419239834561;
    msg.hstep = 0.0913375708963643;
    msg.coff = 184U;
    msg.alternation = 196U;
    msg.flags = 37U;
    msg.custom.assign("CAFPGNKNSKUVMCGZMZPVCBOHIGJWBQMBHDYQQWUYHMXYCJDFMEXDICBDBWRXPJXEERDVWLTIUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.521318005808386);
    msg.setSource(13178U);
    msg.setSourceEntity(32U);
    msg.setDestination(21949U);
    msg.setDestinationEntity(187U);
    msg.timeout = 1773U;
    msg.lat = 0.9855899645113185;
    msg.lon = 0.6400599250109996;
    msg.z = 0.5356968759882773;
    msg.z_units = 129U;
    msg.speed = 0.7082271156395745;
    msg.speed_units = 213U;
    msg.bearing = 0.4812913513807091;
    msg.cross_angle = 0.47589932862503703;
    msg.width = 0.5685512095938743;
    msg.length = 0.977349849112863;
    msg.hstep = 0.3396861466662757;
    msg.coff = 70U;
    msg.alternation = 199U;
    msg.flags = 64U;
    msg.custom.assign("FPHTOXOAMGINYUPHURGHRMZKLAEAKFBLYZWNXMTRLBMUOXZVUKBNWTLEUFCDTBLBVOSFIPBHGLAGZPYGIOGORIVEPZNHHMKPCWYOIJTPQSXSQRSKZDFKQQVKMJYSDLUDEYHGFQVRDEXQYDJCVDTJEOAVQUNYGJKFFTXAYPOOMCUAQSNWAHSZYECIVWCJQBJTHJXIGIRMNEBSKLZNPRCCWEXBTLRQWNRZNVLMVCJWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.3833026015765556);
    msg.setSource(58506U);
    msg.setSourceEntity(175U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(118U);
    msg.timeout = 9956U;
    msg.lat = 0.5094741602649089;
    msg.lon = 0.24969520430744951;
    msg.z = 0.6141280590934368;
    msg.z_units = 143U;
    msg.speed = 0.406549405556337;
    msg.speed_units = 94U;
    msg.custom.assign("PCXKXKQIOQRSJBRIMMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.608853680185952);
    msg.setSource(59056U);
    msg.setSourceEntity(199U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(79U);
    msg.timeout = 5417U;
    msg.lat = 0.018287932012144292;
    msg.lon = 0.7754469328103886;
    msg.z = 0.22212903558971409;
    msg.z_units = 119U;
    msg.speed = 0.15821386057958597;
    msg.speed_units = 199U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.06932897956974948;
    tmp_msg_0.y = 0.27574737300461283;
    tmp_msg_0.z = 0.4569679388465968;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BMPRDOAPOTMDBSXNBGIYGRWGNNIHSSJEAYNVTITYCEUXCCHLPCSMLVYXQHZKQQTLAGJXDDHMINOZYEVXZNEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.8129744156823449);
    msg.setSource(46768U);
    msg.setSourceEntity(27U);
    msg.setDestination(34742U);
    msg.setDestinationEntity(17U);
    msg.timeout = 19197U;
    msg.lat = 0.3496304651133676;
    msg.lon = 0.08387377404382046;
    msg.z = 0.8056921438510629;
    msg.z_units = 183U;
    msg.speed = 0.192885316464251;
    msg.speed_units = 47U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.04353437014899042;
    tmp_msg_0.y = 0.3259918569491944;
    tmp_msg_0.z = 0.3529645919806528;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RNVHPWVJNMNVGTZCZQARFAUOFBAJIPVHRNYIGTTZWSCSSOLQEJUULBZTJJVOFERWIPDJKLWKADTUHSMSHDDPNFJLGUKLWMXQGCLFAPWRIGYUEFNTOQMGUZBCQFRNZTVXRZSYFJKPQKUWBGGBBQOIRXOMCMDPYCAIDYOEIZXHZQENCBDZXHAVWDEUWLYSMRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.28897945114867185);
    msg.setSource(53968U);
    msg.setSourceEntity(215U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(151U);
    msg.x = 0.43497597128597165;
    msg.y = 0.6101173739376726;
    msg.z = 0.9558534250009952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.22814825859692345);
    msg.setSource(22698U);
    msg.setSourceEntity(195U);
    msg.setDestination(50091U);
    msg.setDestinationEntity(146U);
    msg.x = 0.9205714160545085;
    msg.y = 0.7932603712040952;
    msg.z = 0.7039721224365247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.5805867733132292);
    msg.setSource(43302U);
    msg.setSourceEntity(60U);
    msg.setDestination(443U);
    msg.setDestinationEntity(110U);
    msg.x = 0.8258376911031511;
    msg.y = 0.71088514168987;
    msg.z = 0.6596545172112537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.7560947076206542);
    msg.setSource(1646U);
    msg.setSourceEntity(186U);
    msg.setDestination(30788U);
    msg.setDestinationEntity(87U);
    msg.timeout = 41754U;
    msg.lat = 0.3586612087234806;
    msg.lon = 0.6461327570402231;
    msg.z = 0.8792150004278124;
    msg.z_units = 200U;
    msg.amplitude = 0.935567962692576;
    msg.pitch = 0.014787707387437399;
    msg.speed = 0.6786467791573171;
    msg.speed_units = 146U;
    msg.custom.assign("IZSPNINSMDXMMYIVXWBDBVRCJTLCFWTJVGQRRIJLBPWDAGGVCDEQOXDWYDGKNWQJVLIOBXZMSLEOVAHBRJJNLORVKPFALHXXSDBMEDCCNJAOUCDYPOELEUIEICRPDAMGBUUFANTYPKCFQTYUEYZOLBKKYHJKGPVHZHGYOOFWIUTCLZXSHASNFMGKPZZPVLWXTQNZURBGJHFVQEYAKIRMEWWUTUQINSZMXRYZTHTUPFRXMQFHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.1309272853584369);
    msg.setSource(16086U);
    msg.setSourceEntity(208U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(97U);
    msg.timeout = 65509U;
    msg.lat = 0.8346460628449857;
    msg.lon = 0.29257373732082326;
    msg.z = 0.1517352510059634;
    msg.z_units = 70U;
    msg.amplitude = 0.8628133598562737;
    msg.pitch = 0.7977219819640934;
    msg.speed = 0.14797671825795122;
    msg.speed_units = 31U;
    msg.custom.assign("DGRSEMRTJZHAENEZLNMQOFUYJTYLRZTNMYXHQOHCLFIWUOBHOLIFJXTSZJCSYPVADGDEGKFJSYVKZVLAEECCFQYWIEXACXUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.2848673081985089);
    msg.setSource(35544U);
    msg.setSourceEntity(105U);
    msg.setDestination(34246U);
    msg.setDestinationEntity(11U);
    msg.timeout = 57014U;
    msg.lat = 0.25438727772830894;
    msg.lon = 0.700531990706575;
    msg.z = 0.7640837239849952;
    msg.z_units = 56U;
    msg.amplitude = 0.6913651023683951;
    msg.pitch = 0.8562269117392173;
    msg.speed = 0.11649426529650952;
    msg.speed_units = 226U;
    msg.custom.assign("GMNYUNVYOJNHEPVVHJMZTRYXOXFFPXXQUFKLLSPJKDDMGWMNPPUTPEKBUGGUCHCBYQCQIDMIANEIQDIPJRAZGXARELRHVSVUECXWAZWOAOVLLBUVBGJFRRYAEDFOCZSQZWZHXMBJYLMLIAEOTCVRFFBCJPGMHITSUOWCNDWKIDTWZHNRQOMIWIQKPCBKRTFTXQOKTHRBGYSIQYZKVNLSSLNAHKOUXCHJGDSVFDWWTEUDBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.1627300872735764);
    msg.setSource(24407U);
    msg.setSourceEntity(62U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.6390822684349833);
    msg.setSource(34073U);
    msg.setSourceEntity(85U);
    msg.setDestination(27234U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.019772164037535456);
    msg.setSource(39098U);
    msg.setSourceEntity(134U);
    msg.setDestination(47543U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.005108635439019182);
    msg.setSource(41120U);
    msg.setSourceEntity(206U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.8449952047262652;
    msg.lon = 0.9686704663312136;
    msg.z = 0.6514699192719;
    msg.z_units = 13U;
    msg.radius = 0.16730983274709688;
    msg.duration = 26677U;
    msg.speed = 0.6558370133278003;
    msg.speed_units = 188U;
    msg.custom.assign("KLJROGLEMODJBOMBNQWKTCZSOVYLACILDWXDBMLQNBJNYSPEUXIDWJDSRXAPAKTIHVIHVIPVHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.5705808998041643);
    msg.setSource(5965U);
    msg.setSourceEntity(44U);
    msg.setDestination(28626U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8035053954248403;
    msg.lon = 0.22978724271132778;
    msg.z = 0.3608129190456829;
    msg.z_units = 131U;
    msg.radius = 0.7926947122609815;
    msg.duration = 40546U;
    msg.speed = 0.7016118495817419;
    msg.speed_units = 3U;
    msg.custom.assign("AFTKRPMBGIVDURBTQAQWJRKNNWTLNSAFQZRGGHCHRFMHHQQKUNSREEOUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.36979821150338554);
    msg.setSource(58495U);
    msg.setSourceEntity(128U);
    msg.setDestination(20171U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8841237131472375;
    msg.lon = 0.12839588418781633;
    msg.z = 0.9222054469863913;
    msg.z_units = 161U;
    msg.radius = 0.5718221166456301;
    msg.duration = 32608U;
    msg.speed = 0.0668327448244519;
    msg.speed_units = 186U;
    msg.custom.assign("TDUPNTHBENOSDDABQVVCGLCFZHALLGLXTWGINPBJCIYRTSEGRNVWDUPBJZXYHAVUVSZLIMBMVPUKYHMIZNKARPCPFBFOCEVDLSYHPHBKXISCMFROMBOMSQWEQHPFTMVUTTCZIDROYMNYCELLFIVAHJFGLXFJQWFDGQOJTASCQZESWFKXRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.6142780792424208);
    msg.setSource(36056U);
    msg.setSourceEntity(70U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(153U);
    msg.timeout = 40441U;
    msg.flags = 23U;
    msg.lat = 0.30714069745363615;
    msg.lon = 0.15949565429123136;
    msg.start_z = 0.07341874915542745;
    msg.start_z_units = 32U;
    msg.end_z = 0.31892654682706634;
    msg.end_z_units = 124U;
    msg.radius = 0.6288721764241966;
    msg.speed = 0.5308198312543444;
    msg.speed_units = 156U;
    msg.custom.assign("ZFZJYKEOTVILGNOYJTTIRTLLVGSRZNWAXUEAFEOSAJPUKDQAYEQPGQFSDNEBYIMZLUUAHZRUWSDXHZWQMBCTCOYAABKNDIDQEEGDVTVBNYXZXKINQRSPGTYLWHSVEXFRCHHJNWKFVMDCWYOXMSJQBDLTKFRVFLVNBIGHJRWYMARCBQZUUPYNIOUHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.7109896029436861);
    msg.setSource(17365U);
    msg.setSourceEntity(214U);
    msg.setDestination(39909U);
    msg.setDestinationEntity(251U);
    msg.timeout = 28965U;
    msg.flags = 13U;
    msg.lat = 0.6379953697776151;
    msg.lon = 0.8412270687837667;
    msg.start_z = 0.5980976020687234;
    msg.start_z_units = 74U;
    msg.end_z = 0.22652705311859234;
    msg.end_z_units = 249U;
    msg.radius = 0.9074476134575946;
    msg.speed = 0.9008947260421741;
    msg.speed_units = 123U;
    msg.custom.assign("UGKWFZYPFBSIMIUTCCMXKWGOVTJSAWMTVLMFVKNWEARAULHBGMETCPFKKBEFZQOJINNOQTUYNVSGWGIBGEAXMUNAYBCHSYMIYHDZTQGSBCAIXXKXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.6150592151913304);
    msg.setSource(20820U);
    msg.setSourceEntity(123U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(101U);
    msg.timeout = 5295U;
    msg.flags = 126U;
    msg.lat = 0.4903777166584973;
    msg.lon = 0.8477432872152197;
    msg.start_z = 0.9956949775090281;
    msg.start_z_units = 35U;
    msg.end_z = 0.09198980809783486;
    msg.end_z_units = 113U;
    msg.radius = 0.7180255001969316;
    msg.speed = 0.9944377080304247;
    msg.speed_units = 229U;
    msg.custom.assign("QIRRLFQXGVDLFYBJRFNEZFNCLXCTOAIHWJIGFDFAKEJEPJOQDYEPLNWOSSUEQQRDQREULRSAVMUYHTNKZXBCXFHPHBAIKKPGKXIWUSGHGMKIZAKSPIYEOOSQANBBJGGYMYANKJHJUNVDPDBZTMQDHRWWKIYRULODFYXZZNCVCPHQZEOTMNMPMRTMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.45772649587788306);
    msg.setSource(4199U);
    msg.setSourceEntity(153U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(43U);
    msg.timeout = 63777U;
    msg.lat = 0.5426015267251632;
    msg.lon = 0.9846052105133952;
    msg.z = 0.8428041806635771;
    msg.z_units = 20U;
    msg.speed = 0.7870697120585198;
    msg.speed_units = 92U;
    msg.custom.assign("EMLVPMCMBQLEQQBHPAINVWRQJONHPCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.8584629073097766);
    msg.setSource(57974U);
    msg.setSourceEntity(157U);
    msg.setDestination(344U);
    msg.setDestinationEntity(79U);
    msg.timeout = 56259U;
    msg.lat = 0.5463926001404805;
    msg.lon = 0.26815688317959363;
    msg.z = 0.3572790404848746;
    msg.z_units = 228U;
    msg.speed = 0.7888979956223103;
    msg.speed_units = 20U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.016904508596381596;
    tmp_msg_0.y = 0.6259262865997969;
    tmp_msg_0.z = 0.7428229487212379;
    tmp_msg_0.t = 0.9079427493896348;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GWBAZPUYDZUCHIPIOTMXRIRWDFONTHFJPJNEBQRXOFMXXQWUQDCXJMFQEUAMVRLKWDQYDFQEMIVGGWNRONCNYQSPFILXTCOBMSDDWJGKEVAYOKYQSLFZCEGTIMJEPNUBTWXYPFEWUZSPHUKYQNGZUWSJAYVRAZIRJBGVKOOABL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.7254405046553929);
    msg.setSource(45983U);
    msg.setSourceEntity(105U);
    msg.setDestination(20954U);
    msg.setDestinationEntity(54U);
    msg.timeout = 45959U;
    msg.lat = 0.6361761811991006;
    msg.lon = 0.4714685066376221;
    msg.z = 0.6177798240479038;
    msg.z_units = 190U;
    msg.speed = 0.5182571512678774;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6253694246749985;
    tmp_msg_0.y = 0.3469621142656526;
    tmp_msg_0.z = 0.6801637248560548;
    tmp_msg_0.t = 0.6177978206648628;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QJMXYELPRTKKIJMQXNFNPSSWPPCGTIMPFABYNANNDCDKLPZPLZMYIJCQUVOFRWCOWGIRMEJWARQUPGDLAENGCGJXZBVGNNIAYQORYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.755648203217122);
    msg.setSource(24777U);
    msg.setSourceEntity(199U);
    msg.setDestination(52422U);
    msg.setDestinationEntity(91U);
    msg.x = 0.2543145713490894;
    msg.y = 0.1702607972836856;
    msg.z = 0.14512457058775052;
    msg.t = 0.5138303812880436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.43928113699959603);
    msg.setSource(49010U);
    msg.setSourceEntity(199U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(192U);
    msg.x = 0.6185996353258159;
    msg.y = 0.8575946661988678;
    msg.z = 0.06110601837764906;
    msg.t = 0.07353627227730042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.01686065384989288);
    msg.setSource(16806U);
    msg.setSourceEntity(254U);
    msg.setDestination(62043U);
    msg.setDestinationEntity(221U);
    msg.x = 0.04227555676226591;
    msg.y = 0.6252989063211499;
    msg.z = 0.9678992887751416;
    msg.t = 0.6818023484759996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.46578503073897937);
    msg.setSource(52292U);
    msg.setSourceEntity(182U);
    msg.setDestination(57681U);
    msg.setDestinationEntity(68U);
    msg.timeout = 17135U;
    msg.name.assign("WFPVAXGTMNQJOGDPSBWNCKNGJUQBWZLSMLBXYEECOSQFBDZGFRSYWOWZHWPLMPZMDARWGJPHFSHOMARCYAULAITAVNCKIXTDBBDAHSPVSCIVUOZHGXVINRPURTCYHLNCKKVQLIMMFVQMETNCMKKOUTJJUNJBFXBFFNPOUEKKSETZFDQDERYDJJGWOEUQUEWPMTGHGLYDK");
    msg.custom.assign("FDWRXFPOXLEFMWUEEIBZTYQCYMKQFIUYKCLFRBVZUIRTCKCJPHTCMPUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.05288987386533617);
    msg.setSource(63911U);
    msg.setSourceEntity(176U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(156U);
    msg.timeout = 56837U;
    msg.name.assign("WNXTRUQOXPZQEDNXFSLSBXQRCKCWKIIITUTKZC");
    msg.custom.assign("XPLISWEWCEEOQLJGQPCYEAMNUHUFSLVZCABRLQHVATNRANNLSJOWJTKFEWNHQIZDOQNKRJIZARHUHGUMNINEXBYKDFOTRBMJXGRXQVJYISXAEGXZJLKGDFCDZPPGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7560798601085511);
    msg.setSource(64212U);
    msg.setSourceEntity(87U);
    msg.setDestination(31681U);
    msg.setDestinationEntity(144U);
    msg.timeout = 31838U;
    msg.name.assign("VWTXYBOZRISXAMTYHDXJZWWLCQUZWCWDIROZHGVYOCKBOOMEFGFEOKZSTURJRHUAFHGXDPUMNHPLETQRUBRSVIGHGJLUJCDKVTTNOPKNGIELVXCKPLARYFVLWOASPKIVKHXSQFKRCVCSUYD");
    msg.custom.assign("ZNYHKCVKSNLLVQLDFLUKOGARTHCCWPRSWYJIXFKWFTOLIFUQELHWHYDLSWNMHNKWCPSZIQUDYEAZYAUJHXAJOSCTXGLDPNIFMAPXZGGRBVRNKOLTKSFFPDVQNCNXNZFOGMQPBXMSYWULBVZGHWIPMUTXGXRHJUDOAOUMMJPEPZHDREAVXZROBXGQEIDWTYBJCVVRPKVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.052696085051537556);
    msg.setSource(25544U);
    msg.setSourceEntity(66U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.7986157028808158;
    msg.lon = 0.08272546776964596;
    msg.z = 0.05527683871430655;
    msg.z_units = 54U;
    msg.speed = 0.8766418649693812;
    msg.speed_units = 104U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07853746279995177;
    tmp_msg_0.y = 0.954169879820144;
    tmp_msg_0.z = 0.6759589653044236;
    tmp_msg_0.t = 0.5923150610605802;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7963746927124953;
    msg.custom.assign("GCATASLURTVFFVEPVSPDZKWMLUTKWCXHERRENKOKDQPHQIWYWAVOJNOJLFZVCLYMZPCNYTRRGLHFXSKGQXVOECRQSNFKHSDKQHLSKOPXMIHYUPUQUMBOJMIXYICBYZBEVEWZLBHNQZEIKXLXBFILRVXPBAZJTPFGCHZWFYESJEJAJJSUYMIIDDCDABTMPNSNRWKUXWZOQIARUNNDFOXUGCTCNMUTBGOJMHFGQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.3790577846933685);
    msg.setSource(33960U);
    msg.setSourceEntity(92U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9811012709724215;
    msg.lon = 0.7797492102578002;
    msg.z = 0.8986573051078391;
    msg.z_units = 246U;
    msg.speed = 0.9635457635160887;
    msg.speed_units = 93U;
    msg.start_time = 0.2541639565847993;
    msg.custom.assign("XPBZLSSMQPGAOKYEYVEYJIIAHJWKPFYASXUTFDSMRLENDXEVZYUMGBBILDLVHXDGOVBWCASEBQUCKFDGFICIOBTMCZSXYDVMBOKJFBNCWKQGTMDQCPGIUFXUINABOMDEZKHVFAEPWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.34818744517471933);
    msg.setSource(52312U);
    msg.setSourceEntity(72U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.774592101264216;
    msg.lon = 0.5057195885644212;
    msg.z = 0.001245125794019808;
    msg.z_units = 7U;
    msg.speed = 0.6203224139852136;
    msg.speed_units = 153U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.25046492212529836;
    tmp_msg_0.y = 0.6159035697338447;
    tmp_msg_0.z = 0.3668502344999681;
    tmp_msg_0.t = 0.3189915165284106;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.26435561654553175;
    msg.custom.assign("WMDEUGLIQFZHNQUHIZIPYPSUMTFNLNAAAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.9305169768495951);
    msg.setSource(19061U);
    msg.setSourceEntity(136U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(94U);
    msg.vid = 34089U;
    msg.off_x = 0.5986432338979836;
    msg.off_y = 0.8349392560434014;
    msg.off_z = 0.9312666831486207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.47608338069997225);
    msg.setSource(1371U);
    msg.setSourceEntity(53U);
    msg.setDestination(61101U);
    msg.setDestinationEntity(203U);
    msg.vid = 19755U;
    msg.off_x = 0.5561214932213279;
    msg.off_y = 0.9927004962375388;
    msg.off_z = 0.18543597311715843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.9598932323466596);
    msg.setSource(29019U);
    msg.setSourceEntity(132U);
    msg.setDestination(24375U);
    msg.setDestinationEntity(102U);
    msg.vid = 20340U;
    msg.off_x = 0.06743560362676704;
    msg.off_y = 0.23140528954159867;
    msg.off_z = 0.37429262314226686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.1688577054800584);
    msg.setSource(23431U);
    msg.setSourceEntity(182U);
    msg.setDestination(1495U);
    msg.setDestinationEntity(156U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.6344969699677744);
    msg.setSource(22944U);
    msg.setSourceEntity(1U);
    msg.setDestination(25230U);
    msg.setDestinationEntity(233U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.5780359453016042);
    msg.setSource(5742U);
    msg.setSourceEntity(97U);
    msg.setDestination(46037U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.4405272194908134);
    msg.setSource(51975U);
    msg.setSourceEntity(243U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(91U);
    msg.mid = 17733U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.9294148172598033);
    msg.setSource(46502U);
    msg.setSourceEntity(18U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(176U);
    msg.mid = 42748U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.042442965493986406);
    msg.setSource(35634U);
    msg.setSourceEntity(164U);
    msg.setDestination(63693U);
    msg.setDestinationEntity(170U);
    msg.mid = 15190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.020254719501607843);
    msg.setSource(12994U);
    msg.setSourceEntity(87U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(64U);
    msg.state = 149U;
    msg.eta = 7133U;
    msg.info.assign("SIUBENJRANZSBYAKITMNBVIFYBKMMSNQJOGGNZPKIMXCJOVDPHFCSWJKXOGTDCHUPORRHQZCZTYVDQYCGTSQQMEDCNPNHHURD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.13038387907457483);
    msg.setSource(43222U);
    msg.setSourceEntity(20U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(167U);
    msg.state = 177U;
    msg.eta = 18462U;
    msg.info.assign("DYTPXHUKWRVWMFLBHRGGAFSVZXMCCGMACPDCLSNQTDBMVQAHUZKAJEXXDIKFOMQQAHWXGNHZJIOHGVPSLKLAQPTLBEFKOAPIZCYNTGXIINGZSZWSYRJAEWOLPVTBWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.5845817956654823);
    msg.setSource(31474U);
    msg.setSourceEntity(34U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(168U);
    msg.state = 135U;
    msg.eta = 35763U;
    msg.info.assign("NHBAXFTYTOYEBVWUBVCTWIBRCRGLRBZXEPNWUSVJQNDGNMZWIEKEUKDKETVHDPLRKZKLZJRLMAJDJUVFAVKCDGEQJCITMSFAPZNDJRWYZQXJKPOIZQOGHYDFWMOYYYPBXHVYAHUDMGFVNRKJNRPUOLSGCXESIMQVPPXMFXAQBEOIELHNQOSSLOOGBUICWFASJGEXCFKMHCAFYASBXQPHWZZRMUJIBCUZLLCIUPTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.2515175734337285);
    msg.setSource(19490U);
    msg.setSourceEntity(105U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(38U);
    msg.system = 26665U;
    msg.duration = 41294U;
    msg.speed = 0.9960834287244525;
    msg.speed_units = 208U;
    msg.x = 0.0026482142303775325;
    msg.y = 0.06082570362338102;
    msg.z = 0.3874782648020991;
    msg.z_units = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.46594066003167955);
    msg.setSource(18782U);
    msg.setSourceEntity(227U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(54U);
    msg.system = 6258U;
    msg.duration = 33556U;
    msg.speed = 0.4973590606143138;
    msg.speed_units = 130U;
    msg.x = 0.48154435311372246;
    msg.y = 0.0426766346216898;
    msg.z = 0.07732341063607151;
    msg.z_units = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.43810834232972573);
    msg.setSource(36468U);
    msg.setSourceEntity(28U);
    msg.setDestination(38182U);
    msg.setDestinationEntity(175U);
    msg.system = 28681U;
    msg.duration = 64778U;
    msg.speed = 0.7634068886411517;
    msg.speed_units = 194U;
    msg.x = 0.593386453508798;
    msg.y = 0.7622186314030132;
    msg.z = 0.5856421283051462;
    msg.z_units = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.9942807919913571);
    msg.setSource(2943U);
    msg.setSourceEntity(226U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.7836310501288084;
    msg.lon = 0.8567148374993191;
    msg.speed = 0.7127015685257844;
    msg.speed_units = 148U;
    msg.duration = 33176U;
    msg.sys_a = 45005U;
    msg.sys_b = 56754U;
    msg.move_threshold = 0.35492556997741387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.028367113064385663);
    msg.setSource(60001U);
    msg.setSourceEntity(202U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.1641428493684618;
    msg.lon = 0.41606528273972554;
    msg.speed = 0.732550071702603;
    msg.speed_units = 45U;
    msg.duration = 54040U;
    msg.sys_a = 17951U;
    msg.sys_b = 4327U;
    msg.move_threshold = 0.2199125433282071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.19916645208429662);
    msg.setSource(59689U);
    msg.setSourceEntity(108U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.02558813433562357;
    msg.lon = 0.7815666802712908;
    msg.speed = 0.21352097300492945;
    msg.speed_units = 228U;
    msg.duration = 65513U;
    msg.sys_a = 27901U;
    msg.sys_b = 16491U;
    msg.move_threshold = 0.5433429426630784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.1357341175564135);
    msg.setSource(22113U);
    msg.setSourceEntity(14U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.09214455884388495;
    msg.lon = 0.8564551191703506;
    msg.z = 0.42155588941151945;
    msg.z_units = 122U;
    msg.speed = 0.7036759210732106;
    msg.speed_units = 243U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.32051596031807317;
    tmp_msg_0.lon = 0.12337044398766361;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZPBTTNIALJCMPPOTBKGGHHWJYOCNSJJVLTBBRSACEQRFMRTVOOXBVRZCUHMDDPAHQSKFUAFYUNOVKHZMKKJWFGHXWLLRXXHMYPVCLYSVDPWUCEAISFCQENGZVTSXNACGXPETBWEDIUQTRFBDFLNOPVACFZURLIKKDOMYJFXIIGULAGIFMKJCZQURJANWJAPYHZXVYNBIWQHOPBXDZGIKNQDEROVWILTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.4865467799698393);
    msg.setSource(23881U);
    msg.setSourceEntity(186U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.05644425348191351;
    msg.lon = 0.13880630703694663;
    msg.z = 0.3862777270717912;
    msg.z_units = 87U;
    msg.speed = 0.008393016947117027;
    msg.speed_units = 125U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6844321910053105;
    tmp_msg_0.lon = 0.865594616974011;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ELTOWNVJDGVRLASCVHWKAFONWGDXERBONXIMJSFGKHZDYTQHLEVKRYAWIHITOJDVNKDJSXSRPPBPRWBECIBKXIICMAXJGZQXUESFQCPEYWCQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.6988482083229762);
    msg.setSource(34440U);
    msg.setSourceEntity(215U);
    msg.setDestination(52356U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.08188646494326357;
    msg.lon = 0.9658701796566883;
    msg.z = 0.6834545909643837;
    msg.z_units = 250U;
    msg.speed = 0.5340767907191267;
    msg.speed_units = 236U;
    msg.custom.assign("RRTXDUZXYJRYABCMVVJVXSDAJNEQBQLXZBATHYNSNTWOIMXUFIEXPSHALQZUKHVNEXDSIHUKYKEBAFRWEBLJDHHWGRVBUTLICJNPGTWBPEEBOFAIMOMJYEEQCIGVMTWQMFSPOTAODUDFXURPLDYZQKKPDYWOJPGMLQAUGZGJSMRZSUQQAGODFLFIOHNWMMLOKQHFRRCCZGUFXCGPTBZVACHJSIWIPPFVLNTGTNYOSCZKZKRNWXHNKYBYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.7371636244451929);
    msg.setSource(34199U);
    msg.setSourceEntity(46U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.4874948194210541;
    msg.lon = 0.3403801316147148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.007525387477478995);
    msg.setSource(24413U);
    msg.setSourceEntity(129U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.6864299680141788;
    msg.lon = 0.7084867060382214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.49759421331785547);
    msg.setSource(30934U);
    msg.setSourceEntity(108U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.5429434794464324;
    msg.lon = 0.3204393308595719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.2705254446222346);
    msg.setSource(25727U);
    msg.setSourceEntity(95U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(104U);
    msg.timeout = 44413U;
    msg.lat = 0.8625711687780016;
    msg.lon = 0.09025380862120436;
    msg.z = 0.7916450098835321;
    msg.z_units = 9U;
    msg.pitch = 0.47217586505378195;
    msg.amplitude = 0.018236263098378003;
    msg.duration = 21526U;
    msg.speed = 0.5822460159740731;
    msg.speed_units = 146U;
    msg.radius = 0.5213590434435665;
    msg.direction = 27U;
    msg.custom.assign("UGZYXVNIAIMWHNMIGHIHSLDEKSYFWGVUOYZJHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.006705278803577186);
    msg.setSource(5249U);
    msg.setSourceEntity(56U);
    msg.setDestination(11868U);
    msg.setDestinationEntity(149U);
    msg.timeout = 52365U;
    msg.lat = 0.4070304793676123;
    msg.lon = 0.2791707543889477;
    msg.z = 0.05617441993033134;
    msg.z_units = 111U;
    msg.pitch = 0.3477747414685314;
    msg.amplitude = 0.05424995206343031;
    msg.duration = 40085U;
    msg.speed = 0.9911248086109735;
    msg.speed_units = 155U;
    msg.radius = 0.4852685932309031;
    msg.direction = 103U;
    msg.custom.assign("KJZANEZJKMJYXPTDRIFTTUVMBKQOASBOHBFQDHUPAJVHZVHRIQMARSTHJRAKTBOGOWKJXGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.629769222645314);
    msg.setSource(58687U);
    msg.setSourceEntity(82U);
    msg.setDestination(38991U);
    msg.setDestinationEntity(239U);
    msg.timeout = 12033U;
    msg.lat = 0.19263672036354995;
    msg.lon = 0.5567373364147218;
    msg.z = 0.45624773035157573;
    msg.z_units = 120U;
    msg.pitch = 0.8979605348364057;
    msg.amplitude = 0.4851849345320842;
    msg.duration = 17948U;
    msg.speed = 0.5983530072062213;
    msg.speed_units = 111U;
    msg.radius = 0.5145897092731804;
    msg.direction = 108U;
    msg.custom.assign("JITTGXBYKECOWSYCUVRIPNNVPRCQDRVAXKIAZJWEGGFJPNQDGRCLRMNBHQUECQAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.255992160910236);
    msg.setSource(49227U);
    msg.setSourceEntity(110U);
    msg.setDestination(34965U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("PIKTQMSDVUGWVKLYKRBEVTXXJZAGXOLRMWFVLJMCPSPWXYDICLZFKYNAOWNVWGGRKYMIKZQRGTPYBEKWDQFIAECEDOAVVEPBWMSRHTUKYHCLNAPXBWDYXPXHHCOMZEYUPORIXFFFDJDXJRCJTGPHVNBCQIGNALJBVUXFLSUZNSNONUIHLBGNPEMTHZSDUUS");
    msg.reference_frame = 11U;
    msg.custom.assign("WAZTDDJDCUYZYZBPMFQPUICVNSULRGRMHVRJIXKGUAPESEXYPMQTXMMWIXZTYVMQODNBZGNIAFMYEWWDWEHJOUIXGPKMRQBBUHPBWQDEYCLZGANJLKSSONEQDZTUBMUROQXVAKBCJNILPWXEJLFCCVRDFHAUOKXSQSFYFZHLKOCEKMGAQADSYFTSFOOTGSHQJWVCRXVPRLTCKJXNUKFBWOLGLYRSNALTFNEKHOJBCIYBINWGEVIDTAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.30540340296231794);
    msg.setSource(55140U);
    msg.setSourceEntity(143U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("ZEBIAMTUYYAREEIKWONIUJOMDNAJHKGLYZPHZCWMWRFNJRMACSXTQGNUFUXEXZRKRGASAJKWZDXBMYUHMZVQFTSLXKSBLKLCPKUTFOTPUYYXVOQUTDBMLAYRPXIHZSMDQGJHEFVSDBCUPPSRNFQKIZNOOPTUBREXXG");
    msg.reference_frame = 173U;
    msg.custom.assign("GHYDIZXUGLVKTWOFZBSBRUXPMZNKGXUOJCYKMCATGVAWAPXCMKBMHODSEIPIWXQOHKZMCAMDKNSESSNHGJQDRGUCDNWGDZITEIAQQXNJUVNNQNJMLNZHDEQRTFYSHGQFEUAVJFFILBRMWZKLPTCREZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.7547305999177499);
    msg.setSource(1359U);
    msg.setSourceEntity(103U);
    msg.setDestination(10895U);
    msg.setDestinationEntity(45U);
    msg.formation_name.assign("TGQAIBTMZFKXLVQFZDHGVOSSWGPWROAMEELLTCIAONPUBHUXKCNJHACBUADOWWSGLMBZNJRZDHALNPOSEMEUMJFVKRXZKPKEMYOMKFHXPNAQEQYVVGFHSJIWYVGXCRUFDLIVUNHKZGQUMBXIYJYOVYDJXQVNRRZDSPLNPCQWCIWKXJTUSQCYTCLTIPJRGZUEOKZURCFWOXLWBLIBBMROEFJHSI");
    msg.reference_frame = 68U;
    msg.custom.assign("AUPXTMJCBUZPIJRZCWWWFPKXKSBVVTQYYXZAZWHCUOVUISELWVNODOFRVFCLIRDNPVBBQASAHTQQDDZXVGSXGYVBJYYLMRTSOKRFUEOYDXOIBIYCMFBSMBITMQPJFPINGLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7056141109862869);
    msg.setSource(6613U);
    msg.setSourceEntity(215U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("UTDGRAACQZFJASMLDWFIFLOFXTKIKTLXZUWRFUAOJZSBSOHTFVYJPCYGPRVSXBONCXQKDYGDJHZBGTDNOOFMLCQKHEKIREXRYUCAD");
    msg.formation_name.assign("OPMXIZCRVLAKYQTXDAUAKAAQJNLVWTUPLKYWSCICMIHKDPTEJVO");
    msg.plan_id.assign("VEYKNODWVFIFAQXPOKGFJJMVZLVBMXERSYGETBOOJEAZEKCZNESDZBANLXTCNKZBWNWVPIQIQIFLDMMOEPWYGIKMUIXRRMUOPJTCCLGHHMHAUWXWGFSKLEHD");
    msg.description.assign("NOYNGEEQVQLKMHYNSPOEVRBZKEYKOACGRBKJFLTKOGJLFIPFIBBBRPZAAIIYXDONSAKGAIATCFXXHQZDSBZEHPUAUVBVXPCQLTXMJRFQCOUTMNELHTYQWLWSOZDABYTUVKYIYLPQDJXWJEUHMTPMMKEULWSGPGJDWKRNFNGNZRRHVPINCZXKFQWBVYWWDIJYDFUJCEUAOTJMSXMVXDBDOZISTONQCUCGHHSFHHIZZFCGLRVE");
    msg.leader_speed = 0.34216891306945296;
    msg.leader_bank_lim = 0.08592762975096713;
    msg.pos_sim_err_lim = 0.25984826998431154;
    msg.pos_sim_err_wrn = 0.6710183584025127;
    msg.pos_sim_err_timeout = 37912U;
    msg.converg_max = 0.6530906946397051;
    msg.converg_timeout = 39083U;
    msg.comms_timeout = 53464U;
    msg.turb_lim = 0.4556839583692651;
    msg.custom.assign("CSSYYNZVEOTHQQNZRXMQEBWVRUTOTGNJYZUEYJLBUSTVBTAKQHHNJMETDIHOTUALITFDZQVXVKEMPBSGNOIUQDACTSOWUCQQLUPVBLKJOIHIJILFIXZWWRPOZDGVOGKKGLWMUWAPMUBWCDKHONWJYYAGAUSCMCMXCJACHQKFVZHRVRGYFTMOZGRZDWLJPPGKNXDLKHB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7010401220663722);
    msg.setSource(56397U);
    msg.setSourceEntity(145U);
    msg.setDestination(704U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("FHMOQHWFHDHZWSCBINHGFLETICXXZAKNSCWFSBBMWHLJYNUNLTOGQPOJCXIARJQWZRZFFMZUHPOPTPNMDTYZEELFZKIMCPFPBCKJONVGEOELMANVHSPTDRVZWRLQCASULQYXCREGKAMWZSNNHISLDRKUKDABIPISBRVEEPFUXWZEDUQUQTRBGGXNLUVT");
    msg.formation_name.assign("TUXBVBLKQQQIPXZZHFGTCPYTOWBMMTRXSULGZNZPQMPCDYNHAJURUEJVAGKVSHQ");
    msg.plan_id.assign("CMLNNEPDPDCLQCUFZMVANURJVWQYWTTGADBRNBJRUGPCBDWMCOUPTYFTLZQFDKOKLAAPGWDADUZVQEENSCFOSWQPOMAGXWQFZEWOLICEUHWKSIRNKHNFYTTBOBOJTFYZYNTJSIIRVHRQPUICVSDXYXVKZLHNHUREOJMRSHKBCVUWSFEIAGYEJXXHPGZMM");
    msg.description.assign("URPHVUCSEPYKUDKCYAERNVCKEMRBHCDMEQWGEYHQIKQXNVGZNKAZYESNVTJMUIGYOGHATTAWTUWSDKPSLFNOFFZZRMLHQDMEXOFRZPPIYTVNMMGWSLXWOXJOWXAOUQQBLIJROLFXVTCDBFIZIXSEOPMLNSKYZPRBSJUGFDCQHQBYJCBMJHWMAZUHPBWDECGTRKCGIFHASALBTGOZUGDOQPYJNILIKZWSHUBBVXKYJLFVTILXARDJVWJNRPA");
    msg.leader_speed = 0.3189040294480725;
    msg.leader_bank_lim = 0.7670857840847181;
    msg.pos_sim_err_lim = 0.7388447297274877;
    msg.pos_sim_err_wrn = 0.84780929999223;
    msg.pos_sim_err_timeout = 23759U;
    msg.converg_max = 0.3562599477323103;
    msg.converg_timeout = 37164U;
    msg.comms_timeout = 33054U;
    msg.turb_lim = 0.2867176023273643;
    msg.custom.assign("GWMSFKRDYFPIKVMEAQDDBZDPNPDSHQXSRZIQUKUINFVZKRPGBGSFMUOIKBSFJWHOTXPETPRIQHNIAACMZBUFJCIQTCMRLJBWPTYJPCWVNSVOYHXIRKVZLYGXAOOQNOVNWLWXDDUBHHQJKTJYAXWPGQJLFADMCEEUAXLLRKTTWCFGYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7635379320190858);
    msg.setSource(55590U);
    msg.setSourceEntity(148U);
    msg.setDestination(24173U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("KEJPMPTZQGVWSC");
    msg.formation_name.assign("UJLJSVCHXEFRDATZBQMRHMKDTADYG");
    msg.plan_id.assign("NCUQDVSYUVNQEDHEXMRPFGRJCSQTMNRWSQYJHJUSNZZZCJDXDNKXKRZSMIPRPGQZVOVYYMAAYFD");
    msg.description.assign("JRWASSKQXHLJWINOYZUOSCGKTCJNBCYDPXMDFAGQYVLRPDVICXNOBRDMGGWOWUTGFPGBFLSRSPZLEYFHQTQDCMUSJHFPADMJE");
    msg.leader_speed = 0.46995244322088514;
    msg.leader_bank_lim = 0.007356520106881925;
    msg.pos_sim_err_lim = 0.3599102958944118;
    msg.pos_sim_err_wrn = 0.21059024296421436;
    msg.pos_sim_err_timeout = 12591U;
    msg.converg_max = 0.071902656466026;
    msg.converg_timeout = 52090U;
    msg.comms_timeout = 11401U;
    msg.turb_lim = 0.7110455547451822;
    msg.custom.assign("XCJCSXBMFIYQRNQGGGZGYDTSLYGYORVWTALIGVEDTNTRUIECQCQUXMDPVZDKRCEFHOTVJZFQKKMPHBPUZRAPATSHIALIPUUNACEYLKRMFIXUSDISOLTFXDZATJHYQOBVGKSIRONKJBNJEOWWMSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.367516283098124);
    msg.setSource(39103U);
    msg.setSourceEntity(131U);
    msg.setDestination(1328U);
    msg.setDestinationEntity(178U);
    msg.control_src = 18627U;
    msg.control_ent = 218U;
    msg.timeout = 0.3201033056954503;
    msg.loiter_radius = 0.6475151492088813;
    msg.altitude_interval = 0.6020116321562565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.7238578862952897);
    msg.setSource(54896U);
    msg.setSourceEntity(174U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(165U);
    msg.control_src = 40769U;
    msg.control_ent = 179U;
    msg.timeout = 0.10912917836290348;
    msg.loiter_radius = 0.3976916283303592;
    msg.altitude_interval = 0.6508411145627938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.11242442552947274);
    msg.setSource(54162U);
    msg.setSourceEntity(164U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(141U);
    msg.control_src = 34883U;
    msg.control_ent = 182U;
    msg.timeout = 0.1740382074297132;
    msg.loiter_radius = 0.029909202838644067;
    msg.altitude_interval = 0.5064048014256762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.7761104348295982);
    msg.setSource(14892U);
    msg.setSourceEntity(24U);
    msg.setDestination(63917U);
    msg.setDestinationEntity(63U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2714070261144629;
    tmp_msg_0.speed_units = 137U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1485786240956941;
    tmp_msg_1.z_units = 151U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7210609188131628;
    msg.lon = 0.39427972114625887;
    msg.radius = 0.6565032909306842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.843718477161027);
    msg.setSource(3308U);
    msg.setSourceEntity(152U);
    msg.setDestination(56268U);
    msg.setDestinationEntity(20U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9117609301222137;
    tmp_msg_0.speed_units = 176U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.30230441819155396;
    tmp_msg_1.z_units = 224U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.012879390676755031;
    msg.lon = 0.5647257849708724;
    msg.radius = 0.33586181196026754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.02634753522542055);
    msg.setSource(30861U);
    msg.setSourceEntity(173U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(148U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9344793210224194;
    tmp_msg_0.speed_units = 127U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03906200857866238;
    tmp_msg_1.z_units = 221U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3931076809986668;
    msg.lon = 0.4514601711288515;
    msg.radius = 0.46085135727304094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.9698093989957147);
    msg.setSource(22411U);
    msg.setSourceEntity(222U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(101U);
    msg.control_src = 51529U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8863379708826857;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9625525615583878;
    tmp_tmp_msg_0_1.z_units = 109U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2458167739062055;
    tmp_msg_0.lon = 0.5175087452976611;
    tmp_msg_0.radius = 0.4756187575124827;
    msg.reference.set(tmp_msg_0);
    msg.state = 143U;
    msg.proximity = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7573197490164295);
    msg.setSource(3291U);
    msg.setSourceEntity(169U);
    msg.setDestination(48995U);
    msg.setDestinationEntity(127U);
    msg.control_src = 56275U;
    msg.control_ent = 144U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5158024916203183;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6144201939847749;
    tmp_tmp_msg_0_1.z_units = 229U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8734812601330935;
    tmp_msg_0.lon = 0.396615298971116;
    tmp_msg_0.radius = 0.5626151777446734;
    msg.reference.set(tmp_msg_0);
    msg.state = 39U;
    msg.proximity = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.10607086059012472);
    msg.setSource(56276U);
    msg.setSourceEntity(29U);
    msg.setDestination(19337U);
    msg.setDestinationEntity(198U);
    msg.control_src = 38429U;
    msg.control_ent = 118U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5893530830517931;
    tmp_tmp_msg_0_0.speed_units = 117U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7598349289638548;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5867987062353816;
    tmp_msg_0.lon = 0.6704467906639772;
    tmp_msg_0.radius = 0.20034273813646142;
    msg.reference.set(tmp_msg_0);
    msg.state = 147U;
    msg.proximity = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.49641923140363997);
    msg.setSource(32482U);
    msg.setSourceEntity(224U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(147U);
    msg.ax_cmd = 0.6557376216495996;
    msg.ay_cmd = 0.8402957090578757;
    msg.az_cmd = 0.4582519236549265;
    msg.ax_des = 0.9625802268607856;
    msg.ay_des = 0.7285680985089065;
    msg.az_des = 0.7751001101684903;
    msg.virt_err_x = 0.22311689504724586;
    msg.virt_err_y = 0.3224633894927138;
    msg.virt_err_z = 0.028868740944184124;
    msg.surf_fdbk_x = 0.49240285858615673;
    msg.surf_fdbk_y = 0.7551509795953412;
    msg.surf_fdbk_z = 0.9222902056129143;
    msg.surf_unkn_x = 0.9021607760359599;
    msg.surf_unkn_y = 0.7368477428174659;
    msg.surf_unkn_z = 0.6910646256532609;
    msg.ss_x = 0.034273442250104535;
    msg.ss_y = 0.1964262956974817;
    msg.ss_z = 0.6395852179585219;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QXHYJRORJYKKYBZBHAMYFNDLDWHCZSOOXTHEGBODONSLVTALZSQCUZCLGXWOFQGIKTSTCOPVWBRIWUMCCNIWPYR");
    tmp_msg_0.dist = 0.23186709061765365;
    tmp_msg_0.err = 0.15274434589568753;
    tmp_msg_0.ctrl_imp = 0.5821289075979127;
    tmp_msg_0.rel_dir_x = 0.22593639794980558;
    tmp_msg_0.rel_dir_y = 0.8809938988418095;
    tmp_msg_0.rel_dir_z = 0.3997061685444745;
    tmp_msg_0.err_x = 0.691510023562106;
    tmp_msg_0.err_y = 0.7942197431659594;
    tmp_msg_0.err_z = 0.1503348788267781;
    tmp_msg_0.rf_err_x = 0.17816593720723894;
    tmp_msg_0.rf_err_y = 0.9112374421195323;
    tmp_msg_0.rf_err_z = 0.22952258387335922;
    tmp_msg_0.rf_err_vx = 0.05194202276640947;
    tmp_msg_0.rf_err_vy = 0.6527517055772786;
    tmp_msg_0.rf_err_vz = 0.47516280820662626;
    tmp_msg_0.ss_x = 0.44186652347129796;
    tmp_msg_0.ss_y = 0.7902747848263673;
    tmp_msg_0.ss_z = 0.13423771575409293;
    tmp_msg_0.virt_err_x = 0.9138021456495229;
    tmp_msg_0.virt_err_y = 0.4646022163490655;
    tmp_msg_0.virt_err_z = 0.105316286760889;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.11315986943624445);
    msg.setSource(7593U);
    msg.setSourceEntity(97U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(93U);
    msg.ax_cmd = 0.8591169545331592;
    msg.ay_cmd = 0.3637362228751374;
    msg.az_cmd = 0.8621165520234898;
    msg.ax_des = 0.6538410826239728;
    msg.ay_des = 0.1941537825608809;
    msg.az_des = 0.834480501541637;
    msg.virt_err_x = 0.1973440907303189;
    msg.virt_err_y = 0.7180634814687636;
    msg.virt_err_z = 0.10386896496331677;
    msg.surf_fdbk_x = 0.4225333428051138;
    msg.surf_fdbk_y = 0.9298958327237119;
    msg.surf_fdbk_z = 0.3153615115470828;
    msg.surf_unkn_x = 0.5324872912199656;
    msg.surf_unkn_y = 0.7145654659168471;
    msg.surf_unkn_z = 0.6480555587938504;
    msg.ss_x = 0.41344271678133837;
    msg.ss_y = 0.8875965902893694;
    msg.ss_z = 0.10416361449085632;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CQWEEVOHGSLASDQRRDJVNKMTZHHCZOYKFSIWUKYZYYTBFORHZBMEKOYJGJQNGUAXCHMVBJSEKESFCPBTWPUMLLOFDBIJBQEYPYCKMETXCBXJIFHKNVGNSJVLWLBODMNLHYCDWJRJSKXIPMBWYIHGSUIIVPZZT");
    tmp_msg_0.dist = 0.28222352018032315;
    tmp_msg_0.err = 0.832246923789228;
    tmp_msg_0.ctrl_imp = 0.3959810062691217;
    tmp_msg_0.rel_dir_x = 0.6828079390433448;
    tmp_msg_0.rel_dir_y = 0.7343618693714046;
    tmp_msg_0.rel_dir_z = 0.7673898932783764;
    tmp_msg_0.err_x = 0.038022078952752225;
    tmp_msg_0.err_y = 0.559520839240995;
    tmp_msg_0.err_z = 0.6270737159523013;
    tmp_msg_0.rf_err_x = 0.5132787046404127;
    tmp_msg_0.rf_err_y = 0.10147567837311977;
    tmp_msg_0.rf_err_z = 0.9072235527298538;
    tmp_msg_0.rf_err_vx = 0.06722193958261002;
    tmp_msg_0.rf_err_vy = 0.33431217384217926;
    tmp_msg_0.rf_err_vz = 0.9543869367876396;
    tmp_msg_0.ss_x = 0.7905029982825551;
    tmp_msg_0.ss_y = 0.8910520272874168;
    tmp_msg_0.ss_z = 0.1714488361505737;
    tmp_msg_0.virt_err_x = 0.913426529177804;
    tmp_msg_0.virt_err_y = 0.9167395049460627;
    tmp_msg_0.virt_err_z = 0.2266505251420161;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.8654313707351113);
    msg.setSource(50109U);
    msg.setSourceEntity(90U);
    msg.setDestination(23057U);
    msg.setDestinationEntity(88U);
    msg.ax_cmd = 0.4231713063830945;
    msg.ay_cmd = 0.8934870732312004;
    msg.az_cmd = 0.5829324740654512;
    msg.ax_des = 0.7658760849387711;
    msg.ay_des = 0.0015017094110845175;
    msg.az_des = 0.9978298236004534;
    msg.virt_err_x = 0.6156974357868901;
    msg.virt_err_y = 0.26582750192777305;
    msg.virt_err_z = 0.5939317985303424;
    msg.surf_fdbk_x = 0.9852034668130936;
    msg.surf_fdbk_y = 0.9854692996094367;
    msg.surf_fdbk_z = 0.6880670587685814;
    msg.surf_unkn_x = 0.3527975927858471;
    msg.surf_unkn_y = 0.7709216430465788;
    msg.surf_unkn_z = 0.5390685072467092;
    msg.ss_x = 0.5911909291890111;
    msg.ss_y = 0.7178163444577002;
    msg.ss_z = 0.27750691213038403;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KQNFXUASNPCIQBGYSUMBREAWXNZCQHOSVJQTGRHCZUEWSJGOJXFEYCOQGNWREF");
    tmp_msg_0.dist = 0.680861974618223;
    tmp_msg_0.err = 0.32212247708008257;
    tmp_msg_0.ctrl_imp = 0.00818482608616633;
    tmp_msg_0.rel_dir_x = 0.1906389792267673;
    tmp_msg_0.rel_dir_y = 0.22193978527847646;
    tmp_msg_0.rel_dir_z = 0.36948266689600573;
    tmp_msg_0.err_x = 0.32493091706807087;
    tmp_msg_0.err_y = 0.19829116015344161;
    tmp_msg_0.err_z = 0.507798735541966;
    tmp_msg_0.rf_err_x = 0.32751143474802347;
    tmp_msg_0.rf_err_y = 0.19756180590224637;
    tmp_msg_0.rf_err_z = 0.4227211802593114;
    tmp_msg_0.rf_err_vx = 0.36411482597230693;
    tmp_msg_0.rf_err_vy = 0.635341703389406;
    tmp_msg_0.rf_err_vz = 0.055132157777777135;
    tmp_msg_0.ss_x = 0.8987982244267663;
    tmp_msg_0.ss_y = 0.7336191998015178;
    tmp_msg_0.ss_z = 0.1348752631945903;
    tmp_msg_0.virt_err_x = 0.25121287733283126;
    tmp_msg_0.virt_err_y = 0.6738948164628836;
    tmp_msg_0.virt_err_z = 0.08659992732866428;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.001561171834405517);
    msg.setSource(50386U);
    msg.setSourceEntity(23U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(44U);
    msg.s_id.assign("EDIRSXNFISJEEBBXDCTBIYUR");
    msg.dist = 0.34426101359618344;
    msg.err = 0.9661473751476255;
    msg.ctrl_imp = 0.08245929692584952;
    msg.rel_dir_x = 0.7951930288519128;
    msg.rel_dir_y = 0.007697414772285249;
    msg.rel_dir_z = 0.15607709558765614;
    msg.err_x = 0.12368854464316537;
    msg.err_y = 0.14339539088280018;
    msg.err_z = 0.5855035578009947;
    msg.rf_err_x = 0.2961835705972333;
    msg.rf_err_y = 0.11383847047348339;
    msg.rf_err_z = 0.008802778557257085;
    msg.rf_err_vx = 0.7361746116521511;
    msg.rf_err_vy = 0.6497757409584792;
    msg.rf_err_vz = 0.7372922850934549;
    msg.ss_x = 0.2945289814510663;
    msg.ss_y = 0.4667126448478093;
    msg.ss_z = 0.285654428533644;
    msg.virt_err_x = 0.0618280569545816;
    msg.virt_err_y = 0.11553075640514732;
    msg.virt_err_z = 0.47852261084010417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.5236708941951737);
    msg.setSource(45239U);
    msg.setSourceEntity(206U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(24U);
    msg.s_id.assign("NNPBUVWOJNPAMNOHGQUDLECBCAIJWWBRFTTOTYRMAOSRVVRDWTBAMZSSSWTPGFTOIQFOZLKYCZTNELYZCYRUJRGHLMQYDTWCQDUHSIJRQVXKFEJXKKEVMXZGRLKGPNBUWEZNQSCYYOFCHKPPHMSVQMWBYHIXQLEDJLKAFEHWZVUDSOJJYHBDFXWZXLC");
    msg.dist = 0.2572333528334063;
    msg.err = 0.7130822890594971;
    msg.ctrl_imp = 0.7391955281179942;
    msg.rel_dir_x = 0.9037866777203183;
    msg.rel_dir_y = 0.6222724495371414;
    msg.rel_dir_z = 0.643098424690228;
    msg.err_x = 0.6361227784327906;
    msg.err_y = 0.6794105084114934;
    msg.err_z = 0.6151097086446615;
    msg.rf_err_x = 0.04168702921146661;
    msg.rf_err_y = 0.19195627653971914;
    msg.rf_err_z = 0.42559816575453036;
    msg.rf_err_vx = 0.34803799423521486;
    msg.rf_err_vy = 0.7481994205407211;
    msg.rf_err_vz = 0.9631823537536283;
    msg.ss_x = 0.2850992953477842;
    msg.ss_y = 0.06638480834572569;
    msg.ss_z = 0.8365225339522143;
    msg.virt_err_x = 0.5899613534987791;
    msg.virt_err_y = 0.8058247625076217;
    msg.virt_err_z = 0.6509585433688622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.8243998764862229);
    msg.setSource(43446U);
    msg.setSourceEntity(74U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(111U);
    msg.s_id.assign("TQCVTDOCWHXMUNDJDTXSZQGZBBMBPRDNQLEAZWQBFOLJRBXLNPFCLHZDWFUYRZDJGLRZVJXDXSHXLYBWEPHQVKEKITAVPJLSXGSWPFOAIMUBALXTAYVEFSPTZHYPTTGKHMMYSJCKXOYBWMVVGIKDG");
    msg.dist = 0.2508085881068196;
    msg.err = 0.819110966504505;
    msg.ctrl_imp = 0.5186752218476037;
    msg.rel_dir_x = 0.46500824215551484;
    msg.rel_dir_y = 0.26665980379824117;
    msg.rel_dir_z = 0.3845549948611424;
    msg.err_x = 0.37617590086935127;
    msg.err_y = 0.5026415099135181;
    msg.err_z = 0.18553811404716303;
    msg.rf_err_x = 0.11349237445305271;
    msg.rf_err_y = 0.13597749789869207;
    msg.rf_err_z = 0.4163966710192427;
    msg.rf_err_vx = 0.9685891710163375;
    msg.rf_err_vy = 0.35695875159304113;
    msg.rf_err_vz = 0.6309962203694357;
    msg.ss_x = 0.9203816758724085;
    msg.ss_y = 0.4752922035081003;
    msg.ss_z = 0.09637216164020612;
    msg.virt_err_x = 0.7868351027110534;
    msg.virt_err_y = 0.09692947036469857;
    msg.virt_err_z = 0.40659847955132733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.09676587552400129);
    msg.setSource(48301U);
    msg.setSourceEntity(135U);
    msg.setDestination(51051U);
    msg.setDestinationEntity(32U);
    msg.timeout = 60164U;
    msg.rpm = 0.5492893228155561;
    msg.direction = 12U;
    msg.custom.assign("AEQDSDBZJMULFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.4308379327939601);
    msg.setSource(63337U);
    msg.setSourceEntity(108U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(177U);
    msg.timeout = 26189U;
    msg.rpm = 0.1544279049353937;
    msg.direction = 150U;
    msg.custom.assign("CXWABEBEAQGGRCUTZADRSBIILHHZFWUQPZACTXIRTSEPZXSVJDUBDWXSRTUUPNTVJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.8124029919864132);
    msg.setSource(40647U);
    msg.setSourceEntity(66U);
    msg.setDestination(12294U);
    msg.setDestinationEntity(35U);
    msg.timeout = 4210U;
    msg.rpm = 0.35520246810151934;
    msg.direction = 158U;
    msg.custom.assign("GQYMLCFBHMOLRLINTWUJAPRKPVEGSXMVHQTEOSTQIVXOVNPMPFQYDOCUZAEKGKLXYZFQRTRFABYDDUBUDHQXNUSZZCAIGFGVNJYLKGYMEBMJJMXFECATKHTNWQJZURNJDPDQIWWFHXNBHJLTKLTIPSXDVWGURWWJSOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.9234397730434982);
    msg.setSource(39638U);
    msg.setSourceEntity(126U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("CWCADLFKDWXPKSUALDBJGSWVQEUMQQFNYJKEPPOITTOFTFH");
    msg.type = 189U;
    msg.op = 197U;
    msg.group_name.assign("AXIDAXRCUYVAQZVOFGINEZDZBNULIFWUPPAMQSYCDNGOOIPBSDMVSKJPRKHPBBTRWCKOOMHWEQDWYFDXNTYVXMWDLGRNMXFBLRMHQJIWZXPONUNBZUFDGPEKWLKLEZHQZTNHGFGJLKSQLRUTCIRFEVUJJFYCGTVMOFXCIEXBAIKVSRACDPQIJ");
    msg.plan_id.assign("LFSOUVCSROTYAQLRBQECKRAIPAOYUL");
    msg.description.assign("RKKLTLLKRVWUOHYPSEXYEOIZYZLMEHVARDWKGILIYTICPBFJWZVNXJXVDMJWNBSASKSUDDGGJ");
    msg.reference_frame = 156U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22506U;
    tmp_msg_0.off_x = 0.2668862747484526;
    tmp_msg_0.off_y = 0.6415858449975587;
    tmp_msg_0.off_z = 0.505818341928758;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.07292205395104001;
    msg.leader_speed_min = 0.7473163219398894;
    msg.leader_speed_max = 0.785279235336139;
    msg.leader_alt_min = 0.7145362318118698;
    msg.leader_alt_max = 0.5159290827695636;
    msg.pos_sim_err_lim = 0.701210821713527;
    msg.pos_sim_err_wrn = 0.2594979005258241;
    msg.pos_sim_err_timeout = 37902U;
    msg.converg_max = 0.2651657812669065;
    msg.converg_timeout = 26110U;
    msg.comms_timeout = 11633U;
    msg.turb_lim = 0.8063432520425775;
    msg.custom.assign("DXOYRPQFAZBRJUWDFZPEWQCFZJEHNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.9028231541915378);
    msg.setSource(52888U);
    msg.setSourceEntity(146U);
    msg.setDestination(35958U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("NEXKZNNCUXBHJIQQBJVYTVMEXOCUWMKTIDPHDZDPCEYBMOYTCGVTDYSPTWAJYMRAAZNOJXIAHUBELRVJQKYRJGDPCXT");
    msg.type = 229U;
    msg.op = 52U;
    msg.group_name.assign("YLRCOKEYNUKPUMMWVIFAGIBXIJJETPTIKHZXBNDZZXGBXCIFBWRQPVSGZHLLVYEROZDPAEZRRIPHQQXFJKSSDHUCWSNLHPSFQWGUXGINVNUGQLW");
    msg.plan_id.assign("WHFKMIQGOUWAUIESACNVUNHJBUVRRBSIGMMEKIAZSUQDKULXRTVXNZFVAKDBCFAZWJNAXMHJRAOQCNBYSYZTIKTSLNEKBVKHUPWPXXJLHCYNZJLUUZDWUBYRGOJMCTSPYORLQMWTSGTIPCWVAWRSHYLMDJZHRJVPCFEQJIMQXKPGMEZCPBFDNSFWEXVKDDLGJHCGILGSXPOWVGTNOBEDCYQLLPDQQYYEZXOYIGOQEMBTVTFE");
    msg.description.assign("OCNVYGHGDMDFPBNJSURQYAFEQAQXALNMORYLXBCJXNSZYHYWHZOLSGYTCFFGBIRANIPPEMBICKLLNRIATXLHWHGHIDSVCGQKEQVPMKESKHUUCOEGGNVAPQTJCEIKZEYMSICDADBOHQZJIDJQWSNJZFWSQXPFRMHLRPOWLKVUZMDPRAMLZWAKXPYZEKRSNWRTDOFXCOBRTBDIUBUUZTKYEWOEXZPUTBXQJTWBHKVOJLDWGIYFVJFVVUV");
    msg.reference_frame = 66U;
    msg.leader_bank_lim = 0.8047885950187901;
    msg.leader_speed_min = 0.858491235034881;
    msg.leader_speed_max = 0.5911552122460529;
    msg.leader_alt_min = 0.6678052493674612;
    msg.leader_alt_max = 0.2400473635408903;
    msg.pos_sim_err_lim = 0.744661362015356;
    msg.pos_sim_err_wrn = 0.6167648401939215;
    msg.pos_sim_err_timeout = 58837U;
    msg.converg_max = 0.7211433543519538;
    msg.converg_timeout = 31365U;
    msg.comms_timeout = 60816U;
    msg.turb_lim = 0.18628455560777257;
    msg.custom.assign("IBOAAGTJMHGSPJUHZYOHNXQHIFQARCXSUKTUWDFVMRQXCBVLQFHZINNJMDDZPYFSOAREGRYRPBGPIEQCHBYZDYESEFNTKNXMWYPNFKJLVVPOLWCMVARLFVNKJWUULXUWZNSXOEVASIZKFQMZBAZSEMXHWGLIELUQGTIBUDKPQFMJKJAWOOJAOBDSZTEDXDTCLCIKRPRMSJXLKTFZCJOBYBCYBNEUEQTNMLPIRWHTWDKRIQVHVPSWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8210642945499471);
    msg.setSource(35296U);
    msg.setSourceEntity(110U);
    msg.setDestination(30307U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("CPUILSAPKASQDZURYLNBBWMJZHAEHQWOTISMXWCCKLLLKQQORHUUJTCCAVGWDJGSVXAFWUIBPGYZXGUWMMNVHZSNJOPJLNFLOPVTSRLNLONDMCJKEFHRBTIRHFTFEFGSDARDVFCIKMXQATGBQJXMJAUGUBBDZYFDGQDIYIVAOTSCMCOMJPTWWYYSQJMOODKGK");
    msg.type = 231U;
    msg.op = 83U;
    msg.group_name.assign("XYKWDTMUCMLROGBDHQMFJOZUJKAYWJWUHBHQVDZYSZLXTJQEHXSBGFMENPVJTQPRVNITDXROEAOZFECHUXUDGRFGDUEEDIZTLEKOWSIMNBLSECYHRKRXAMWPHNNRWLAPOOQIBBBEBJPLRMXOHTFPCSCGNIJDWKKCWIFCTEGAVTVNCGIP");
    msg.plan_id.assign("SCHLQKHOGCRZXSACZRVLQFAXJQZDQWMVTLCIZKADSELWYZWJIVLWMTOVXDRLJTNRUZPBEDNAFHTBDHNQJNNBJGL");
    msg.description.assign("XCWAYZMEISBHSKNBLBSFJXQJQBBLDEBPABCEYKWNLPPXISAFAXTGDKFQGQXGURNLZNFZMMSGYJOLKEZYMSOYDEKSVJLRJBZMVGDPRQFPFIODJYLCXAQIHQUKJUOBKTNHHVXWFUHVYDKHMTGKCHFEIGTYKMBOOQTWGUFXSYMAJERCLPDAVIJZPGCDCVJTXSPCRONZORLOUTTNUNTPXMCVQZNAWGNUDOIRWFWVTIEIL");
    msg.reference_frame = 58U;
    msg.leader_bank_lim = 0.7806039477992796;
    msg.leader_speed_min = 0.47657240896085307;
    msg.leader_speed_max = 0.7058169321189495;
    msg.leader_alt_min = 0.7064021354735199;
    msg.leader_alt_max = 0.9089612783325118;
    msg.pos_sim_err_lim = 0.6283252911251803;
    msg.pos_sim_err_wrn = 0.3139801269374045;
    msg.pos_sim_err_timeout = 45206U;
    msg.converg_max = 0.9553350744792295;
    msg.converg_timeout = 45534U;
    msg.comms_timeout = 20464U;
    msg.turb_lim = 0.7654702855054221;
    msg.custom.assign("NWXAISWXLKNIGDDEGNOOGCUWCMYMBMUQHLMSABZTUETRINRDSRESJRFBEIBKCWEJHHCPTQAHVYCKTABXZXKDKLEHBIJHZWMLZVCGSGKEXWGQUDAXSQVPOTKXIDFZYQHPYYBZUPDVOXPBVPLDGDFLQYRKLOOAFMTUNNAMEUEYPFSUCFAFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.49216616764827426);
    msg.setSource(28914U);
    msg.setSourceEntity(173U);
    msg.setDestination(25402U);
    msg.setDestinationEntity(85U);
    msg.timeout = 22277U;
    msg.lat = 0.9293508157515376;
    msg.lon = 0.19687918938976667;
    msg.z = 0.7352108049194134;
    msg.z_units = 25U;
    msg.speed = 0.4136656887285297;
    msg.speed_units = 57U;
    msg.custom.assign("ANTWRQBLBNUTBKITGZWJXNGHVHMWRFVEXFCPRXACUMKCFJUVWBMLUHAEODHRCWCXTQYFZISDJOQNNPOIRTUMLCQNGJVHFWMAUGJQOOZOZCRBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.49850388932589973);
    msg.setSource(35960U);
    msg.setSourceEntity(104U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(126U);
    msg.timeout = 29082U;
    msg.lat = 0.2263294522132776;
    msg.lon = 0.8021935433328782;
    msg.z = 0.48850690758149606;
    msg.z_units = 42U;
    msg.speed = 0.15721881815233518;
    msg.speed_units = 180U;
    msg.custom.assign("XAGVPKHJIJXYPUYOSOKMCXZTLELDTCKFNHZOOWNVRORMJMIYRJJZMRBQQSACJZZQXMWNZXIBAJVEKFVIHPDCQKAOYYRQPWTUABTAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.18774181977586868);
    msg.setSource(34965U);
    msg.setSourceEntity(234U);
    msg.setDestination(1139U);
    msg.setDestinationEntity(17U);
    msg.timeout = 34670U;
    msg.lat = 0.5645454376551216;
    msg.lon = 0.42578285274496397;
    msg.z = 0.6400431551457577;
    msg.z_units = 174U;
    msg.speed = 0.7646395290243233;
    msg.speed_units = 223U;
    msg.custom.assign("JEGTBLKKPBNLEPXWQVZXFXDNVMBMACMTFHGLCQGJZAIDZAQHISHFGRCCVMNANWKLQPBNPCFIYSNGRSDZMORAOKLAYMKIYIHDVQSYZATYFJDHIOGVTOTYOGSVQRKLEBHMRDUECHZJFWLXFCYUXFDCMGNJVERUOXVSEWPHAONTVHGUKBUJYDGPNBOPZJTLQSUEMWPLHOMKXYFJXJUWLUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.31658609108581015);
    msg.setSource(39688U);
    msg.setSourceEntity(53U);
    msg.setDestination(7787U);
    msg.setDestinationEntity(15U);
    msg.timeout = 25488U;
    msg.lat = 0.1168409569259038;
    msg.lon = 0.8391643792594758;
    msg.z = 0.41381784396932797;
    msg.z_units = 162U;
    msg.speed = 0.41284967869504896;
    msg.speed_units = 63U;
    msg.custom.assign("TRZHZTZFOBXNSOXJUITDQECAVLXJWMBAFTJQMQLKNQJIMIMNOISWPNHMHIXUJCAZNMWCTLLRDYURZFBMKEYQXETVAKFBIFAZCGVYRPKUTIXOPRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.9180866570912591);
    msg.setSource(37036U);
    msg.setSourceEntity(238U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(146U);
    msg.timeout = 52316U;
    msg.lat = 0.016158852590985595;
    msg.lon = 0.8074581006048781;
    msg.z = 0.9031692153260921;
    msg.z_units = 173U;
    msg.speed = 0.75474499032254;
    msg.speed_units = 150U;
    msg.custom.assign("CIALKRIQCNNRMSXBHODRYKSWSYHQOEICVRWUYWKHXGVRTSGGLIATYEJFEZXRZWNNQOZQLPGLTMFDXITPKMGJKKVCYBBDSYPUWCNAJHZJGBCQXTECIVHRIJJUQHWPALZDCQLMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.09890447602998609);
    msg.setSource(23222U);
    msg.setSourceEntity(41U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(76U);
    msg.timeout = 65512U;
    msg.lat = 0.08463609631955216;
    msg.lon = 0.6428558317960876;
    msg.z = 0.7474795724841176;
    msg.z_units = 54U;
    msg.speed = 0.7130970097786421;
    msg.speed_units = 126U;
    msg.custom.assign("UHFIXWQSTUMFAXAZSVPYNGHNMXWSLCZXSPLICEYEMQEDNNGFZWIUPUKMEOOEJVQVRNKJZVOQVYATGCUENTJAAUHEYWKUATOLULPADIRDYOYGLIBXKQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.46519769030700353);
    msg.setSource(6073U);
    msg.setSourceEntity(194U);
    msg.setDestination(62747U);
    msg.setDestinationEntity(62U);
    msg.arrival_time = 0.2608505298899888;
    msg.lat = 0.3267294005910585;
    msg.lon = 0.28556350709902145;
    msg.z = 0.24112530812980304;
    msg.z_units = 176U;
    msg.travel_z = 0.7766373283676731;
    msg.travel_z_units = 96U;
    msg.delayed = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.5596571100311014);
    msg.setSource(999U);
    msg.setSourceEntity(130U);
    msg.setDestination(382U);
    msg.setDestinationEntity(182U);
    msg.arrival_time = 0.8842147301393564;
    msg.lat = 0.10965365294111262;
    msg.lon = 0.8178616633435033;
    msg.z = 0.6253690195354118;
    msg.z_units = 144U;
    msg.travel_z = 0.32656521439037633;
    msg.travel_z_units = 13U;
    msg.delayed = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.21790541887330106);
    msg.setSource(37435U);
    msg.setSourceEntity(148U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(112U);
    msg.arrival_time = 0.38165246393082275;
    msg.lat = 0.17637934254636045;
    msg.lon = 0.16451268273476083;
    msg.z = 0.7468371252397726;
    msg.z_units = 144U;
    msg.travel_z = 0.8427265245119091;
    msg.travel_z_units = 163U;
    msg.delayed = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.761116826066329);
    msg.setSource(8098U);
    msg.setSourceEntity(96U);
    msg.setDestination(47537U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.4792143397311376;
    msg.lon = 0.6557511241361536;
    msg.z = 0.9250823552628575;
    msg.z_units = 202U;
    msg.speed = 0.9657809371146966;
    msg.speed_units = 188U;
    msg.bearing = 0.2904133492896218;
    msg.cross_angle = 0.7598555649982521;
    msg.width = 0.4724403667074508;
    msg.length = 0.4127011673487513;
    msg.coff = 253U;
    msg.angaperture = 0.989242886896286;
    msg.range = 42289U;
    msg.overlap = 186U;
    msg.flags = 40U;
    msg.custom.assign("MYVXNLTJLWVNGUDXCJIVJDZRZYAPINPFSPDIKUSNPAETWIZAHELCGCLLYFATHMGRMVRJBGBBUBMAANMRFKIMHZWCQUPKXEMWHXTJNGETGTVJUFECNISKCOKDBODKEOSQVWEPKDFSWQQXUCEQUGOOQAVRCKUIXOJOCSVPFLANQZJRWBCPGVQSXLHFMYZHHBOEOLWARNXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.9147735537434019);
    msg.setSource(47971U);
    msg.setSourceEntity(244U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.10687323810796112;
    msg.lon = 0.43005784732842633;
    msg.z = 0.9864407148517182;
    msg.z_units = 181U;
    msg.speed = 0.2031199772523702;
    msg.speed_units = 91U;
    msg.bearing = 0.8325329899120222;
    msg.cross_angle = 0.20502530711151778;
    msg.width = 0.42844601733102794;
    msg.length = 0.03624043932312515;
    msg.coff = 234U;
    msg.angaperture = 0.10653841872597314;
    msg.range = 22164U;
    msg.overlap = 42U;
    msg.flags = 252U;
    msg.custom.assign("YQWZDDIIPLKUZELFJAKKQJVTIIZNGIVAMLEJYHBSEUBMSCQDNCQDKCLZFGWTRZROUXSMWFBOPBFBYKHBBDDRXMTLEAUTAIWDSLMQUYGOBUZFNJWHNUYJPCWMNQJOTJCTUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.285347032788575);
    msg.setSource(35552U);
    msg.setSourceEntity(133U);
    msg.setDestination(29475U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.8392702475248702;
    msg.lon = 0.7512039557476239;
    msg.z = 0.45582167416047015;
    msg.z_units = 118U;
    msg.speed = 0.9641124093997944;
    msg.speed_units = 26U;
    msg.bearing = 0.6522162337209205;
    msg.cross_angle = 0.5471474131017531;
    msg.width = 0.9243198085132269;
    msg.length = 0.07208377013729927;
    msg.coff = 64U;
    msg.angaperture = 0.8560201116526691;
    msg.range = 32017U;
    msg.overlap = 119U;
    msg.flags = 55U;
    msg.custom.assign("CSEKUTJBAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.8449352547961688);
    msg.setSource(45627U);
    msg.setSourceEntity(170U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(194U);
    msg.timeout = 39195U;
    msg.lat = 0.6931548484142785;
    msg.lon = 0.40947222785663695;
    msg.z = 0.5091026830649023;
    msg.z_units = 146U;
    msg.speed = 0.5970986776653961;
    msg.speed_units = 234U;
    msg.syringe0 = 87U;
    msg.syringe1 = 20U;
    msg.syringe2 = 108U;
    msg.custom.assign("AVLNIYXCDUKSKWXRALGTCHLCYIZQVZQQOMLYHFCPGRFVQVDKZSCUACRSOJUFTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.9869071633946379);
    msg.setSource(53852U);
    msg.setSourceEntity(222U);
    msg.setDestination(2626U);
    msg.setDestinationEntity(74U);
    msg.timeout = 28744U;
    msg.lat = 0.30916597543687563;
    msg.lon = 0.5155125383400367;
    msg.z = 0.8566691825257318;
    msg.z_units = 156U;
    msg.speed = 0.803125447357888;
    msg.speed_units = 254U;
    msg.syringe0 = 33U;
    msg.syringe1 = 164U;
    msg.syringe2 = 163U;
    msg.custom.assign("BYAKWTIJVFJZBZJXXCMXOPFQNEZXKDEBUQCMEGADKGQVFDZMWNOWBNMSFFGKAZVQYHGMYOLICWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.40096249704038767);
    msg.setSource(10807U);
    msg.setSourceEntity(217U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(154U);
    msg.timeout = 24256U;
    msg.lat = 0.6833615273434054;
    msg.lon = 0.7593710951951024;
    msg.z = 0.9718122116014557;
    msg.z_units = 79U;
    msg.speed = 0.5519248256095507;
    msg.speed_units = 200U;
    msg.syringe0 = 43U;
    msg.syringe1 = 52U;
    msg.syringe2 = 112U;
    msg.custom.assign("RRGMIAUIITPNNJOINGYEKPQUPSVPBKBXVKNKJZNMLVWWBRXUCZFLHMMWLETCGSUILVXHFZCYAEMSZWYHVFGJZGVXHUBZWDJRIDMSTILTUVONTPHCADORYEXUDBGLQNAPEMQUDHDESUBYRGBESGCTOBFYZACSQAZUKWLSEWXFQFCPOQGBIJPDTYQLKOHECDFPJPMZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.5454468771299119);
    msg.setSource(58585U);
    msg.setSourceEntity(190U);
    msg.setDestination(59473U);
    msg.setDestinationEntity(229U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.278147760820483);
    msg.setSource(17321U);
    msg.setSourceEntity(187U);
    msg.setDestination(23444U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.05394004174786371);
    msg.setSource(38416U);
    msg.setSourceEntity(219U);
    msg.setDestination(5073U);
    msg.setDestinationEntity(158U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.8558629309138285);
    msg.setSource(64845U);
    msg.setSourceEntity(149U);
    msg.setDestination(29036U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.31164785890521585;
    msg.lon = 0.17909049693517898;
    msg.z = 0.20022601470016022;
    msg.z_units = 43U;
    msg.speed = 0.095661419697462;
    msg.speed_units = 249U;
    msg.takeoff_pitch = 0.4668036025100605;
    msg.custom.assign("DGTUMVQPOYHGGVDJANRDFMHRCRJWIRRTLHFYDOWXZLCSMPEOBHVKBGYLUJPUMZZGOICQNGZJDEPFQLCABYESWZFKAVXELNGJDBUIRBSKMUAQDEWWOWQPPKNBUZITCVEQUZUMHIREWWYRUOVIXZFZANAMABOYDUXHMSAVSCNOFHVVDLYQKMNQVBXFTGGTTTYSEIDTRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.6624022051648252);
    msg.setSource(49008U);
    msg.setSourceEntity(98U);
    msg.setDestination(54157U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.12649422765897167;
    msg.lon = 0.07216643151898039;
    msg.z = 0.6853610083746826;
    msg.z_units = 130U;
    msg.speed = 0.5394881238094429;
    msg.speed_units = 31U;
    msg.takeoff_pitch = 0.08676583764941881;
    msg.custom.assign("POLFLDSWUGFXGIERYGZJMBVZHHKTMWWKQNLJCMNHEEMKCOYFIJGJKRIAZRPJESTXTAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.9568020608251053);
    msg.setSource(52167U);
    msg.setSourceEntity(226U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.7572181615963138;
    msg.lon = 0.6285734360187888;
    msg.z = 0.17092665809929697;
    msg.z_units = 222U;
    msg.speed = 0.31254927085662754;
    msg.speed_units = 15U;
    msg.takeoff_pitch = 0.3318243047498959;
    msg.custom.assign("ZPVLPVAFGHGTTLGHCMYEPRELLTICPQCAJPCOMDWKHQZUIGQFJFFNTVRMLWHIZUANGSJDSQXIXCOABWKYPUBKWJXMDUTWARBCGTJZUZRQGRASHSOENBIBVXXOUYJMXOCYJEADYUDUGIGMEFEVOSWXZEWJASQIFYVBUNDNNPRXLIHKTXMLMRIARKWMUFNSAQKFKCTMOSDPVYOQHQPLKPNVZCDRRECSSVWHGWFDYJXKKNBIEBZYZFOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.2192242533756693);
    msg.setSource(2544U);
    msg.setSourceEntity(32U);
    msg.setDestination(18280U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.5805278552924218;
    msg.lon = 0.6419102087715985;
    msg.z = 0.9720596594296704;
    msg.z_units = 33U;
    msg.speed = 0.8138573439975013;
    msg.speed_units = 101U;
    msg.abort_z = 0.777782014213157;
    msg.bearing = 0.7768741543415055;
    msg.glide_slope = 194U;
    msg.glide_slope_alt = 0.9943997455791718;
    msg.custom.assign("VYJIALSYKEPRKIYAXBGHFCTSPKVRNJNPUOCKTWZMXUVOQWBVRVUELIZATSPUHFHNPLTNFGOYRZZUZMLCJVFLPOBNTWINEEOPEFYSJCBDMJMWHMCBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.987607119704595);
    msg.setSource(11485U);
    msg.setSourceEntity(28U);
    msg.setDestination(9268U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.3662714920646397;
    msg.lon = 0.18812361540989542;
    msg.z = 0.5784376077502278;
    msg.z_units = 143U;
    msg.speed = 0.1806437567185354;
    msg.speed_units = 88U;
    msg.abort_z = 0.9394275655080617;
    msg.bearing = 0.25043438821143127;
    msg.glide_slope = 178U;
    msg.glide_slope_alt = 0.760016677021445;
    msg.custom.assign("TUXGSUANNCOIFLZFLQLHCPCOWCLPVRVSJCFEDWZVJRLDYYOKAQXIMRTADWZBBICBRTCBBURMGKKDFDVXBOTTMVUIVDXIMJCEYYABSXRKTXOZMOEEWDATJWVZQUNQLUYSTSZQLNXANHBFWGGQPKFJUWPLDKHKZAXJNSIYGXTKYHFOGMGQKSJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.23123027917219852);
    msg.setSource(33025U);
    msg.setSourceEntity(129U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.17734026310281092;
    msg.lon = 0.3223062773182471;
    msg.z = 0.8298428417190548;
    msg.z_units = 153U;
    msg.speed = 0.46548929834965225;
    msg.speed_units = 147U;
    msg.abort_z = 0.6900739579536882;
    msg.bearing = 0.29265814072276664;
    msg.glide_slope = 248U;
    msg.glide_slope_alt = 0.287836021814747;
    msg.custom.assign("TJAHWYPWSXHQJDIYLXUYKNGENHKXNLFQMCRTHDWCWGRBHUCQNKYIQSEXZMOADFNRJRMBXDUWWPBEFKICAYRJNABSKIOUTGFRPZXOZSZHHVFOQKXGQVELEVFCHCGSOHGAMYWYSBWFGTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.02255053996338563);
    msg.setSource(1656U);
    msg.setSourceEntity(191U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.2231713277306988;
    msg.lon = 0.8757858865337788;
    msg.speed = 0.5784159647743073;
    msg.speed_units = 150U;
    msg.limits = 201U;
    msg.max_depth = 0.9075915783528767;
    msg.min_alt = 0.8211898173225562;
    msg.time_limit = 0.8041325219990404;
    msg.controller.assign("OENNBZUCDJIPRQFYLEWWBYHGAHATSOGPCNURPOZYLQVOTXMDVRAAJGOARXEZEOFATFZNCSQNXJQEGVXSXVDPJVXICZTCPHLKMCLDSHOYFFZMPGARADWYNPQOIPTIIVKYBFLTKWCYXHVBPKMMJMVEBHWTUUFJSGWUZKILBWQUAOUUBRGABKRIVJBFJZLWNIDVXWGJCEQGMDEMHE");
    msg.custom.assign("NNTLAYPZDRMPEHXZXPTRLSPULUGCFLAQAXCPCKUOSFFMEMLRJCWOOMOYUCOZZMHTYRLTAXIBVWDDYJVLEFGMFKBDYZDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.5857394170571356);
    msg.setSource(10575U);
    msg.setSourceEntity(211U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.1444038725117477;
    msg.lon = 0.40882052122817847;
    msg.speed = 0.8126464343333927;
    msg.speed_units = 85U;
    msg.limits = 149U;
    msg.max_depth = 0.3755223524974307;
    msg.min_alt = 0.4425732718774522;
    msg.time_limit = 0.11883554669766083;
    msg.controller.assign("JQBKKLCGOXOLDHOBGFDPVTSGJFCHGIWDMYKDLEYSTEZYAXLYKMMEWAOSNLFX");
    msg.custom.assign("ZEXHNFYIOMVKUHIFQCCZNDQBECBHQGIWLYQJEGPFQWOXGMUNAOJVORPVXAAARZCAMMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.7999746207179137);
    msg.setSource(20801U);
    msg.setSourceEntity(233U);
    msg.setDestination(366U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.6914259082417341;
    msg.lon = 0.874566779968031;
    msg.speed = 0.15875784740936105;
    msg.speed_units = 7U;
    msg.limits = 146U;
    msg.max_depth = 0.4826898195282001;
    msg.min_alt = 0.2791153812006504;
    msg.time_limit = 0.2184515052069177;
    msg.controller.assign("SFUKCPPTHCMVCKQDDQIOZWFDJFJCUUAFHVAHHVRQZILEDXEUSJDBANXRBKQLNSYXIIHTLDFWPJNUKSFMXDLNUELWTGHGYMLDBGZYPYIISHXWRHJVIBEOBFAHPUJZWCYRKSGYBWGYTMBZSKFEOMBVGNVNTZCETAOKVNYQMNROUHULWALXCATGSMMPGEPIFTBXKJSAQONRFYKAXRPLVCUCYMWOOQQZTNJXWZJLXQR");
    msg.custom.assign("WHSTJOPYVTUZBVJMKQXZWQUGOYPWCJMTHROCUKYROUYXXYDZYIXWNFTJYALNGDKPEZRVIQWKSZMBEKLWBFPLNHGSIRTCZCVYXJINPDKRBVOTBAOGZYKXZEFMHUIFACWUROPAGVGMEXOEMTHMUZCAEJDQBQLPNJALSTNJBMRQWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.1588704230161807);
    msg.setSource(33999U);
    msg.setSourceEntity(91U);
    msg.setDestination(12436U);
    msg.setDestinationEntity(84U);
    msg.target.assign("ICNIQBESEKLTLHIJWZUMAUIPBCRXOAMBLJBFOKLNWQCKYTPRMWZRNGWUSPJZVIJXUYHZCCFRSHYHPADYKHEQWVLAKYFLVMUDFOCXXWWGYEASFIFGDQFUKWTNVAGZCSMDOGMI");
    msg.max_speed = 0.738818180741876;
    msg.speed_units = 53U;
    msg.lat = 0.2375514800070999;
    msg.lon = 0.46312473973081203;
    msg.z = 0.8575360368752053;
    msg.z_units = 165U;
    msg.custom.assign("BAANOQQXDBDIWRIUTYMGPODKOYOUOMUTKGVZIBZGGDLJQWEADB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.6461387634343829);
    msg.setSource(27903U);
    msg.setSourceEntity(209U);
    msg.setDestination(39346U);
    msg.setDestinationEntity(47U);
    msg.target.assign("JHZCGCHSNJKTSRBXZRMPJUNKLUMAECVFAUEYYOYAKZBTWUTDOCXAYJSIFTNQESROILMQHOFQDELUZDJSFRXLNICFPNOEOWYFGBGKORPNGILQFHSDDDVYJAVBJIDMKRJBNITWUGQVQPXKGQYXAXRHDMILCVEEALWUVHETMBWBMKCAUOFTQORWMBYPZJQDHTKZTCKMAPVZRAS");
    msg.max_speed = 0.1849374910509377;
    msg.speed_units = 115U;
    msg.lat = 0.6614199230780728;
    msg.lon = 0.698853313985496;
    msg.z = 0.6373320699680121;
    msg.z_units = 139U;
    msg.custom.assign("IUEDPCCEOAMBWDQQPYLYFIWGNWUMTJYAEVZVYHKGKGGCNBMHUVJYBPSAMHPFIWWDUAHIEEHQSVUZNLRMDXPAIJOLQQNCNTPCTRZOATZANP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.4265964673796624);
    msg.setSource(31141U);
    msg.setSourceEntity(96U);
    msg.setDestination(16162U);
    msg.setDestinationEntity(15U);
    msg.target.assign("NELAIRLSIOKKCFSQDKNYIYUYZCNRQEDFAOTAIHRGLAIONOMDBYMGEVNUKVKGPCJPSSHVIGDOSDAJDPTICXWGLXFZNBQLECTHHXKJMBWVMZTNDTFQVJNYEOPCPCDOCHLLMAXHHMTTWJUXKLKUAPSQDOYERJZVBTQCZVYMUGIRRWMYAFAIJEGCQWZVBPNVQWBJRQFRUZNSXERJTRGUWFFKPMULKHJVUZIFGG");
    msg.max_speed = 0.7458748147148442;
    msg.speed_units = 130U;
    msg.lat = 0.6997451815909923;
    msg.lon = 0.288776276186255;
    msg.z = 0.01050965868706033;
    msg.z_units = 80U;
    msg.custom.assign("NNUNUOCSIMQPGWAEIWKAIPPHHTBEPXMGVRMGIVRZNCDLLIZIBDHJDIEZSQVHRNLOAUVTDVUYPPPCJLMQMWMWYYQGSRWGTKUKKHIUOHFZQRVXEOADUBJCKOAAFLKYAXDVCCFWBQMNJCYXRHFFGTLRBURBADUZSOETSIEVDZXDQESQYLHBCYXFYKLOWOGYTFHXJMTJVFNNFPAJRSTZNPLZJGKOXWCHOUKTFWXVSBSPWJBMEKILGTRNZXSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.3233244765608354);
    msg.setSource(12450U);
    msg.setSourceEntity(0U);
    msg.setDestination(17318U);
    msg.setDestinationEntity(153U);
    msg.timeout = 5769U;
    msg.lat = 0.6389513887053705;
    msg.lon = 0.00044973197531983367;
    msg.speed = 0.7400841747613297;
    msg.speed_units = 179U;
    msg.custom.assign("FXPJEFMJODSLHYHPNKIOCTXIAQCRNNVHMQFXUNVXMGLIYLFXUJPLWOOYFSEEWKCTGNQQYWVHUEABBIZTNDRBLISSZAUNZPUVGYAILXYZDRTSGRIMTCCZFJRBYZNRXOIKVLKDTREJGGKFNZXOBQXSWTZBGMKZOKLPDAWKIXPSHSYLJJACGKLCUAQUWOQTBPDQBNFMIEBEVHDMPEFEVTUAHJWBVHMTJPHCVCEQQURMRJDSDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.0015815161886955087);
    msg.setSource(9477U);
    msg.setSourceEntity(252U);
    msg.setDestination(33863U);
    msg.setDestinationEntity(95U);
    msg.timeout = 59456U;
    msg.lat = 0.8634165405425699;
    msg.lon = 0.5878621160650739;
    msg.speed = 0.8880854658441144;
    msg.speed_units = 198U;
    msg.custom.assign("QYYXXDYTRDRJSNAWUYMWJMZUWRTZZBRIHONCILUIAFDIPOMWOSMZJFXLBLHCEHDFVVXYMWMYVUZPQCTKPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.9210051042972155);
    msg.setSource(41306U);
    msg.setSourceEntity(84U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(37U);
    msg.timeout = 34837U;
    msg.lat = 0.54283742432633;
    msg.lon = 0.992617363675042;
    msg.speed = 0.1065013139051263;
    msg.speed_units = 173U;
    msg.custom.assign("DHKZIJHVEKHKQPPTRIFYYWPRDOGCNUGAFEQSIQENQTGBZOGXFZCYXEZOXANJASWRTYNDRZTXDKLKYHBAVPLWUVWZBNEBIMVSVLZBSXVFLJCWECZYOEAZDMBRBZKWMBRRWKFWIBUWWLFUYQQVFKLSCHSMIMYAUULXXIHEUDOYDSTJPXUCSMDLGKOCQJACPHNHSEJTACPMDMGFPOJUSCUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.0909884097417818);
    msg.setSource(10829U);
    msg.setSourceEntity(224U);
    msg.setDestination(38151U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.813799270922201;
    msg.lon = 0.8371437844558512;
    msg.z = 0.710224380421043;
    msg.z_units = 167U;
    msg.radius = 0.831261777285002;
    msg.duration = 13799U;
    msg.speed = 0.7228408018161167;
    msg.speed_units = 245U;
    msg.popup_period = 29679U;
    msg.popup_duration = 42384U;
    msg.flags = 170U;
    msg.custom.assign("FARBWEFAIUQHPXIDTAGPHGYCUCOLHXMZUAJTOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.16886118796527871);
    msg.setSource(3487U);
    msg.setSourceEntity(123U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.428756356804451;
    msg.lon = 0.9694509777660063;
    msg.z = 0.32288169663386745;
    msg.z_units = 230U;
    msg.radius = 0.10941758566409221;
    msg.duration = 5573U;
    msg.speed = 0.6587725122859514;
    msg.speed_units = 253U;
    msg.popup_period = 14889U;
    msg.popup_duration = 1960U;
    msg.flags = 21U;
    msg.custom.assign("BEUSXLQNPRFYCGILVCMCCXWOLJBGJCHUVAAJNQLWZQQLKOEQKKOIHKIRXCNPOHWAQTAKJIZRTUYKMDMCFHXGEYMJVBIYCXSWTPBIMTXGUMQDWZEXFBFDYLSFSZAMTEAPBBKYHYVONFGEONFVVISGRNDTQPUODUKZHGRXCNFUELYULRHUFJXPRMWEHVGDETAILYGAPNTRZOOJBJBMHWRWPTSJVSKPNARKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.12313473496924421);
    msg.setSource(47303U);
    msg.setSourceEntity(36U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.08161810548610704;
    msg.lon = 0.8772894044289892;
    msg.z = 0.41211934836340935;
    msg.z_units = 144U;
    msg.radius = 0.2734209237188915;
    msg.duration = 47730U;
    msg.speed = 0.13879108968797071;
    msg.speed_units = 201U;
    msg.popup_period = 35590U;
    msg.popup_duration = 31171U;
    msg.flags = 80U;
    msg.custom.assign("NANSFEMBTUMTCUKTOXIRLRQUZYJBALNTWZYEXGJRKSLUSFPMAGKMPDLGOMBWODVDQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.012601201602975398);
    msg.setSource(62262U);
    msg.setSourceEntity(0U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5104836124931124);
    msg.setSource(45160U);
    msg.setSourceEntity(196U);
    msg.setDestination(24595U);
    msg.setDestinationEntity(135U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.8408955033414767);
    msg.setSource(41257U);
    msg.setSourceEntity(5U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.5575800779107609);
    msg.setSource(12598U);
    msg.setSourceEntity(109U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(77U);
    msg.timeout = 7339U;
    msg.lat = 0.3041332909775988;
    msg.lon = 0.5446294665971076;
    msg.z = 0.8106282842102661;
    msg.z_units = 2U;
    msg.speed = 0.00936465300332634;
    msg.speed_units = 200U;
    msg.bearing = 0.7562816476460337;
    msg.width = 0.19739816863486404;
    msg.direction = 51U;
    msg.custom.assign("MUHXTTREIBGYWPAGGGNLBFJTLSNMLWVZWQNYJERNQOQYLCWLQRUDEEBFUDDRJTVFDBQVVXKRRBCUMVXEFAWOIOGSGDPPBJUFQVGHWPPDKCBHNIUMMBZODYPAXXGSKXLAAEKVWYCHCKQUBNMPNQZNTSQJPCZAVHQFCLXIAWPRTYVSSZLOWCEXJKDRSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.3561067542083517);
    msg.setSource(59048U);
    msg.setSourceEntity(176U);
    msg.setDestination(43023U);
    msg.setDestinationEntity(76U);
    msg.timeout = 3464U;
    msg.lat = 0.9630962782640604;
    msg.lon = 0.03944665450191731;
    msg.z = 0.6374319517201246;
    msg.z_units = 229U;
    msg.speed = 0.0643048584696222;
    msg.speed_units = 156U;
    msg.bearing = 0.7092586480858931;
    msg.width = 0.9947875037152727;
    msg.direction = 196U;
    msg.custom.assign("DUXMMXERISQVBBCBLBHUFYQPQWVVKNLCSAJFLGAFOVZXVKTVPUIQPRNWUZWIXTNJAYJJXNJEKYOHYRUKCNFPWGONMTFDRFLPQPZOTTKBHUJQPZIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.3193231685667757);
    msg.setSource(22768U);
    msg.setSourceEntity(62U);
    msg.setDestination(27623U);
    msg.setDestinationEntity(108U);
    msg.timeout = 22921U;
    msg.lat = 0.39715161124769516;
    msg.lon = 0.3136612312887913;
    msg.z = 0.5689872933079603;
    msg.z_units = 197U;
    msg.speed = 0.13976039787439576;
    msg.speed_units = 154U;
    msg.bearing = 0.08012787352922157;
    msg.width = 0.22223196822719782;
    msg.direction = 202U;
    msg.custom.assign("FVWDAJWESQXQAOZBYLXCGLIWNBYSUDVREBTVQLMNRMQSPTERIAMZKVPNNPHXKEFHZIRCHSPDTOPZETANFAXPWQYGQKPDZFQULXFEJUOYXYOAJTRFILVSVZCWUEYYTIDSVCHLFKUHCXJNUSIEGOEKHOOTGPLMYUKWGMVYRQGRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.2863469499363984);
    msg.setSource(50896U);
    msg.setSourceEntity(9U);
    msg.setDestination(51031U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 125U;
    msg.error_count = 179U;
    msg.error_ents.assign("OVAUZNZQWXUIADMKHEOGPPW");
    msg.maneuver_type = 14689U;
    msg.maneuver_stime = 0.6884611535200432;
    msg.maneuver_eta = 63362U;
    msg.control_loops = 1408095540U;
    msg.flags = 239U;
    msg.last_error.assign("GTTDKXQIXBZMLNEXFFCQJOZSNCNZGRGYROIYLSZEQMAWHLDLUAAJRFLZJNZCJVMTHLZBVWFWFEIRAXOGOPYWAUDFKSPBVVJXIGCEFFMBUTJAQZYDOPPAVWYICFDQGCMMNXVEKHQOSJCKWXSGDLHWELBTZRSYQBOHUDKNQSUXRIHJVTMUAXYKJAKJBSCVKQRU");
    msg.last_error_time = 0.8739842756017477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.7220307297817155);
    msg.setSource(2651U);
    msg.setSourceEntity(180U);
    msg.setDestination(35776U);
    msg.setDestinationEntity(81U);
    msg.op_mode = 217U;
    msg.error_count = 123U;
    msg.error_ents.assign("MEBCIOWKMNCDQPQOVWKBGUGRPEUWGZRLSDKWNSVWXDHKAXPFPPFJLUPDTHQSANIJITARYOIJQZZZIGTZZJUXDVOFCEVCDTUJARONVEMBAAGFEUHMYPUFXCLFAYUAEQUBISHVSLEHYLHVLVGXNVRQBWRYMKSNEGTHKXNDSFWKCFMTJJHBBXFYGKBOZWDQQBGWMDXLNNKYNDTAMLCRXZMIYFCEUJCPJRHSIIRCZVKZPSOIBPYQAXTTLMSOO");
    msg.maneuver_type = 60597U;
    msg.maneuver_stime = 0.151801725250581;
    msg.maneuver_eta = 58618U;
    msg.control_loops = 339396081U;
    msg.flags = 166U;
    msg.last_error.assign("KFBXVYVZTQZYBFGRQWSOYFRECGHPGEAYUKGKSUKDEIKNNFJOCSHJUW");
    msg.last_error_time = 0.682655681123346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8637942049262117);
    msg.setSource(61360U);
    msg.setSourceEntity(73U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(120U);
    msg.op_mode = 191U;
    msg.error_count = 45U;
    msg.error_ents.assign("NMPLKRTYZVNBL");
    msg.maneuver_type = 46933U;
    msg.maneuver_stime = 0.9821109190415721;
    msg.maneuver_eta = 59668U;
    msg.control_loops = 3333028238U;
    msg.flags = 184U;
    msg.last_error.assign("PMVMOXXUDIMQYRNCBYIQCWLFGVURFZOVINYAQYDHBPXBGEUZFTFKPDXDWNTQMPKWPXJSSJNZJJGQ");
    msg.last_error_time = 0.8182958047550002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.3831629443394581);
    msg.setSource(52973U);
    msg.setSourceEntity(209U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(131U);
    msg.type = 11U;
    msg.request_id = 32035U;
    msg.command = 179U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 49972U;
    tmp_msg_0.lat = 0.04257119375404472;
    tmp_msg_0.lon = 0.828349828060328;
    tmp_msg_0.z = 0.09237632510118732;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.4652163905544511;
    tmp_msg_0.speed_units = 48U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9613202513184754;
    tmp_tmp_msg_0_0.y = 0.4459163488138731;
    tmp_tmp_msg_0_0.z = 0.08608217625959469;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NPLTUQTSKYNZSDFNFHZGQHGFPZBMCLCINQFZAGGQIKJSQZAVQBEETGPDLUZPOBVEHRJEWGAKHRMBUTCHJIXXCWRSDWOCLRRLGJRDRXHTVSENYTULCOVGPAANFFKASCDKLWKAMIUBCJYYMFBVYQIIJOEP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52671U;
    msg.info.assign("PYAZMBIOXSVJNCZEUVWCDCUAHUVLAQPXJSQDKSYLLYZWNFWSJPXQFNNXBWDGYPPDYUEUGSNXQXSDFOOTJITGERWJPBURGSZGORXBWOCKZDRFMEFVVWDRHLNXUCBCQLTLRNEPYAYAMMETHAGFZVHYFZGZVOXKPNSWEDALLSFRHNIVAVMDTSUNTPZAMHQUGHHOWTPJQOGEMIWIKKQJIKYKYIRJJJFDLZCFTHBOAHMTBEQIRBGIQMBUCKKVRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.26174038801561683);
    msg.setSource(38064U);
    msg.setSourceEntity(42U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(16U);
    msg.type = 243U;
    msg.request_id = 10652U;
    msg.command = 198U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 34828U;
    tmp_msg_0.lat = 0.5467070255921647;
    tmp_msg_0.lon = 0.22600556167881214;
    tmp_msg_0.z = 0.6348858759632805;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.amplitude = 0.436604466638737;
    tmp_msg_0.pitch = 0.3370515137202319;
    tmp_msg_0.speed = 0.04583989596682714;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.custom.assign("SLKSEODALQBEEDDNZGXECJNFOBVYZGCIGMVLHZVMDTACYUTQMKXYJCKXBIYLMOWMRRJYHTTMUJDSURNIRXGYRFCFJOATQILTXJFRAUJFUCNAUVMUWOWNAHBBFCKOLWFSTYWEEVUKUZDFEKXBWPKRZBPIGVSRHZYIWVTIQGWAXNGCBLNSJRQPMEPVAJPBRBF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65143U;
    msg.info.assign("SLTDJXNMDZZYMSBUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.21287514209890246);
    msg.setSource(59172U);
    msg.setSourceEntity(143U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(11U);
    msg.type = 69U;
    msg.request_id = 35063U;
    msg.command = 24U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 11814U;
    tmp_msg_0.lat = 0.2863348795673637;
    tmp_msg_0.lon = 0.8035056633461153;
    tmp_msg_0.z = 0.5576550931379862;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.8536730281832526;
    tmp_msg_0.speed_units = 45U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8990717016673322;
    tmp_tmp_msg_0_0.y = 0.788183493362634;
    tmp_tmp_msg_0_0.z = 0.6841141900831309;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YXJWWNTMLNIEGPHBCULPXRIVLDAPGNBKGJJWVMUBDTQDTNZVUWMDHNPJPYDRYHPRQMHKWAZSCUFWXHBPTMKTSSASZSHXCGFFIAUBVJJPN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52525U;
    msg.info.assign("QLMYFVDJOXWUEMUEDWFGZPZQRKABXHAVBQACXDWIDVRIGIHNZQRNTLWBWNFIQJAHXIYQBFEEXDNKCXVGUYLPPPKJZSJLBDSANXXISPHCGCSFENGYZPOKBWMZCQOKSRNYVRTYQOPDKTOZUAJDNBNHXLWPZTVHBEOFLHHTQRHJTFKGMAIVEQKRIBVAMLKODAXJWGGCJYSLYTKMUGURMHUPJRFCNGCMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.5602903006359358);
    msg.setSource(4252U);
    msg.setSourceEntity(209U);
    msg.setDestination(31762U);
    msg.setDestinationEntity(138U);
    msg.command = 55U;
    msg.entities.assign("MARHTJTQXIPYUJCMIBTDQXLUGZKVDJVBDHESFPNYFTYIXALXKUPCMJNQAYYLLQTVFRIGLZEVWFZYRUASNLKOYXJOELPQRWMOHSGOSNLAFXUVFISAZKNOWFICEZVWKTBWMABACCSVRIHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.07974278150875624);
    msg.setSource(7777U);
    msg.setSourceEntity(178U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(195U);
    msg.command = 92U;
    msg.entities.assign("JAWRBPKTCNURVTXHBFHUDIIDZCBKMTVZYXAIPVLQUAFQZQEWIJHYWWYCXQELQRCPBHNJHZSMNYOJEAVQMGTCXDPJJRRTDZOROKZOEBQRVMUOOSKUSTMLIEWQKYBLFUIATQRLOIJIGLVWFMGMABWRXLYKGENVGLLDVEFJNPBSU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.33673444917613027);
    msg.setSource(42338U);
    msg.setSourceEntity(197U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(85U);
    msg.command = 184U;
    msg.entities.assign("NKXDIWWRBMVFSMTUETGDHAZWLCFVESAPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.5684747472339109);
    msg.setSource(42114U);
    msg.setSourceEntity(199U);
    msg.setDestination(46423U);
    msg.setDestinationEntity(150U);
    msg.mcount = 27U;
    msg.mnames.assign("CWLOCPBPDTUKVKSGIKARNNFMZJQPNWOWUAMMLDHLRXD");
    msg.ecount = 60U;
    msg.enames.assign("TVJUUAUPNVOFBZVQNEJTAJJELKHYWMVWDWRBIHLPVCPYBPKZKQNIRHTBRAZHBHLZAEKMOAQSWGOQMSCIQXYYXPOGEFNYT");
    msg.ccount = 77U;
    msg.cnames.assign("EQGBKVSWYRNPLYDXDXEKPJVLSCLUWKJCHAWSODZVOTDOZJLLBXEYIJMCQKFPMUGLTQHMZGJATDXXWFJJUBSEXGABXKESZXAKNPZOTIQGCFADENPZPTRWYMKRSGORZJTCOIBFVPTBSPZRNRNOPBTVQBKBSLEQAGDDBHURUGYIYFA");
    msg.last_error.assign("BHEUIFYUCKKKDRZAINOVVSHGZTRLYZVOUSIODFWWYHSLDVMAVERPZOBQWCNROUMEMOXUCEPFFGTJDAGAICH");
    msg.last_error_time = 0.553141493123456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.37252053878932523);
    msg.setSource(54098U);
    msg.setSourceEntity(124U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(121U);
    msg.mcount = 158U;
    msg.mnames.assign("ROTDVWDMWBELEDMLZJVONYQKNOYVZAOVHDIXZSGQCGBEYBINEFHKSQUCTTUIRAUMZEHQGHVCRJVIUCHYXD");
    msg.ecount = 160U;
    msg.enames.assign("JDXGJHXXCCFUYHBNROOMPTLPUGOEMOCEKVRLLHUFYKUVKXBUGMVNHGPBQZEWIPDQAUVIWGRZHMXBDYPOHCWTGLTODPYTOKKJYDTVEQLPCTGJCXZIHJEFCPSJBQWHZENSEGKIONLIMYSTUFOZSVKILVSRVUQBJFZZAQDAYCQENILTYTYARSMXBRFYCI");
    msg.ccount = 137U;
    msg.cnames.assign("IEIHWQLLZBWJYVTAWOBURFDCTWGSFHCRGIUEOGLOTNBCMGMGQHTGCBTTAHURLRAAMDPYRYUSLHZQQDROMKVQKPSWFOMOLACXLKKQYAYJILNGOKYPKJLPBBAXPBLDWVSZFTZXNUAIBFGXZSZVQSTS");
    msg.last_error.assign("UFBJSJORHTCMQCCVBGVDDHWLBOFGRBMLLOLTYZRIQD");
    msg.last_error_time = 0.2202051207331328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.20576793905440394);
    msg.setSource(27914U);
    msg.setSourceEntity(130U);
    msg.setDestination(64221U);
    msg.setDestinationEntity(133U);
    msg.mcount = 221U;
    msg.mnames.assign("MGEQBGEEVJDZNFHQVVWOJK");
    msg.ecount = 196U;
    msg.enames.assign("UCFZYEVVYBGSRIVENMNPOHGJZXNWAZHDUROCOVPJXXBDWPFWJIQAYUFGBQDQWTNYBZAKYRSCUNYAPTLHBEZAELEIQCAVOLUHIXXFIZVTPLJFSZV");
    msg.ccount = 241U;
    msg.cnames.assign("ZDHKFEAQEIFSWYALNALKMSQCUCVWFMORZEHZTCCHPYKMUHXCVRFBIGIETSCWUVHBCSGQAPVPXYUZHQPVIXOKJMPDXYZODDVJFFAEJVUBFIZKGNIAWDREUPCDLOWOVEJBAFNORBNNUGYVDDMPLYJNRFOHKPGPATLQDMJMTWBUILPHIGUXXELQSDILBYXTSEKKTLNQYXGWQ");
    msg.last_error.assign("VAOPOUOBQLFXFGBGSLKMHGWPHLGZJOUVBNFAITGPZFMGTJRPOXHRKMOIYYNNEFVXQSRFBSEJVXEFMQZEYYXBSVDNDLWJBKEWQFRSZRBTDXQUVKKRMTJEDFDKJWEUVQKJCJKFXQVPSWRSQYKGUYIAUDYGNZRCWJISOWCLARXASTEUTOQJVDKTCCMIADWBMHLLMCNRUTTQIHIZUHHDHNMPYPMBHCLZNGPNOAYEDHS");
    msg.last_error_time = 0.7633545015985829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5416610332344745);
    msg.setSource(49799U);
    msg.setSourceEntity(104U);
    msg.setDestination(43333U);
    msg.setDestinationEntity(252U);
    msg.mask = 229U;
    msg.max_depth = 0.7700870970898167;
    msg.min_altitude = 0.4761645094868181;
    msg.max_altitude = 0.06819176562160922;
    msg.min_speed = 0.1169652187770186;
    msg.max_speed = 0.9124059560559207;
    msg.max_vrate = 0.5113530220470608;
    msg.lat = 0.8581005799240858;
    msg.lon = 0.8707798641090386;
    msg.orientation = 0.5502821319457527;
    msg.width = 0.44976359735300986;
    msg.length = 0.053846897580411945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5604093143971727);
    msg.setSource(17593U);
    msg.setSourceEntity(209U);
    msg.setDestination(10795U);
    msg.setDestinationEntity(163U);
    msg.mask = 146U;
    msg.max_depth = 0.46993867708379633;
    msg.min_altitude = 0.25017480078735;
    msg.max_altitude = 0.47873498687838134;
    msg.min_speed = 0.7691864811223948;
    msg.max_speed = 0.21484813788934576;
    msg.max_vrate = 0.33356119350436275;
    msg.lat = 0.16663769052636457;
    msg.lon = 0.11595341250005597;
    msg.orientation = 0.774490277587246;
    msg.width = 0.7240504395644336;
    msg.length = 0.17245358316208637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.21405718103394256);
    msg.setSource(59051U);
    msg.setSourceEntity(133U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(43U);
    msg.mask = 200U;
    msg.max_depth = 0.1915971999692061;
    msg.min_altitude = 0.7490103589754185;
    msg.max_altitude = 0.7796151743664728;
    msg.min_speed = 0.23975157089479204;
    msg.max_speed = 0.5108959718599942;
    msg.max_vrate = 0.9512287475189808;
    msg.lat = 0.7614562891044339;
    msg.lon = 0.7162398667213894;
    msg.orientation = 0.25663033768246635;
    msg.width = 0.8820281163440274;
    msg.length = 0.813669220726601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.012475872075370709);
    msg.setSource(25539U);
    msg.setSourceEntity(94U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.6817564252629135);
    msg.setSource(11153U);
    msg.setSourceEntity(55U);
    msg.setDestination(7324U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.1538904617356035);
    msg.setSource(31240U);
    msg.setSourceEntity(7U);
    msg.setDestination(54756U);
    msg.setDestinationEntity(178U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.344988703303739);
    msg.setSource(53944U);
    msg.setSourceEntity(27U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(146U);
    msg.duration = 40156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.42103925459349323);
    msg.setSource(40096U);
    msg.setSourceEntity(97U);
    msg.setDestination(6806U);
    msg.setDestinationEntity(146U);
    msg.duration = 45748U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.12914678427916138);
    msg.setSource(9911U);
    msg.setSourceEntity(248U);
    msg.setDestination(13909U);
    msg.setDestinationEntity(0U);
    msg.duration = 35997U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.2694906823061247);
    msg.setSource(65326U);
    msg.setSourceEntity(172U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(85U);
    msg.enable = 60U;
    msg.mask = 2965649489U;
    msg.scope_ref = 4046032763U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.05109229841336094);
    msg.setSource(25229U);
    msg.setSourceEntity(7U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(19U);
    msg.enable = 22U;
    msg.mask = 1731460948U;
    msg.scope_ref = 3992065189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6635250143330277);
    msg.setSource(3044U);
    msg.setSourceEntity(74U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(92U);
    msg.enable = 218U;
    msg.mask = 1713209159U;
    msg.scope_ref = 295811386U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.5498697619619702);
    msg.setSource(23555U);
    msg.setSourceEntity(239U);
    msg.setDestination(3463U);
    msg.setDestinationEntity(228U);
    msg.medium = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.193330361406594);
    msg.setSource(1622U);
    msg.setSourceEntity(208U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(149U);
    msg.medium = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.22770595839647767);
    msg.setSource(33262U);
    msg.setSourceEntity(180U);
    msg.setDestination(35762U);
    msg.setDestinationEntity(234U);
    msg.medium = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.6710072207017542);
    msg.setSource(52682U);
    msg.setSourceEntity(48U);
    msg.setDestination(58280U);
    msg.setDestinationEntity(198U);
    msg.value = 0.09243110376668295;
    msg.type = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.29429601013639994);
    msg.setSource(31305U);
    msg.setSourceEntity(174U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7666368499488257;
    msg.type = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.5351080389939713);
    msg.setSource(51986U);
    msg.setSourceEntity(57U);
    msg.setDestination(22705U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5872552471063215;
    msg.type = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.3792755266404667);
    msg.setSource(39895U);
    msg.setSourceEntity(253U);
    msg.setDestination(35179U);
    msg.setDestinationEntity(25U);
    msg.possimerr = 0.4560117960749931;
    msg.converg = 0.41715053982130934;
    msg.turbulence = 0.7642457413750245;
    msg.possimmon = 253U;
    msg.commmon = 141U;
    msg.convergmon = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.2147454142053027);
    msg.setSource(65162U);
    msg.setSourceEntity(163U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.9252265377113434;
    msg.converg = 0.8500452550120735;
    msg.turbulence = 0.14541244483917115;
    msg.possimmon = 66U;
    msg.commmon = 74U;
    msg.convergmon = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.5465406615440874);
    msg.setSource(49039U);
    msg.setSourceEntity(34U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.8558095947663228;
    msg.converg = 0.33690987709204356;
    msg.turbulence = 0.5509802095287578;
    msg.possimmon = 69U;
    msg.commmon = 103U;
    msg.convergmon = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.19902958559102746);
    msg.setSource(43204U);
    msg.setSourceEntity(198U);
    msg.setDestination(15233U);
    msg.setDestinationEntity(62U);
    msg.autonomy = 168U;
    msg.mode.assign("KDAJKXQVLOYFNMOWWKOMUQTCCWGOGMVCFBPDVOQTLYFEEKUAFUIDCIQRVJGHCAQKENLZNZNXLHQLGQYRISGRIAYISNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.8176167477990713);
    msg.setSource(12689U);
    msg.setSourceEntity(42U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(166U);
    msg.autonomy = 208U;
    msg.mode.assign("PHWSLEDLIKOKIGZPXCNWTZVDRTTFLOACCRHGOZZFWXEVLYWIIQBGIOFVHHKVSSLQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.08258183121511353);
    msg.setSource(46647U);
    msg.setSourceEntity(217U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(241U);
    msg.autonomy = 57U;
    msg.mode.assign("UOYCYICLZZDKYRZKWYNUPLERCESFGHJKZFIAIIHLYTNJEOJZWXFDQLABLFURNQXYOMTFXWQHUQHYSQBGRDDAIVQXJCGVRCVLUHDVNNEMEMPDKNKEVTNINKXMBPWKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.33365799976757715);
    msg.setSource(15704U);
    msg.setSourceEntity(233U);
    msg.setDestination(31110U);
    msg.setDestinationEntity(3U);
    msg.type = 146U;
    msg.op = 142U;
    msg.possimerr = 0.14278128653670208;
    msg.converg = 0.8410890031130462;
    msg.turbulence = 0.8776549145570036;
    msg.possimmon = 153U;
    msg.commmon = 150U;
    msg.convergmon = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.34453252776925414);
    msg.setSource(8561U);
    msg.setSourceEntity(27U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(56U);
    msg.type = 126U;
    msg.op = 94U;
    msg.possimerr = 0.89921817255521;
    msg.converg = 0.606504775958727;
    msg.turbulence = 0.8485305672370619;
    msg.possimmon = 82U;
    msg.commmon = 109U;
    msg.convergmon = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.15014384903633482);
    msg.setSource(21514U);
    msg.setSourceEntity(47U);
    msg.setDestination(57574U);
    msg.setDestinationEntity(133U);
    msg.type = 82U;
    msg.op = 133U;
    msg.possimerr = 0.9063815897465421;
    msg.converg = 0.8456537765493966;
    msg.turbulence = 0.606425850983395;
    msg.possimmon = 223U;
    msg.commmon = 48U;
    msg.convergmon = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.7881535820280121);
    msg.setSource(16756U);
    msg.setSourceEntity(223U);
    msg.setDestination(6765U);
    msg.setDestinationEntity(214U);
    msg.op = 130U;
    msg.comm_interface = 245U;
    msg.period = 25419U;
    msg.sys_dst.assign("HYGFCMLVSTQUQPEGATUNZOOMQPIQIKKTGDCCJCFUKYFNOXOMQOCUZWFSHCBWVTALJZPZRNJVHVGWWJJVRURZFXEDDEPGDHHOCZGAAFRBJMHXWOINHNSNB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.7825998240799709);
    msg.setSource(60336U);
    msg.setSourceEntity(33U);
    msg.setDestination(56311U);
    msg.setDestinationEntity(105U);
    msg.op = 130U;
    msg.comm_interface = 8U;
    msg.period = 12517U;
    msg.sys_dst.assign("WPJDXYMVGNGQWEZSJWLIBZCTZRBKMRLYRRZQMHNVXWQDYDBMLHWOTDCGAQSYWRUUOVFNFEOSBOPBPQIXUDHJYVFSFPQXZPJAYDDWGCLVMIMOAVUNYGUJSUQTSRSCOTYLIEJTYVQKCOWKFUEZRKLVKLXLGCDNGNETPKRTUINXFLTZJAHGMDSYNHXQEIOLNWEKFFJENQZKAHJZBFGEICKTDIBVAESCRUCMHXPKFMHOAPHAHJBAZSAMGWBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.002236444765057244);
    msg.setSource(40150U);
    msg.setSourceEntity(51U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(68U);
    msg.op = 103U;
    msg.comm_interface = 151U;
    msg.period = 33068U;
    msg.sys_dst.assign("KZKQYMJCFZOCDKKFARNQRBWOHYHENYWXDRGBYIEMJPWFNWDBSILVLLKQFQNMYXSUZCHIHSSHGZJBEJTMPARPJULJXWUBSTDASPSZVMADBSRGETPDWHUFQMAWRGGXKGVOCGQCIUCMNTDEAXMLVVXKHZAVFAUHINUOTERYSVQXEARYPIEOBXLFZNSIIZRQPYGXCMHJDFRVOCDEJIKNW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.6489052417046965);
    msg.setSource(41795U);
    msg.setSourceEntity(102U);
    msg.setDestination(30602U);
    msg.setDestinationEntity(188U);
    msg.stime = 1333177138U;
    msg.latitude = 0.7384226507113265;
    msg.longitude = 0.11307151887169675;
    msg.altitude = 36740U;
    msg.depth = 41044U;
    msg.heading = 29381U;
    msg.speed = 4999;
    msg.fuel = -27;
    msg.exec_state = 102;
    msg.plan_checksum = 28344U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.32662401928321627);
    msg.setSource(8010U);
    msg.setSourceEntity(59U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(157U);
    msg.stime = 4034563623U;
    msg.latitude = 0.9632544197531292;
    msg.longitude = 0.9900806242066452;
    msg.altitude = 28620U;
    msg.depth = 28067U;
    msg.heading = 91U;
    msg.speed = 14296;
    msg.fuel = 30;
    msg.exec_state = 104;
    msg.plan_checksum = 46470U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.2144808261730512);
    msg.setSource(16736U);
    msg.setSourceEntity(72U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(188U);
    msg.stime = 4261016248U;
    msg.latitude = 0.840286483265476;
    msg.longitude = 0.7642327062093425;
    msg.altitude = 12779U;
    msg.depth = 55088U;
    msg.heading = 34530U;
    msg.speed = 26688;
    msg.fuel = 41;
    msg.exec_state = 112;
    msg.plan_checksum = 19525U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.6708279592647957);
    msg.setSource(16882U);
    msg.setSourceEntity(141U);
    msg.setDestination(17856U);
    msg.setDestinationEntity(203U);
    msg.req_id = 17539U;
    msg.comm_mean = 205U;
    msg.destination.assign("OLGGFMVYFPEMUPTAEVWWCGVSFF");
    msg.deadline = 0.5784168564204827;
    msg.range = 0.6265031481578979;
    msg.data_mode = 143U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.9353794345314042;
    tmp_msg_0.confidence = 0.27551753894096576;
    tmp_msg_0.opmodes.assign("UDYLKLGXHOQGDOYOHLSOQMUNUHTELDJQFMQCOKPWPAVIETJHLEQMUKTCJXURSWKSTGGA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QCJKBPOGNSCOYIMURSINAZLZSSUGQONGHDWEOHWEDPRLYHEWLRKNGXXQQJLYPUSZTFYDXRSNJYMGFJUTNJGIFTFXNZEFRELXGPIVLRRWJCIMZBUVBYEAUKAQYIPBZERBSAQQMRLFOHDMFOXUQUINKHXZHJLPSBCTHJDAC");
    const signed char tmp_msg_1[] = {-30, 12, 27, 25, -29, -69, 66, 114, -7, 13, 32, 116, -120, -75, -96, -27, 103, 44, 115, 9, -19, -35, -100, -36, 79, 65, -40, -96, 103, 104, -6, 88, -28, 100, -31, 71, -59, 104, -109, -42, -44, -107, -85, -84, 3, 41, -123, -51, -40, -57, 89, 36, 29, -86, -23, 16, 14, -19, -64, -6, 107, 105, -53, 47, -5, -82, 34, 56, 121, 115, 34, -40, 49, 59, -63, -19, 61, -125, 43, -31, 114, 125, -111, -74, -50, -87, -89, 26, 47, -14, 87, 24, -91, -119, -59, -52, -128, -52, -15, 64, -55, -55, 67, -113, -65, 81, 80, -101, -74, 54, 82, 67, 117, 63, 123, -55, 90, 25, -88, 20, -56, 101, 53, -42, -119, 42, -3, -64, -73, -74, -121, 44, -59, 17, -7, -44, -3, -37, 122, 107};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.9781892008640114);
    msg.setSource(3928U);
    msg.setSourceEntity(57U);
    msg.setDestination(11965U);
    msg.setDestinationEntity(7U);
    msg.req_id = 965U;
    msg.comm_mean = 237U;
    msg.destination.assign("PQLLTGKKZOAEZQGXHAMQXPSTCFPSSOZSKIXYXGCUEZKCQQOTAROJPYWNERYGVOJDBJMOSDMVKBOCYOIXNGSFVSNMWAIRRENKBTZAPMUUQLVTKAKPNVYIIWIRJLVCXTLJIDJVUTGQRNAWJZWYDUCZRLIYXWFMADQPDNSWKHNNXZETBXEMYKSHIEEFBVCUHAOEWXYRMJTHERDFLILSHUMQBDRWVFUUHFTMCAZPCH");
    msg.deadline = 0.7506695128008863;
    msg.range = 0.7196787073337101;
    msg.data_mode = 188U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.7635339062524383;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BDRTTEEZPQAQJZJTVQLHVWGXHGZWIRZNCZUGUFSVCVNBHFMFKESEHYHAYZNMDLIYEHIPHRMSNGDWKGJDKLCXDJKAQKMKDYASAYBCTMINSJRDVUSDCXFGCWUIRTTYLWFWSPBEYXXVPGNXVOAXPLBWOPBFOPMULRIBGEXCRWRKKVOKWLLUWTBCZBACAPESJMIXMUFQQNDTQPOFFMZHNJKARIASNDNSZTOBOQFZQLYMORIE");
    const signed char tmp_msg_1[] = {-32, 97, -88, -63, -62, 80, 43, -61, -85, -33, -117, 6, 9, -38, -90, -49, 20, 7, -53, 32, -20, -89, 74, 32, 22, -87, -23, -8, -54, -102, 70, 39, 46, -5, 85, 125, 111, -24, -65, 19, 66, -92, -44, 125, 28, -124, 22, -90, 34, -99, 98, -79, -118, -32, -68, -89, 80, 85, 96, 105, 96, 50, 101, 119, 57, -96, 27, -58, 80, 113, -41, 53, -75, -13, 42, 60, 116, -10, 112, -40, 63, 73, -73, 64, 40, -40, -89, -100, -63, -80, -112, 12, 66, 79, -30, 118, -104, 60, -114, 45, -102, -67, 123, -126, 68, 39, -119, 47, 45, 78, -53, 93, 102, -33, -51, 103, -34, -8, 4, 113, -47, -14, 84, -88, -11, -109, 32, 34, -31, 116, 77, -42, -69, -22, 104, -26, -106, 54, 28, 113, -127, -54, -105, -20, 49, -39, -20, 41, -127, 17, -86, -53, -102, -20, -73, -32, -102, 64, -58, -83, 123, 70, -85, -81, 25, 15, 28, 58, -118, -68, 87, 20, -8, 122, -84, 99, -23, 21, -61, 97, 8, -111, -78, 112, 14, 34, 9, 30, 83, -31, 14, 6, -64, -28, -5, 49, -95, 36, 79, -44, -72, 71, 16, 82, 28, 125, -58, 80, 65, -31, -74, -16, 66, -20, -109, 114, -91, 101, 66, 63, -15, 47, 33, -42, 24, 32, 48, -104, -53, -92, 86, -29, -84, 62, -48, 50, -113, 14, 52, -16, -57, 111, -116, -106, -27, 32, 51, 67, -107, 120, 2};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.7562295136316994);
    msg.setSource(22028U);
    msg.setSourceEntity(14U);
    msg.setDestination(12953U);
    msg.setDestinationEntity(150U);
    msg.req_id = 58113U;
    msg.comm_mean = 121U;
    msg.destination.assign("YAVZOPPBZJBLCKGGIXZBWFRSVSHRKLBETVZHCYMMVVCODMSPKFQJNOUOBNXKSUFKULCIETGKSXYAVNACIXTIVAZYOYVCSYPFIKEWENGVMFTHLUMWDBDWWJPCJXCCUQOIOUQHSIGJAAPBEGEHSFTQNODRNRRHDQBYLTQVDIDUWMMNYXPWYTMXJWR");
    msg.deadline = 0.13912400116217793;
    msg.range = 0.6109830070916155;
    msg.data_mode = 0U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 55346U;
    tmp_msg_0.type = 4U;
    tmp_msg_0.utc_year = 54169U;
    tmp_msg_0.utc_month = 182U;
    tmp_msg_0.utc_day = 232U;
    tmp_msg_0.utc_time = 0.18431950801165797;
    tmp_msg_0.lat = 0.642355420405902;
    tmp_msg_0.lon = 0.6948139286146546;
    tmp_msg_0.height = 0.8884453001314977;
    tmp_msg_0.satellites = 112U;
    tmp_msg_0.cog = 0.07014118532808777;
    tmp_msg_0.sog = 0.44371545124649425;
    tmp_msg_0.hdop = 0.7624860162415793;
    tmp_msg_0.vdop = 0.5971987157568562;
    tmp_msg_0.hacc = 0.8854752674979176;
    tmp_msg_0.vacc = 0.6491874016195828;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UHITKEAQZDFDVTASBEYUNNVWWLLCSPCNVTXWDSPGDDHSYMEAIQMMYXCWVBJLOIKIBLQYZUAHGJMGHIKEKCONYSPRBQBMNOLDJAYOAFJGORKXLRMHAIWQJSPLDGJTPUOEIOFRMGZVHGWUFXZRQFVAYRPSQBGXOBKHWLXNQTIAAPTDEQZERUZUGTLHULRZDSUXTXVQC");
    const signed char tmp_msg_1[] = {-57, 94, -57, -16, -15, -52, -79, -85, -55, -59, 76, -73, 84, -27, 6, 77, -43, 107, 87, -64, 48, -41, 14, -128, -24, -61, 11, 98};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.20545988350000044);
    msg.setSource(21608U);
    msg.setSourceEntity(152U);
    msg.setDestination(12557U);
    msg.setDestinationEntity(102U);
    msg.req_id = 17572U;
    msg.status = 143U;
    msg.range = 0.13040009186110124;
    msg.info.assign("IYOGNYOUJKCLHTVBWRGDMJRVWAMUNZUTBPWHYXOQIVWPOTZHTLSWBSLPWXSXXDAKBXQZRCNDTRJFLBRCWVMGLVEQECAPJZTJJAKMEDXFCFAPAPVHETLBVKINNZGFVGORRXXDKNSELOMFCIDRUIPLUYYPYBOZZIEQNACPGFDHSMEWVLTHEQKDMFIGHSKOURCGZYHCSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.45973168759957717);
    msg.setSource(30816U);
    msg.setSourceEntity(214U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(211U);
    msg.req_id = 22422U;
    msg.status = 139U;
    msg.range = 0.7157734613615301;
    msg.info.assign("OVIDZNUUIGQHTXLTGHOIACMOFJETNEXAFCPRKEJGUWYSXFJQZTAQNUTRKZPVAIYEFFHSXMWQHDEUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.18372756687319658);
    msg.setSource(54776U);
    msg.setSourceEntity(126U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(109U);
    msg.req_id = 4969U;
    msg.status = 89U;
    msg.range = 0.5226442529277786;
    msg.info.assign("XJRWNCIYAQWUHPGTWDDDYSHSJKIDTAEQPAEONEHNKGGFIYRQBNMZWFXNYRSLYPYTCRJHBTRBHJOLAIFFMXDKBGCLOBQGLGLOZQHZUIXUJRYKBVIYOQANVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.1471629543746753);
    msg.setSource(27530U);
    msg.setSourceEntity(83U);
    msg.setDestination(50436U);
    msg.setDestinationEntity(176U);
    msg.req_id = 23235U;
    msg.destination.assign("IOEUFIBGSLWEJPEJHLZZYJMNJFTZCVAFCXGISUDHQDRNBSYAYHMCMZSSZGOVPUPCIGYHVJCNLTGXIQDEYBKLAWCJECYIORDUSOWJLRKQWXIFFXVMXFBSMOQHXUTVXGDGFEBRHWJAGFKCUXRAZBMVJPFOTLQGQYKGYLTHCEOFNTNQZDKECRPOUAKHIAPVWLTDKZZONXMHARZHLDRBLTMNIVBUVJSQPOSUIRKMWTXDNWKBNPBWNTPREAVQMWKE");
    msg.timeout = 0.7820929082783462;
    msg.sms_text.assign("TCJKTVSCOYILQFKILLRGMCJNLMMYTVJXZQYFOHPQDPXPJWEZFTZUEUECNCAVBOKMOGNWHOVNEXAIHSTXSHSMNIQLXONEKZLODCXHXAFKWYRPWHJXOHDIYTPAGHPAKFUFJBOAUQTJPDMUBKGGIKDIUDDRLXVCSCQMRRAVZGSMALSHOGJZBELURTLDPCEJSWFXQVFNBYWQNCHIRIZBEWVGZYBFRPDZZWBDQWNKSPKMRNUGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.9435593484381712);
    msg.setSource(39431U);
    msg.setSourceEntity(174U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(113U);
    msg.req_id = 57083U;
    msg.destination.assign("SAVVLAXNTFZEBJEZHBPTNKDT");
    msg.timeout = 0.3249860158436162;
    msg.sms_text.assign("WACGJCLQYIVHVFWRXSSRXWRNPHZDDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.039068120696835074);
    msg.setSource(35033U);
    msg.setSourceEntity(20U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(80U);
    msg.req_id = 53083U;
    msg.destination.assign("YYWKRGEDLZRNUGTYMDPUSKHNVTOIJSEFFZFYFCEZDAPAILOGPWRSVXBFLPCCBVPEHAQWICULYJCEJXZAJKXIUCNRHZBSHETGMBOZHUDRNEYBKOKOTZTPZDAPFTAPHIOXJQNYMDLJOADYYVTBBJAPMGTUKSNUXQMHHRVVKDIWRGLOMNMWQWHYDVUJVXGOBJPQCVMNMLQONEVDXECSKJXKZRGAK");
    msg.timeout = 0.7137461682178254;
    msg.sms_text.assign("SUOKZZYLGQZMNRHHSWAVSHBWNMPCACEYGGMLMKIWWYOWXZKFFEYPFSQYNZQUREXCTUPBKLGMBSDJVDOLRFPLVHEQOQIGPLHZPOTYDNBRTSLAWQGDBWEUHXTVVYLXPIIOEXBYJRJDOIDADGJXUKMPATXMBCTBPFFEYCVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.09574048583261496);
    msg.setSource(49903U);
    msg.setSourceEntity(114U);
    msg.setDestination(48111U);
    msg.setDestinationEntity(195U);
    msg.req_id = 43213U;
    msg.status = 193U;
    msg.info.assign("GIWQHXYVVSYZHOJEJSMAVLDPANOYAVHBINOWTQGXIIKXTZHDNOKTVXUMOYLVJSJPULJAYKPKKSRSDZAKHTWRVRJCFTSBRWBRLWCBVCPQVUZRXUQPHQOODJHQBNXULOQFOERMXBTPGDDEAUIESNGNIKSXUUEYHDBKGKNCAGPUPNDWNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.23903015050202092);
    msg.setSource(15583U);
    msg.setSourceEntity(171U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(54U);
    msg.req_id = 12491U;
    msg.status = 89U;
    msg.info.assign("LEQYQQTMBQBACWTDPKRYADOSGUYBFCBKGXEWWNMFSYYQAVENFVDBGSCCYPANMCOSUZJLIVEWWPWQVHRZTGUXYPVEAYKFDCDETJWFSDWNRSKXHRHFTVJDOJENZZFAKUFGOLGLZSPZGQBQUURMBXJLPDCXSUSYAAXFIAHZHNOTRQXEWCYRJHMCPOIPILCTMONDPLIVGHOEIUIHKKFOLZJIBRWMPKMVDTHXUKVJBLJMVUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.3604483911511288);
    msg.setSource(14394U);
    msg.setSourceEntity(87U);
    msg.setDestination(18273U);
    msg.setDestinationEntity(180U);
    msg.req_id = 44447U;
    msg.status = 214U;
    msg.info.assign("DOZRLXALBGVOQUSFVRQXKEZUFICUHQGNLYTKJSYOFSNNHPRYIPBVTJYTPRMOZPBJMWZISKQUGUCWWKKCFAMYWDTMXQLNFBCJEBNWULOLIUYXRGCATGXHTJJHRSVDQWFEBNDBUOESTBXVMMMZOMVLDJAGHRHDPNVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.9804770902220621);
    msg.setSource(15420U);
    msg.setSourceEntity(16U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(251U);
    msg.state = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.6761859717919309);
    msg.setSource(16437U);
    msg.setSourceEntity(153U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(155U);
    msg.state = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.5388277995687359);
    msg.setSource(6011U);
    msg.setSourceEntity(76U);
    msg.setDestination(62764U);
    msg.setDestinationEntity(42U);
    msg.state = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.686677608393834);
    msg.setSource(59304U);
    msg.setSourceEntity(19U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(125U);
    msg.state = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5905280333263527);
    msg.setSource(24842U);
    msg.setSourceEntity(178U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(180U);
    msg.state = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.45949388215284404);
    msg.setSource(587U);
    msg.setSourceEntity(11U);
    msg.setDestination(1660U);
    msg.setDestinationEntity(17U);
    msg.state = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.19321145623090075);
    msg.setSource(53664U);
    msg.setSourceEntity(121U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(176U);
    msg.req_id = 12632U;
    msg.destination.assign("MYFXHVCIEZMCLGMWBAVURAXAAPWMSDQKRKCXJMGBHLOTYJRUSYTAPGSCCKXAQPEHWGCGVJAEOWRJDIIBEONHUTTYVDVWANOZIBBITUBTVBYLEWIUCQPNSCWSFGMOXPHPDHPTLJKRVRHVTIDYFNJSJGCIEZNODKNQWLQMKXUEXHRBQQFAMKTZVD");
    msg.timeout = 0.34558033480314543;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.8777035915761338;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.21101857836708993);
    msg.setSource(31189U);
    msg.setSourceEntity(168U);
    msg.setDestination(21757U);
    msg.setDestinationEntity(183U);
    msg.req_id = 16266U;
    msg.destination.assign("VDZWGYUUVUQNEWTCYXJLTJGIPWRSFHHVOLETVPBBXLMDUOJRXLQIZKOTHLYFWUHSIMPQHZFGAEMANMOMFWXDXVDKXCANUTQMWCSIKEEALCHCFCPSOQSKOWVRDVUKSFGVWRJTUCJBITPOKFIWQYEXRLNGOAPDIGAJAJRPEMFBQGYUADVEGNTBBRAHXLOBDSSBKA");
    msg.timeout = 0.12749380692804868;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 110U;
    tmp_msg_0.system.assign("ZUPPLNUXLDQYOILROOPPHYBIJOMHQQBZXXFKFSXPECIIGQHNEJELNSQTJFNLTIUKCEMFJSYXVAYZUDAMWESLYFWRHEGLPTVTCWHRGJIPLMTCEMKUOCGAVYKFVSBCVZZLPAXBERWRPBTJGDKUWHMQSBANKXMDRUOAYKSRDVCBTNUAAWFVGGYTBZJFSZZHYOQVNZQWOQWOCJQKGUWGLDJMOMVUDBZDFX");
    tmp_msg_0.range = 0.21550480634643643;
    IMC::UamRxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 37757U;
    tmp_tmp_msg_0_0.sys.assign("XNXABVFNOKQKWGUJRZTWQCYHTSIPQCKLQAUBSYPOUKEJYTL");
    tmp_tmp_msg_0_0.value = 0.503374125305431;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.032769953070666547);
    msg.setSource(53624U);
    msg.setSourceEntity(180U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(167U);
    msg.req_id = 26176U;
    msg.destination.assign("SCRLWHXROUNVKAMNXQBOEDCYZEMOUMCDBNGJQKIRSRJDOV");
    msg.timeout = 0.09338538375047456;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 212U;
    tmp_msg_0.mask = 150582356U;
    tmp_msg_0.scope_ref = 3355144143U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.15681077272452182);
    msg.setSource(13239U);
    msg.setSourceEntity(246U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(88U);
    msg.req_id = 52143U;
    msg.status = 134U;
    msg.info.assign("FOBNRRJZJXEKQFBYTHZBEVYFLBFPSSVOWUBQLBNAQPHGGUJREXUNZJVWCUACT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.9087381287907309);
    msg.setSource(2188U);
    msg.setSourceEntity(145U);
    msg.setDestination(27041U);
    msg.setDestinationEntity(108U);
    msg.req_id = 52183U;
    msg.status = 127U;
    msg.info.assign("WZBXPTOHRAADOXIYOHDLVCZSDLKHEOKJPOFZBHHFFBQKTFLPMDOVRGRMIETLHMNMRXVILFZPUELZSAQZAJBPGFCGLORRWFXBYWUHEDYYWTCWGXRNXBQOCBQMEGUIVJOPXQGEOVHXJCDDAZVNYISMZNQEZICYVCPPWGEJKLEFGZKTSJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.7365307601665199);
    msg.setSource(40669U);
    msg.setSourceEntity(145U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(172U);
    msg.req_id = 1278U;
    msg.status = 149U;
    msg.info.assign("BAKDFUHNCTUKLYCWMKKJSRBQHNSTAMMGOJPWUVICXAQACQLEZXBLSIVLHFEESCGYRHVTOCNPVZANVXBJGFLDTPSAGTZDIXXJBVLRTQPIWZDKUIFYGRESGQWXQHMFYUORYUYJJMHWPTLIOXWKYZZDSEMRYFJBDSRCNYOOENWXHFBBJDRZEOWPLDKUMURZHSGYXVTOJKAGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.649395861187463);
    msg.setSource(5981U);
    msg.setSourceEntity(169U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(95U);
    msg.name.assign("AGKETHWULAQPGYSMNGUQZBSXYQDBIQHSTBDUHFBJLEQCRWHNDCCNXPCRVUVDYKJBHOXFJJFGAYIMUARFMXLIBIJTLVNNPYQKTNPEOEGFFRIAWBMVKPUFNYTBSYZEIH");
    msg.report_time = 0.07320374538026586;
    msg.medium = 153U;
    msg.lat = 0.34811955440989784;
    msg.lon = 0.614909934250756;
    msg.depth = 0.43349563343141906;
    msg.alt = 0.11657606390756481;
    msg.sog = 0.12229291422601007;
    msg.cog = 0.49277265222131394;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.9272129151291585;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.46192608852485406);
    msg.setSource(10828U);
    msg.setSourceEntity(9U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(182U);
    msg.name.assign("QXPDDNIAOCEUWDBUMLAOHBYTDPYQORNJHEXVIYUCGPIHUIXZTFWKFWUHBKXQNXSLMZKYJPJMVMDKJLKGJPBDFLZFGCARFPFDOLNWBAVAOXOSGVCPLEKQHNWRGJBCKQSWZPSDGRLSNKICCCLNYXHXIIEMFYFXTAVHV");
    msg.report_time = 0.012043621251504821;
    msg.medium = 39U;
    msg.lat = 0.495940970199067;
    msg.lon = 0.4858697424347693;
    msg.depth = 0.7330219744403383;
    msg.alt = 0.22510899926138794;
    msg.sog = 0.4173065595652765;
    msg.cog = 0.3651338105985561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.37768755133064924);
    msg.setSource(18374U);
    msg.setSourceEntity(121U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(239U);
    msg.name.assign("MWGYWHHGUEMRUDQZBHBAMADMOTAKIIXPVXYBUJDXEFQR");
    msg.report_time = 0.2760898899954406;
    msg.medium = 227U;
    msg.lat = 0.18826759246995406;
    msg.lon = 0.5488780465264999;
    msg.depth = 0.19463298840444165;
    msg.alt = 0.15705391487661335;
    msg.sog = 0.05489507650492231;
    msg.cog = 0.7676544337955575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.42521767552198764);
    msg.setSource(38288U);
    msg.setSourceEntity(235U);
    msg.setDestination(5307U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.6637406807632605);
    msg.setSource(9496U);
    msg.setSourceEntity(205U);
    msg.setDestination(29236U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.8315826374612127);
    msg.setSource(18447U);
    msg.setSourceEntity(225U);
    msg.setDestination(27047U);
    msg.setDestinationEntity(11U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.1976798665541517);
    msg.setSource(49445U);
    msg.setSourceEntity(182U);
    msg.setDestination(41691U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("PIWWCHUVAGPXERMHXLIAYRBJAKIVSMCKUKFYGIFEANHWLALVTGWDCNLMCMXZWHTBDGQMNGFTTRDQFOYSZMWMKXRHRQDEGSCKUBISRCQVTFPIQFQXTASJPDZMNUEQAYTQYUBTDDIWAECVSJCRXXVLNAHMSDILZBJXUETFPSZYQZNDONWOQJAJHBOSBJEPGZYUJHVKBCTRLRKYJZO");
    msg.description.assign("TVZNFRCAHIVMPRXGBSKNDRIBOSDMKSJEUPQHVYPWZZYZFIUUKFOWSRFJGPNXWWTXREKXYIISVOIASUAPRXUTEAMSKILVZQSLDPNPLTFXIMVQCWF");
    msg.vnamespace.assign("ILAXRKRBGVQFZYDYHDKTKFGFIMPQBYBANLYSWNXIWFNBKENTZIXPLCTAJJBSTDMSVVGNPQFUOMRMMYAMHFSSZOFEYYRHKRLOFFJYHLZJXOZPBLGHCWOIQDXTCUEXIGTVCUDUUJHEJDHCCQSJYZGKLUIXWEYCXJAGPJEQDBAVKZZQRESPVNRSNEITPXCEFLZIGSPZAURVBOVMLMWNBHRMWDWUWENCQKLDHMOGXTQBOVIPQADOWA");
    msg.start_man_id.assign("XOEWDNZYORGPWYLKAUHZXXJCKNES");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BGXIDAUKJXYGFDBLHJZDBQJOSMNCPZPMCXANBOZZSNKZT");
    tmp_msg_0.dest_man.assign("JSDNTDPRFCPNYYZQXDONBWKCHPWBVNWLQAMCLWBFTSLMBIWLARUMFEHKJSFPIMJIOVTRUKTYDTLPSVHGHZQANACWROUXEKJWRIJYGJXQALPMBGTXGAWGXVGKLXHXDKORXYGJOIOOUECTFFDLOHQRYBZGMINSVKLJPUKRCFZWJPHQNDCCOENQXIZFFVYNSRBVAZBLMVZEVSDUUKXRSEYTNDVEAMYEHQBTPCDHBFTCOESAJQIYUPW");
    tmp_msg_0.conditions.assign("KURXGSUCDOLIVLUBHAYIBGUEB");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 60119U;
    tmp_msg_1.lat = 0.7872307463752968;
    tmp_msg_1.lon = 0.17567407554003212;
    tmp_msg_1.z = 0.4355194622011833;
    tmp_msg_1.z_units = 190U;
    tmp_msg_1.speed = 0.4218622202342378;
    tmp_msg_1.speed_units = 64U;
    tmp_msg_1.bearing = 0.27469111818027614;
    tmp_msg_1.cross_angle = 0.8969351168137906;
    tmp_msg_1.width = 0.753584760308498;
    tmp_msg_1.length = 0.663639216160123;
    tmp_msg_1.hstep = 0.13070943609629604;
    tmp_msg_1.coff = 35U;
    tmp_msg_1.alternation = 23U;
    tmp_msg_1.flags = 237U;
    tmp_msg_1.custom.assign("ZNRRFORMEHCLLNKHYYXBIONKYGESUBXUNCLIDUWLWITFRAPJTAZQGFTYFMIJGTWTUQOYNPLUOBMAFECSIGOSSBSXDGIDJNXXJDXRLAPWTLPSVCCZVJHGFCHCIJPUHKYEWVHPXMJIROCJTNBTVKVJVADNDBPODYWSHCKYGGZNERWQFROMKIGSRMBDTUQZADNKACREDAHPOQQUBSXMMVIZYF");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.7329905756604697);
    msg.setSource(30268U);
    msg.setSourceEntity(208U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("MOZTZDBKFSWMAZLZVJSVJBZUBDWYQJQMHUFXPDYIUGLDJOXXWWXNKAFHEIOHYMSONKCLRVWDPPESWTMXAGPCDAICYFHOCPARCFBUETKGEKFILEMQPINCLIFPONUKQASULPTIZGMLLFBGNYVYCTWHAWTTNNJEJUSTKCSCQWJXRRHBSYGAVBVOPEXUMDGGZVLQKBZRPQIBGRJOYNFHMXKRUTHJNZCLAOOYQIMQHQXRVEVTUDJIYXAWRDEGF");
    msg.description.assign("VJJDGTWVGFGNBRTOUGTSMHAXVEAJBHEFNXIBDTHIXKYOKCYYDYTVQFMWWKZGDJLYBBWPZZFUP");
    msg.vnamespace.assign("SZOATGVSZQJWTDBDNAEKWOZCYZRNJWCNITPZJXOFKFQVARKOOTSFRKXIXDHQXBHDEMQZGWOYVGLMNDACOMBPQBTTSKNAVAXMULBUXMJSKLYCACQKGCPSSWENUPQFNXNDZFYREVNXYBCUHIVJZEYSIIYRRMVCGQTHMEBYWYHUJLZMUDUUROXUFEPDGTEP");
    msg.start_man_id.assign("LOGJQOYDGEMCRBKEYMRPIDJUZFHUIEGRRKPGUFHCCQMKWLSKAZEECNUCLNLAGLQPHSFZSHOMVKXTQBFHWCTYZBBCURBXPYJNBJDTKATXNGTLFBIDNMVDFCXVIOPZMOWTWQSAXPDZJKYDUXRRDRIASYMHJTZAHTQNKWFGLGLKEEOOVHAEEGVBJUA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("HCSZWMQGPXJXEZVXRMHUZFDUVEQMFIYPDDCLVWZEOCHJUQMUDKZGTTEFJMKJUIGJQCYFSORBLVAMAEVRHVNMCZRFGFTBYTDCFGDYPZBWBIAYXSWSOVAOSFWGJPAZSLYEPKSAFQIRANDPQHCKARNHNRJSONXPXWPAQROGVYJUBEFKIKLGZLYUTLIULNDIKIYWKXTHTTQMNNXMOCEHBLDHYIZGRWKTNCJTJPUUBSCWSPOLQBKBXEOLDIMBOVHEG");
    tmp_msg_0.dest_man.assign("FCQJFOSFEEDJNVAHUPJWLVMHUEWOUUXPICOAVSZFURCRCMFNDIWZFKWVNBZEJQZHWTCPMKIKPUZYMKMGJCIBOSXRVIDQALUBJGWKYEYIELZWRTQKVHAYPJSGGYHACTNBKMIDGMVP");
    tmp_msg_0.conditions.assign("ZLDAOUKNOWYEOPQRAPDDRFIMZPRSFIMCAJICMYUKDMTPVZMGRREMGLRQFFWTJZKFBNMDWWXJAKJWEIOUBZXVIVAAEQFPAXEMDVCCEOCUSQJGZFVZFXCSPPKFLTYOXUHKKONGTTASXYQSBXSEAJTWUYNEL");
    msg.transitions.push_back(tmp_msg_0);
    IMC::EntityParameter tmp_msg_1;
    tmp_msg_1.name.assign("KAAQRBKOMPPWGBNXQHABBUSYDXVIDSWDVEJITPTETVMFNDMKIBYNHJMRSWAKLZMEPBXKHNBSEGGIYHUOXUUANSSLOMRLJOWJVBYQLELGFPOKHNQRDRJVXXCRCKZQLLVUNCEARVGAXZCZWCSYPHXJKICHYWEEGUUHXFKQWYUSACZXHYSOUEFT");
    tmp_msg_1.value.assign("QUEVQZDJFQDLMJAGELMSZVCZKHWMETGOARQDLWPYUMSOMWHWLBXIINFRMPNWQTBTZPCXDUIYCTCARLPFRNFNTXBNNPVHOGYOMJQVXIDJKHSMGJZGYYHLGVEBJSJRRSQQEQTPOVJJADGDVXWJBRYBCAIUKAEGZNFKSFPWHHBOLKORCIIYMLUKVXEXHPWYPHZICFKQBVZMSZZBSUOSWDFX");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.23712978891790837);
    msg.setSource(6507U);
    msg.setSourceEntity(150U);
    msg.setDestination(54060U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("CFVMQIRWIBTUAROTVQXESMOIULQYBLUBWGTFULEOHOXYNYUPASXELGEZPUAMHXAZKIXUMYYXQVJVBJDDTXNBGGQDZCCQDYPAOGIRSFTEKMUIPCKJHZPBCBMFDJSXQAJZGSDGLOYLLAUTTGJVJIECFZCYXEALSNZDHNDPCFWKUKRNFOLWWNJIZRDVDQGFKNEY");
    msg.description.assign("PQKCMVGZDMYJXEFMFHPJIZRWSYCENIWQVLRARHUHZPQKGXZLOIFAIKWPUUKRYQIGQMLYQJXTWFM");
    msg.vnamespace.assign("YKCLLCFMYHDUHHLTBMRJIGXZZIDGOZGAKYPUBUPMINNHPMXKKUOWENDUYQTBEZOMVOCECLJMEMFAWEWCLWJDPEZFIUOIAYXYCWECRSFDGQTKLRTRVGRWMGSGOCQQIWSVNBKSLQWZXVXMSXXIPVNPAVDJKTMBQTSVYAJUBBDFDBJAETYNI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CGFLYOSNRJYAUGJUTOXCKYXOYPWWSVGDSKQQBTTYEQVFGIUMNJJFNPERQLDXLKQJWLDOEYKHGKRMIMDPUBLSHUGHWGZVKVRPKEXMNLTZJMOCQ");
    tmp_msg_0.value.assign("QCTDBCXGPMKXJPQGRFWBBRBOLFNKWTLZNKYTSZZNVAFPZHHDPWUNPQXLCKXYEOUPHOXVGLMETEHHSSIOZZXRSJAGUVLSWBDHEJEQBDZKACKVSOACJTFEUWLXJFMLZOAIWDRHLKOSPYMPMBHXTIUBICI");
    tmp_msg_0.type = 47U;
    tmp_msg_0.access = 76U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PLMUQRVXVMQEYSZWJUUPRG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QVVDUCEZRGZMKHXCPACXYRHWVIJBATPGTSJADYFVZOKQDNGWGCTFAYHFRNHLDYNJPYHJNLUQDMCHRZVAISEYWFSFWDEGEZIRPNMSVFFRIIBWAYMZTCGBJBKQXVYJIQVMKXTUMOBUTPQKGFXUQLLOBJRALRSBEEIPKUMOBNLWN");
    IMC::AutonomousSection tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.8319269556030248;
    tmp_tmp_msg_1_0.lon = 0.747332259026795;
    tmp_tmp_msg_1_0.speed = 0.331004495053172;
    tmp_tmp_msg_1_0.speed_units = 69U;
    tmp_tmp_msg_1_0.limits = 23U;
    tmp_tmp_msg_1_0.max_depth = 0.8950129808909201;
    tmp_tmp_msg_1_0.min_alt = 0.2425959700666115;
    tmp_tmp_msg_1_0.time_limit = 0.7636358976627452;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.9560633123584671;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.8473974944932784;
    tmp_tmp_msg_1_0.area_limits.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.controller.assign("QAJNAQZJUFWODMZSZJIWOUFCPXIQAPOANSLDGGMSPKLJRFBNKJPIUOCAFOVXRXCUMESRPPNROIJNKGEHSCQYVTNOEYLTVVIZXWLIVDDIXHDFBHRWFYSWKWEERFOZYCJKNHWMULQJCBDCNOUEDXCDTK");
    tmp_tmp_msg_1_0.custom.assign("NSYHKSLIOEIADJRWCIAMNRJHKACQTCOTILSEFKVSGDMLYDQIZABRBYKBPUYXYDAQUYHIZGGJQSZQVCEZYKSOUGQVXMJUVAUBTTNVAZJMJDRYJSBSHPMUYFOVVPGTQZLKWNOVZPDZHRTWPXFBETIDYNAFFIVLQAHEETEPIGULXPVMD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RegisterManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.mid = 60181U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DvlRejection tmp_msg_2;
    tmp_msg_2.type = 110U;
    tmp_msg_2.reason = 109U;
    tmp_msg_2.value = 0.012905169003728956;
    tmp_msg_2.timestep = 0.3698435492116344;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.07068199620403481);
    msg.setSource(51253U);
    msg.setSourceEntity(168U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(168U);
    msg.maneuver_id.assign("AYNPWHPVQPPEGTVJIFFYSHXIFGZXV");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.58068341853328;
    tmp_msg_0.lon = 0.2589318554048249;
    tmp_msg_0.speed = 0.1637333247887699;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.duration = 4297U;
    tmp_msg_0.sys_a = 48967U;
    tmp_msg_0.sys_b = 810U;
    tmp_msg_0.move_threshold = 0.7320622757294474;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.7002689529276486);
    msg.setSource(46640U);
    msg.setSourceEntity(155U);
    msg.setDestination(12290U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("RSXOJUKSTZJHZUQBCQIHCECVKHBYFOKEQGOIRCJZQNZLAEXPIRMLQLODRYEYMBLDMGPENVXPJZRDD");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.7521568095005262;
    tmp_msg_0.lon = 0.9563407702978679;
    tmp_msg_0.z = 0.9152338754107886;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.02085665514106738;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.abort_z = 0.11764776116764386;
    tmp_msg_0.bearing = 0.8768152316504444;
    tmp_msg_0.glide_slope = 248U;
    tmp_msg_0.glide_slope_alt = 0.6726941651003889;
    tmp_msg_0.custom.assign("TNCLVQEIHGNJFAPDFPIMXMPBYKHBUKDTSNQDVSDQSLAMZNHLUPTXHCXWXDDONNJTT");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5304788548071839);
    msg.setSource(2429U);
    msg.setSourceEntity(150U);
    msg.setDestination(12866U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("LRIEMHLGODDDGEIFDNSJTRWCQCQZRVNFPLJXFPSHMXFXKFMQNTWYRXNUGUVKAVRDKRVWSDTROTKMJUYXNHHJBQBTRGBLTWVUQOHWLKXIBYEIJTOSPGBZHLPLFJSJAPZIOQZWUHZX");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8428735567584754;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 53750U;
    tmp_msg_0.custom.assign("BLVNUDLRKNUXCRWLSGIMAFSOPUBMMKJXXWEXXCYLIGREGDHDZFRZOIZZSFJDXETQXQMSSWSQYCAAOVGYIKOBZUWUPHHMCBPABFOLNGVRADAFJE");
    msg.data.set(tmp_msg_0);
    IMC::FormationControlParams tmp_msg_1;
    tmp_msg_1.action = 95U;
    tmp_msg_1.lon_gain = 0.6382543449735355;
    tmp_msg_1.lat_gain = 0.1763247497329905;
    tmp_msg_1.bond_thick = 0.29289175920957333;
    tmp_msg_1.lead_gain = 0.5638139430810433;
    tmp_msg_1.deconfl_gain = 0.32624309140843644;
    tmp_msg_1.accel_switch_gain = 0.9713898851091276;
    tmp_msg_1.safe_dist = 0.32254705871315603;
    tmp_msg_1.deconflict_offset = 0.021296564548958785;
    tmp_msg_1.accel_safe_margin = 0.579921398921547;
    tmp_msg_1.accel_lim_x = 0.2241601348532961;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanVariable tmp_msg_2;
    tmp_msg_2.name.assign("YIBPJAHBBJULQEFXVGSFFMNEZYEXCTWWRNCUXPZAHDXARFEWYRUQPTMMKMMCOYTBNOOHJPPLLKSANKQTIWVGPNSVKJUAFGHHEBGMECLUVYLLVMUKNOGYLRTGEARMNPKJRHZITJGIVZQYDGOHULFLSQDKPPQZVXMWAIOJZXZWFJIHZNOTFBRHHZABAGCKCDCKUY");
    tmp_msg_2.value.assign("RBLGBIZVJRGMQMKURHULYVGCANJJUISGXJTHARJTPSWAMHREZAHOEDEBAPIVFCEGPTZLLDKLZKFVWYBZNFVNKQCEVTBWDBUOQXFCHMCJEFDNODTRAEYTAPLYXXRJXKVPQOEAUFSDTUYZOAPURCDSILIMBSKD");
    tmp_msg_2.type = 247U;
    tmp_msg_2.access = 116U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0724512201293871);
    msg.setSource(41047U);
    msg.setSourceEntity(68U);
    msg.setDestination(53296U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("CZAYOANCSNWMCRUHHIOIQXYXWVCKGWHOMEDSZVJTTCXU");
    msg.dest_man.assign("VYVPJRHNWQSJFWZTQELLWYLVQSBFWMDQTRPEGPVSVZMHIAGFXXUOLSLICWPFRKQZUZSKAVDMEATMBOUEVIKCNJGOJGTWJNOWLRGXYFQLTIJCPRLYXXVQFWSONDQCYOSYEBNBQZCTBRAETKIOCFYBBXIJPUCSYTGMMUHZIOXLRXINKDEHHCKDOHRDKUUUZMZMLONWAKHSHDNFXTZPNTAAYVAGJQYPHPJEWXHSAIEDNGFFB");
    msg.conditions.assign("KBWNCRGWOBEGLNGLDTSYFDCLQJCUJWVINNJZJYRAVTIAWYVQGWQTQZIBIWLNEYMNOURPJNYJMUFHWGGHDFBDSACNNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.9797221664104235);
    msg.setSource(8808U);
    msg.setSourceEntity(11U);
    msg.setDestination(51847U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("OYKXMVLRNIBWSTKLOWWOEOYEVIOQTFOTIRFNVPSGCFPMRRKBA");
    msg.dest_man.assign("LPJYVGKWQQBSZEHNEPHVLPXTNHYKJQBTWOWUGPKVCGXBQMYWYSTXLCNBQDXELSNRRBKQTVVPAFPIFCHAOCXTVGSZIIHDCRSBXYQALHCYMTVDZFAMLHDOZWNAMDIBKWOASHIOBCOGK");
    msg.conditions.assign("EQMGQYMPGPTIGWMDZXDTLUEJDEOYLKHWIFBSVNRYSRIBFCSIGZDCHJYPFOCYWTDZVBYOKIPJGSWYNAOGYCALZDCLI");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.2190406916190083;
    tmp_msg_0.i = 0.020048834654875947;
    tmp_msg_0.d = 0.6637195270806843;
    tmp_msg_0.a = 0.2658692311491302;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.7718876642718359);
    msg.setSource(22361U);
    msg.setSourceEntity(116U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(75U);
    msg.source_man.assign("CZZRFLODWMMNVXEIKBHORXYRENYPWAXBOTLMPNSJGAZYBIFWUTRJFIJUKQRRJIHEUYPHLJMFGDFBZVQWPUMSOSOFKYZWZVGNUOVDUOHAETCFZQMJCJOBFHBAMREXTUDBSKCQBIYRLGPDTQZIAVCWGZLHFPDZEEICVAUTADNNWRBTGWUHHNQLEKVIYJFXVSPKLKYH");
    msg.dest_man.assign("IVEQNDNWUWTBKDIEHYRPDMZUCWEFWEEQIMACCVRNVMTJFOEPDQZGGLJKOTCRZKSCAWUKETTBXKVPGWLPTHFIKOKCLCQYXZJIOHGEXPJIBMUVYQRQEWVGBMFSXHFITNCYSQYMHZKSIOZBRFSZRXDOMD");
    msg.conditions.assign("DJUSEVESWVPJSIGYASBOLVNWIPWJPBWDVRPYQQEXULNUCFMQEEDBHYNDEGTPZKXHYAIEDRUXEGNWMVPTCZHKAQNGAYBYIMRQTXAFLCSZIFAVCQKFTMPELBRNSKVSQOOFNIVUODJXLJZRKZVHXVBWYAMRFGTUXEOTIKJMIGTGOWOHCDNWXFLBPKKAWRLSIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.14970917484922364);
    msg.setSource(425U);
    msg.setSourceEntity(163U);
    msg.setDestination(20811U);
    msg.setDestinationEntity(38U);
    msg.command = 187U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YZEEDSGWKBFFHSDDYKZZFQKJOQMKUPRONLJZWLIUSRJGCGDFIWPCWTVMHPNPSYDILKARMANMJH");
    tmp_msg_0.description.assign("IUZDYSXNVVQFAYFYMPRVWCGFUBELGHJHUITHGKBMDY");
    tmp_msg_0.vnamespace.assign("LSRVOAWLEUIRZAYDAVOVSNBLEYQARNQXHIOLISMCMJSPRZQHWEUUOWPYQLKIYSJPBSWXQFVZHKBBOFAQWQESHXDNGXKQKMJPGETWKNEYDITLARHPUXWYUONFTFUUHJLUORVLJIKACVESTBKXMFOMNBHAJWGCMTZFUXDRHCTPICPDMGJENIPWQTTOTZVBXZBMGSR");
    tmp_msg_0.start_man_id.assign("NHXZMZHSGHCOOILPMIYTBYLFXLQUTBRFRJGCIFNJAKGYGDSPMAFFYSAEEOBPVCPJBJATEIQXUDUMTGQZIHAQYYXXCNLZQAGPDCNDWSJJWZGREFEQX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PRVRLHCKLSHBNZPRIBQCZUFDBYUMCYUDSEEOYHHVQJLXQRIMJOZKSWFTAQQUGMMNSUMYOZKWSRVMXJWLPJKEWWFAJAXFGFZJVGKLQQDIJMLHDYZXUJKBHBNWRWISDYATIOXMSJVATMBGZRBAYEVOLLSPFWAMZIIWQQRX");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 40493U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3589662709217528;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.825083296096573;
    tmp_tmp_tmp_msg_0_0_0.z = 0.261019766395047;
    tmp_tmp_tmp_msg_0_0_0.z_units = 18U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.58653841944415;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.06193951415246568;
    tmp_tmp_tmp_msg_0_0_0.duration = 44633U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2834059591955572;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 190U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.32077924180158135;
    tmp_tmp_tmp_msg_0_0_0.direction = 149U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BEWKUMFCMJFGNYHRO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::HistoricEvent tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.text.assign("YRYIRCBLSYYFXZWUKCEFRALJYRFLLBEOYYMFCDLBVZVMGUGIGUSCBOBGNVEFNSKMCFHXNEQASVDWTMOXNRLKWWJPQOJZMVBKEUZGDCBXFIJXSHWNKYQQGMQVHPDUTQCUADPPLTYE");
    tmp_tmp_tmp_msg_0_0_1.type = 12U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JRMLJSAZPSAZEEKZHVQOTKYJXCEEQXCFDLPRRWNHJHFIBOXCHKHKULIXDMJOMFLKGZVGCTNTTGHVUISJNMWIYJMPAZYHQQFYJEDXIVRFLSQWFVMGLBPTTXWDGRNLVSAWVOUFROUNENMWJTLEGBPBNEHVPRGFSDPACKMSOKIYAIQUZFKDUFCBABQWSIITQWYQAZOMEROUVUSBDXGCPKNBGOYUCHSEXWINCTRQOTDUXHDJLBZGYABZPZ");
    tmp_tmp_msg_0_1.dest_man.assign("FYZXDNVVUWZCYKJXXDXCLEKIHWCITXCGRUPAZXVUHEQRKWMWQPOGNOEDOPCSROBJFQMYAYVYPNGRNXHULQXCEMUGPXHTZTNVSAHFZGQQKDMLNBRUOSSBQMSJAEKUIDRFPFEIKJBDTZYAVOGOJBBUIMZVWHOLRUODTRDAYKLVDLQTTCPEWH");
    tmp_tmp_msg_0_1.conditions.assign("GNBOCTNYVHROCAAXJJNHCDLXWJEXFIQDTBVZSLMYQYTKCAWFWARSHIIOVCUJPUFLRGLEEVFKMXNENOQLUIXZDNZOHGDSLJSWDTJCBAQYEKZURBYPBUFQKRNQGYLVIXGNSMBVTMHDJUWSMQDYPCEKI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FollowTrajectory tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 41133U;
    tmp_tmp_msg_0_2.lat = 0.8693204591308118;
    tmp_tmp_msg_0_2.lon = 0.5919570509506912;
    tmp_tmp_msg_0_2.z = 0.10672641247359693;
    tmp_tmp_msg_0_2.z_units = 198U;
    tmp_tmp_msg_0_2.speed = 0.21878079121088578;
    tmp_tmp_msg_0_2.speed_units = 215U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.x = 0.9852136121373779;
    tmp_tmp_tmp_msg_0_2_0.y = 0.285057588323411;
    tmp_tmp_tmp_msg_0_2_0.z = 0.6355692492095707;
    tmp_tmp_tmp_msg_0_2_0.t = 0.8169300876486415;
    tmp_tmp_msg_0_2.points.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.custom.assign("LWZHFISPPCASTEWXBNQQPRSBJSWXHNYPDSIJTZJYEBNGQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.07363067676111656);
    msg.setSource(41707U);
    msg.setSourceEntity(227U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(94U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TTMDLKOYFIWTGZWDHCVOQIIOBSKSEHZHFTQSMATDWXGCUNEVXWUSNZFJKBTXSOFBNNRPLMTIBKGSJKPDJXXJVEUIZRPGQPMCNASGPVUYOJBDUPIQAROLTAWRBQQUHGMNLWSAJZOYRKLOVCEEXFYNYAJDMGLKPXTBLRK");
    tmp_msg_0.description.assign("RHUTOESTIRLKLSHIEMHTGWTWRKOOONRCHGMYMVHXFDOQLVYYXHICDICBCNJCSRAROWUOPYVVJTRMILMBSDGAAZLWAPVZSLZVCXELXGCYHBMMQWKWDPNIQPNUNUZFSQUIKTDQTHKGZTSKGPVRXJIGAGBZQZETQFBCQHVJXJDFNKHEKEFWKIUMNUWFZEWPFNOMMJBIXUBUYVDYRAUQLXKPPJOVADDYDASSOLFFA");
    tmp_msg_0.vnamespace.assign("UKIGWSEMWZULSNGOKOSENTPVSWTWCTISMROJUBDQNTTWRHHJOLCXIIKEPTVLPKRTDYUEMUOJFUZFYAAJMZJADUIHBSAZAGMSCYVWIPHXFLFJEXBFWRAMBYKQONQXBIMDKYEDBFVWGEKHT");
    tmp_msg_0.start_man_id.assign("CYDSJDZKIWCDLRDXQPVJWFOQOPSWDGDRLAHJUCSSYBINTBVNUBPDXYXFQIYVNSCMMLWVWCLXSNGGNEAYBRPGUNMSMJKKINIGEECRWZHFFAKOPRNXRBFIIZMJFOAEJTHARSLMYZKJHKGDLTAMNXLOVMFOAVYCFUQFOBLHPEGXVHOEBYTQZJUGPTZWAWYXFTGL");
    IMC::AnnounceService tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.service.assign("LYKYEDSTBQVOIGQLVUXFEON");
    tmp_tmp_msg_0_0.service_type = 250U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::SetPWM tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 25U;
    tmp_tmp_msg_0_1.period = 881895575U;
    tmp_tmp_msg_0_1.duty_cycle = 211517217U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.5172729296084511);
    msg.setSource(29393U);
    msg.setSourceEntity(189U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(66U);
    msg.command = 92U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CQTEXIFZKCJMDLALPEQUVAHEDDWXUHHFVIAXTIPSDUW");
    tmp_msg_0.description.assign("CFWEYYRNSIJTYDHMWFJVJAUMJPHMVLOARUXEZNOZAGYWHPKCFTNSBUSWNODWGNXEONGVHQVOSLMBKVFQPTVSTJXYOLKFCDZKYSZPBAPBCWTZDFFIKJUIWWSKKDLCCBTXULEMZDAPIQG");
    tmp_msg_0.vnamespace.assign("UUXQRKUXVRBSYFWREPKZFCMLJLTPJCNRA");
    tmp_msg_0.start_man_id.assign("VFEHDYFGHOFETXWUSHBPOCNJMUVVXAZLKCLUNJZKZWAIJSLAENJXDMPQGUMMSTBZPNGURBOONWOLGIHXDLAEYWMDZKFUGFQBISJDVRYICXQEIAYIZILIQRHQHCAAGNPWJPVQOZNEVTQDDCFCSJKRNQOBMHJSW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WGWKTHLCEKJYAZHSLUQDZTBVJMNKVAUWPXGFDEAZGFSRCQIDVZRSFUNWJIVLZRNJYRPDXBWPECMZPUYPLTMXHYCPVRMBTEPAKDULXRNIVWGWDIJRUONXJFANROXVKB");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 46248U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8698912868743256;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7753959335586718;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8914222215001882;
    tmp_tmp_tmp_msg_0_0_0.z_units = 22U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.15647230758203612;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 175U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JNLNPQTBTVRFZSLVRMAKFVODILVCGDGYZYZGHZTITEEQUHFOMAMEBXSPCPWMNWDVFCSNOGQAIJWIBFSTFKUJXDRVJQDLSQAAWWJDEWNUQWYQREJLGGLWVEICCDGSBRZFDHOEQHOIAZZEYIVPUXQUKBRKCGUEMVCRNUVAFPFYKQYRKOJMNIROYZKBKSXAWOLXNXYUPMBCCGMUYOLTIWNLK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 162U;
    tmp_tmp_tmp_msg_0_0_1.op = 180U;
    tmp_tmp_tmp_msg_0_0_1.possimerr = 0.7922859710444007;
    tmp_tmp_tmp_msg_0_0_1.converg = 0.24466214444447032;
    tmp_tmp_tmp_msg_0_0_1.turbulence = 0.5408061240451577;
    tmp_tmp_tmp_msg_0_0_1.possimmon = 48U;
    tmp_tmp_tmp_msg_0_0_1.commmon = 179U;
    tmp_tmp_tmp_msg_0_0_1.convergmon = 89U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PopUp tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.timeout = 19582U;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.4001982079667502;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.28556488879165065;
    tmp_tmp_tmp_msg_0_0_2.z = 0.1865642727035427;
    tmp_tmp_tmp_msg_0_0_2.z_units = 79U;
    tmp_tmp_tmp_msg_0_0_2.speed = 0.15649498826191233;
    tmp_tmp_tmp_msg_0_0_2.speed_units = 242U;
    tmp_tmp_tmp_msg_0_0_2.duration = 1933U;
    tmp_tmp_tmp_msg_0_0_2.radius = 0.9196056592513918;
    tmp_tmp_tmp_msg_0_0_2.flags = 128U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("CELJCQOKJGSQWZUWIYCDZYSUPVOTXFKGHHSTQZZVDYAWRVGGHNCHZAXWLMAFBARSSFPTBJXFPGYQCPBBUYOYBQRIZKMZ");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RKRXAFQQYHSDFJZZLJQ");
    tmp_tmp_msg_0_1.dest_man.assign("FUKHNDVHSKLXSWUQUZXXYIQLSAUJPXWTEEMDZCFWYZNUTCCDRDBYCTNGALMMXDKBVHISGDIOACRICQMOVWFNPVAQXJSGTKRWKWLBCLFTUGQAGMJSJEOFTAYIAZRAVRDYQTJIZPPPKPYMFRXUNBHLBCGZ");
    tmp_tmp_msg_0_1.conditions.assign("UPDVDWUGICWASUXMCGZHDOLRDLGPJJGMCUCSMHOFEZMKUYUXMWZFQKXKML");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PowerOperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 210U;
    tmp_tmp_msg_0_2.time_remain = 0.031579141003954314;
    tmp_tmp_msg_0_2.sched_time = 0.602722375455583;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationEvaluation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 141U;
    tmp_tmp_msg_0_3.op = 164U;
    tmp_tmp_msg_0_3.err_mean = 0.08208653308345393;
    tmp_tmp_msg_0_3.dist_min_abs = 0.9460773960869259;
    tmp_tmp_msg_0_3.dist_min_mean = 0.25928863734918073;
    tmp_tmp_msg_0_3.roll_rate_mean = 0.6925458644718212;
    tmp_tmp_msg_0_3.time = 0.6934655204853101;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.action = 188U;
    tmp_tmp_tmp_msg_0_3_0.lon_gain = 0.3740047515483331;
    tmp_tmp_tmp_msg_0_3_0.lat_gain = 0.5476666189083346;
    tmp_tmp_tmp_msg_0_3_0.bond_thick = 0.3101417380693037;
    tmp_tmp_tmp_msg_0_3_0.lead_gain = 0.1384735930800256;
    tmp_tmp_tmp_msg_0_3_0.deconfl_gain = 0.8646521601228095;
    tmp_tmp_tmp_msg_0_3_0.accel_switch_gain = 0.12051164060891684;
    tmp_tmp_tmp_msg_0_3_0.safe_dist = 0.9214056791547621;
    tmp_tmp_tmp_msg_0_3_0.deconflict_offset = 0.28711687322417123;
    tmp_tmp_tmp_msg_0_3_0.accel_safe_margin = 0.014696429559764912;
    tmp_tmp_tmp_msg_0_3_0.accel_lim_x = 0.7101459316574666;
    tmp_tmp_msg_0_3.controlparams.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.7727365471197984);
    msg.setSource(55499U);
    msg.setSourceEntity(177U);
    msg.setDestination(28407U);
    msg.setDestinationEntity(200U);
    msg.state = 228U;
    msg.plan_id.assign("OWLWFZDEYNYPKSHIJSPYEZMXODYBLCEXMTHIIABJZSQNBLVNDUTDMZVXRJLFQVESMKKRGOMLPNVIEPHBCUYHCOXGNDABREQBXPWFDZZAIBKIWCWGVMROVJKEAPZUGOLSWHTVOZCNJJFYGBCKAQTZFNUMMKOQTTRJJGRNCSVPWKYUUGKAUPOIEAJXYNWPRSESFUAXXXTQKFHFIIDRMGAPHTHLCTGDXYYHZLEDATRWSLQMQVFVNJUWCSOCD");
    msg.comm_level = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.9960460115649482);
    msg.setSource(23505U);
    msg.setSourceEntity(0U);
    msg.setDestination(19956U);
    msg.setDestinationEntity(231U);
    msg.state = 201U;
    msg.plan_id.assign("FSNCJDBMGCTHXAZCZIUSJOABWEBKIWBVKXPCZYKJJMQPIUWQQGQOKOFUFZVGYFELBTELS");
    msg.comm_level = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5806004604154967);
    msg.setSource(10739U);
    msg.setSourceEntity(172U);
    msg.setDestination(54526U);
    msg.setDestinationEntity(129U);
    msg.state = 112U;
    msg.plan_id.assign("GLPIIBRJZCNYSOCJHZORQWKUNHFMBPMDBFPXUSFOCEHTLLOXODGULCXQSIDKGSZRTMBJYODNDRCAFMUHIXTSDKWJEYYLXFYNVGBQVFZOMOMEAMKBAVGADRJYAV");
    msg.comm_level = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.44124654468763025);
    msg.setSource(39683U);
    msg.setSourceEntity(227U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(56U);
    msg.type = 75U;
    msg.op = 239U;
    msg.request_id = 33612U;
    msg.plan_id.assign("FPLPURENRWDNJBHJFHSPFICIZLZXNAQSCEOIIMVWRPSWKCSJNJKTTFXLXBYVGDDIOYJASZYBGAYIVIPHPKAUFSSQPGOQOKLNLWOHBHKCHHYMROUVWJEVUXMZAZNXQDKGMHHJDKBCMCPUOZRBLGOQATTVWFROGEFPGURGBUVGBLHUBXRYKLEXUZTCZDIITTMSGYIVEQXSF");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.3268401127774926;
    tmp_msg_0.ch02 = 0.557754909190338;
    tmp_msg_0.ch03 = 0.316387485754578;
    tmp_msg_0.ch04 = 0.0355432564749969;
    tmp_msg_0.ch05 = 0.5756552987481116;
    tmp_msg_0.ch06 = 0.5375147909146651;
    tmp_msg_0.ch07 = 0.44225568589134334;
    tmp_msg_0.ch08 = 0.45340860218330725;
    tmp_msg_0.ch09 = 0.9602971076142868;
    tmp_msg_0.ch10 = 0.04562253808378813;
    tmp_msg_0.ch11 = 0.8522189034887344;
    tmp_msg_0.ch12 = 0.5491993623529122;
    tmp_msg_0.ch13 = 0.16004435814430074;
    tmp_msg_0.ch14 = 0.9660498706220998;
    tmp_msg_0.ch15 = 0.9712871134714541;
    tmp_msg_0.ch16 = 0.33952066433167516;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PPRCXDGKUYCPEUMAURALJDCCQGBANVMVVHWLIIRWRIJAILEFENWMYHOGMSYEFHWQRUQLIYPLVQYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.9115255974181561);
    msg.setSource(49870U);
    msg.setSourceEntity(2U);
    msg.setDestination(3453U);
    msg.setDestinationEntity(209U);
    msg.type = 16U;
    msg.op = 111U;
    msg.request_id = 249U;
    msg.plan_id.assign("BEJIPCOLMFEDOBBASOPMYEUVZBJYHIGZAAQUNVFIRK");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.845084119785298;
    tmp_msg_0.y = 0.6151201351926596;
    tmp_msg_0.z = 0.4548452124683504;
    tmp_msg_0.vx = 0.860988657421001;
    tmp_msg_0.vy = 0.3295345817339359;
    tmp_msg_0.vz = 0.7924972109071995;
    tmp_msg_0.ax = 0.8070965875146358;
    tmp_msg_0.ay = 0.7322364327437468;
    tmp_msg_0.az = 0.7459943663226388;
    tmp_msg_0.flags = 53462U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IUIXUXEYRFUFGVODRYBAOOGCREECFVPLGWGXJCMFJSTRSFSQOKVALIYNOISATLJSYELVWFGWTVSDQTZBATPSMPEZZJDPZQIKUPNQUPKUDQBAWJHXTVLLMWXHRMXUIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.8829431580723813);
    msg.setSource(8219U);
    msg.setSourceEntity(42U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(94U);
    msg.type = 98U;
    msg.op = 166U;
    msg.request_id = 46160U;
    msg.plan_id.assign("LSQOHKGVOBGEORNUFYRAGIGZDBEFGBZMIZRTEKHUSTNKBLKDNTAKSWVWHMEOGZCRYCOHMVKQXWULNVJSJXZFKFCGJMHXRFCIIJUQCALZDCAAQQIZCFVTMGQYPCLUXDPPJMBPNFREPOCITTFIPWOQCUATVROUPOHLKIQSBMNHDFWZBRWLYIODIFBZJVUYLHNGEYLR");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 65518U;
    tmp_msg_0.lat = 0.11727393913421225;
    tmp_msg_0.lon = 0.11668249232734051;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.z = 0.6810691099369296;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOSQYEIBSQTDHROKPWGXGKUFJQNWENPFXSNGMAWQQKOZOHOLOHATXSPCKNXCZCUTDBFTGWEWPNFEMOBFBSMRCBUOGBJLMDYVQIECBUPZJKVCBLZSWHDVLVHUGYRUCYYMIWUEEMTYOSDVVWBKUENFHPQAGVJNGTPXDKLMFGRVWILZORHUPGXQDQJJFDALDLPATTAJRKNMATCMBXIZIYYUISIARCTHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8890160463541183);
    msg.setSource(62806U);
    msg.setSourceEntity(231U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(138U);
    msg.plan_count = 36243U;
    msg.plan_size = 874607216U;
    msg.change_time = 0.9634439457613981;
    msg.change_sid = 41911U;
    msg.change_sname.assign("RHMBRMEHSRWTVPNCAZACAGQSSKZWMPM");
    const signed char tmp_msg_0[] = {61, -74, -100, 0, 123, 85, 1, -30, 59, 53, -98, -19, -128, -103, -19, 95, 61, 71, -63, 79, 22, 23, 1, -40, -41, -122, 9, 41, 36, 103, -94, -101, -78, -128, 68, -75, 80, 118, -41, -15, 103, -41, 110, -104, 122};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FRNIOLWUQOSZEMBZKICKGHOCGROFANKEZHLPC");
    tmp_msg_1.plan_size = 24057U;
    tmp_msg_1.change_time = 0.6541378588224841;
    tmp_msg_1.change_sid = 64206U;
    tmp_msg_1.change_sname.assign("WJEYCXRXDKJQPWAMKNBZHNWYDWUGUILGVRLXMQBVCJSMZHOPPHPHSTGZGDUVOKFUIBFNUREWCWVLATQNXQLITGMRPFZSVTYRQJZYJFCTMASWYVDITKRPOPXRHFEVGBRWFVMLQUHWDIZKDCTQUOXONF");
    const signed char tmp_tmp_msg_1_0[] = {-78, 83, -88, -59, 56, 117, 42, -68, 5, 59, -27, 122, 100, 87, -69, -96, 61, -71, 124, -25, -36, -118, -35, 114, 64, 7, -100, 79, -96, 95, -108, -106, -78, -102, -38, 48, 112, 113, 76, -66, 1, -103, -83, 9, -18, -101, 9, 9, -112, 103, -4, -59, -113, -59, -125, 76, 66, 12, 92, -121, -17, 20, 67, -122, -104, 102, 5, -25, -5, -36, 78, 47, -27, -110, 78, -64, 72, 92, 55, -52, -91, 96, -17, -27, 52, 95, -2, -56, -87, 105, -10, -64, 93, -33, -116, -76, 114, 6, 9, -91, -61, 91, 10, -55, -7, -62, -87, -39, 71, -112, -39, 114, -118, 24, 39, 86, -40, -4, 3, -71, 88, 7, -84, -128, 65, 42, 24, 68, -82, 110, -65, -111, -66, 17};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.40754176453133606);
    msg.setSource(10284U);
    msg.setSourceEntity(137U);
    msg.setDestination(42097U);
    msg.setDestinationEntity(212U);
    msg.plan_count = 25150U;
    msg.plan_size = 833003662U;
    msg.change_time = 0.7608367210042369;
    msg.change_sid = 35744U;
    msg.change_sname.assign("XIDYVJBGQHEEUIDZOSAYMMXZZFQAPUPSVMNGGPZNFJBEXKXWKOCKFGMCDQQOPRFZCHXSJDITKSVIXSAPUUYHQRZOALOSKQMYZUERAS");
    const signed char tmp_msg_0[] = {113, -62, -58, 1, 56, -75, 61, -82, -76, 99, -39, 112, 80, -13, -107, -117, -36, 29, -83, 110, 84, -83, 8, 91, -32, -75, 40, -87, 106, 125, 70, 95, -26, -109, -95, -1, -3, -96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.729477722909921);
    msg.setSource(36503U);
    msg.setSourceEntity(44U);
    msg.setDestination(1691U);
    msg.setDestinationEntity(146U);
    msg.plan_count = 57984U;
    msg.plan_size = 2735771568U;
    msg.change_time = 0.7620491977803822;
    msg.change_sid = 65427U;
    msg.change_sname.assign("BVJTCLNVWBZHKYGGJFBTXANSPQHWANUFTIRPZADABJSP");
    const signed char tmp_msg_0[] = {-96, -126, -102, -40, 64, -121, 114, 62, -111, 19, -15, -67, 95, 68, -22, -73, -115, 102, 94, -26, -114, 23, -41, 104, -25, -15, 74, -95, -64, 109, -119, -91, -84, 116, -35, -116, -105, 3, -7, -100, 66, -9, -96, 0, -125, 93, -89, -5, -35, -54, -20, -120, -6, -87, 70, 47, -64, -40, 68, 71, 106, -46, -13, 103, -18, -104, -28, 44, 105, 71, 73, -62, -24, 81, 45, 66, -11, -87, 95, -47, -28, 91, 104, 55, -92, -83, -43, -41, -49, 113, -97, -12, 87, 91, -127, -81, 22, 120, -8, 59, -22, 0, -127, 78, 113, 38, -92, -83, 29, 11, -71, 25, -93, 30, 105, -107, 55, 20, 113, 45, 19, -75, 87, 39, -72, -47, 25, 15, -17, -126, -63, 9, -98, 42, 53, 39, -116, 117, 27, 53, 98, -34, -15, -36, 32, 45, -122, 93, 8, 103, -24, -14, -35, 2, 5, -13, -85, -77, -75, -40, -75, -13, -59, 86, 38, 114, 50, -88, -19, -100, -61, -91, 79, 12, 16, -119, -115, -96, -1, -60, -38, -15, 54, 121, 62, -40, 121, -77, -51, 55, 125, 88, -80, -114, -63, 100, 57, 89, 99};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FSAZOQVTQOPOXZLJCMVEGUOTTCJVOAUAOVHYSPYMIOUUGXDEKFMEBLWGOJHRNPFXCAZKCRCSSZEQNZRCWRJOALVSBWDNFXXQIQLMRWILYMSMGABFDFPEBGNYJEPDZIYVUHCJRVHFZGUXJMBSKEKTSXGSFKPENTEZVNGRLQWIMONEXUYQBMTUJASZRBHDJYBDTHLIPIKKTYPWPAYHFCBDWNZLKCGPR");
    tmp_msg_1.plan_size = 51725U;
    tmp_msg_1.change_time = 0.6047502842613526;
    tmp_msg_1.change_sid = 4269U;
    tmp_msg_1.change_sname.assign("YXJHPGVSHTFCJLMUESXIMCGOIIDPOLJXDUTZUQAIEHWRFRKJAXNNBTOUPAGZFOLGCCHDCFVKPOQLWNQYKGEZEWDKSRXWJVIDFRYUJNJWVPBMKZRPEQQBGWBVTGXNLMSEHKUWHAYFVWPAFYTOKLXVZKVQDNTJJZCDAIMMBYECLYKOMRRHZGLBWCANRIOXDLGQSTOCYSIZNQDPVZHUEZPAPUFREMVQJTRYLSSIBKAEXOYTTIFH");
    const signed char tmp_tmp_msg_1_0[] = {-71, -58, -102, 125, 105, 57, -40, -2, 84, -39, 42, -113, 96, 79, -47, -109, -68, -115, 36, -36, 45, 74, 63, 35, -82, -104, -50, -107, -98, 80, -101, 113, -21, 46, 47, -64, 64, 124, 60, 88, 105, 1, 12, 105, -6, 53, 118, -109, -64, 29, 88, -100, -74, 31, -73, 1, 63, -2, -83, -58, 102, 2, -71, -6, 45, -72, 122, -40, 119, 36, 86, 89, 28, -33, 43, -96, 88, 124, 18, 37, -95, 102, -68, -31, 70, 63, 107, -35, 107, 7, -127, 58, 31, 100, -37, 28, -70, -77, 32, -30, 3, -19, 25, 70, -74, -43, 34, 8, 2, -100, 85, -70, 72, 26, -90, 99, -23, 93, 91, 58, -5, -120, 36, 5, 126, 6, 106, 70, -36, -22, -127, 33, 44, -29, -102, -108, 23, 62, 38, 38, -34, 73, 32, 92, -81, 123, 93, -2, 119, -23, -46, 21, 125, 42, 31, -33, 12, -82, -6, -44, -71, -122, -67, -125, -91, -75, 94, 97, -79, -116, -126, 94, -97, 86, 16};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.42248123887510347);
    msg.setSource(53163U);
    msg.setSourceEntity(161U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("MGBPPTYGPYDUFOCBCNHFHTEJWKGJYMLVHRHCIWIKUTIOWTQVKFINFDXEMUDZIVVFHVHRQTFPESBDEHKJBIKJYGYPXLQCMAOOIINXPPBBZIJBXMZYAEQCSRZOXTAJSQZEWVHAQKVN");
    msg.plan_size = 40958U;
    msg.change_time = 0.4301616625934155;
    msg.change_sid = 45606U;
    msg.change_sname.assign("WVKNMMBTHKPDBLWUOBXYNSWHIGDKTLGMYBRDHJGKEXONFCCPKIOQXUKJDZGIBBQIGRBAAAKXFDVYANPLGSHWECDOHXQCQUHTUYGFZUTYXPJORATKTTIIZEGOMEUYPRVZFSZGEQWHDFQWJVPQEZO");
    const signed char tmp_msg_0[] = {73, -123, 55, 118, 108, -40, 35, 105, -61, -22, -50, 123, -102, 1, 14, 111, -45, 54, -7, 52, 31, -24, -63, -90, 16, -15, -56, 76, -88, 0, -8, -91, -125, -107, 69, -25, 25, 13, -110, -64, 43, -77, -43, -28, 49, 70, -57, 16, -122, 32, -121, 27, -74, 4, 88, -35, -93, -75, -86, 1, 37, 31, 66, 12, 2, -47, -46, 88, 41, -2, 67, -97, -48, 50, -97, -53, -101, 94, -68, 61, 64, 67, 20, -90, -34, 57, -113, 23, -60, -91, 31, 10, 114, 2, 71, 58, -111, 90, 75, -127, 41, 117, 83, 40, -119, -30, -72, 3, -86, -64, 72, -122, 73, -15, 1, 97, -56, 29, 83, -17, 114, 96, 34, -126, 125, -105, 58, -127, 5, 77, -122, -44, -116, -108, -83, -106, -31, -62, -3, -113, -93, -84, 68, -49, -53, 85, -104, -30, 23, 84, -119, 34, 119, 38, -80, -80, -110, -26, -30, -95, -51, 93, -80, -54, 80, -62, -6, 83, 16, -13, 119, 124, -106, -22, 17, 113, 1, 46, -54, -32, 42, 89, -90, 46, -3, 51, -76, -19, -20, 8, -69, -31, -30, -110, 39, 77, 118, 57, 117, -86, -9, 99, -115, 36, -106, 14, -70, 118, 32, -75, -9, -58, 76, 114, -46, -61, -37, 5, 22, 61, 53, 84, -30, -35, 81, -26, 73, 77, -124, -44, -36, 31, 110, 116, 15, -26, 0, 41, -93, 9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.8230053111982361);
    msg.setSource(30645U);
    msg.setSourceEntity(196U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("VIJLLOTVPWRLYLNDDZLXHEZRFWENCCMJEBJUDGCXBVNYYLTJFDJCONXTSBHPBPWCBDSJURWTGGENHGKQRSCERGXFHHNQPSUXIRSWEOYGLSZIMJZYAQAKGOVIDVZEYFUUIBWYRGRZFMKPXUQNPYJORDHUSDOKYGAISLKOKSZTFDAWNEGBPITBTLXQWCCIFKXXVKBMNPDNMHVTLATVFAXJHQAZH");
    msg.plan_size = 3471U;
    msg.change_time = 0.3853156356627885;
    msg.change_sid = 54438U;
    msg.change_sname.assign("UIDWYNEVMFHYJOGPOFJRXZLWUZADSQSRECONUHIEFJLNCNRYKAXYAPFNJGUWVKFUJLXWPLMQKEKFYZDNPBWAHTQBSHRARAGTFNZIDVDJHLWBKL");
    const signed char tmp_msg_0[] = {34, -121, -26, -93, -13, 80, -96, 85, -78, 36, -32, -20, -66, 70, -119, -77, -36, 40, -36, 43, -25, 43, -20, -58, 99, -116, 94, -114, -46, 85, 10, 99, 43, 88, -54, 19, 101, 8, -118, -37, -89, 123, 8, -101, 120, 42, 9, -64, 49, 46, -10, -47, -44, 17, 64, -92, 113, 58, 74, 117, 119, -56, 35, 101, 101, -63, 67, 52, 80, 52, -18, 70, 119, 110, 27, 101, 87, -38, -14, 120, -86, 52, -59, -89, -109, 56, -119, -113, 124, 97, -117, -25, -42, -47, 90, 81, 15, -60, -58, -103, 8, 49, -23, -89, 48, 112, 84, -17, 74, -116, 98, -92, -1, 117, -92, 77, -59, 92, 108, 75, -72, 63, 7, -56, -27, -4, 26, 103, -35, 44, -119, 58, -2, 123, 75, -84, 78, -67, -91, -3, 94, 48, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.06141281779470409);
    msg.setSource(6778U);
    msg.setSourceEntity(25U);
    msg.setDestination(219U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("PSCCJICOEXRQWKLWFKDFOZTQRCEDGRCVMQXBYMQUKNJQZXWGWWBAGXDWHMKOQZATLKEEZZPSURNIWBYFUJTYCRSESQZZYVPHPXNBIWLSMMPBHZFDXCAMBNRQDDPTYNESAIQGGYAMHIERLJFNOOBFDTVINJTCTHGYKSKXOGHNJNAWAIXTUM");
    msg.plan_size = 41699U;
    msg.change_time = 0.7357979147756254;
    msg.change_sid = 26092U;
    msg.change_sname.assign("HLUPFYKXGYRALTTHJUYCXJCYDOPSGOUNIVRLVDLUVTBRTQHFXNKVVZZEBICJVGUZSNSNMZJEFBMTCJRQNVHBIINOQKGDOQYRHZSZJUQQNRUVXWPBKASLVRBPWBSRAJBMGQEEWAKQKHHHUVMANIEWKXOOSJFKIHDEEYRNWXKJASWFSPOTPAMFGEWAGBLLMFDQXLYDYZLTTMYWGDHUEDZINPBXLYSFIOTKTMUCRXCAZCICWQECOJDM");
    const signed char tmp_msg_0[] = {-63, -57, 104, 14, 83, 30, 20, -2, 29, 32, -36, -18, -86, -24, 114, 41, -93, -69, 31, -18, -56, 64, 125, 106, -12, -92, -114, -101, 68, -47, -89, 8, -91, -25, 20, -14, 79, 89, 100, 125, -9, -72, -45, -78, -128, 19, 1, -5, 10, 112, 48, -5, 103, 34, -114, -61, -33, 47, 2, -103, 85, -87, -79, -12, 121, 14, -96, -109, -39, -29, -64, 62, -9, 31, 0, -99, 31, -40, 108, -6, -100, 90, 54, -10, 31, 85, -16, -70, -40, 125, -14, -116, -9, -92, 76, -122, 101, 113, -94, -119, -105, -120, 19, -39, -45, 15, -96, 95, -28, 2, -74, 49, 79, 66, 69, 84, -80, 59, -68, 85, 44, -105, -23, 83, 108, -14, -96, -103, -27, -105, -24, 119, 104, -16, -102, 68, 51, 17, 36, 77, -14, 83, 34, 104, 98, -49, 15, 28, -52, 48, 86, 66, 61, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.2759018867147146);
    msg.setSource(41641U);
    msg.setSourceEntity(62U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(234U);
    msg.type = 234U;
    msg.op = 170U;
    msg.request_id = 8500U;
    msg.plan_id.assign("ZHXGSQFHGWROZSFQEFEEKXJWNZGFLLMTILRFAOJOUXWLEAEZEBAGNXTLMBDCSTASNYYRHYPCOOAXULQVDMGKMVSQFKDQMFGBSBHTCCIRNPYPIYKWMCDUJQEWFNXPJPUUVJYYRIMTDHXJAXENUZGRMTWDTRQWDTBVNBKKPQAXKSLNYILFYKZOPOGZBO");
    msg.flags = 11914U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.12640863237922406;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZPHDKISBDGVXJIESJVNKKSFOQTTIUCKQHFYLPZCAYNUYREULTNZVRFHKREBOLOAMDCOHDVMEGJINSNGDAIUVNWTAJEDMFWFERTKXYHCXRQAUCOEXHKGYHQVGNDDUVJXRNXMHVRPBVXWFMCSWILTIQZGOBBRKEBNHQFBSMWTOPJZCSOSJLPUZQMTJQLCNBAUKLIKCWVPAZGXSRUFLIAPMMERXPWPWDJGCHYGYAFYGDWLQBXTYETZOBQAZFULSZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.5271638593529041);
    msg.setSource(47761U);
    msg.setSourceEntity(138U);
    msg.setDestination(40873U);
    msg.setDestinationEntity(229U);
    msg.type = 220U;
    msg.op = 205U;
    msg.request_id = 52326U;
    msg.plan_id.assign("RYINRGYIRQBQDSAOOHIRCNDRYQELFLOVHLUFUBXZMSHZSQUULYKNPFDEZVNWWFKMJBSMQOUFXZLLOYJVJRMWXJFTAGBVDLODHLEFFSAAJVCMJGTXRYMIWCZZQHCKNROGIUKWPBAEMNQGEHPQXSNZTELCVF");
    msg.flags = 47159U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 47U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WLKPGMXTYAPSYHHYJGBUPEOQVXMSPXPNDULTPOKIFKLMJSVYATODXYNGJRNSYMUFNHAOSQUCIUGLARUTKGYKOTIOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.15929863550363743);
    msg.setSource(52791U);
    msg.setSourceEntity(227U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(35U);
    msg.type = 233U;
    msg.op = 68U;
    msg.request_id = 46955U;
    msg.plan_id.assign("OYWFNAKLJZPGGRVYNNMEOOXJBMTWHGLVXCZOPRIQWVAPOFQNETGVGMKXVFVEBLPNFTHKLXUFFJVSJXKMLUQIBWKSINWXLUHQAGKMRRACOFSEDZVJQYJDYNPFQACYZWQ");
    msg.flags = 39707U;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 133U;
    tmp_msg_0.mnames.assign("BLCXYEBNHYJGOZXXDVVPAPJRSFSDOQAPZRAOQRHBIOYJULCHDPFOXOSJYHKIHRZBPZSDQUUBLFCDYKTWJLNEDETUQOERZSMMGHNGMLZUGNJMFTAANMNMTMXFGBLPCRIQSRBWQQUJNNPFIETJMGZGBUKSKHHI");
    tmp_msg_0.ecount = 83U;
    tmp_msg_0.enames.assign("EHKSOYTRQOMHRPPXPKWGKIEBQSTQUZGWBNAMAIDLLITZPXJJADQLPQZBKUENOLCLVXNGVYMEVWXIUVLT");
    tmp_msg_0.ccount = 36U;
    tmp_msg_0.cnames.assign("FWUWMRROLOAYPIJTAIECXLVNJUWYYGAAOKDALUKZGBHWDUZXGQAMICVNJQMRMVTQEHTUCNAQTSBPFBFUEKSSINJEQZULWDXFTXGELSKVCJLOAPLXSMCYFAKKVVPIEDDXHWVYCDOHTWZPIESPBZHBPOKCRHGQFZUHPOMFGORCVBILUXEKMTTDNYF");
    tmp_msg_0.last_error.assign("NJYFSRLINUYCCWSSJPFLICZNRSDNLZRQAACKORSINQWUHMXEVJEYGOKOTJHWSKTFDXZQQBAYIYWMYXRXFTOCJVTXQJEUQDDUZSIILGA");
    tmp_msg_0.last_error_time = 0.426303224906619;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JDCQQGSLZLLMIPWFYDBBJMSXQOJBTEVRZDHUVVNGZGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.46836765954792026);
    msg.setSource(46813U);
    msg.setSourceEntity(66U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(223U);
    msg.state = 233U;
    msg.plan_id.assign("CONVYSIFDGCVUYBWNTXDURMFVQBAQZGZLWAQSZWXHTCSJTGHO");
    msg.plan_eta = -814269858;
    msg.plan_progress = 0.3685773616867474;
    msg.man_id.assign("YNSUMFMGCHVVBEAYWHRLNAWIWPUQIJPMCDODQONERTXYUBVFGARETHHDSOFTMKLFIPCPAXHFXVSYONRMOHLRCLNDZDOLQIJFNSAWUUVTXEGHHJSUZIBODJRNVBOTCNGWFMJHAWCVQQAKBATXWLZPGZBUIMKVYSMNBFBZUWGIPAJQTZYPLGFEQOBIJSZXPRFKEIRLKZTYDXPRXLKWEZQDYUGPRSKDNQEAXSSTQKVKUTL");
    msg.man_type = 22700U;
    msg.man_eta = -1381509860;
    msg.last_outcome = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.05136767600862524);
    msg.setSource(58510U);
    msg.setSourceEntity(246U);
    msg.setDestination(35065U);
    msg.setDestinationEntity(11U);
    msg.state = 47U;
    msg.plan_id.assign("FGSXUHBIKNLBECRXFLIGVNIDPBFLEVMYYKHXBTPEMDAOYUMDVMAFRLYJZEHINSMUOFSCAUAZRIOOSRVTSCRWTVCDQIAMSZRHGGMFICLUKUNEJYLTXUJQZOLBIGNACVQYQPVFXTYWOXWXABJBZIZSWQDWPEHHDPKFYWQHAGNGDXNAV");
    msg.plan_eta = -139076265;
    msg.plan_progress = 0.7927925877445419;
    msg.man_id.assign("EJQFENUAKLCUYIMDZSUVPREHXQKRGWSKIXUEHTJPFPXDABPIL");
    msg.man_type = 11472U;
    msg.man_eta = -736630734;
    msg.last_outcome = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.14191540797935753);
    msg.setSource(54244U);
    msg.setSourceEntity(172U);
    msg.setDestination(21628U);
    msg.setDestinationEntity(235U);
    msg.state = 225U;
    msg.plan_id.assign("IAUBPMSBCLEQGNMTYJDDDLIFDQGZQYCL");
    msg.plan_eta = -187182687;
    msg.plan_progress = 0.5302715479384094;
    msg.man_id.assign("SOHRPVXMNDZNKJPXXCJPUNGMWEFMCLRWTYVCZOEQWHYCXNRGPUGQVLTPYMNXDIDAJIHOCSBZZUTFHZYSIWRZPYKEHJSLVMCPOOBULDYQTWUCMEQKAFEUDKBZBWFSRGKQIWYVMAPGUSNKAAFDFMXQYHYEUABGRHENXAEZJRTCKWHSGJKLGOUSUMVJJBTWRTRALZFNQFIEPFDVHHBGTBXIGBJVJBNOKLRWQCAKDOFQ");
    msg.man_type = 44551U;
    msg.man_eta = -2055124376;
    msg.last_outcome = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.8298029931762523);
    msg.setSource(6416U);
    msg.setSourceEntity(118U);
    msg.setDestination(16760U);
    msg.setDestinationEntity(239U);
    msg.name.assign("JFJJAHEQFMCAFYWYZKHTPGZHRXNNYKUMPAHWQGGISRUMDRMEQMQCWHUGXVBGUN");
    msg.value.assign("FDKMKHMLUJOLCHWRCHEYXXYSCNVSQJREUDNTOOHZPRJJHJBLFLOTLNDKMZEWZNUOKBFFRMSBLRBCIIGNFTVYMUMRWZXGXAAMPTKWBHUDVTYOIFHEOGAGVBZKXQUYGDACOPYKDRAFVBJCIYFASKVWEWPQUFNIQNXHPWMISBT");
    msg.type = 24U;
    msg.access = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.7143654019326928);
    msg.setSource(39986U);
    msg.setSourceEntity(91U);
    msg.setDestination(44909U);
    msg.setDestinationEntity(132U);
    msg.name.assign("CLPIAAUMWEYJRGVUFBHAKPKBIZSEIALAGXFSAQMITLWWHKBCCCFNFTKSNGYQDXLMHIDOTYPUWXDQMFOVZRCHASZLGRJXNPWDKSVZNWYBJYYWQJLLNYLPOQZTMADJETQYVFSEPOWYBPBIXN");
    msg.value.assign("GDISGQGUDWXUGZRHTHGRKKYLGFMBJPQLZCIENYWHRFHLFMAKIUCBCFFQOYSNKSQMOPFYRSXDWHMCKKBWVONALRBETVGFAVIDCZTTEUKZLEAURNJKANODSTJNFTGPTIOFCHYERAFCBQXXWJBOAMHXDPVBNVIZEXZPMRBVBYUAUZJRSPZWGLBGSXIXEMPZHEKQJVLPPNDYYQDUNCPTAHDTOQQWOUWJLXIVJMSTDZEJCINHR");
    msg.type = 89U;
    msg.access = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.5876020105813);
    msg.setSource(60122U);
    msg.setSourceEntity(181U);
    msg.setDestination(2709U);
    msg.setDestinationEntity(150U);
    msg.name.assign("LOHCPKQMRPSNZOVQVWNBJCMSXLIGCGJIKXWJNOXEYHJOBLRSTYQRGFDAGKQ");
    msg.value.assign("ZPFMFTIYAVDYDUEAZGOHBGCXIHWUQYANYXTSVKIBGUJPOROGDBZVYRMJZCIYWB");
    msg.type = 109U;
    msg.access = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.7965251833498549);
    msg.setSource(37723U);
    msg.setSourceEntity(209U);
    msg.setDestination(57920U);
    msg.setDestinationEntity(53U);
    msg.cmd = 176U;
    msg.op = 211U;
    msg.plan_id.assign("MRFPWGRABWOQBTZOROFQXSTMXOWJKHXEINQTHDITYWNGHBKPIRYOARGTBCEUHSDUEJH");
    msg.params.assign("MUJDOOTPZKVXSDASGHEJVDPWBCWNZRSNAYALMQILVBXGJNKZFBCGTSRORJXDJLRIIQWNUYMSHFXICZQYXLAECTEZPPMKPTSHBFNOYERDEPJVKDHAJHHUUCZKFXMIPZGWAVNEITTRNXMTINMAGJWBCULGVHZRTXUVORVLOCWAWIDBGCOBDLHKKLNDFUGQFYLOBFMOOWTMIUYSHFSAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.5609767140179118);
    msg.setSource(16433U);
    msg.setSourceEntity(42U);
    msg.setDestination(39321U);
    msg.setDestinationEntity(57U);
    msg.cmd = 222U;
    msg.op = 98U;
    msg.plan_id.assign("LHUHONYDHWKWCVJTLFTFWHGKZBVZJQSZRGZZDNNHZYQURBIEBYCBLGCIDERMMISCSXBXQDJOMIDTU");
    msg.params.assign("VCNYUVKTZCPWDNKQRGGBEDAFRAVRCXSHCZTSMIHAWCVFMBBUOBPQJKEMXIGTYLRBIZLDGZQOFRFLDURQJNJPOMBDCJOAXTFYNHEMKKSCKTQLPCWLXHOBBYVVMPQJDUWJHPYDXTQGOHXYYIJOXQUWWGZCTMMVKDANGDIMKBEUEJTFVIJALQULOSNPNSUCIAJSIHYPZSYHEXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.4045980018971368);
    msg.setSource(25493U);
    msg.setSourceEntity(172U);
    msg.setDestination(62829U);
    msg.setDestinationEntity(64U);
    msg.cmd = 21U;
    msg.op = 240U;
    msg.plan_id.assign("GQNDWESKITVNBFGPQZYKHEVGDLPSDSAKAVYMVDUXUQRNHWNHYEPIXOUUMCCBPZQAIAFBNTHWLWUIXZWK");
    msg.params.assign("MZPGOBINSCRYRNEFLFJSAVAPEVSAFCSPHDGSWZTKWIVVXUDTJPXIJDKKHOPAHLZWUNDXZFUKHWKOHZKBBGYMBQEIDJDJCSMNNFCHYYYGXPRBLICOQUJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.5066098590270063);
    msg.setSource(32219U);
    msg.setSourceEntity(157U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("WVFCEITNCDGDSDLCBBLXUNLCZHOFFKRDVJGZTAOTPCJGSYWQRJSPNGQ");
    msg.op = 54U;
    msg.lat = 0.5427196500842838;
    msg.lon = 0.8966385049970228;
    msg.height = 0.30082080514164733;
    msg.x = 0.3446335582448755;
    msg.y = 0.26422867003902484;
    msg.z = 0.4329991267856311;
    msg.phi = 0.050127233573695196;
    msg.theta = 0.5564666583417575;
    msg.psi = 0.44998991056505777;
    msg.vx = 0.30179436336513454;
    msg.vy = 0.3776973451673833;
    msg.vz = 0.4657044318237936;
    msg.p = 0.0033111801146402664;
    msg.q = 0.7937220254624285;
    msg.r = 0.7828318966111606;
    msg.svx = 0.04814737293910876;
    msg.svy = 0.6240287452417226;
    msg.svz = 0.4405832135469222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.9909645441559518);
    msg.setSource(5382U);
    msg.setSourceEntity(196U);
    msg.setDestination(6399U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("WTVFPDKTGKDDSKWPIONHPSYIHNDGLNRYIZJWC");
    msg.op = 132U;
    msg.lat = 0.21879275889798877;
    msg.lon = 0.5612821146506303;
    msg.height = 0.2894494196214359;
    msg.x = 0.17643146675795696;
    msg.y = 0.2555216998950611;
    msg.z = 0.5161234507909369;
    msg.phi = 0.10268378976041181;
    msg.theta = 0.9425760349209814;
    msg.psi = 0.5658669478801199;
    msg.vx = 0.9139794819124221;
    msg.vy = 0.2952804987242009;
    msg.vz = 0.582274668178649;
    msg.p = 0.4306277787427162;
    msg.q = 0.06042741028571885;
    msg.r = 0.12650586627247673;
    msg.svx = 0.07575242418774708;
    msg.svy = 0.8599384100954579;
    msg.svz = 0.3579759976615349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.9204666542893961);
    msg.setSource(12057U);
    msg.setSourceEntity(35U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("DDBBHINKPJBLNMXU");
    msg.op = 4U;
    msg.lat = 0.21368736088265894;
    msg.lon = 0.1841718189774797;
    msg.height = 0.6086679833198431;
    msg.x = 0.3735632473423427;
    msg.y = 0.6976179761839659;
    msg.z = 0.28873081189537564;
    msg.phi = 0.6718359273453368;
    msg.theta = 0.35642115997022894;
    msg.psi = 0.36734620213384683;
    msg.vx = 0.38767605991660203;
    msg.vy = 0.20027213684258538;
    msg.vz = 0.25038614806169135;
    msg.p = 0.283852464348223;
    msg.q = 0.39008843229975265;
    msg.r = 0.005321743641058196;
    msg.svx = 0.5683181074925874;
    msg.svy = 0.33997546851685545;
    msg.svz = 0.4051100585740932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.9480382199413202);
    msg.setSource(56125U);
    msg.setSourceEntity(165U);
    msg.setDestination(45962U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("RMYBBFMPXAVEFYGKFXWOBZMEMDJDQLQKCTKIXDNIPQHXNPTUSCOUFQDVRGWG");
    msg.type = 192U;
    msg.properties = 248U;
    msg.durations.assign("NNBLPZJKYDWWJYIZVWIBXSKWJPUJGSROMFJTVUPZGVKQNIXYSDKDQOWHUGCPLMJBFMUAXLSMLURCALSTQERBLGUZHARGPWEXEOARQQVTKKMTICUIEHRPLEQRWGXNFDHCICQZVMGYNCHNXZQMADGVZTUEYOASDPKYZDIYATRTDPFTQLANFMSKTSIXYHFOCUFOJNBBDBCORHWYZBALCAMDYP");
    msg.distances.assign("XWBTJKOHBVDGQCZWYQIUVJADFYEQCLTXDVCKIRSYVYKEDJFXNWXROSPMUNIPTRVFBCZGCTOZQELWMRUJZUHNVQGGEUSINMTDYAKPAPDSGWBOEJASNKXWYRNPXEMLAWYLAIEOJXZCOXDSMCSUVGPBHPUJQIUHKVKOIQQKLFOABFEMTUQMOCCSGRYGW");
    msg.actions.assign("QIVKHVPMOZANKKNHUXVHCGFBARETXOUSBAZAGYQAOMIANUWRDPLZOFGLLWCVIKMYHBSPFSPIFUJFLCIZKVTUFLETSWMBGHLIGJYMJRBAGQYDFN");
    msg.fuel.assign("NBVFOIFVVTTFNOXSKFTRRXNQVLQZGJTLSAOBPYXRUIYCLEMHLNAZPXUGPCQHXUSZVQQWJTSJBBJGMSBABGKEKASAAWYHBZWJNTNIMSGVPQCPIVJLDQTEUYNTDIHPIRXZCAZTRKRGHZKFVBLHCYGGPYOPORYLKCLXWWUMOZDXUEQKMOMKELJOCFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.4445354347441821);
    msg.setSource(43054U);
    msg.setSourceEntity(84U);
    msg.setDestination(43915U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("TSAKUTLZZPUZAZKFMQJPGHLXQMPSXIOCYENUYHXRJBWFIIJUSLLAHIKDYYECHRLVTRVHQMBJJOCBJAUIKREESPMBUNCKPWNWUZFNTVGGLIDSDKPEOJRMQDIGUCJWDTAHMYBXEKVMOPMDEAAZBZOEFWFWQNYLUXAVSORXDOGOHRGGOZDNYKYTE");
    msg.type = 117U;
    msg.properties = 11U;
    msg.durations.assign("EETPIRWOPEOEQCHRRPNFYIOOYXPZJAJAEIHDNFLUSWPRAALAZTPCJXFDECZVCUXQDQJQOUCNXBSEVVJACODVCZSTQDOHGFSMKLDOCEVUVTKHGYGRYXULVALLYLGMOUJMVUYKSYBLZSKGCQLHIMIDHNIQGJAKPKIYZSWNRDMBQMHRUTEWIGPGZBXKDFJYFMASJOMYRWFGFPKK");
    msg.distances.assign("DFRBKXJKPNFADFKNLMJTRTOTIC");
    msg.actions.assign("SXLQHRMNMZYDTFWPXPFOOFDLQOVPGAHSAYNNUKLTMXJBPHNBIRUYUBRTQMMSDPACFSQZLCQQUEKJKISNCZOJHZRGYJPSWWIAJKL");
    msg.fuel.assign("QJINWAWMDOCPAZTBIBUHRZLVIXCNJQBKHCTLXPTXZPXVRSYPLMNDIQJUUFYEAAYXGQJVXZTGDKBGFCNVMWHWNJKHZCKZNYIPJLFIEMMSRCPRCVXAQETUUSSGTLUSVARJVNPIHWCHMEWXKHTRZNUHDDDEIIGUTOFXDQHOPJZGSBEOAMACWLKFNYPFSQBAAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.7797520122843266);
    msg.setSource(51162U);
    msg.setSourceEntity(201U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("HHAATNXEVBVAOKWHALTIGMFHXMKPLEIZBEQQDUYFKDRALOUISXUWSRTHOKEPRLDGYATBITJLGGFZVBEPUJDBPMBJOICLXTMQQIJTAFHXPHNXISUDCJZFJQAUNXBFVWLZPZCYEYRFMKK");
    msg.type = 140U;
    msg.properties = 227U;
    msg.durations.assign("VEAJOVGEFSTODEQBAVNBJSRDMMUVYPKULKKTXAGRDWKCWARGBIUDZBROEBNSIYBJSJAVSQQYQXTFPGZRI");
    msg.distances.assign("UWHRXEJSRVVPHMNBPYNENYRXTYDKZGKXNCGSKIJEIRVTQJESMPXGYICGJPQDALXOHCMLQOKDSQTQBEVYJSUGDOHSJRPCLADLTOACQHVZPQGUDWZXKPBZDYMYFGNWUREMECRUSALUTBYKYBBTTKCQMUZWFIUXWJZILGSFGDHNFMQVRMOVZSEHGODNUTYOFSFKJTEPNORZ");
    msg.actions.assign("YPJWEJMRFSFESOUHMHTXUVLCNJPJGIOTPNWLXAABYYDGEQDQDAMYFYCMHBLGQSZ");
    msg.fuel.assign("JVATKXPZKCTOIARVONYRELAUYDFCFDTPNWCUYCAJIVXSBEEPCGAZMVDUDKNFPOVDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.32817793538253714);
    msg.setSource(64243U);
    msg.setSourceEntity(141U);
    msg.setDestination(59835U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.023625929629552123;
    msg.lon = 0.5829238961001822;
    msg.depth = 0.6347674463644352;
    msg.roll = 0.4461278208751117;
    msg.pitch = 0.0218642237865746;
    msg.yaw = 0.6756513342985664;
    msg.rcp_time = 0.10420353857283304;
    msg.sid.assign("MNMUZWBHKSSYRGERSMJBZLBRDEETKEVANYXOFHOVVNTSCHSJLYCNTNXQAIRSBZBZMQPZWKOUKPHOXQHXYTCWOHWSAWIFMKSCEPBVVPXRQDKUTAHRGWDCOQVJCMFXQIPLYEQELRZDAKJWUIYTGMYYILQRVTDGMNMZLKHROWYVFYKHPSGEBVOLNQJXXAUIAIBGIRSNJZCJOGETCWIJFUPCPLVFZWPHJLDODTZF");
    msg.s_type = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3642358602690491);
    msg.setSource(940U);
    msg.setSourceEntity(254U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.8313272504613363;
    msg.lon = 0.04632201454687024;
    msg.depth = 0.34740681711595334;
    msg.roll = 0.4027116144605426;
    msg.pitch = 0.8667554685476464;
    msg.yaw = 0.3041006913309994;
    msg.rcp_time = 0.711209954156146;
    msg.sid.assign("BJJQNUPRVEZADBSFWCIPJBBTRHXPLCLWCOOOMDFRHXEBBCMHHGRWLFNTSGKLCEZRPYCGJRYCMMMNKGLHNRZVTUQSURYVSPTDFEKIIABJWZVVLPXFTNYAUAISLJGZDODKKWPUMAKRIEKNYRDKHSOGKQDYYXAVOZTAQBZXUGTZMXSYLTSWPOCCALGHEIHLFTDHGMIZFQVMIJUSDHANXWVCJUXVJQGNES");
    msg.s_type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.5287967092462071);
    msg.setSource(47342U);
    msg.setSourceEntity(48U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.6448504027084118;
    msg.lon = 0.1064179692652032;
    msg.depth = 0.7484332744669606;
    msg.roll = 0.9071477479559305;
    msg.pitch = 0.7943531502412078;
    msg.yaw = 0.7004066746140262;
    msg.rcp_time = 0.6315728525605927;
    msg.sid.assign("LGZHZKNXUECDLYZAWJBEIOQFDZMAAVSWAHBYCKVRCPQ");
    msg.s_type = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.7087958538339645);
    msg.setSource(30656U);
    msg.setSourceEntity(20U);
    msg.setDestination(3067U);
    msg.setDestinationEntity(111U);
    msg.id.assign("OIBNKSACMWHDYGEJSZKUCDAYFUQTJYDDRAZRQIXRLPXUHQKSDHOYYQKHQVOPTEHMEMJJGSXKGVMDYXSEIAQKWJRQWUWAMDPOLCLZBHMSXBTSEWFQBCUWYOOBZPTHPRSHWUNDTEGAOHEVAIJPVILSIKRRXWEDZJCLYUIGXLQMNUWU");
    msg.sensor_class.assign("QMVKTEMYFRCPPPLALOJQGXWRSFKIHRTZXPQKYZLHGDJMDBQTREMDDYBIMKOHDHGHJPCWTIXWQCLZBPBXCDWMITYYEODZGVMAVSVHFRIXZBHPCIMYJQREUWFAETCLGZWFAFPJRDOGYUSEQLAECXFSNXLUKKUJUIVIRUTOCNGNTUXBVMIVBQTGSEKONJLZNIWAHPAGUGYO");
    msg.lat = 0.7423385616000301;
    msg.lon = 0.5888968623533276;
    msg.alt = 0.945531289634656;
    msg.heading = 0.5001771731636693;
    msg.data.assign("EEJEJVUPCVNRMTJXKOMXJMBJLGXENQQNVFYMZKGACUQZTFCHFNPJWZEJNNEXQVSJBRNZYOZPPWNSOTHMBLKGWVZSXAKISHCTXGRFIEURLULHAYYEAZAKIHWOGHMOUDYFSOIYSGDTTIMOFHDKYUZHLOQRPKWSBOFRDLZWFASCGPVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.5212597423298498);
    msg.setSource(42194U);
    msg.setSourceEntity(55U);
    msg.setDestination(32577U);
    msg.setDestinationEntity(208U);
    msg.id.assign("QKEHZUPBXMHUXFSRBKFJCWNWWRAENAJGDOYNSYIDJDTYMREDWMTONVDTQZZKQPTFEGLNUV");
    msg.sensor_class.assign("KEYSBAVNBGJTACSTVDPBQHDEANRCNGZBWXHDSNMGTOSUSTYHOJBRPLQXHEZOXTGSZQWNCOMIVGIEHBUAYBYDERTDVMIXVIGVWEUJFYPTDIBJTJQ");
    msg.lat = 0.6303779151126304;
    msg.lon = 0.7474108432969887;
    msg.alt = 0.6153906281748002;
    msg.heading = 0.23424721622533184;
    msg.data.assign("KQEROZRCUWOIULGNSKHNOYBFCZWMRBLOEKFVAPMVXSBZHMWOVXIVMLNQUBTOZXXLCFIMGTSEDIFASTJPEZTOWYLQLGXKHYBPOUZKNVHLFXABEEQYVQTRSGAECGQTYRMZKPYIVLMSXLGUVJNGWKSPJXDJPCNFDDFGRVIXJIZDWHZBCUQSSHYWNMQYCPJHJJPYZPGVBBWTUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.5907522953107943);
    msg.setSource(33763U);
    msg.setSourceEntity(19U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(244U);
    msg.id.assign("MTMPGBBHTTQXKKEACHABWNLCKCPEKPRTSMYTRGB");
    msg.sensor_class.assign("LEEPYYFHUVSRVXBHMOINDFIVFRYTWWSHONZAXFQPCPGQGLKTMJMXPMAEPVXMQYWOWEBHHNDWKUMJAMLYAQPIXROK");
    msg.lat = 0.7301104866635427;
    msg.lon = 0.5478838306705123;
    msg.alt = 0.23620442407204523;
    msg.heading = 0.2227890625413913;
    msg.data.assign("BOEAXGKHPYBUCXOWVYBSHZDIRSDPTHKQMRVEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.23192385697843554);
    msg.setSource(7998U);
    msg.setSourceEntity(102U);
    msg.setDestination(41922U);
    msg.setDestinationEntity(57U);
    msg.id.assign("LAZYLFXJFABQYQQKJFWGFAPKHMIECIACTQMJWGVRLDFNYIONMZESLQZQJWHULWVEXDNRONTKFUILHBAUCRBGFUPEGEKXBWYJDWJMZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.8217877674232428);
    msg.setSource(46861U);
    msg.setSourceEntity(155U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(70U);
    msg.id.assign("DZAILVJLTTTJZYPHGDPTOEDSVHONZEQHMLDJNPEJBIMWPGZNUQRVRDAFKYRHSGSNNNYAGWYCTFDQMMLODBHRXKEBX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QZGSJVQDENSAIPSIXCTYDOZUBAPDSIKRLMGUNZCPYLFUTAECQRDGVPDRJHJBFWMZZDVQRJQGIMTSLAYJPNWXKFWOMHCVJVHXBYSTFLALPDRBCKPRAQFBAAQNZKZTYJRCPXRWXUQMPDTQUIMZNKYPUBDFVUINCWOFDVRECSAMHIBFSUVIBUJ");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 101U;
    tmp_msg_0.rgb_green = 167U;
    tmp_msg_0.rgb_blue = 195U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.9426488171595566);
    msg.setSource(57922U);
    msg.setSourceEntity(12U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(122U);
    msg.id.assign("DRUQTODCWGCXBGVDIAYDACINDUXNMJULABWRUGRFKFTJBUAIXFUMBXZYOEETKPTNENLYXJEQQZYJSCONSYBZPYSMKSLVVQTCIJMTHNXBKPCHKWHCIXQPRPRCGFIBGZKROWHFKFSYVPASLXMFWQJUJVMWLLNGOYVFHQVZLWHROULAPKMEKDWSEEGYPHPWROFAUSAXJRMSMX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YFNFUYYAZKUTYGJNQHVBVMLPACRLJFRHLAJQPCMOXTWTCANFUTFAIUUCOOQPHCUZESPEVQIDBDXDDCBSSOKTDIPFGEOMWTCEXMKZDLAYKPVGCOYZSYBIMLYHSLDRPZYWGGAPJXNBNPBTGZIJVQNHL");
    tmp_msg_0.feature_type = 54U;
    tmp_msg_0.rgb_red = 146U;
    tmp_msg_0.rgb_green = 193U;
    tmp_msg_0.rgb_blue = 72U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9873768215447054);
    msg.setSource(57379U);
    msg.setSourceEntity(213U);
    msg.setDestination(3512U);
    msg.setDestinationEntity(92U);
    msg.id.assign("XQLGQRUSRETQAUTVWYRSDLNXWDEFNWMVQQWGHEEMBKVCHDKAUYXPKSSXHCCMTIHPRHPJAXOPCGJNFKOZBUKTTTWLIHXGZVIILGGIRIXRSVZKOMZZOUITBGFEFNCZSWAOVQUUUSQTEOMDNFBOEMUWLWNWPMJHJDKNXPYNRJHDAYKYINZJYHAMVVVFEWOKZTOJBGVTGQZOCJKLBFAYYEMUYQBJQPCCFCMA");
    msg.feature_type = 181U;
    msg.rgb_red = 231U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.4355844001230834);
    msg.setSource(31149U);
    msg.setSourceEntity(209U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(191U);
    msg.id.assign("RQATRNZZUUEHHDKFIMQDNRZHGMBJVHYMZUERUSFLYZDVD");
    msg.feature_type = 182U;
    msg.rgb_red = 90U;
    msg.rgb_green = 78U;
    msg.rgb_blue = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.5361895307144039);
    msg.setSource(31177U);
    msg.setSourceEntity(76U);
    msg.setDestination(39369U);
    msg.setDestinationEntity(238U);
    msg.id.assign("WBSBBXVSYIUSPAMCPWSEWEQTHPSEMKRBOCKGNWECMDCVYVIXYHYOCQSBTMBRUWKQTADNNXJAZJRIPIJEZYTHLOAKXSRJVOWJWDQLLZHKHZLXFGLJIYZFMWIZNURYHXVXCEWDN");
    msg.feature_type = 51U;
    msg.rgb_red = 216U;
    msg.rgb_green = 145U;
    msg.rgb_blue = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.8970861097984353);
    msg.setSource(33368U);
    msg.setSourceEntity(138U);
    msg.setDestination(50967U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9353630559644865;
    msg.lon = 0.4744619338806666;
    msg.alt = 0.7732410075050221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.34109509013474826);
    msg.setSource(50816U);
    msg.setSourceEntity(23U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.9168496947213258;
    msg.lon = 0.9309889000515068;
    msg.alt = 0.9417941320928224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.4845692090151079);
    msg.setSource(34767U);
    msg.setSourceEntity(219U);
    msg.setDestination(53254U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.32062232708974314;
    msg.lon = 0.14293716234613174;
    msg.alt = 0.0067385543017021154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.06167385822092597);
    msg.setSource(5495U);
    msg.setSourceEntity(112U);
    msg.setDestination(65528U);
    msg.setDestinationEntity(99U);
    msg.type = 191U;
    msg.id.assign("HXHWJXHXCRFZHSKMRQYXCXXDGLSACNCHWBUJIVJNVOOPKWMKNEHVWNTGPMCOGATLPYVJIFHRPMDKNLWRAUSLEQNRMGTOBFOPBSXUACDKHTZDCKOUUCISWSZGRVEMLVIEQBYSAJOCKW");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.3999863143474468;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.621331152946378);
    msg.setSource(5382U);
    msg.setSourceEntity(19U);
    msg.setDestination(47133U);
    msg.setDestinationEntity(218U);
    msg.type = 127U;
    msg.id.assign("TQNQOKGCZTISXNGQLBYOKJDLPVZYEBJSPHEDCYWTHPICMUAARMIPMSAHVSKQAVCWVTTIUDPXCFJHZVFURIYIWZXXWFAFTMFFIADFBGOISMYSTRHDHRZQNU");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 32856U;
    tmp_msg_0.custom.assign("QMGGTPQTQHINPFQZLSUTLEUVRHRTDOKEPCPIJXBOJZXMNXHLGQGMTEICZSIYOANIUSEOLYADMYKJNRGRPPWSJSDBVJWXOAHNSKLEMPJTAXNGXNCQDI");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.388086420848646);
    msg.setSource(34461U);
    msg.setSourceEntity(183U);
    msg.setDestination(60989U);
    msg.setDestinationEntity(201U);
    msg.type = 251U;
    msg.id.assign("GFXFJBPPPTATKHYJJWXCGVSELQMVMESWHLRBGWMEIEGUWBHGWTOJLEZOPKACCKHZTQBUFBKHNYRQQWPNAIDAEGDRXBVFSIMUPWXEPOJQINTFAYQIRTESMHFJWUYNBGOJTMZLKDCIYZSMUCHADZMTSOASDMODCIABRVRWSZYDUSKUANNTJDCSBUQXOKFQKZRXNNPIJLKQJGLVXVZUGWRXCLOUFEXVYLTZHPDHFB");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 86U;
    tmp_msg_0.error.assign("MTYNDGEDPZPETXFPHQKNFLUJZFELNZBZMBBZGHWSAFROMVXUIEEIHYYVGZYMXLNCCLLERPJTGIUSWRRPGBQAEWJAAXFPOXTXCKLEFHJCDKCWZIRJKRHDFVTGHNKYKSDDBUPUDHBAJUHKMVBJEPMWOKJDTMXSJIOBQTYATNOEQWVXQGVVMCFZRQQFXNYMAYCRMDSULLVJOCAKUAQRRHDYOSOWCQHIIWFIIUNKBPWOLLS");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.2643034187948061);
    msg.setSource(18173U);
    msg.setSourceEntity(233U);
    msg.setDestination(22076U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("LEUMZKOPJTZCFVWOJJBQNDTCRCIFPQQFGUNFLNIYXIATDWNZTTZSRZRBYFGVXSRHOBDQUXYXYAAQLYWMHEZKHFEKJXCRHFOSLAZOYUTFVYOSYZWXUVAHAEZGNPUYIPCBBE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("INCTXWHNEAPDRXIAYYLTXBUNDGNHJILRLAZTGEQBYZPWYJWMLFVVYJGW");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 55189U;
    tmp_msg_0.lat = 0.5950250333869557;
    tmp_msg_0.lon = 0.2821438121058528;
    tmp_msg_0.height = 0.09295791458578695;
    tmp_msg_0.services.assign("ETJZRHRJLVPMCNFDXCKZAQWVECVMLTOVZNUNWSVTAYXLSSYISHMJJUWJGXLZUMJHMGTABQYXQSKSIITFFKENCFXQQADIMUYCAFLKDHDIXPOYHSHCBVIPJKHJMMBDTTRZEWLVYATVOHTXPPDNYGBRPZXEQKRWCPROAIGFNGAKZUWNOUROHWZYOQOIC");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.7453426740417151);
    msg.setSource(58437U);
    msg.setSourceEntity(129U);
    msg.setDestination(33924U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("ENOHXTMFTQMKSXBYDGYGHVWIPUMSTFQVAIHBTALGPHLKRIXNQOPGTWQBXKWWDPGEOYADXYVLWFBNJOPFPKZSCOFVGUUXJJWHYQZQRSJCCHSXNIQPILNZMDJEXRMTHWQIPKYNCSLHQEDFUMGZMCAZNUMDIFUZZWOGDFZLETVXOMELJBKURVARJPIBCKKASRVQORLDIRKUIRXODDRWNBTVBTMNBEOSFALUKYCSSPWVFEGEAACJHEUYNAZLYTB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OJWVPTUEJEDIUPPDFUNDQSFTFIOAFLMXS");
    tmp_msg_0.sys_type = 111U;
    tmp_msg_0.owner = 53235U;
    tmp_msg_0.lat = 0.019245091145495774;
    tmp_msg_0.lon = 0.6572548597206239;
    tmp_msg_0.height = 0.9336063022261323;
    tmp_msg_0.services.assign("SLJYQMSBGWHLJRSWEMTDRUKMUOTEHZCUUHHTGTMRXIMIXABSILXTAMVSIRKFYFDNQVTNZXNYXTJRFJEUHPXRBVIXOIJHSYGSGYNJEUWUYZQLUGWGOROEPDGQKQBTZYIBBNGOLAFAL");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.8737049822224837);
    msg.setSource(37448U);
    msg.setSourceEntity(75U);
    msg.setDestination(64693U);
    msg.setDestinationEntity(28U);
    msg.localname.assign("HUDZPHSWRKMICOZTRWXEVILUAXBYAUQQXSJQNMORZFNSYRCYFDZGGKTPJSUVLTQSYWHTKXDAQMOFZVKEEBHCBRXGESTIMCIDULBLZSGXLIOMWYVEWZQHWPZTFJQGJMNUFPNNHLPGIEAEANITPXCDBSGNCXZJIFXIVGUMKPVUBXCPROOYREFKAKWDDYJRBTAJWUNLYVTGIOVRUWSCJKNWBCYKPCOFLQVFLHZSDKMOHAGNVFMEHJDAOQBJTPQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.5406707273211518);
    msg.setSource(22854U);
    msg.setSourceEntity(223U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("QYWEYBUXNPJIYGXBIQVWVTBYJHNCCBQBTECOMXAMEFEEPUYRIZBKUVULSGPIGOJTHLURKFDKNAEWUPKVQYACMACSFQFRTNRGSXSBWLPRHITLEIMXFDKFTLGLCLRKDNHLGGEAZCFZZAMSKLSYZPEWKDXJOQMJDTKSVLNZTPXVZ");
    msg.predicate.assign("VENSXEXTWYMYNWXHMNTWKSBZDPYYTQKQLY");
    msg.attributes.assign("NEYCQEEXMJMZJGKSSHDSZWVFBOTJACEZJBFMFIVUCPDJAZJPMHXTWGYWSFRNBALNOZWOZJTXYUDXREEYNEJLWVGPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.8346979256782662);
    msg.setSource(42974U);
    msg.setSourceEntity(105U);
    msg.setDestination(43721U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("PVFICXPENBHNTYGUMCZXINQSLFSNFZHTFHIXGGJMEJYGBAWZFGPQTDKZCWOFJMCIJGWOZDLDEDXULIMGWAKGSQAPFARLEUWGDBPCMPWZHOKNXKLFBSTXROEKVIWLHRICYOUOCAWXYLJAKLNIVPDOMEVNIMBCESVTOTLZQJKXJUKGDYDBSNRUTRKWSVHQTYRYPNLM");
    msg.predicate.assign("TCAWSSGKZWPMKIXORGWDMSWOPHVYHDFFTAQADYZDPZMCWMCUNKBUCGXFONVYNAMVXNQWXANRZECJQDJEOEUOUZZLJDJPTKDLPAIFMKBMBVMUINCGGLNYUUHKFTVUQVTBEXL");
    msg.attributes.assign("STPIVLEVTNDNZBADFWIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.6511714456094118);
    msg.setSource(45768U);
    msg.setSourceEntity(171U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("ZOVGVLRBKJRXNCWNZZMYQRBYDLQCTBXPSCWIRZVIY");
    msg.predicate.assign("ZLCWDKHZYYNZOMRERCJQQXWTGRTBILSLMPKZGGFRDAUUAQDGTVWEFDSJGKSCHUSWFKSTJNSUVQKWHYZDBHDCIRCAKPYJXOOMNYYWNMIHTWIZYLCWOEEIUBKMSEVCOHHHVNPQRLNJJSRNOUIZUFNTMZXXF");
    msg.attributes.assign("JPEFYFAIAPZDBKWSGCDMMKNICFMOVBJCWQEEJBSJQFNVUMEYTKJZSZZJXXUGRTBNOAXOPIQAHKNSHWQHYALHHSTEQWQJNYIBGLXWXNBFFPQIDQYLRNTQTIEWYURRZPSPVDKKYKGIJUGFFILLKDXPMJPWLMVUOMCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.010130645367965818);
    msg.setSource(52675U);
    msg.setSourceEntity(239U);
    msg.setDestination(35233U);
    msg.setDestinationEntity(218U);
    msg.command = 211U;
    msg.goal_id.assign("NIWQWNSBMHWRLIYDRXTCAQMBOCKSWJUJIDADCWEZRZKKMCQRPPFTTXWUPSJMXPOIVTYQRNRTQYHETPVFURMIUYOYJFGFBSZFFSPEKZEUCHGUEOIDCZWNOKYVMCESRXDPVLPISDAOVGGOYOJUIWCVJAJ");
    msg.goal_xml.assign("YFBALKNSUMOTHEVSKQVBRJQHHDCVCHKQILDSWTIEFGTZFZPFCREXNARZGJXCWHWLIDQPGQGDAXUOPMJBXGGVIVERDQDGEFLLILHFEMVELJHPVUWMIEXUGITWFSPCNKPASJTNMOGOVVMZFJBYOQFNXCJTKPNJKIOPFAYLOKRUBOBHJIYRGHUSVXYAYXBNSXDNNMBYQRZZWZPCRAOWJZSLTHMICAUTQXWCBZYZSCYRNRPSDUUTLMQDEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.8894246966165481);
    msg.setSource(43883U);
    msg.setSourceEntity(170U);
    msg.setDestination(48779U);
    msg.setDestinationEntity(153U);
    msg.command = 49U;
    msg.goal_id.assign("QMMXQPQYUZXCNLMHLXWSBLWJCSVCWDPAXYWLOIYRJMRIHXFGUUZNZKKCRSUDPMZNCKTKYKQAHDSFOORBWVHAIFQIANHIVNAPXGPPVBEXWJTWEGTFYMUIKSTORAFVEEMHLKJDMTVFQMOTAXEELDVLBCZWBGOTCGUVGXAUPDYSIIZHEGDDBBTTGPGXZKDRFCBEHPOFQRKAFCLJONNFEQQKIYQMBZ");
    msg.goal_xml.assign("XSXLFRJUIGOHKLBAPGIQJDUPFDWIRNIVZSONKBABQJXZNNEQPFEYVXMJZIDZRFGWTLLAPEYRDWNVIXGCUTPMOHTQZEDCBPMLMBNHBGVGMCTOYOIDWWDKVNJSVHFFTKTACIOMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.5992829422558947);
    msg.setSource(35888U);
    msg.setSourceEntity(21U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(250U);
    msg.command = 47U;
    msg.goal_id.assign("BWRMVYXNDKZLGOSARGCSNZQJPETBXDBFGVOQEUYIXTTUIHQSZLZAHFTBQMEOPYIODJLGDMSBRTBTPKQANREZJGOO");
    msg.goal_xml.assign("MIOBPMJMDIRTLEROEUUPHVNWLHIWLUTVKKDJVEQBTSEZPOTIISXFPCSFTIEEGWLFQCVRLJNCALCWOCGVCNGKQOZYMSLOSFKYRISLAZGNDFNDAZJUQDKGTWTYRVPHRXWPBGROYBWXDZSBMEQSYKWQNXSVAXZBHZHHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.4897262887423881);
    msg.setSource(35028U);
    msg.setSourceEntity(191U);
    msg.setDestination(26676U);
    msg.setDestinationEntity(196U);
    msg.op = 5U;
    msg.goal_id.assign("VWZWVBPKYUWRVCREGWBQTAJIKEAI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CJUFFNJDLXQQRIXZEZPNXQSNVPPXMJGYBHEYNEKUYXFEUHWBDQVUIWMWWEBABHOGRYCNTKN");
    tmp_msg_0.predicate.assign("KMGETCYJZDJCTBYXRTDFEXOOQPLLUEHJHZSRJZNRIVMBQHHRRFBOQAVLNHUMIFEMUYLNXHZYMKEWFHTZDJWYBKIIWJLVKTNZEGYKQCKKWJNCFLOSJXLGAGCOUUNKBOKDGWDP");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.6941286064248479);
    msg.setSource(11268U);
    msg.setSourceEntity(208U);
    msg.setDestination(5792U);
    msg.setDestinationEntity(148U);
    msg.op = 185U;
    msg.goal_id.assign("BOAXYMJDHGPZVRWUAXIWBCIIFGIVEFUJHTBRVQJSDUK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VTOQKUTRPASDOVQONGCTBRCXAKKWPKLFJZNZEBTDROIBJLCDJCZNDEXKEMRHMIONRC");
    tmp_msg_0.predicate.assign("XNVOSSCHRVEKJFWKOWLEEVSBOSLUZXTLINGJQCVAHZTQUWDCKINAKDKFBMDDAXTSHBRVAEUHGMUGEDZLZODPFCNKIQFZGHUFYSGYZFFBTPOSJLICQQMQBGDIJQNNTOFJWCYSTVJKZWUBDKPLDWMPSPIQEXTHRCTRFOVBJQSXCPAKYXIPGUCCHZMUMRRJGXGIYAYHHVNPWX");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.3845284371098432);
    msg.setSource(22948U);
    msg.setSourceEntity(117U);
    msg.setDestination(53724U);
    msg.setDestinationEntity(6U);
    msg.op = 61U;
    msg.goal_id.assign("ZXXAEOMBBQYPUYVUJLCAJYYNGQNPTLVCYSWQFMHAUHSRQRVOHUWGOOOLOZGTBOFBJIAEUVJTWHTGKEYHHFCLJJLQAWKSNKJBZSWKCQIBADYPZXXRWJVXBMCPSIQDAGS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZRNTEYJSIVYJKWLCJWUDCOQSYZMKFFPVJUEOTREXRCFKDGAYIZFOQFTBWNCMGNKMACFLUHRSAYKVMEQUEFZSJSMKKSLJRPPIANUIJICHYNSNBWQMOOBUPMNBPMTZZGBEXGQHRSNNABVZEGHZIVFCE");
    tmp_msg_0.predicate.assign("RYZOTRGQPHXSOYXQYR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QLPWYSPKESXROGIHXXHOQYGXUYKBQDGNIBVWBHMOUMEGWVEPEVSJNJNUFJWTVWHYGOOHNJZQVYJFTTCIVZRPKOEKQRISMPNAGUTPTEIXCK");
    tmp_tmp_msg_0_0.attr_type = 34U;
    tmp_tmp_msg_0_0.min.assign("EXKKFGNYGLPAGLSQDVVYCDKHNUYVUMLOOREOANMMTZZMKHLBHVKQGFYOSHZRTRIJHCOPFUBJSDGXBZPHIZNESXIBCBJXXRBJZDTBQQSLVQEIUTXMSXEJWPASRGUIFKIYTVSYOAZHECDAAAOFPYLXIKAWXWEWLMVUUVWYMTFEPTMKCFRIJNJCNNWQMTWQ");
    tmp_tmp_msg_0_0.max.assign("DYPCLHBZNOJGMPJDAUWFM");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.6607264330097413);
    msg.setSource(43957U);
    msg.setSourceEntity(207U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(212U);
    msg.name.assign("HIADHDGEQKLFTNMCZRGJSQKOCFFKDEXBDVFRYGLHKNKSHVPUYAGTJNNBBLANOIVUGRISK");
    msg.attr_type = 168U;
    msg.min.assign("DGUIPNSEYMRACEHFGJFNZLTRMUAHRWEJIKGAVPQLPYJJCXXZSXQKIPLVZNBDVZUBXHLNTCAHWEPGBAMUPKMILSVLBFFIXNTNEONYCVRJRJOCDWQPGOOTZQXFQYKZPBEDECW");
    msg.max.assign("XHDFSUJNQAKCMPPDIPLUYPZLSOWFGCNTCCHXQIBWQMRHYLLJRFFRVSDBGHEZCPUIQHPDKBKVKKOIFSCRRQJMNGBTDGCQEJXGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.17421326526339886);
    msg.setSource(55163U);
    msg.setSourceEntity(26U);
    msg.setDestination(15640U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RZGGIPOYHDWMAXRTKGCLWMODKIEUZHWVFOMPPJAZEJHQIUXDXWBTISJZEUOTAGBVBEJELEPGXHIBSSYLKNBJNYYAQHJCCFDSPPKCIIORLEYBMUIR");
    msg.attr_type = 93U;
    msg.min.assign("UIFXYAKXLHVVUWDHTPAMUJYWVCYQSLZOWDRLENYSIUFRMEPNVZBHSUIYJMOUQNTZKBTZBSRJHMNFEDHWKCBDIXDMFKFMXNQVEAYBXMNVREOUSIKJZWWKTPGOIODXMLLALGROSAECKPRTVGX");
    msg.max.assign("UAITJJMVJCFXVHULPGELIECNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.7791851837728226);
    msg.setSource(61421U);
    msg.setSourceEntity(247U);
    msg.setDestination(39816U);
    msg.setDestinationEntity(195U);
    msg.name.assign("ZZALXQTTCBBWMMBDJYYPOLVDPQHIOTYWTKLUIWHDEIPMDDQVHAKVHNLLPTWIMFCCURLYAVXXRXNGRPEOFUMSPDSOTYSYNSRFGZUGFIWSCFKUYQKGURJJRUOVUXBKQMAWXNIXEJHSWHDOZDNIEQYXKPFJALBABJGKLJDEOERCOERMRNZNSZEWFGUMTPHECFLVGGCGFATBMGZSXCJHNPQBAVNLVOIIANYSIYBVTQKCEPQCTODBVUKRHXZZZKSWQ");
    msg.attr_type = 221U;
    msg.min.assign("SRADGBDTNLTBKMTBARHZIJBOIFZVMXCQTYKPNTNQWJHNRWCCGDYZPAJEDKQWUKMXSLMKILAVIRPUJLWBMKECNKIDABDJDZBOE");
    msg.max.assign("FDGIEQTUZGETSBOLXUQGUAWIGSTAEHMJGINOLNOTFPOMCXPEWKUHPJQJUBXNUHOGTKEXXWBCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.8750422113718966);
    msg.setSource(17901U);
    msg.setSourceEntity(94U);
    msg.setDestination(1342U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("QJRMFNVULVFJYBZTFEM");
    msg.predicate.assign("NEOWMAOVBVOGWULTYAGFDUEIRYHWBWTSNZCTWNOONHCKZPLXQBQQOQGUZFUZJDGARAWHPVDSKAOSKUCKNIKJZRNLMVPRSUBIKLUAFJISQOEESGLUHMRRMMFBZRHVQYWUEKDELHIGVMAZYPMCEJZGDLBRMWNXVDXDCPCCOQFIZCTLFYWNHTJBVTPIXCBHJEXGFXSDQXYTMLXJIKVETVJCSFFXANHRHRAFIXYSAMJTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.8444767741125497);
    msg.setSource(64985U);
    msg.setSourceEntity(134U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(4U);
    msg.timeline.assign("LVWKIORYRVQXEZHEOVNPDSXYZGPWMFLUOIYMXDHVBTEFMKPZLKGOKOZACNSIDDSYFGACWGZUQHUARPYXZQFYWGAGOINVMXDH");
    msg.predicate.assign("LXLMWYNNVBWCDVDSDZQAOENABUZCYAGQCIMPFHSCWQJQAFHLBCLRUBUKEUPEMVNCGSMFFKHEZGASNFRLQIHBQOXGVDYRPJXUFLWJRXPLIQRIZNSJWGJHUSDZDIAJWUTTYTRLFCIOEACBGHXVOQDIPRKAIIKFTUHEVYOGONZJXEMMQSOJC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AODBIYNUASTWPFVKOJOJLZBTDIYIXBVSSMQUBYSCQVANAVRMVMFKWRFJUKPDTJKOVUWRLXLMVHYVZTMPRSTEQHPXXTGEZFICITNHCRJJLPFUYUGFMGDMPHPKEGNNDFVSJGLWLYOWLUROKJOWNJECKNPADXAMAHMUTUCXOLRHDRREHAWZNIYOSSFQPWLEPIWBHVLWBHID");
    tmp_msg_0.attr_type = 1U;
    tmp_msg_0.min.assign("XGNPVRPXBDCLQAMPKC");
    tmp_msg_0.max.assign("AHUFQJLKIUYDAAGRTBYSXYRHNNMMMAVUWULCRZJTAXVENOPLZMZPRNXISZEQWKOQPZSJHKBPGRWQBRVCHBBIGCPTTIUYBWDOXQHNMZEFUPTVSNXUGJKCJELDRVIXQZHNWQTKCX");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.45110199077448865);
    msg.setSource(17034U);
    msg.setSourceEntity(122U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("IWZPHXNUTAKPCLUPHGHROZSSJBAYQMQDEINRRDWNSYCSITMCKVBXOCAYULFVMUIOBQXNWXUYKIVRSOMWULJSGGNGGVCBRNBHLSEWKMSFKKJTQYLRVQDLPARPMVJDEFYXOZNXIOGWKYOTTCHMMEBFNHGGZVZZWPTZEIIETLONEQHLQJFJHYWDFQDPIXTBFGDHVUZABMUDTYTISMXPJKBRXU");
    msg.predicate.assign("EEXSUAGLJSCPWNOY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GYEGYMJLRIKJNZRWYSPAPCZFNFSISEOJXOIRGNUHVKDBJCTSEWZGCWCRPLVDUKJGNBODXNHEWQOTJRWIFALRSEUZBWICYXZBBDHRIMBTLQYQXPCKLTJTHTUYPUOYFVGEOJRZSUQPZKMYASHUEHIEKVGXQNIUVPFMKFORSQSKGAQFNLZKWXPZGCJCABQNUJMWXWCFAPYWDLNDGVAKHEXQMLB");
    tmp_msg_0.attr_type = 98U;
    tmp_msg_0.min.assign("TCUWGNVEVOULHMVRTUHIQBQGWZAFNKDNNYQXLUIHZXQKBZDLEJLNRCOUYMFIUWHCZ");
    tmp_msg_0.max.assign("LCWAQOOGBKCEQCDQWNAEVVPFOGGNTUJMCRRQSTKISYLOUOYNFIWTBQSWYIHTHPTGHUEWXXVRLFIFHSJTACIJMUMXSBYKVFDGNARAYIHCEWUERVWVBCYBXJRWTSMPSLNLBZDPVZXHMBSYYXPZBDKUTIGJONEAEQFOQU");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.14637657927488745);
    msg.setSource(63392U);
    msg.setSourceEntity(12U);
    msg.setDestination(8666U);
    msg.setDestinationEntity(114U);
    msg.reactor.assign("APBKKEPVTRPOBDNISNGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.7762659145936988);
    msg.setSource(57913U);
    msg.setSourceEntity(123U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(227U);
    msg.reactor.assign("VCQZQMKWTYPNDEPYNVSDSIAHXKJIIUXSMFKSFHFCHWNBFPUGRCJVTORTYUWWDBYNGFWWDUTGYPKBLEMYPESSBOQLGDAQUYXXKXPAVKNTCKAJLGAMINCBMZTUVPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.03058411323000787);
    msg.setSource(6419U);
    msg.setSourceEntity(113U);
    msg.setDestination(18869U);
    msg.setDestinationEntity(217U);
    msg.reactor.assign("MGZUNJZVCJNMVHBOQWAMUKYNBNGEBLKREXIKCGESSPDDYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.03468967729098926);
    msg.setSource(11017U);
    msg.setSourceEntity(117U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(86U);
    msg.topic.assign("KEKPCZYRQJADLFDATXIVSQHVVUSTVILJQOSSVAJTIWFPBEOIDGJWIAQCQDWJCZKCXUAGTWFDXWDZJGHNEMDARGHWQSJYCUHFFHINBMFTLOFE");
    msg.data.assign("KUNWISOPYDOKFWFJWKEVHAIKKKLTRDRMWFDSBZIJQCSNVFUQVPLOCEBEAXGFVYMZPSMURHIAZFXMCINZWXIOBLMPDSSGCQLHKQVGBIEURZZPRYGHJSFPKSGEDVQKBJYHFDEHNEMTBRGQVVCSAXXXYXQXQANTNZLWLFEALUBDOQJLMYCRKWNAHCUTOGRCJIHMEIYDDIHYPYWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5553179415627947);
    msg.setSource(55025U);
    msg.setSourceEntity(116U);
    msg.setDestination(40626U);
    msg.setDestinationEntity(238U);
    msg.topic.assign("UHYEJCDICYBGMRTKQGBXQVQXBLLGAALKPOTHIGKUPTFVWFWHQCYCFJCVLZGCIDALNNTWHWEORHOGDMPFHEDZIEZQNKQVQUCTONEXAAJAEIWPPCVCHXMHLSIYXJIMANBBMZXQOJSPYVWJZFWFEYRWOPESOYTUMZJDIEFNHQRHBPLOYTVFKQOZKRUDRTMESKWPXJKATGKBYDXW");
    msg.data.assign("WZCMPXESHFNLTAMJNNPCEAVCUXBWDMZRUUHVGFUNERRTCDXDWNCLNTYJOUSJKPMYVKRMOSSSGWPWDDWLZLGZTUQKQBLOAGYRQFLIHJEQQCWMKSYXQDXBQDVKSIUBIAOBHMEUYNJEGCZFWWYOGZQFVAIYTTXHPRPFLMZGVGRXABQIAMZTILXRUSBSPHGJRZFDTBWNKMKQPEJCTEIPKHLNVJFGDAHBIAURATVZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.006857704644905649);
    msg.setSource(33417U);
    msg.setSourceEntity(26U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(35U);
    msg.topic.assign("EXCPWDKXAUTPLKUAKIZPNBOYWEKACIINSQTYBLJYUGRYUBTXFKCERVPTGOBBYZQWMVQHBZCOXVR");
    msg.data.assign("RRNDNHYWLKWFRGJRWXIFECWSBFXVKNTDONECEGTPYZHHTBLHYAPEVSFJUXAKWCXLLMYSTUFTJICEYBVGPSWOCIZMYSZAJMSLDHTONLFLJAQJUGTSBVJBDPXEYBAHOWPXVZMPZQIASNZNUEJTEMYXJAIPIJAVQRGBUKXRTOXQMUSNUPCZUWGMYKOQDIMZQFHKSEQNBDDVQALGBICHVMTLKIZGOOIRVGFAWDQQWKDRFFDHKECORVCNLZYKOBMUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.40379828105394766);
    msg.setSource(19626U);
    msg.setSourceEntity(84U);
    msg.setDestination(55287U);
    msg.setDestinationEntity(26U);
    msg.frameid = 125U;
    const signed char tmp_msg_0[] = {95, 109, -110, -99, 29, 55, 116, 15, 28, 25, -88, -18, -46, 8, 18, -56, 23, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.7825530570665266);
    msg.setSource(28333U);
    msg.setSourceEntity(73U);
    msg.setDestination(53893U);
    msg.setDestinationEntity(199U);
    msg.frameid = 139U;
    const signed char tmp_msg_0[] = {-20, -2, 25, -34, -53, -80, -49, 59, -100, 49, 34, -122, -98, 60, -115, -125, 64, 58, -57, 108, -125, -101, -31, 22, -106, 113, 110, -114, 36, 55, 34, 72, -99, 23, -115, -112, -26, -27, 61, 86, -95, -95, -92, -128, 57, -20, -13, 32, -37, -44, 29, 64, 57, 34, 27, 27, -85, 12, -92, -70, 70, -99, -77, -9, -11, 125, 58, 1, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.8261622069846862);
    msg.setSource(17956U);
    msg.setSourceEntity(87U);
    msg.setDestination(55145U);
    msg.setDestinationEntity(188U);
    msg.frameid = 107U;
    const signed char tmp_msg_0[] = {-42, 99, -76, 8, 102, -34, 99, -122, -10, 56, -112, 82, 91, -108, 68, -81, 27, 37, -126, 17, 86, 122, 20, -120, -121, 69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7170470469467115);
    msg.setSource(65509U);
    msg.setSourceEntity(80U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(87U);
    msg.fps = 206U;
    msg.quality = 83U;
    msg.reps = 165U;
    msg.tsize = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.30551967579425154);
    msg.setSource(36353U);
    msg.setSourceEntity(249U);
    msg.setDestination(25945U);
    msg.setDestinationEntity(194U);
    msg.fps = 30U;
    msg.quality = 144U;
    msg.reps = 196U;
    msg.tsize = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7755659548513327);
    msg.setSource(62024U);
    msg.setSourceEntity(119U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(5U);
    msg.fps = 117U;
    msg.quality = 93U;
    msg.reps = 201U;
    msg.tsize = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.1469326305365799);
    msg.setSource(33195U);
    msg.setSourceEntity(236U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.05940171766219804;
    msg.lon = 0.8113482408212433;
    msg.depth = 36U;
    msg.speed = 0.6026647025649268;
    msg.psi = 0.7587387781104296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.1937381326915001);
    msg.setSource(37343U);
    msg.setSourceEntity(212U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.9435757815862982;
    msg.lon = 0.06331938631123823;
    msg.depth = 126U;
    msg.speed = 0.38954985251075513;
    msg.psi = 0.3263597802165574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.5917362678377183);
    msg.setSource(31580U);
    msg.setSourceEntity(214U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.9456847946514735;
    msg.lon = 0.9374693835945365;
    msg.depth = 131U;
    msg.speed = 0.7000874182718932;
    msg.psi = 0.7819839982408955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.35059569486880404);
    msg.setSource(11544U);
    msg.setSourceEntity(85U);
    msg.setDestination(5619U);
    msg.setDestinationEntity(201U);
    msg.label.assign("KHQQDBSOMDRDQXHYWEKRFGTOKTAGJWFMLAOJFKWWP");
    msg.lat = 0.37750765689314203;
    msg.lon = 0.6257457333090486;
    msg.z = 0.9493279055207043;
    msg.z_units = 3U;
    msg.cog = 0.207971472055257;
    msg.sog = 0.049297987870296045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.5914405023298905);
    msg.setSource(50469U);
    msg.setSourceEntity(42U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(72U);
    msg.label.assign("AUOQNERSXZHVDJGARZDHBNSFIIAXMIETHAKLWJMZTHJQGCXNPQJAHSANVSPNESMJWWVHEVMYG");
    msg.lat = 0.9277739236686923;
    msg.lon = 0.1983657934070142;
    msg.z = 0.783812599013461;
    msg.z_units = 220U;
    msg.cog = 0.35196079659002644;
    msg.sog = 0.4868663135744684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.9017719850672539);
    msg.setSource(46973U);
    msg.setSourceEntity(239U);
    msg.setDestination(56110U);
    msg.setDestinationEntity(248U);
    msg.label.assign("TSERCKFQIKVXINBWMZGWLGQOOFQRDUBKCTDIBKCUUCLHWLQFUYZODSVQFWHBBHCFMMYDDCWKXXPQNWMURECHNIDNJBETHMFFHPTLVMCPPEOQPASVCZERJPRXLGGMJHTHAUAOBRRHLBXAZBJUBJPGIMDFVWPOVXRAEISKGSVKYMIQKWZOAEDXELIAPQTJHNTZALEZNVSTNEVOOWFXCJNMYUAF");
    msg.lat = 0.03970949576118388;
    msg.lon = 0.21943283196391128;
    msg.z = 0.0146160407183904;
    msg.z_units = 235U;
    msg.cog = 0.7675920654875743;
    msg.sog = 0.30537942318911804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.29474451304810223);
    msg.setSource(52339U);
    msg.setSourceEntity(246U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(167U);
    msg.name.assign("NDQOOPECLDSMTLJWXRCQQUTPEWCXJYMZPXVAHOIALXOBKYIRJJEFHOGZVIVHYBTKYRGRMBNTMZDGLRLJWSHMHEXMVNYIRHEGNZSYHDFWDYUGOIFGNLUSLWHETYZEVTDBCKCEJCQNPBIPIQTNDIFSUUEPRUBIABTJNGUQJWSPFCBYQKQAWHKXAULUDIUZNWAOFXLVMTVFDSRGKZHQP");
    msg.value.assign("ICCPDQOJCLHMRYUCAUCQJDFVLGYWZJTJPDEMUWVWDDNYMIGNTOLRFVGPAZWNXVLPVSQCEZFMWWAOQMBIXUTPBVVYLJHQDFHABNURGNOBBZFXIBTTWSAVVLHZGBSSEBSFHKTHJAJKKYGOKGEDWOFNUGCGTIYXQYCZHVORLWZUSIPIJNMSBXIYDDLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.7951031830775326);
    msg.setSource(26676U);
    msg.setSourceEntity(117U);
    msg.setDestination(43509U);
    msg.setDestinationEntity(138U);
    msg.name.assign("UOIELVSNRTOJWWCSEHNUPUBXDAUXLCFJBIPSNWEAYFTCLJMQYRWFLJLHXPHLHPIKJHEQKZYW");
    msg.value.assign("IZNGAUQOVTQJRGSUJHCMFSRGLMHQVASTNNOAUONMFVCXJWELKZPFQKUYCJFPSWXKHWQHWLGACTMKDDXTHIUYDCLRBGPKWBVCRFSNBTZZTTKFTJEYFGEVKMQZXWVMIBSESOBWQXOOUAYAHGDCYIGMZLBTVRPHEPFNQNDEFWZAJZDIHXBDVBPIPJCFQRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.1319684594365481);
    msg.setSource(64067U);
    msg.setSourceEntity(99U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(31U);
    msg.name.assign("RGSEYCKGXXTYFKTBAVPZCNSRSPSAQOMMIULOVMOQUPSPRPDYEJISTXGPMZNOZXHLDQJKKXRGWLLIGNAGWENVIHMBKCKXAPMXRJVKUFFDSCWWXZCGBFTXWYZLIVQEHOCYVLRJWLAMJVHYCRSIFDEAUQBFNNKYJ");
    msg.value.assign("BYTJEIJRTVRZKNUTRXRADBLDRLWAIEXUEYXHQOBCGMSQEUVQKJHHURRIOUJXPCJYBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.016161490140545687);
    msg.setSource(8914U);
    msg.setSourceEntity(12U);
    msg.setDestination(38636U);
    msg.setDestinationEntity(249U);
    msg.name.assign("WLRVZZLNMEYKLXRPWLENMHPDZINMUEKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.10121773778427656);
    msg.setSource(52526U);
    msg.setSourceEntity(48U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(152U);
    msg.name.assign("ABZEVTQFYMEVUWPUHIPUYXFKOKSLKFTDOYDVTPSAPCWEMOMLFQAZBZXYKXPUVTSCDDXRCZRSYGHHHQESLEJFDVUOOPNBCNCYETLJOYGBNUZUEUCAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.44794367789790246);
    msg.setSource(9843U);
    msg.setSourceEntity(16U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(211U);
    msg.name.assign("SFVTWINGPRSMNHLWECDAVEOWBUPEHVNONIRLQSDCPOOOKCBBFHQJXUIXIFZZHCNLFYBVASUPQTRJYOLNYGLMADWYLTCPBBGTDHUPPHOGSFFEODHBLQNJZAXJBTFGWXCWSKXNNMCJAKERCANTIMOMSVQFRRXWPXDTFWACSZHJGDZMKWKRQTEGYBOQLLJAXYSYETLUUAIZDEEZEXGDRQUUGSKIJYJJUQIZWYKAICVFMKQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.8168820420791275);
    msg.setSource(19174U);
    msg.setSourceEntity(84U);
    msg.setDestination(45182U);
    msg.setDestinationEntity(114U);
    msg.name.assign("NBZCWKIJGEKVWLHBGRFDMUHACHNGYHAIPAYJQYWVQPGMUNQINZTKSNTZXQKSIOPGAOLMNAIBHJVUKEGUYADRMFXMJRHEHEVTQJRXMKNLEYGGOOPYYZDOEDWXDSQVWINKKFCXRDOOPEZTPJSEBWOJZPCUXAEMVHWZBLPSLIDAMJTZJWJKQTYMCCXLSXTXIDPHEUVYARL");
    msg.visibility.assign("JQHCEHSAWSFAPLFIYVXDOKVQSAXSVTMPGVXFPUGNTMXSKYAJGWPBBPHYQVLZDZ");
    msg.scope.assign("BCMEAESKYVZRUKQQYOKKFYHZHTKTQPNZYBNLXYHRUWLVHLTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.839685548536991);
    msg.setSource(46158U);
    msg.setSourceEntity(71U);
    msg.setDestination(57561U);
    msg.setDestinationEntity(242U);
    msg.name.assign("KIXSBQXABINZIJMPFGOTGMURGGZKZRFTNWSIOJLFYFHKMYRCFPTXSTNNLWEJWWHHDDHRAYWKHN");
    msg.visibility.assign("PTCLIEOHGYWUFSYXOSBQBJLFMMDXOUKEKDVUGTGQWUGMSJESKXWIZCHLJAOVKVCQZPFSJRQWBFMTVSYQTAYQUJLAFHVZDMHBVNYRTSGPXNUVHDNGJDZNOLZLOBPHRXVICGKILFCHJULGOZQCVMXEDEWZUPAXLTERPHRFXEODNNCBAIRIMFYY");
    msg.scope.assign("ZTSKDPOMWSOPFHJIQQZCJBGXYALUYZMJWRGSUINJHTIRFEEMNLIVLFRFBQZQQYHRXQYHWWKYPJZRCCUHNPWDEANAOTZKNXJBWDINZDDMPEGOCVYFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.7612959190769524);
    msg.setSource(59035U);
    msg.setSourceEntity(133U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(74U);
    msg.name.assign("FGFWLYDASZDHOCDZDSONIHPYYJTOUACJQPEZRWHHTBCRKJYXPEHPPWGIXNLLQABAJNDKQCVMFVIQMJWGPZOMFITOZZYVLBFEFOVSEVIERBYLTSVBBYGRRVPNMJAXSIZUQLXTQJDAJTUVCHIMDDMWURTCRS");
    msg.visibility.assign("AHWHGEKLYODXSOAKXHCDVUNYTLGVLQCPEGEOQWROIBWUKDWYQIIV");
    msg.scope.assign("AFPUQCDKUJJFEKGPEGPTMMOWEONSIVYLSIQLRBAUIPWNAZFSJDDWSWKDHEJLYSWVBXOYJJIFVGOJGHXCZFHCEUKYOIHEVNJDZIBVNNEJOXOXGDTFMZKRSTKWQWHSMCUNQNYWSVBZQRCKTHMHRGPHXUXCOVNZVUCTLIGBZKIOBRBDPTSYXQLDEMUQBLQAALAPDKUPTZCEGWTRNAMRXRXBFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.2658609463249325);
    msg.setSource(14123U);
    msg.setSourceEntity(63U);
    msg.setDestination(46268U);
    msg.setDestinationEntity(234U);
    msg.name.assign("AMOAZHOFEQDJGLMNZLKDPHDLBXFTQAOBCFLFNKJTUFDZWETOQQYNYZRHIIIPCRWJEGDWWMPUJVRYBKZCQLYREWHUHEHYDVOANWXUHKXSTXMZGGTUHDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.34548698447032145);
    msg.setSource(6032U);
    msg.setSourceEntity(89U);
    msg.setDestination(48875U);
    msg.setDestinationEntity(64U);
    msg.name.assign("DKNKIJXKBABAKBVWNYDRFMLENGACSFHARWWJKOTJXETSTJPIVDLMPXYVLPZLYXMYSBHIWSRUVJPSIWVCWNGKMVSRTQRZZQOHHETUMWLUNJQRPMOYQIYEEFGMWGHSCFVHPOYFIFZXACUJHCIDUVKRWJVTLQTDDNPZFOQHNZDZRGPSZNEHIOJYUTOYNAMOKGXGMXMBTZULFOBVAECD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.8018673641417389);
    msg.setSource(32153U);
    msg.setSourceEntity(101U);
    msg.setDestination(27645U);
    msg.setDestinationEntity(242U);
    msg.name.assign("OMSZHAODNQYVNAAYMWJFFPGYWZBNCIGQAWIMCVVTXPTVCFUHPLIUMTVIOIPFCGDXUDZBQTPQZRYQNHTSFDSXKZUSYOGEWERWPXRRZBETRHHJSEBFOHEXODQRKEGCDBVSHBPGUPZLIADXJQSMFZKVLGFKVOKYWCYKRSCBIIGDUWGMMSTHBFJANKVJKPEUXLJACNSLIKUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.7333797289577849);
    msg.setSource(16760U);
    msg.setSourceEntity(77U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(222U);
    msg.name.assign("GGIMEGWIWSCAMDRJBRHNWNUVKZPYJDEFVTCKRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.30714985834272057);
    msg.setSource(27126U);
    msg.setSourceEntity(17U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(227U);
    msg.name.assign("FDHEQZEVMNCQRYEYSPUDUSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.9150983902497201);
    msg.setSource(4711U);
    msg.setSourceEntity(191U);
    msg.setDestination(61827U);
    msg.setDestinationEntity(29U);
    msg.name.assign("JMODDFCKRQVIMBUKEGPILNNDGNMHOBYWVHRITAAAZIKOZGGERUBWFCQHRZZJBJMPIVHVAYAUWTJEXFPYRTJGXZGFTNXREZWMHUPMZVFJSKRMLSAPDIRBWGDXXCCCLADNLQSOWQDFEBGAQYNLCBNSEUUHWVYLPXLTTVUQYCDJIXOMZESXWLHYKBFUOMFPPZIVEJLJOSYVTYNHQONBZPPBIANUUVQEKAKKKCODKHJSSDXTRSMHTXWWROGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.002023841650690139);
    msg.setSource(40169U);
    msg.setSourceEntity(56U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(154U);
    msg.timeout = 1000412569U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.2630715410749477);
    msg.setSource(21245U);
    msg.setSourceEntity(74U);
    msg.setDestination(7331U);
    msg.setDestinationEntity(138U);
    msg.timeout = 2978101291U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.5270696485464277);
    msg.setSource(58361U);
    msg.setSourceEntity(55U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(71U);
    msg.timeout = 3930115207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.9973323710918811);
    msg.setSource(45241U);
    msg.setSourceEntity(108U);
    msg.setDestination(40985U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3542238845U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.45929777443472675);
    msg.setSource(63119U);
    msg.setSourceEntity(250U);
    msg.setDestination(38563U);
    msg.setDestinationEntity(156U);
    msg.sessid = 2312962259U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.8668186781137995);
    msg.setSource(17681U);
    msg.setSourceEntity(136U);
    msg.setDestination(44784U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2065653948U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.18824491596046444);
    msg.setSource(21728U);
    msg.setSourceEntity(61U);
    msg.setDestination(31043U);
    msg.setDestinationEntity(229U);
    msg.sessid = 1445519660U;
    msg.messages.assign("LCWFKTIHZXEZWYQAFJNEDEMIRNYSURNWYGKLPSLRSDLAGPKUIUMYWHCBHDSNXBACHHLCCIRDGLAETFGXKTSOUTBUMASZWKCGHUDIBSFVOWZSPRQXDZZOVQURHDXHFTJPLQNVJMTBMYFKGOQHTGZEEDWRVTOJDWAILYCMUIJBCIUPEXFPCHPQXJJNSBOWEMYYQPKMOBVXBGXNMJGSVTLENKXKBWIAYDUOAARQGRVVZTYZNZJRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5211079689424003);
    msg.setSource(28754U);
    msg.setSourceEntity(42U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(191U);
    msg.sessid = 1497180526U;
    msg.messages.assign("BZOKCMWTDTSGTRYAKXATRBQELEBIXFUYRDOMQPXIAXFVAUYDJPGWZHGRBVSQZMQPRXCEJPGKOPRJAIDYJJAYTGSZXUYODNPTOLLUMCWKKDHLOMVOLHAXPWWZBRNSXYTQZUFUXJIKUEONLTEOQBMOLHSARVJDJFDCHMEPCIBTCZMVURYHFUGFNSVXMHCGGBSEELJZFYCQBNDJNKSHCBLTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.640900210928887);
    msg.setSource(55065U);
    msg.setSourceEntity(62U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(35U);
    msg.sessid = 4085443261U;
    msg.messages.assign("IEQJGCHSJPCXIVZGOHSETKVUZVBYJOTADTDWZVLFCGDXBSADHYJTQPEERNNKJPZSTTWBKUXMISFHDWPKBQLWIIZFMKKSUHXQRZIGHXRGYFDHRLQQNBWBUNBPWPQRTCNLWNOIMJNKZIGYLQCUPPXXLMCYHJZBBNERMFJMDEDWHTHZISMKGXAYEGCVVKUULRADOOUCALJCAGROELKLYASVNOUTYRNUFSMIVDACFOSAMZFQGRQOTPAJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.22045936240707553);
    msg.setSource(11089U);
    msg.setSourceEntity(100U);
    msg.setDestination(12273U);
    msg.setDestinationEntity(129U);
    msg.sessid = 3727957209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.5940964267662179);
    msg.setSource(31810U);
    msg.setSourceEntity(126U);
    msg.setDestination(59182U);
    msg.setDestinationEntity(127U);
    msg.sessid = 2327009472U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.6236980223827374);
    msg.setSource(29207U);
    msg.setSourceEntity(232U);
    msg.setDestination(18119U);
    msg.setDestinationEntity(250U);
    msg.sessid = 1764119261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.5218756758661794);
    msg.setSource(14594U);
    msg.setSourceEntity(248U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2409989641U;
    msg.status = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.23196244939681288);
    msg.setSource(13506U);
    msg.setSourceEntity(7U);
    msg.setDestination(14161U);
    msg.setDestinationEntity(81U);
    msg.sessid = 3483886367U;
    msg.status = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.4221355548881186);
    msg.setSource(32712U);
    msg.setSourceEntity(250U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(227U);
    msg.sessid = 2185902830U;
    msg.status = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.7404379142176175);
    msg.setSource(51732U);
    msg.setSourceEntity(160U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(122U);
    msg.name.assign("OMTAPUZYXCKDMCBISNFJRLVHVLLAQWZQXXITZNUZFAYVZYAMYOPUEKROHPQUGQPBIDRFIXGYPNHGPOUGIWJWWTKFSNEJQSIIOAHODVCDTINCFYFMFEWENXHTEIPYKKDRCBSTXRZZMUDFBGJWGLFCAQXHJOTBZQQPREMSSCYKRBATJQAUJQCWTVMLHYANNBLIHNDMPDLOMEDJUXWSEZGAXWUSGKRVRBPRVLOKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.3003975547940474);
    msg.setSource(39525U);
    msg.setSourceEntity(78U);
    msg.setDestination(29450U);
    msg.setDestinationEntity(144U);
    msg.name.assign("LPLGESBTBWLMGQRNXNCDBFRAUSODURXGNOYTGWLMWSAQJTIXHTKPLYUXEJHGFUTTBFIMANBKFFXSQDFDRYKGIIRZHZCESCBAADVHAEOJHTEHVOVKJQWZYXYEISWEWTKCVBGAPQMAUPVOZCCFZLVLAJKFVIPOQIIBEKIZBVORYZONWQDMUUMHNMLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.8511213252569058);
    msg.setSource(17229U);
    msg.setSourceEntity(23U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(164U);
    msg.name.assign("MSYLUIFVAKNEGTKCRYMBZWWMLGKLNXWVOBUNOQLPQPOHXFDHZAACVYIJQDCHUSORBCDTSBLUGEKRBAEEPNFYDJSYJFPHFIGGTOXBUDMOVIKBDSTUMZSHYTUQZCIJHNUOVWVTVQIFSGMDIWHJEQHLGYSFTAEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0967277598384505);
    msg.setSource(31352U);
    msg.setSourceEntity(54U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(190U);
    msg.name.assign("CWYUQNYDHPTGKZKLEJDFLGILBLFRBRISYMQHPVZPSUDMVKNKGRCBAGKJUSXUKJTFTJRHHPMQOXTSTXMKCYXOSTRXXSMBIACD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.3177778690123554);
    msg.setSource(4190U);
    msg.setSourceEntity(254U);
    msg.setDestination(344U);
    msg.setDestinationEntity(246U);
    msg.name.assign("KIGICJNNLPGIQACYNYXPPFEVGXARZUIPEJZKWKSHZYLRACTEERZBJWHDGNKLAWGONOOFXRTQKVYTTAZJJXBFWPQOCSQIHSOCIVBJOMRAVBXDCVEGCVBQMBHHTJDGDJMMGQUQZOUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.16501128027466128);
    msg.setSource(38938U);
    msg.setSourceEntity(13U);
    msg.setDestination(39594U);
    msg.setDestinationEntity(193U);
    msg.name.assign("KCVTZVAWJZIEMEJHRHRVRKQAIVYOPHCSBHELULIANKSBHBGQJWZYPKLJMDGTNNDPMWEQENSYTXDHVLGXUPFSQTICQYNGFXAHIRTDDSQREGOYKFZRNXUDMGXUBEUCLXZCAENCZMOOORFIJCVVKYAABBOFOXRTOJWJCQPSWBJPJONQIVBPRGHUFKWDXGABIAFUKVCYKYMCGSXFWMLSTFPLNZGUOPYUDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.9268422840403646);
    msg.setSource(53387U);
    msg.setSourceEntity(154U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(214U);
    msg.type = 38U;
    msg.error.assign("XDMXGGFZIXZSWLTVPWHVAHRMGWNQPUKIIZAFLXMPIANCQFXEIYYJEWDMNBMQVWTEUJZGPFZQJRVLORZLABYZBYTOLTRPKKDRVGAMVEBLHTANRPKWCMRJCNWYCEYPUCCDTSYRYNIVSFSCMUSZIBWVWXEXEDBBJXARYLONCJQUGOJSDNKFOIEGMXORBCQIHUFUTHDJXGNPFSDGHYPPEBOSHSUQQATJHKHTJEOKSFDGUAQDKLHAWKCVTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.9520131331428173);
    msg.setSource(41440U);
    msg.setSourceEntity(177U);
    msg.setDestination(4405U);
    msg.setDestinationEntity(138U);
    msg.type = 165U;
    msg.error.assign("MTIRKXKMWWBOSOIPWAIIMBDET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.6735330414006434);
    msg.setSource(21841U);
    msg.setSourceEntity(233U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(0U);
    msg.type = 91U;
    msg.error.assign("SKSYXTCIFQGOQDCUENHKDVXGBVVHMYXVDRJSKZWKULADQMAZFCIIETQJPOJJBIYRGKYKXDXFNDLQORVMGTGOJRINSHQWAYWDAXUYJWELPNUEVHTXUKLWPNTCUQPWFMIEIOESSEKUAXCVQWOCEOTGLNRPFJVLGGZGCYACWHZUAJKZCTMNHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.5628947464366889);
    msg.setSource(7643U);
    msg.setSourceEntity(62U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(39U);
    msg.seq = 35305U;
    msg.sys_dst.assign("ODWEMZFYPUSNYROQPYNPCMHJXTGUZJAHOACRVAJHGQPDKRAJGITNPMOFVSTZCBCGXIGKMSLDYFIQEELBTUWFJTBWFMONBBFZKOZVWSYSFNWRHOBQQFIDLHBTUFWZTZCNXLOMSVMVZCLEUOJUCJXFKSGZLNUVKNTPUKPQDIMBIHXGRRIVADRVMQHAXGGSVAHODHENCEYXPAUXAHLRLXKYTMQRTEDQSVPJPWED");
    msg.flags = 248U;
    const signed char tmp_msg_0[] = {-45, -14, 26, -1, 36, -109, -121, -41, -27, -113, 47, 7, -115, 21, -17, -93, -10, -76, -119, 22, -85, -65, -115, -8, 32, -47, 28, -81, -55, 95, -94, -95, 89, -18, -86, 109, -86, -1, 26, 49, -81, 28, 48, -53, 82, 59, 19, 35, -44, 118, 55, -113, 58, 61, 41, -69, 22, -114, -64, 105, -46, -64, -86, -13, 44, 30, 46, 87, 64, -7, -90, 109, 124, 62, 119, 47, -107, -17, 99, 49, -89, 66, 94, 47, -75, 3, -18, -92, -46, -85, -92, 53, 126, -10, 1, -64, 15, 115, 6, 54, -2, 62, 22, -40, -63, -119, 44, 85, -16, 4, 9, -37, 56, -108, -41, 125, -124, 93, 96, 119, 69, 61, -77, 31, 16, -115, -51, 12, -71, -47, -110, -59, 20, -9, -78, 2, 82, 117, -36, 120, 40, -107, -29, 106, -25, 26, 71, 24, 2, 111, -57, 126, 109, 120, -21, -118, 36, 38, -33, -68, 102, -85, 111, 47, 81, 82, 55, -17, 93, -77, -116, 98, 88, -62, 68, -25, -104, -79, -37, -43, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.5618375971234978);
    msg.setSource(60414U);
    msg.setSourceEntity(56U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(219U);
    msg.seq = 4142U;
    msg.sys_dst.assign("UCLYWAHWEEVVOLGDKDIUAJWFRXPNXQENWPHIJCTNJVJVZMYMIBJSAEJYUEDZUCCKKUDHQABLDOSBLDLNKZXPUXVOROHMAQBJISYRSIXNLCHTWWQCMNHDSCPGMFKVTARXANHXJOPJZOGWFGLKZAQNEYSQTBYYWZAVKGMLDXQYQGZQEIZOOEDFLPFKOINVRBCKSFFIBPWSSWURZRIHFEPCGZTNM");
    msg.flags = 25U;
    const signed char tmp_msg_0[] = {75, 11, -120, -55, -14, -21, -29, -12, 94, -13, -68, -9, 112, -71, -12, -128, -10, -109, -18, -119, 112, -96, -47, 87, -45, 33, 75, 15, 58, -50, -51, -20, 119, -75, -26, 106, 34, -53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.3051358815854164);
    msg.setSource(12442U);
    msg.setSourceEntity(253U);
    msg.setDestination(34919U);
    msg.setDestinationEntity(101U);
    msg.seq = 47785U;
    msg.sys_dst.assign("KFFYXCKGYRUCTUNPABRQLRYCBLFMRRMGIAMSIDDQONAGYJVHSONOCHSVGMQAWKLDXXYLNMUUCTORBZTFDNIWJPXEJHZFXMCTMFJOBUYBAGFMPIXVD");
    msg.flags = 194U;
    const signed char tmp_msg_0[] = {-33, 4, -29, -60, -48, -124, 44, -74, 47, 109, 57, -91, 37, 112, -17, 98, 88, -25, -28, -5, 116, 65, 98, 19, -105, -75, 34, -13, -40, 104, -65, 13, 32, -96, 28, -33, -104, 29, 98, -1, 82, 83, -4, 28, -75, -29, -127, 51, -127, -42, -44, -65, -79, 19, 112, -21, 68, -6, 8, 103, -88, -118, -63, 31, 72, 48, -53, 100, -35, -117, 108, 121, -54, 39, -83, -51, 96, 59, 99, -27, -99, 24, 56, 34, 116, 18, -38, -23, 54, -119, -33, -27, -126, -102, -39, 66, -110, 44, 65, 108, 11, 53, -4, -128, 0, 18, 55, 91, 66, -40, 6, -43, -30, 1, -19, 48, 52, 17, -67, -101, 51, 1, -103, 101, -117, -112, -28, -116, 69, 16, -99, 96, -74, -47, -90, 124, -124, -118, -35, 58, 98, -65, 60, 110, -81, 55, -34, -30, 3, 82, -99, -56, 104, -95, 11, 54, -27, 7, -59, -103, -95, 111, 116, -34, -80, 14, 24, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.7686536907761475);
    msg.setSource(23521U);
    msg.setSourceEntity(60U);
    msg.setDestination(56261U);
    msg.setDestinationEntity(51U);
    msg.sys_src.assign("FYCXGWUCHLZLBARTWSVBBGXFYPDQJVCOJEPJCRARGEPUOLWCKNOJTNZJLSEXIZPTBGJAXRSNYTTFZQEJDFAMZCZRUIDVFMMHSXLZEJUIVTTEOTAFBGSSYWVHHUYQPG");
    msg.sys_dst.assign("HBJMRUJBAXNCCEXSEZPBISGHYIDOYUNFNALPRGCZHXHQTYNKCMIIFVOOQJLLYRUMLEKCWBXKHRSZSSVAQGTSDPEZJYWVYKNEMTIBYVLATIRDFZBJSOURFSWFVDZQAGETAMMSMYJCZZCHNCKDZQOBRKNQBUWUFWBAUHPGFTVH");
    msg.flags = 9U;
    const signed char tmp_msg_0[] = {-45, 5, -127, 66, 106, 21, 42, -27, 71, -64, 86, -110, 117, 50, 19, 52, 103, -13, -119, 45, 82, 81, -112, 18, 107, 112, 92, -37, 76, -47, -34, 28, 10, 109, 46, 97, 82, -101, 35, -128, 113, -33, 89, -58, 33, -39, 31, 54, 28, -115, -117, 1, 112, -108, 35, -95, -124, 40, -28, 121, 56, 61, 89, 125, 6, 58, -32, -119, -35, -123, -97, 104, -99, -58, 27, -78, 71, -107, 56, -31, 101, -118, 53, 119, 20, -33, -109, -111, 92, 4, 68, -30, 106, -71, 12, 42, 8, 60, -36, -26, -21, -25, -13, 0, 15, 82, 107, -28, 61, 116, 91, 49, -48, -117, -27, 80, -127, -49, -32, 44, -112, 7, -62, -106, 6, 13, 89, -110, 14, -3, -44, -41, 70, -36, 105, 5, 42, 24, -56, 102, 74, 57, -24, 109, 120, 6, 105, -53, 86, -11, -112, -114, -14, 29, 93, -55, 78, 89, -125, -119, 58, -48, 54, 97, -77, 106, -112, 104, -73, 110, 107, 62, -6, -19, 104, 53, 25, -58, 82, 53, 104, -20, 125, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.3377308748585943);
    msg.setSource(60005U);
    msg.setSourceEntity(102U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(201U);
    msg.sys_src.assign("NSLWHNMLLUFFHIIEWPKGMTGGHLYJARCDZFXFXGQBBOYPSMVUKZKPHZNGZRDQAKZWWOSPRIOWQTFBHHEYGQYYRIYSAEHCOBNOXPSCJXTEAILLZXKEGDEVPKINCDOUNUJQFVFXTWQJAYTZCDRWUVABUVOGJNV");
    msg.sys_dst.assign("WRCXNTPLFNSICPTEUCIBUHMIVUFYONATXSHRDMNEOBTAHCLMQKPSRXYQHQRILWDHLJBJZRLRZZQCYHBQDPVGXZMTVZFEMSYVNMJNLPKDVWFOGVEXIPITHSAZWGNDWDEKFREJNURBEWGUUYO");
    msg.flags = 130U;
    const signed char tmp_msg_0[] = {1, -96, -37, -18, 9, -40, 109, -16, 12, -65, -54, 29, 60, -5, 59, 41, 0, 67, 118, -29, 37, -26, 38, 111, 24, -32, -115, -102, -114, -76, -95, -39, 77, 26, 76, -86, -112, -3, 70, 124, 56, -60, -32, -109, -89, 42, -21, 0, -16, 67, 94, -98, 95, -115, -73, 123, -10, -86, -45, -70, 35, 123, -64, -115, -12, 114, 10, 109, -108, 33, -72, -112, 67, -117, 25, 82, -121, -101, 26};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.6560365836794572);
    msg.setSource(24738U);
    msg.setSourceEntity(59U);
    msg.setDestination(35886U);
    msg.setDestinationEntity(33U);
    msg.sys_src.assign("JNVCHOLWOIZGJWKCWNKFBVLT");
    msg.sys_dst.assign("HYKIWHMEPORTZPNSTZCISKQJOQZRSGVSBEOHRPBMISFGXXCDABXDGDNKSEDVRUFVHEHAQWZVAVUUQORYYYQIPBQPAMLYGDMNWUUOSFHLALTMDJQDAKOCWZLXICGWOFTVYVKJWMF");
    msg.flags = 53U;
    const signed char tmp_msg_0[] = {126, 23, -33, -30, 22, -118, 24, -2, -2, -22, 108, -44, -125, -31, -112, 86, -33, -37, 52, -112, 37, 47, 101, -21, -111, 67, -128, -116, -44, -48, 79, -56, -81, 69, -105, 8, 33, -30, 98, 97, 94, 1, 2, 102, 85, 81, 71, -20, -107, -41, 94, 86, -108, 90, 7, -11, 68, 63, -18, -63, -35, 42, -107, -90, 16, 29, 4, -38, -92, -105, 118, -18, 64, -86, -91, -116, -105, 106, -91, -83, -39, -70, -92, 126, -117, -32, 113, -119, 109, -19, 58, -112, 4, -98, -76, 98, -32, 44, -115, 63, 113, 37, 34, 21, -13, 116, 32, 78, 76, 16, 69, 83, 57, 90, 96, -42, -17, 26, 58, -49, 81, 10, -53, 52, 0, 80, -7, -114, -103, 84, -22, 75, -70, 118, -20, -58, -49, 34, -42, 69, 56, -54, -29, 90, 62, -28, -92, -59, -49, 13, 19, -90, 23, 23, 51, -74, -19, -76, 86, 5, 103, -2, 102, 47, 55, 27, -49, 18, -62, -108, 126, -80, -56, 24, -58, -39, 105, 42, 52, 85, -19, 8, -81, -35, 24, 107, -98, 95, 26, -34, 6, 33, -56, -113, 95, -84, 29, 90, -1, 81, -111, -96, 54, -8, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.5120753857686532);
    msg.setSource(15941U);
    msg.setSourceEntity(17U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(144U);
    msg.seq = 40923U;
    msg.value = 199U;
    msg.error.assign("ZWHOVTIBRLHZIEAFOIUPCGHRMCGUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.8108965334475439);
    msg.setSource(39355U);
    msg.setSourceEntity(53U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(166U);
    msg.seq = 12451U;
    msg.value = 147U;
    msg.error.assign("QONKTHNAPFCLWXQKMJDDJEMRUKVKHBCTRBEPITPFOPROCZWIMWTUAXQHJABNQXPYKMSEXTFVICSFBFSVZLUVSFAAORZLHYJDMOYRDZPVXGUKJMMNMFYQFVPTWNQQZJYTYGHAYULPMORSVHSEXWHQAHOVFCGQONIKDXGPGDZMCLWERQZNVZSYIGNKWECVTYBWKUHJZBDDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.23879336825659936);
    msg.setSource(22183U);
    msg.setSourceEntity(79U);
    msg.setDestination(46U);
    msg.setDestinationEntity(4U);
    msg.seq = 59628U;
    msg.value = 252U;
    msg.error.assign("KTRHODJSZSYVWJLCNUEYZASKPEXGSDWGXVIHHILGHGRYMLOWHGRVOQUIFKDUKWFPCLZREAWQRJODNJVLMMGRFEVZBENVTGVNBOEZTQISBDQCMTQRIQGBQKJINYVCFNWYAHFMCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.6206027589269141);
    msg.setSource(14392U);
    msg.setSourceEntity(89U);
    msg.setDestination(8313U);
    msg.setDestinationEntity(169U);
    msg.seq = 18466U;
    msg.sys.assign("YXSHUKNIDIIGTRFJUDLYFUYZYKKORELSOIZCVABIBCIIPVELXZWZWRGMFNZSDAREPNBOKEJONFTSAMCPMYVLNOVWJWJVHQHYHDCPDCXDGSLESZTXAFCAKCMVQZKFHGSTYJRYENDTYREOJKUQVFCUSKYXIBRHLBZHEPMJUAJQLWXHQWDORWLTUPQGNDFKMDZBUOAWQWRMHTAEJWABBSPGBCSIFMKXLVNZGXVTNBMPQIPUQERTXJGFUNH");
    msg.value = 0.1895058161372296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.4262674282475475);
    msg.setSource(45703U);
    msg.setSourceEntity(148U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(235U);
    msg.seq = 57977U;
    msg.sys.assign("LTSXUCJHRXAZXGEESGMQBWJCCHTXSRMOVBWSFNKYAPBNIOWTSXQGGSVHWDXUUXKQIYCBDQMFGFYEJCLBVDZGEFUJHENOAUBPVOFZDNZMZPJJYMFCHNQFVLTHKIMMLAGOLJKWNTFNUEWNKHORIQURWKTINRJMQRHUQYKDKFAZIXDISWYNVCAFSTVQAAOX");
    msg.value = 0.6651721203815841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.6317010093370179);
    msg.setSource(6122U);
    msg.setSourceEntity(26U);
    msg.setDestination(14567U);
    msg.setDestinationEntity(55U);
    msg.seq = 9693U;
    msg.sys.assign("QODBDZBOVOERLRYSBZVGQUJFKEVSYDOZVVCBBIGFUNARSJLDTTPLGNBJNWCCXIEXBZAICOJDJWWKYXLOVQBCGMFLRTJIZOMVYOZHYGSNDYFJGUPPCSENHRXUQJDEHZHPCAQMXFHDDRWNIAHTPYVLEFVEMMUAIGQBALGOPSQAFTK");
    msg.value = 0.4425013138144034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9270414047269631);
    msg.setSource(21373U);
    msg.setSourceEntity(212U);
    msg.setDestination(9755U);
    msg.setDestinationEntity(16U);
    msg.seq = 9949U;
    msg.sys_dst.assign("ZWPRGCIWELQCATSCQSSPZCRLBZUZNFFVR");
    msg.timeout = 0.039277582261275756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.1780328933593316);
    msg.setSource(27375U);
    msg.setSourceEntity(44U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(209U);
    msg.seq = 42012U;
    msg.sys_dst.assign("SLEKVQVQMOOEQDKICNRSCCYGLLNHXBRCRULVNBOVLWMYAGUKFWWDVTKUHDIKTXYGLJWGSDJFDIVFOCOPAWSPMHSGJYXYBGXIDGXPGOFHPNQTIPTZXUIXVTKNYKNYWNYRXPMJOTKZDWIFTEVEZHLCDWNXPPVBXYRHRRNFBAUDTJUWPKYGQQMCACZJRFHQBPBEEHZOAOOJIEZMSMZMSUEAUAQMVUKCJ");
    msg.timeout = 0.9750267117710012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.14841162191529922);
    msg.setSource(30346U);
    msg.setSourceEntity(91U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(14U);
    msg.seq = 37520U;
    msg.sys_dst.assign("FTNRSGOTDDQXPTGROARBGJTYELJXHLRSFLOJUGHCPZPMOIQXFLHVABUMXEDHNDMPGNTIATNBBMLYMIKKTQWIAQQDQVBDJBXEYRCCVUVYRCNMJNRBGBFUZAKZMXNLMFHYSOGIEIXRTULYWANGOZKVSEULSZVKEDOEEUECCPUBQNZYPFBKCIJWZUGVSWTC");
    msg.timeout = 0.5008899917867974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.9237594872080286);
    msg.setSource(38666U);
    msg.setSourceEntity(201U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(39U);
    msg.action = 233U;
    msg.longain = 0.9043841591160221;
    msg.latgain = 0.713306925963175;
    msg.bondthick = 4058569930U;
    msg.leadgain = 0.26572139967367425;
    msg.deconflgain = 0.6726398691183373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.47004173064668997);
    msg.setSource(35944U);
    msg.setSourceEntity(195U);
    msg.setDestination(48022U);
    msg.setDestinationEntity(24U);
    msg.action = 132U;
    msg.longain = 0.258248082401324;
    msg.latgain = 0.5158335640576873;
    msg.bondthick = 674611288U;
    msg.leadgain = 0.43212679572936297;
    msg.deconflgain = 0.7742649768568108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.6054994177858408);
    msg.setSource(60814U);
    msg.setSourceEntity(182U);
    msg.setDestination(58445U);
    msg.setDestinationEntity(223U);
    msg.action = 142U;
    msg.longain = 0.7689047279667319;
    msg.latgain = 0.8606496105329874;
    msg.bondthick = 1556857507U;
    msg.leadgain = 0.7423838988184891;
    msg.deconflgain = 0.3363308370164212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.4642095573614542);
    msg.setSource(5583U);
    msg.setSourceEntity(83U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(117U);
    msg.err_mean = 0.034132856452733784;
    msg.dist_min_abs = 0.9914243311970683;
    msg.dist_min_mean = 0.45775025857188956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.10043418113641811);
    msg.setSource(50645U);
    msg.setSourceEntity(124U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(59U);
    msg.err_mean = 0.11463613952744633;
    msg.dist_min_abs = 0.06617651551543569;
    msg.dist_min_mean = 0.23822895094509255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.13497179975179596);
    msg.setSource(37928U);
    msg.setSourceEntity(132U);
    msg.setDestination(61944U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.2879747836228267;
    msg.dist_min_abs = 0.4695947710052497;
    msg.dist_min_mean = 0.67853589234431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.6439123120635041);
    msg.setSource(31856U);
    msg.setSourceEntity(174U);
    msg.setDestination(7163U);
    msg.setDestinationEntity(233U);
    msg.action = 156U;
    msg.lon_gain = 0.8958317394287607;
    msg.lat_gain = 0.37991710892203323;
    msg.bond_thick = 0.831654303535489;
    msg.lead_gain = 0.757920606726417;
    msg.deconfl_gain = 0.26722876383418426;
    msg.accel_switch_gain = 0.0617778342924199;
    msg.safe_dist = 0.2752743892474393;
    msg.deconflict_offset = 0.6863674975103482;
    msg.accel_safe_margin = 0.6491061857356899;
    msg.accel_lim_x = 0.35931197958893923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.8319117174859657);
    msg.setSource(29739U);
    msg.setSourceEntity(148U);
    msg.setDestination(27470U);
    msg.setDestinationEntity(21U);
    msg.action = 234U;
    msg.lon_gain = 0.9625376040698334;
    msg.lat_gain = 0.7155862360481534;
    msg.bond_thick = 0.4568098420502764;
    msg.lead_gain = 0.12712978633805505;
    msg.deconfl_gain = 0.14316497339935907;
    msg.accel_switch_gain = 0.7841446282894649;
    msg.safe_dist = 0.702709484410858;
    msg.deconflict_offset = 0.0723442414054647;
    msg.accel_safe_margin = 0.4041226334221224;
    msg.accel_lim_x = 0.9300728663552891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.9865275149470425);
    msg.setSource(38889U);
    msg.setSourceEntity(161U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(226U);
    msg.action = 126U;
    msg.lon_gain = 0.4495440669650048;
    msg.lat_gain = 0.9948066657809641;
    msg.bond_thick = 0.12387261055607601;
    msg.lead_gain = 0.5332918218838963;
    msg.deconfl_gain = 0.18937694557611884;
    msg.accel_switch_gain = 0.2824400014527009;
    msg.safe_dist = 0.9890658224370308;
    msg.deconflict_offset = 0.681426312615832;
    msg.accel_safe_margin = 0.8117217313339892;
    msg.accel_lim_x = 0.805368536402947;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.46491189539723554);
    msg.setSource(54680U);
    msg.setSourceEntity(242U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(90U);
    msg.type = 242U;
    msg.op = 146U;
    msg.err_mean = 0.39981055704744717;
    msg.dist_min_abs = 0.947242737821859;
    msg.dist_min_mean = 0.33670649522949025;
    msg.roll_rate_mean = 0.06248534849094822;
    msg.time = 0.8120146535748418;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 29U;
    tmp_msg_0.lon_gain = 0.07017400049973188;
    tmp_msg_0.lat_gain = 0.8638469467170946;
    tmp_msg_0.bond_thick = 0.9622563156008316;
    tmp_msg_0.lead_gain = 0.7989747721449147;
    tmp_msg_0.deconfl_gain = 0.25748021655923126;
    tmp_msg_0.accel_switch_gain = 0.9471347244927096;
    tmp_msg_0.safe_dist = 0.12416380160720664;
    tmp_msg_0.deconflict_offset = 0.8341509498307662;
    tmp_msg_0.accel_safe_margin = 0.49881658661057493;
    tmp_msg_0.accel_lim_x = 0.08287229286855358;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.9588712551378092);
    msg.setSource(8811U);
    msg.setSourceEntity(151U);
    msg.setDestination(25765U);
    msg.setDestinationEntity(231U);
    msg.type = 33U;
    msg.op = 112U;
    msg.err_mean = 0.13138005661193308;
    msg.dist_min_abs = 0.3743419947604264;
    msg.dist_min_mean = 0.21910463721331674;
    msg.roll_rate_mean = 0.726165011153061;
    msg.time = 0.677097694047576;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 102U;
    tmp_msg_0.lon_gain = 0.21852461010026125;
    tmp_msg_0.lat_gain = 0.5895053451696873;
    tmp_msg_0.bond_thick = 0.19069874099539308;
    tmp_msg_0.lead_gain = 0.035948621488447574;
    tmp_msg_0.deconfl_gain = 0.7800345319356057;
    tmp_msg_0.accel_switch_gain = 0.15764146954756098;
    tmp_msg_0.safe_dist = 0.046260993808115325;
    tmp_msg_0.deconflict_offset = 0.8721756214984211;
    tmp_msg_0.accel_safe_margin = 0.4312227228591857;
    tmp_msg_0.accel_lim_x = 0.32345291009822263;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.10706401263379717);
    msg.setSource(10974U);
    msg.setSourceEntity(81U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(121U);
    msg.type = 4U;
    msg.op = 70U;
    msg.err_mean = 0.31919287558887344;
    msg.dist_min_abs = 0.6780542189364958;
    msg.dist_min_mean = 0.34067469631276837;
    msg.roll_rate_mean = 0.3221712501573426;
    msg.time = 0.26719412157334577;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 31U;
    tmp_msg_0.lon_gain = 0.5738769146669659;
    tmp_msg_0.lat_gain = 0.2010333403503889;
    tmp_msg_0.bond_thick = 0.6509015581056173;
    tmp_msg_0.lead_gain = 0.5334133998157066;
    tmp_msg_0.deconfl_gain = 0.26971193556283146;
    tmp_msg_0.accel_switch_gain = 0.6951525669799592;
    tmp_msg_0.safe_dist = 0.45493274594533495;
    tmp_msg_0.deconflict_offset = 0.6610586073307342;
    tmp_msg_0.accel_safe_margin = 0.6348370767087351;
    tmp_msg_0.accel_lim_x = 0.9856291217276598;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.3877690647014309);
    msg.setSource(57458U);
    msg.setSourceEntity(185U);
    msg.setDestination(51020U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.5938138704997524;
    msg.lon = 0.8719004904112492;
    msg.eta = 3570849073U;
    msg.duration = 39645U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.4894695179570203);
    msg.setSource(11768U);
    msg.setSourceEntity(21U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.8155647815908186;
    msg.lon = 0.8795523544368032;
    msg.eta = 1529101065U;
    msg.duration = 52575U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.247197729113953);
    msg.setSource(7465U);
    msg.setSourceEntity(53U);
    msg.setDestination(22404U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.19490333808618254;
    msg.lon = 0.055122453246264524;
    msg.eta = 218831609U;
    msg.duration = 4319U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.9589435543895882);
    msg.setSource(4677U);
    msg.setSourceEntity(37U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(19U);
    msg.plan_id = 35886U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.22902008321858658;
    tmp_msg_0.lon = 0.23776155282882527;
    tmp_msg_0.eta = 2459548180U;
    tmp_msg_0.duration = 21322U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.3449321834674772);
    msg.setSource(30599U);
    msg.setSourceEntity(94U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(7U);
    msg.plan_id = 41052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.6600644094947746);
    msg.setSource(30676U);
    msg.setSourceEntity(91U);
    msg.setDestination(53531U);
    msg.setDestinationEntity(160U);
    msg.plan_id = 28409U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.49985091187457664);
    msg.setSource(58698U);
    msg.setSourceEntity(174U);
    msg.setDestination(56985U);
    msg.setDestinationEntity(50U);
    msg.type = 143U;
    msg.command = 93U;
    msg.settings.assign("YDAJQZEDIJDCIBOWKAMRNBPBXPGRWGJWSPVOCDORVVBMWDEAGIRRMDZTYKQPUAFVESFHLFAPVLEQVYULNACNSYVNOQCYOGDNGEMHAKTLBCXAUBFXDFYCHTLZQLEEHD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 35520U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BHQQZBXNMNWJVTJXDEUIQBOVRKXIMMLZFCGYJHOXXJZOLDBRVUUYJCBRZJLTDUOPPOMQIFBRECCGQCMBZIPXHAEVKWPFHOGGVKDLRRVWGLSAXEIGSRHHYHLKBPAEYRQGTNSEOFHCGTTTRAKENCZWBPDXTAFMASMKSCSOCNWNZVQWJNJVKFSWJWQVUDYMHRNDINT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.08914944238816802);
    msg.setSource(29657U);
    msg.setSourceEntity(240U);
    msg.setDestination(31349U);
    msg.setDestinationEntity(188U);
    msg.type = 100U;
    msg.command = 148U;
    msg.settings.assign("QJKOXHRNCCXVNMFTDQIDVMENWGDKYHEJDTHNESJVYBNPLOJBBQKITWAQEXGCGSRCPJHUMYMZUYYUZOIMXMUVZJNIECJHJCORIQWBP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 15163U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NZGAYCKSJWLFRZWJVBDHCBTWWRUDEWXNJPSZIQSRNRBJDANCSPBQUMRFUKUDHYXPOJEFTEHQHEPIFPIBJXLLACGWHPYTSQSAQWZXJSGWLUMVXGGKMZOLDUYEROGWXPCAEXYJVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.11472053292376283);
    msg.setSource(17994U);
    msg.setSourceEntity(227U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(183U);
    msg.type = 142U;
    msg.command = 114U;
    msg.settings.assign("QSSEFKYXSOHLFMRDXUKVFBQINBQYWLUZZKEJMHYPGWHPKDGFQDOYNJYFIIDGZAVIWCMCZXFSSNKHBJXANSAAYVEFXCJKLUSHHFWBGTR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26310U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JNDMODNJXQUGVUZPTXUEYUMGKBPSYANEGLYSJNWPSJHTMPKBFVMOKVHWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.09479555343319035);
    msg.setSource(54674U);
    msg.setSourceEntity(207U);
    msg.setDestination(26532U);
    msg.setDestinationEntity(189U);
    msg.state = 53U;
    msg.plan_id = 60462U;
    msg.wpt_id = 204U;
    msg.settings_chk = 53730U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.7202779716655707);
    msg.setSource(35384U);
    msg.setSourceEntity(185U);
    msg.setDestination(30755U);
    msg.setDestinationEntity(189U);
    msg.state = 221U;
    msg.plan_id = 12402U;
    msg.wpt_id = 26U;
    msg.settings_chk = 64922U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.824631767100485);
    msg.setSource(55305U);
    msg.setSourceEntity(230U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(31U);
    msg.state = 17U;
    msg.plan_id = 27205U;
    msg.wpt_id = 254U;
    msg.settings_chk = 29884U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8097904783738809);
    msg.setSource(54173U);
    msg.setSourceEntity(149U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(122U);
    msg.uid = 40U;
    msg.frag_number = 83U;
    msg.num_frags = 45U;
    const signed char tmp_msg_0[] = {-94, 14, 43, 65, 89, -36, 108, -31, -112, 41, 41, -6, -11, -116, 1, -79, -36, 45, -21, -121, -98, -30, 8, -106, 118, -103, 69, 35, -46, -103, -6, -127, -77, -13, 11, 87, 34, -83, -78, 96, -7, -111, -1, 4, -111, -2, -96, -107, 10, -33, 55, -127, 50, 38, 0, 124, 78, 80, 17, -25, -85, 90, 119, -83, 96, -51, 1, 72, 67, -47, 63, 27, -55, 25, 115, -45, 39, 22, -34, -109, -16, 4, 67, 70, 123, -126, 123, 49, -88, -48, -88, 23, 103, 7, -15, -19, -91, 58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.7428185140589609);
    msg.setSource(26904U);
    msg.setSourceEntity(254U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(74U);
    msg.uid = 195U;
    msg.frag_number = 205U;
    msg.num_frags = 189U;
    const signed char tmp_msg_0[] = {-21, -18, -126, 57, 81, 42, 40, -61, -47, -79, -99, -120, 15, 34, 74, 42, 108, 39, -37, 79, 101, 46, -119, 76, 33, -13, 102, 44, 12, -98, -122, 90, -112, 44, 57, 108, -24, -121, -29, -123, 114, 25, -58, -92, 6, -35, -2, 39, -117, -128, -76, -125, -118, -42, 11, -60, 110, 105, 114, 103, 59, 114, 12, -98, -120, -39, 124, -15, -15, -117, 98, 40, -126, 28, 28, 10, -85, -72, 97, 19, 10, -79, 73, -1, 2, -78, 83, 12, -87, -119, -95, -84, 71, -84, 9, 70, 118, 24, -37, 87, 108, 59, -58, 103, -49, 117, 7, 13, -124, -94, 90, 38, -97, -107, 58, 69, 53, 11, -99, -119, 97, -73, 59, -40, -60, 36, -34, -61, 24, 5, -67, 68, -117, -27, -101, 71, 19, -107, 89, 57, -32, -68, 116, -10, 81, 63, -8, 92, -75, -42, -121, 113, -48, 64, -81, -41, -64, -106, 114, 25, -54, 28, 64, 90, 122, -51, 85, -107, -100, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.656834689588291);
    msg.setSource(31911U);
    msg.setSourceEntity(175U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(179U);
    msg.uid = 162U;
    msg.frag_number = 173U;
    msg.num_frags = 171U;
    const signed char tmp_msg_0[] = {-37, 80, -11, 60, 51, 15, 94, -76, 1, -112, 94, 29, -125, 30, -44, 18, 23, 98, 97, -126, -101, 5, 49, -87, 25, -18, 119, -128, 92, 85, -33, -48, -62, -114, -127, 92, 95, 68, -74, 8, -70, 93, 75, -83, -59, 62, -91, 29, 94, -102, -84, -67, -28, -60, 77, 29, -126, -46, -5, -29, -111, 116, -90, -81, -23, -54, 56, 56, 105, 66, -70, 33, 106, 102, 26, 107, 34, 62, -93, -15, -8, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.29156498182241086);
    msg.setSource(11093U);
    msg.setSourceEntity(65U);
    msg.setDestination(31429U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("YBKGSOPIMQCBGCXKTVXVEXNAXLMSZGJVHKAAPUXBNRZYVVKDJDWEZJXSFEBGQCAGAYTFHGCQHWZDSRHRSOYTWATWHQONWGUZKTLYXBIBZIMWQGJFBTHNOLNQCPSKAVOYEJUMEVHQUYDWCEXZJBZIWLJMOWEKNMIDKTZFKTILXSFDUPUDFSRKSPHLMHZCUBROCFDTRCDYNCMVOLIPTSNIRBLVRAPP");
    const signed char tmp_msg_0[] = {100, -123, -98, 88, 54, -37, -123, 120, -27, 66, 55, -21, -66, -81, -94, -53, -51, 13, -95, -89, -83, -7, -108, 115, 49, 2, 9, -22, -55, -105, -13, 5, 27, 36, -79, -82, 44, -56, -9, -110, -123, 15, 62, 95, -106, 116, 26, -112, -125, 65, 95, -118, -88, -5, -97, 102, -12, 8, 74, 60, 92, 40, -54, 88, 59, 10, 53, 122, -101, 34, 6, -106, 101, -105, -98, -66, -20, 24, 103, -113, -64, -90, -69, 4, 12, 68, 92, -127, 53, 37, 2, -80, 88, -4, 62, 21, -64, -122, -29, 57, -92, -122, -17, 83, 74, -57, -20, 60, 94, -25, -72, 75, -8, -104, 89, 95, -91, 103, -25, -23, 104, 100, 56, -24, -83, 118, 125, 116, -79, -74, 18, 95, -89, 42, 11, -10, 38};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.5333028579660803);
    msg.setSource(46579U);
    msg.setSourceEntity(179U);
    msg.setDestination(57006U);
    msg.setDestinationEntity(188U);
    msg.content_type.assign("YJJSUDHTRYIGPQFKREUCLOHGQWLYXDWASPVIVQJUBASHLJPNPMZIKLMGPYHXHIFNLOZTNAADNZFVMRSOEBUUQCXWFCTRTIPDDEVKPKCPGFMMVL");
    const signed char tmp_msg_0[] = {88, -63, 123, 25, 84, 47, -21, -59, 119, 101, -55, 45, -85, -21, -54, 51, -118, 8, 45, -1, -38, -124, 92, 96, -60, -75, -94, -49, 120, -24, -33, -9, -83, 8, -45, -119, -18, -4, -83, -35, -25, -104, -117, -71, -76, 74, 12, -116, 26, -39, 67, 62, 6, -84, 7, -51, -30, -12, -90, -26, -23, -122, -67, -20, -126, -33, 119, 105, 1, 90, 11, 104, -81, 39, -28, -65, 12, -26, 58, -110, -87, -3, -3, 48, -75, -96, 54, -51, 99, 89, -22, 2, -107, 82, 82, -74, -16, 32, 74, -21, -71, 44, -59, 44, -56, 12, 42, -31, 43, -88, -111, 39, 30, -72, -100, 77, 40, 35, 35, -64, 34, -32, -46, 13, -72, 123, 92, 85, 7, 14, -32, -41, 60, 8, 21, -88, 112, -30, -71, -100, -8, -23, 88, 67, -78, -85, 69, 51, -61, -67, 85};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.643085218007224);
    msg.setSource(16285U);
    msg.setSourceEntity(93U);
    msg.setDestination(26968U);
    msg.setDestinationEntity(107U);
    msg.content_type.assign("UQXCVVYJQGTFZTRJWNMWSIPNMSERNJEUNGXXUHEYLSUEIKVUYBDVKHFAGKJGOMLCNBMKFTKIUYBQTUAEQEKVDWSXALXDZAVEWSXGYAMMSHPCDWGFRLFALQZXQWPURTJWZFNFXYLHCLCOBEZFIHBYYYUAQFCAREDPZNTHDTPHZJCWKBBYPXBTSKSKZCIVMHRIQRHINLOBRLZONDGVOERLGDOUWO");
    const signed char tmp_msg_0[] = {-10, 4, 12, -5, -83, -112, 31, -66, -87, 102, -40, 14, -3, -96, -103, 49, 17, 25, 34, 30, -121, -96, -20, 85, 85, 85, -37, -75, 97, 18, 118, -27, -109, -17, -128, 19, -102, 79, -81, -75, -121, -73, 36, 6, 87, 67, 12, 45, -128, -73, 87, 115, -53, -115, 124, -117, -53, 117, -100, -49, -35, -118, 3, -73, 13, -81, -94, 42, -29, -30, 1, 56, -91, -120, 17, -54, 40, -4, -102, -31, -14, -102, 55, -24, 111, -44, 45, -47, 65, -61, -65, 4, 64, -90, -92, 43, 36, -60, 78, 1, -47, 77, 22, 97, -67, -51, 34, -12, -108, 25, 95, 23, -123, 73, 49, 3, -4, 66, -110, -69, 77, 35, -68, 103, -59, -30, -33, -19, -85, -85, 79, 117, 54, -44, 19, 47, -16, 55, 67, 112, -64, -5, 90, -13, -23, -50, -11, -123, -128, -91, 72, 39, -106, 38, 50, 47, 58, -38, 25, -115, -103, -74, 66, 70, -101, -36, 82, 69, 54, -75, 9, 67, 92, 25, -112, 7, 12, -8, -127, 12, 113, 95, 65, -70, 45, -100, -41, 110, -18, -122, -122, 84, 106, -41, -98, 25, -26, -46, -56, 37, 53, 114, -13, 109, 67, -27, -2, -55, -42, 101, -35, 12, 110, -87, -45, 73, -113, 57, 8, 100, -96, 125, -112, 49, 19, -43, 93, -42, -13, 90, -73, -70, -59};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.397823219216896);
    msg.setSource(9198U);
    msg.setSourceEntity(100U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(120U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.21611198563905665);
    msg.setSource(58530U);
    msg.setSourceEntity(19U);
    msg.setDestination(30825U);
    msg.setDestinationEntity(175U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.5743956466482223);
    msg.setSource(35291U);
    msg.setSourceEntity(86U);
    msg.setDestination(3183U);
    msg.setDestinationEntity(179U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.723785081565462);
    msg.setSource(49388U);
    msg.setSourceEntity(146U);
    msg.setDestination(30991U);
    msg.setDestinationEntity(249U);
    msg.target = 40440U;
    msg.bearing = 0.6655056583504316;
    msg.elevation = 0.6259019461966333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.6984478462276136);
    msg.setSource(34931U);
    msg.setSourceEntity(118U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(65U);
    msg.target = 1457U;
    msg.bearing = 0.6713233386110651;
    msg.elevation = 0.8273684869691477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.09358366521497763);
    msg.setSource(35080U);
    msg.setSourceEntity(221U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(246U);
    msg.target = 21401U;
    msg.bearing = 0.6865081301605535;
    msg.elevation = 0.8456398942145747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.07386537993186226);
    msg.setSource(56232U);
    msg.setSourceEntity(3U);
    msg.setDestination(16417U);
    msg.setDestinationEntity(57U);
    msg.target = 11288U;
    msg.x = 0.8336366018795309;
    msg.y = 0.4106567559666394;
    msg.z = 0.323916031205682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.385345556730302);
    msg.setSource(31101U);
    msg.setSourceEntity(189U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(121U);
    msg.target = 472U;
    msg.x = 0.8126846436261197;
    msg.y = 0.22954614906221937;
    msg.z = 0.8566250172175836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.4861622011153417);
    msg.setSource(10972U);
    msg.setSourceEntity(222U);
    msg.setDestination(3225U);
    msg.setDestinationEntity(69U);
    msg.target = 12132U;
    msg.x = 0.02197946054035438;
    msg.y = 0.3656248488489926;
    msg.z = 0.8109295729935155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.40299181782344995);
    msg.setSource(7162U);
    msg.setSourceEntity(25U);
    msg.setDestination(50199U);
    msg.setDestinationEntity(151U);
    msg.target = 24119U;
    msg.lat = 0.24361561011531674;
    msg.lon = 0.7545599784382409;
    msg.z_units = 98U;
    msg.z = 0.19381801397275622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.4829841990016649);
    msg.setSource(60844U);
    msg.setSourceEntity(91U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(35U);
    msg.target = 60448U;
    msg.lat = 0.2489468611663972;
    msg.lon = 0.22941016121801727;
    msg.z_units = 133U;
    msg.z = 0.9617930243222305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.8104180449067221);
    msg.setSource(25892U);
    msg.setSourceEntity(53U);
    msg.setDestination(21607U);
    msg.setDestinationEntity(187U);
    msg.target = 32657U;
    msg.lat = 0.3869067967258508;
    msg.lon = 0.43012983610638866;
    msg.z_units = 241U;
    msg.z = 0.2649511148740529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.7554070083815573);
    msg.setSource(18959U);
    msg.setSourceEntity(57U);
    msg.setDestination(32468U);
    msg.setDestinationEntity(172U);
    msg.locale.assign("ROQITRPLGQXJDBOZUBMKODKAPJYXNVFSBNJZHKOVZBYEWYEUYRQUANBGIFBINRQTEXYSGCTDLYLLCHOVENVEXOMVWLTTZTAETJRFKFQEWGHNXDKEWLMFDXFHIVMWHZOEPYVDMKZPMUAQUMSVCIATPJSOACLDUUNLPTIRXZRJZGVBCSPQTHCGKFIGCWBWWVHSHDPMAGXZJQKJRSRYISAQWSBXFELZKNRLOUGSABPJPYFKMDWCH");
    const signed char tmp_msg_0[] = {66, -93, 26, -111, -27, -51, 16, 37, -4, -21, -77, 43, -115, -81, -72, 73, -48, -30, 114, -20, -82, 122, -12, -127, 85, -79, -2, 54, -44, -84, -63, 56, 12, -21, -126, 47, -40, -64, 28, 115, -10, -30, -42, 108, 124, 33, -73, 79, -30, -54, 31, -9, -121, 3, 98, 81, -91, 78, -126, 44, 75, 8, 74, 6, 74, 59, 27, -12, 107, -43, -53, -59, -2, -119, -69, -110, 12, 5, 33, 71, -70, -77, -10, -7, 110, -22, -100, 6, -34, 29, -121, -102, 88, -81, -84, 99, -128, -75, 19, -88, -80, -126, 17, -14, 24, -47, -64, -64, -126, -32, -62, -3, -36, -91, 10, -68, 26, 62, 86, -43, -104, -120, 45, -29, -120, -71, 7, 49, -14, -54, -21, -25, 15, 9};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.5852674935947157);
    msg.setSource(18248U);
    msg.setSourceEntity(110U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(6U);
    msg.locale.assign("AKADVJKFSCALZKGYCFPXHZUAFYBLTUFPHSANVYWVXURCPFLRRGOZIHAFDBQVNITFUHBQC");
    const signed char tmp_msg_0[] = {5, -98, -6, 74, -33, -11, 16, -127, 71, 126, -102, -115, 111, -71, -84, -10, -89, 23, -16, 51, -9, -112, -13, 111, -92, 90, -39, 75, -14, 4, 77, -68, -3, 87, -44, -91, 48, 123, -56, 107, 62, 79, 88, 20, 55, 9, 21, -101, -6, -98, 31, 18, -56, -7, -2, 5, -73, -44, -23, 55, -81, -56, -109, 123, 51, 35, -7, 1, -68, -77, -97, 14, 76, -113, 96, 94, -56, -115, -102, -34, -48, 22, 49, -67, -54, -38, -1, 121, 18, -64, 64, 122, 101, -9, -14, 42, 100, -12, 107, 17, -95, -88, -19, -17, -24, 106, 3, 68, -26, 64, -44, 76, -68, -118, 31, -114, -96, 103, 122, 123, -45, 3, 40, -108};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.2079779787904753);
    msg.setSource(25365U);
    msg.setSourceEntity(44U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(166U);
    msg.locale.assign("DDRPSSWGECKTYJPOFPTYGWJTOWUSXOWCAQXVCCZMMTDHZSVJMBIONBZWDUESBPHUDGYVPKEHGZLLSVUOZDXKZTIPBJALIFWCYVJBEGRLKQEYFZFPZXKOXNVPQTHGHURAECPFRBDXAITPRWQVSNDZEWY");
    const signed char tmp_msg_0[] = {-6, -39, -43, 76, 1, -90, 89, 114, -24, 62, -101, 121, -101, 74, 26, -87, 118, -61, 104, 109, 30, -44, 32, -49, -71, 21, 46, 26, 72, -128, 79, 72, 78, 20, -92, -102, 40, -104, -13, -7, 27, 71, -112, 101, 73, 109, -41, -9, 62, -117, 32, -71, -90, 85, 111, 20, -3, -128, -81, 79, -16, 77, 30, 28, -62, 96, -29, -7, -54, -78, 47, 120, -59, -41, 12, 15, 110, 6, 51, -80, -86, 69, 48, -37, 22, 45, -94, -9, 77, -59, -112, -120, 46, -83, -102, -102, -112, 91, -15, 20, -13, -75, 81, 63, 73, 69, 110, 118, 107, -6, 6, 47, -17, 111, 104, -52, -87, -52, -86, -111, -106, 27, 117, -42, 18, 101, -116, -55, -110, -76, -102, 90, -16, -67, 2, 32, -22, -20, -5, 84, 22, -11, 39, 117, 47, -93, 86, 108, -91, -31, 34, -34, -59, 38, 34, 5, -99, -61, 12, -44, 25, -24, -105, 88, 93, 49, 45, -36, 68, 61, -50, -51, -95, -75, 95, 1, 79, -10, 72, -8, -26, -114, -74, -101, 90, 23, -52, 1, -61, 113, 95, 45, -107, 24, 123, -95, -127, 15, -92, -57, -124, -68, 2, 106, -98, 50, -78, -36, -41, -43, -46, -50, 62, 107, -82, -97, 84, 81, 102};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.8197190184576805);
    msg.setSource(19743U);
    msg.setSourceEntity(54U);
    msg.setDestination(16997U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.3405487747949396);
    msg.setSource(58632U);
    msg.setSourceEntity(0U);
    msg.setDestination(27535U);
    msg.setDestinationEntity(75U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.8162704812758506);
    msg.setSource(55233U);
    msg.setSourceEntity(81U);
    msg.setDestination(43U);
    msg.setDestinationEntity(74U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.919466568201027);
    msg.setSource(445U);
    msg.setSourceEntity(133U);
    msg.setDestination(3059U);
    msg.setDestinationEntity(248U);
    msg.camid = 19U;
    msg.x = 24693U;
    msg.y = 20246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.974637739811503);
    msg.setSource(6640U);
    msg.setSourceEntity(141U);
    msg.setDestination(21990U);
    msg.setDestinationEntity(194U);
    msg.camid = 172U;
    msg.x = 61096U;
    msg.y = 15787U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.12794313336783303);
    msg.setSource(24650U);
    msg.setSourceEntity(9U);
    msg.setDestination(36419U);
    msg.setDestinationEntity(107U);
    msg.camid = 149U;
    msg.x = 35033U;
    msg.y = 23671U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.3458313770081768);
    msg.setSource(1854U);
    msg.setSourceEntity(233U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(68U);
    msg.camid = 95U;
    msg.x = 50476U;
    msg.y = 50142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7680449254009627);
    msg.setSource(2261U);
    msg.setSourceEntity(131U);
    msg.setDestination(61360U);
    msg.setDestinationEntity(9U);
    msg.camid = 60U;
    msg.x = 21309U;
    msg.y = 36392U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.32267332417332817);
    msg.setSource(44050U);
    msg.setSourceEntity(14U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(1U);
    msg.camid = 0U;
    msg.x = 10259U;
    msg.y = 62736U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.2549828532109666);
    msg.setSource(59087U);
    msg.setSourceEntity(143U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(111U);
    msg.tracking = 74U;
    msg.lat = 0.3976887111383537;
    msg.lon = 0.4996207127620105;
    msg.x = 0.349460092787247;
    msg.y = 0.7019143290955918;
    msg.z = 0.19507612397944152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.9475568660737737);
    msg.setSource(33622U);
    msg.setSourceEntity(231U);
    msg.setDestination(40360U);
    msg.setDestinationEntity(87U);
    msg.tracking = 132U;
    msg.lat = 0.6127458264877954;
    msg.lon = 0.6255416681951005;
    msg.x = 0.655885068335288;
    msg.y = 0.47809960665950224;
    msg.z = 0.5819363733497399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.47042046932857173);
    msg.setSource(35704U);
    msg.setSourceEntity(225U);
    msg.setDestination(44051U);
    msg.setDestinationEntity(111U);
    msg.tracking = 137U;
    msg.lat = 0.047013238722417916;
    msg.lon = 0.08969088693073934;
    msg.x = 0.227663102363583;
    msg.y = 0.21870984986234876;
    msg.z = 0.6389702343606888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.04184583631820604);
    msg.setSource(59169U);
    msg.setSourceEntity(253U);
    msg.setDestination(6536U);
    msg.setDestinationEntity(36U);
    msg.target.assign("HXMCQTYLDEEJOQIDWRKYFSMSNNFZPVTSJPLCIKJQHMZBZOWQFXJXKXAHBALMGERGSSFICAMTLVMGAKSOERZWJVLLZBYPYQBGRNCRIMGZPONDIKGOOSTAXLXXFGKGUWTVZTCSWZDPRTSFCEUBTHNKUBNNAAYBHYKFCAYZZGRKCVOKOYYVH");
    msg.lbearing = 0.9058891634741393;
    msg.lelevation = 0.08431025298165395;
    msg.bearing = 0.06648181673546949;
    msg.elevation = 0.5953849107447932;
    msg.phi = 0.7666236177865878;
    msg.theta = 0.022089331578723392;
    msg.psi = 0.9460169156847725;
    msg.accuracy = 0.32795590899751526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.21896593824776844);
    msg.setSource(1531U);
    msg.setSourceEntity(198U);
    msg.setDestination(41821U);
    msg.setDestinationEntity(165U);
    msg.target.assign("PRGRNGMUROENEDCBXHQDJBATWOJWZJOXYERDIOCVNULYKOQYXBKIJPNYJZJXXZRJIVXKCSNDCDNTABHXIFSAZLWEPSATINTFACZKANGPFWQNOTSBOIFMVSBIXFXYWQMMCZOEKZEMGJUBFSRGWTEUVQUGVZLELIPBHLFHDIHPRNDAKMYPFDJPVPQESYMIUMYYMBVEGTUKUBWUULFCWOVLQTLQWWQKCTJ");
    msg.lbearing = 0.9030257111013411;
    msg.lelevation = 0.5460045546053383;
    msg.bearing = 0.47422822914445784;
    msg.elevation = 0.42262111077052356;
    msg.phi = 0.6941114511099875;
    msg.theta = 0.9775146973194749;
    msg.psi = 0.6502852840018573;
    msg.accuracy = 0.5918679391921645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.44855014027679296);
    msg.setSource(54124U);
    msg.setSourceEntity(124U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(251U);
    msg.target.assign("NSIKRAHZEOITDCVMQXLWJJNDCFKJQUETRQHVJYZUCGGFISYXMPFWKJDZJ");
    msg.lbearing = 0.052322021493925175;
    msg.lelevation = 0.5972637657018807;
    msg.bearing = 0.8256613975888113;
    msg.elevation = 0.24420334470052452;
    msg.phi = 0.23179367520381822;
    msg.theta = 0.20808929979125868;
    msg.psi = 0.41438545671514193;
    msg.accuracy = 0.9702810061223119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.035923783289239064);
    msg.setSource(16242U);
    msg.setSourceEntity(224U);
    msg.setDestination(34510U);
    msg.setDestinationEntity(109U);
    msg.target.assign("BEOCZHZYBSAPKLIAQHUHFTWVSGCOIVXUBSEMYLCBABCVKQJPWSCAEMCDJUFWUWPQWFERKMPOXDYWZZWNFDGRNAVKDXJZZUDKTGANRFWKEAHFDLSUGOTIIJVITOJNXZJWYLIMETOZKHUOTFIOSQMPXYLUSFBDALHQ");
    msg.x = 0.6203797745982045;
    msg.y = 0.41015577660102864;
    msg.z = 0.8831911221575769;
    msg.n = 0.7895522897838251;
    msg.e = 0.06994833995524707;
    msg.d = 0.48074553366734984;
    msg.phi = 0.5291980025676645;
    msg.theta = 0.6162794318502405;
    msg.psi = 0.984848802351923;
    msg.accuracy = 0.5072934707896938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.2896290238193334);
    msg.setSource(42425U);
    msg.setSourceEntity(15U);
    msg.setDestination(6496U);
    msg.setDestinationEntity(202U);
    msg.target.assign("NRNVTBMLYCZSKBGXXNMWLSFBFTSRLGPBUNHRXMFQVJHSORZPDMICFLJKYJVIQDVPJIWSEOCHZPXQDURBCGOKZOVZANWHVYSHVLAYXWCPUQGNYMWNHFQDQDHHSWDPXXZTPFCXJGLMAERJJCOAILDKAQJEDUAQMWBXKJOUGCIRNZTWEZIWRAKKDVISUBTOSTUBYADGSELGAVIBHHURTV");
    msg.x = 0.06436230713337943;
    msg.y = 0.09552082479036828;
    msg.z = 0.7978316787097596;
    msg.n = 0.3408260932377294;
    msg.e = 0.07785867995011642;
    msg.d = 0.14911561408814045;
    msg.phi = 0.8566727661295108;
    msg.theta = 0.38888469159657524;
    msg.psi = 0.6355815027005958;
    msg.accuracy = 0.8876208845305117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.8995674238536897);
    msg.setSource(19559U);
    msg.setSourceEntity(26U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(48U);
    msg.target.assign("QVBFNPDRFRWDJGUELCJGYTGQBXOQHOEBZHVYGCVACHHFNHVFKCPBHMENMYNELDJPWSAKMNWRFLPLDSQVGMXKPIQTOAYRKHIUNZXYVXISXNVZYLFKJWOWKSYMEYSJRISSAXPITGPTVUUOOWQTNWMMDMCGHINEJDXMCBSXBXYPSBXCGJCZCIRLOPNOEUHIBJLOARTUWKFHSQYTDFDAAIZRWB");
    msg.x = 0.2562999382622261;
    msg.y = 0.3100337454360371;
    msg.z = 0.2241145160215231;
    msg.n = 0.9876784516406459;
    msg.e = 0.5853829444637867;
    msg.d = 0.007203829396672967;
    msg.phi = 0.4317857771610526;
    msg.theta = 0.1264479116312912;
    msg.psi = 0.9217040263953065;
    msg.accuracy = 0.8068790106556919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.3397045760646463);
    msg.setSource(11917U);
    msg.setSourceEntity(99U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(85U);
    msg.target.assign("WLUULXNQQDIBFPTUTUEZARRRIRRAURVQVJDDXGIULWZAXCAQFTPIHWZHYSPSWEKWFMCZNMZHANPWXTUJEQONGHEQLOIDWWFNLJYSHPGTSDOSJ");
    msg.lat = 0.171024371365332;
    msg.lon = 0.23283689431353916;
    msg.z_units = 139U;
    msg.z = 0.8732681004732871;
    msg.accuracy = 0.3298034373761466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.674652950603018);
    msg.setSource(63847U);
    msg.setSourceEntity(173U);
    msg.setDestination(50729U);
    msg.setDestinationEntity(178U);
    msg.target.assign("BAEBHIQDYADYHCTERHJWPJHYFEUUZVEJMOZPXIKUPUGQTKYXIFUFK");
    msg.lat = 0.9655501682854613;
    msg.lon = 0.7891298691642314;
    msg.z_units = 178U;
    msg.z = 0.06699660395922913;
    msg.accuracy = 0.7868549056924148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.3815026627160668);
    msg.setSource(13143U);
    msg.setSourceEntity(253U);
    msg.setDestination(47942U);
    msg.setDestinationEntity(177U);
    msg.target.assign("LEXDOZEOMOWNSIQYOAYTCX");
    msg.lat = 0.07750774814710881;
    msg.lon = 0.5730536185335532;
    msg.z_units = 28U;
    msg.z = 0.5964285285986812;
    msg.accuracy = 0.01582232405533135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7193157394274257);
    msg.setSource(27289U);
    msg.setSourceEntity(11U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(212U);
    msg.name.assign("SRQHRIEJQAEDHFJSGCAPYLL");
    msg.lat = 0.12029395384169195;
    msg.lon = 0.6010910655585116;
    msg.z = 0.5870497810063037;
    msg.z_units = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7310695196984851);
    msg.setSource(60135U);
    msg.setSourceEntity(26U);
    msg.setDestination(41769U);
    msg.setDestinationEntity(71U);
    msg.name.assign("RKWERPYNTKYAAMUJASDGGCEMXGGHDJSXGRJTMWVUJUHAZMRBIDFPQSTFZYFUOVXCYEMUHTHI");
    msg.lat = 0.06663512912278002;
    msg.lon = 0.31801668688945606;
    msg.z = 0.12977412059021554;
    msg.z_units = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.2921222510578152);
    msg.setSource(13740U);
    msg.setSourceEntity(43U);
    msg.setDestination(26368U);
    msg.setDestinationEntity(199U);
    msg.name.assign("KSRUVFGBVJJGAHDOCYSLMAOZFGWIMXRFYODTJOTRMQYBWT");
    msg.lat = 0.45581602407832267;
    msg.lon = 0.17200719886504512;
    msg.z = 0.23213342662921876;
    msg.z_units = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.3065002562913437);
    msg.setSource(63197U);
    msg.setSourceEntity(135U);
    msg.setDestination(912U);
    msg.setDestinationEntity(182U);
    msg.op = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.1586225705133062);
    msg.setSource(13532U);
    msg.setSourceEntity(20U);
    msg.setDestination(48091U);
    msg.setDestinationEntity(59U);
    msg.op = 129U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YPGGMYVKQUHYDWWTKIJHSUSSBKMAWNQYQXBMRHJHGDIBLPQVUFXOPFERFJMBAHZLASWCNECLOANCOYFATZOKOWADDTYVMTGVLVEYMZEVLSBVECVFKTGFOJUQGHZMBMNCACDHAQCRTNJHWFRJTWQRAEAIXDUVOXMZGZ");
    tmp_msg_0.lat = 0.2576351809597123;
    tmp_msg_0.lon = 0.8085552658575422;
    tmp_msg_0.z = 0.5707060294115376;
    tmp_msg_0.z_units = 176U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.4944897501461175);
    msg.setSource(12459U);
    msg.setSourceEntity(146U);
    msg.setDestination(55829U);
    msg.setDestinationEntity(31U);
    msg.op = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9928689754506459);
    msg.setSource(22923U);
    msg.setSourceEntity(124U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(158U);
    msg.value = 0.08324269525366967;
    msg.type = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7808827522417852);
    msg.setSource(11171U);
    msg.setSourceEntity(51U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9680633466784263;
    msg.type = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5064723233407427);
    msg.setSource(26244U);
    msg.setSourceEntity(3U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5324822334350584;
    msg.type = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.4782931655273257);
    msg.setSource(20390U);
    msg.setSourceEntity(48U);
    msg.setDestination(7390U);
    msg.setDestinationEntity(5U);
    msg.value = 0.027867531403065415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.1520081167830386);
    msg.setSource(30681U);
    msg.setSourceEntity(9U);
    msg.setDestination(50318U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4528136183550232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.902468257731267);
    msg.setSource(9782U);
    msg.setSourceEntity(235U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(75U);
    msg.value = 0.12636125591955327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.5568672396857877);
    msg.setSource(31272U);
    msg.setSourceEntity(236U);
    msg.setDestination(41999U);
    msg.setDestinationEntity(162U);
    msg.timestamp_last_service = 0.359533004660755;
    msg.time_next_service = 0.602648160023669;
    msg.time_motor_next_service = 0.21230285333864318;
    msg.time_idle_ground = 0.9134254017511458;
    msg.time_idle_air = 0.6770790732672817;
    msg.time_idle_water = 0.542318647833544;
    msg.time_idle_underwater = 0.1500478267935912;
    msg.time_idle_unknown = 0.015303684807225215;
    msg.time_motor_ground = 0.33973006407446793;
    msg.time_motor_air = 0.6658359486817341;
    msg.time_motor_water = 0.9420050843722492;
    msg.time_motor_underwater = 0.1325601275320919;
    msg.time_motor_unknown = 0.23471069523160826;
    msg.rpm_min = 20061;
    msg.rpm_max = -23754;
    msg.depth_max = 0.9653916182999017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.7849971061302782);
    msg.setSource(58814U);
    msg.setSourceEntity(241U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(21U);
    msg.timestamp_last_service = 0.1645217696342638;
    msg.time_next_service = 0.9158653633468695;
    msg.time_motor_next_service = 0.32818956381104547;
    msg.time_idle_ground = 0.593154165951731;
    msg.time_idle_air = 0.7037407952133233;
    msg.time_idle_water = 0.8549721596991326;
    msg.time_idle_underwater = 0.16583119056252904;
    msg.time_idle_unknown = 0.7676930227678042;
    msg.time_motor_ground = 0.4763305277724995;
    msg.time_motor_air = 0.9242132133605969;
    msg.time_motor_water = 0.529523787239039;
    msg.time_motor_underwater = 0.5170489930363827;
    msg.time_motor_unknown = 0.5793757157378107;
    msg.rpm_min = 3329;
    msg.rpm_max = -7480;
    msg.depth_max = 0.3125426431446692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.6370706811208113);
    msg.setSource(2770U);
    msg.setSourceEntity(148U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(89U);
    msg.timestamp_last_service = 0.6732019601436583;
    msg.time_next_service = 0.7920669633049211;
    msg.time_motor_next_service = 0.719461949077617;
    msg.time_idle_ground = 0.7694651128908111;
    msg.time_idle_air = 0.7333137415281448;
    msg.time_idle_water = 0.0316169357005871;
    msg.time_idle_underwater = 0.12823673593863572;
    msg.time_idle_unknown = 0.36327279693529424;
    msg.time_motor_ground = 0.7037121072331579;
    msg.time_motor_air = 0.17468377873730778;
    msg.time_motor_water = 0.3303318914460708;
    msg.time_motor_underwater = 0.6556857928930919;
    msg.time_motor_unknown = 0.702439393464768;
    msg.rpm_min = -25919;
    msg.rpm_max = 22884;
    msg.depth_max = 0.6742280628782229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.903011172561172);
    msg.setSource(35929U);
    msg.setSourceEntity(129U);
    msg.setDestination(34145U);
    msg.setDestinationEntity(186U);
    msg.severity = 35U;
    msg.text.assign("JMNXMQEBFIVXDPDAQBQEUFQBCDFLEZCYFXKTRWSYHOWGZIQHBGRMFPNGZPKJRRPWZCRKFFCIDUMKWYBOOWGUOYXTLSTMTGNLIEBJQEEAVMNGDIPRHHTOMQJTYEOMXDSZGVYNGLVRUBAPJUDJZAHQUVFUTLIVEOIGCBFKNJQLNLWVLFPHKSNWEJKVRAKUTSUAZJCGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.35214674013723857);
    msg.setSource(26086U);
    msg.setSourceEntity(83U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(62U);
    msg.severity = 201U;
    msg.text.assign("TTSLIWBUUKUXJTRSPHZHBFSBQDYQMMXKQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.350027526185145);
    msg.setSource(55424U);
    msg.setSourceEntity(47U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(199U);
    msg.severity = 85U;
    msg.text.assign("VWIEVMQBUVOEFFNMXYHYCUUJRZFQPRIKIZNZGNTRNYGWIUBYCOYIDOWKBJDTSSGBPTZMJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.5769617187403255);
    msg.setSource(7687U);
    msg.setSourceEntity(73U);
    msg.setDestination(42477U);
    msg.setDestinationEntity(137U);
    msg.channel = 91;
    msg.value = 1861696793;
    msg.gain = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.07793057987633878);
    msg.setSource(35647U);
    msg.setSourceEntity(103U);
    msg.setDestination(54732U);
    msg.setDestinationEntity(240U);
    msg.channel = 83;
    msg.value = -89718999;
    msg.gain = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0909819952053238);
    msg.setSource(17813U);
    msg.setSourceEntity(206U);
    msg.setDestination(30125U);
    msg.setDestinationEntity(232U);
    msg.channel = 42;
    msg.value = -1423946040;
    msg.gain = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.730798020804545);
    msg.setSource(10391U);
    msg.setSourceEntity(54U);
    msg.setDestination(40671U);
    msg.setDestinationEntity(92U);
    msg.ch01 = 0.4094992083932659;
    msg.ch02 = 0.0861878651816873;
    msg.ch03 = 0.26365504351978375;
    msg.ch04 = 0.045655529176320764;
    msg.ch05 = 0.8011329738073619;
    msg.ch06 = 0.7425870412239163;
    msg.ch07 = 0.1884312576428333;
    msg.ch08 = 0.5804836580689627;
    msg.ch09 = 0.8770922922640755;
    msg.ch10 = 0.03437432082113567;
    msg.ch11 = 0.3342873989080385;
    msg.ch12 = 0.8833477603004949;
    msg.ch13 = 0.3850702526408597;
    msg.ch14 = 0.05668728907056175;
    msg.ch15 = 0.5420040916586091;
    msg.ch16 = 0.24633774217063564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.1377682221539377);
    msg.setSource(62884U);
    msg.setSourceEntity(1U);
    msg.setDestination(16338U);
    msg.setDestinationEntity(37U);
    msg.ch01 = 0.7146950868260887;
    msg.ch02 = 0.9508486243028113;
    msg.ch03 = 0.7679982266546687;
    msg.ch04 = 0.462667165785174;
    msg.ch05 = 0.8759349284415928;
    msg.ch06 = 0.45901499129678147;
    msg.ch07 = 0.35580992778046805;
    msg.ch08 = 0.7433945174920008;
    msg.ch09 = 0.4717935499077375;
    msg.ch10 = 0.28791690669912373;
    msg.ch11 = 0.6374659934350023;
    msg.ch12 = 0.8468248360873538;
    msg.ch13 = 0.6382936953728866;
    msg.ch14 = 0.769987600728253;
    msg.ch15 = 0.49856390610890833;
    msg.ch16 = 0.742317239789419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.4969982436605572);
    msg.setSource(32376U);
    msg.setSourceEntity(215U);
    msg.setDestination(12853U);
    msg.setDestinationEntity(32U);
    msg.ch01 = 0.3269619639173341;
    msg.ch02 = 0.4441659936754019;
    msg.ch03 = 0.784716557681656;
    msg.ch04 = 0.08899395726895287;
    msg.ch05 = 0.16935949402302386;
    msg.ch06 = 0.39555030832380145;
    msg.ch07 = 0.5925927473196495;
    msg.ch08 = 0.3240641121506389;
    msg.ch09 = 0.8636137413187537;
    msg.ch10 = 0.9957871257098392;
    msg.ch11 = 0.3494237150463967;
    msg.ch12 = 0.8594725246157094;
    msg.ch13 = 0.4070309171520905;
    msg.ch14 = 0.12297261360390843;
    msg.ch15 = 0.29300341218844717;
    msg.ch16 = 0.4141214088705589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.15905154680964562);
    msg.setSource(48115U);
    msg.setSourceEntity(110U);
    msg.setDestination(3217U);
    msg.setDestinationEntity(73U);
    msg.op = 218U;
    msg.lat = 0.8869872667769643;
    msg.lon = 0.3451377255589705;
    msg.height = 0.16466508048134065;
    msg.depth = 0.8816221505354283;
    msg.alt = 0.16673547372856867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.12720159578548373);
    msg.setSource(42359U);
    msg.setSourceEntity(245U);
    msg.setDestination(4009U);
    msg.setDestinationEntity(190U);
    msg.op = 220U;
    msg.lat = 0.926605108877617;
    msg.lon = 0.48820917945389397;
    msg.height = 0.6473800114939935;
    msg.depth = 0.7378390342069657;
    msg.alt = 0.8266949632774748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.8940148209352976);
    msg.setSource(34089U);
    msg.setSourceEntity(48U);
    msg.setDestination(64376U);
    msg.setDestinationEntity(90U);
    msg.op = 23U;
    msg.lat = 0.24412702454915092;
    msg.lon = 0.31325065601733204;
    msg.height = 0.11793815910310923;
    msg.depth = 0.4025814858111725;
    msg.alt = 0.8028476158621335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.45070028063352374);
    msg.setSource(21642U);
    msg.setSourceEntity(102U);
    msg.setDestination(44594U);
    msg.setDestinationEntity(82U);
    msg.nbeams = 13U;
    msg.ncells = 126U;
    msg.coord_sys = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.6660265013494147);
    msg.setSource(18216U);
    msg.setSourceEntity(171U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(2U);
    msg.nbeams = 62U;
    msg.ncells = 131U;
    msg.coord_sys = 30U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.23120213166007497;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.08420879998338249;
    tmp_tmp_msg_0_0.amp = 0.035107893734207085;
    tmp_tmp_msg_0_0.cor = 71U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.19399090415420128);
    msg.setSource(56802U);
    msg.setSourceEntity(178U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(126U);
    msg.nbeams = 189U;
    msg.ncells = 181U;
    msg.coord_sys = 90U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.11686789611559067;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.7410128634228155);
    msg.setSource(22793U);
    msg.setSourceEntity(101U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(243U);
    msg.cell_position = 0.11948623157310068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.3373494558351259);
    msg.setSource(52828U);
    msg.setSourceEntity(246U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(58U);
    msg.cell_position = 0.5694520668044797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.5480666042409618);
    msg.setSource(51253U);
    msg.setSourceEntity(215U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(150U);
    msg.cell_position = 0.9234868429499895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.2480056875773229);
    msg.setSource(49327U);
    msg.setSourceEntity(98U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(21U);
    msg.vel = 0.8036931199706078;
    msg.amp = 0.6609808103089307;
    msg.cor = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.8119790814794358);
    msg.setSource(59675U);
    msg.setSourceEntity(105U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(37U);
    msg.vel = 0.021020085092065544;
    msg.amp = 0.9362099326353454;
    msg.cor = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.11972607719279027);
    msg.setSource(35802U);
    msg.setSourceEntity(160U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(126U);
    msg.vel = 0.13591343504782127;
    msg.amp = 0.31518495123398305;
    msg.cor = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.33057400492573763);
    msg.setSource(14451U);
    msg.setSourceEntity(227U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(35U);
    msg.name.assign("SDFGGJBGBIHCWBFKARFRAHOOXCJXIDVYMNOGFEKZVRVSZACOLNUXZTVOXPXIWYLRDYETPKQPCEBQWMUPROHMHWFQXMNPTSLRZTCUAYHGNTC");
    msg.value = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.7843682802326475);
    msg.setSource(56787U);
    msg.setSourceEntity(167U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(218U);
    msg.name.assign("SBQPVEORNPGIAHBXIZWBUVMTQEZUAILNJVDYHCDBNOMLOXUEISGIFLSDUDSKVTSYNOEPAWSDXRZXQQNPRHUTEHLVXHLKYUHFLFLFBBYORPNKFJJGWZUVIIQZEWPO");
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.3934569320311584);
    msg.setSource(35894U);
    msg.setSourceEntity(135U);
    msg.setDestination(63751U);
    msg.setDestinationEntity(158U);
    msg.name.assign("BZAWIKMLGDHOTALGGVTHSCDWHMAJKGMBNPKSEFSEJQAYYOVCIFWWPUVYFJTMUEUCYVSTEDFRXIOLOAGQLZWOXZQZLQNMSFCIOTAQDHWBMQHRXKGJJFLGWSPZAIVLRUXURVQXQFYNROSWFLIJEFUUHNJBIHZFIJPCBNXMYUWGOQRMZBXBXPKEN");
    msg.value = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.8333261402394972);
    msg.setSource(34972U);
    msg.setSourceEntity(64U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(130U);
    msg.name.assign("QBAMHRIGNJNUWHELPGUYVXMTTOEGNDXGZGUUDWKSBEHUEDRONTCDYZPVNXEXIJAQFRBKVSWYHLHGNMFCWIVCWJVOXKORAOTIZAJKVLFGQJGLDDYHSRMALZXKPTPASIFFFCNMFRYNEWDUDIOPJICQUBLMJNQBKWWPHDUZQLWOKMQCZBPHJKXFBECYOIOBGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.5681143319278862);
    msg.setSource(46447U);
    msg.setSourceEntity(179U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(19U);
    msg.name.assign("SCLBVEXMOBRLTXMWNEATIGSXWHYXKUBBSSMLHDWEEYVDYYZBZLZTWQSNINNUVWCMGKSFHIRDAUYAOOCADQZEJSCRGQZVGMYIWVQJRAVLSWYNQUYLLQMCUGPMAHTQJXGPTAKFCCIUTLZJCFBXFBKENLENUKZFXCFHOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.3781821466290419);
    msg.setSource(64310U);
    msg.setSourceEntity(100U);
    msg.setDestination(60506U);
    msg.setDestinationEntity(74U);
    msg.name.assign("HEHGNUSUNXINSRDAZDPRIKNRJMCKIFLFYXKBKJHUPSPUMQAQQHVSNBUTFCSBQMJKEOLCMTHJYOJQYKRPDQWFXTGIRXYMZMSDCABTQQEETCXXOPUTBWMDDOURRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.34933589711108826);
    msg.setSource(26802U);
    msg.setSourceEntity(102U);
    msg.setDestination(48023U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LURBSUHMSZDDOVTYECOLNDDNKZTPQDCIWGMHTTBRMUWRMGRLQUPEDHZFPINQDRIZHUCOZIJVLIKAURWFGOGOFZMHODERXKYSKQFVGJVPVVQANRXWLYXYYBLJEZNCJZMMIRSMLCLETACSBAFUFBNOGVDOZPICBEAPCKGRYSQTONPSMXB");
    msg.value = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.9927891403224439);
    msg.setSource(7905U);
    msg.setSourceEntity(52U);
    msg.setDestination(42010U);
    msg.setDestinationEntity(67U);
    msg.name.assign("JUKQCDDUSHDCAJUSGUJYEAFOKHHYBBUSYOSWXHIGPANSOKMJKZNEAEHAUTCYZRJQZTOGEVDWTSVXFTFORNQLNGMLEQXKXJVU");
    msg.value = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.8418339027774265);
    msg.setSource(1364U);
    msg.setSourceEntity(224U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(215U);
    msg.name.assign("XUYAGSTOXKNYTMZYMEVRTAGMGCFEHWRJJNFSPOIVIPZKTTLTWXCVGXZSNNZJVZRJDQVCWLEISCHVYNUQEAKYWLPHXIPHOPOXLQLCBUHFAWKRWXKVBDFVJKUAXQMHCZSMBEBUGHSSIGBCMCJEBUUIDZDNVWSQDRMHWBNLQFQOYUAFYRDTFFCWKMJHEOLOTYGELHPKSPCZRVKYGXRXRIZBQNLZJFURDJGBDUTAOAIMFNLEOGKSBWP");
    msg.value = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.801399795687067);
    msg.setSource(8029U);
    msg.setSourceEntity(210U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(141U);
    msg.value = 0.2582963354301544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7177903731674742);
    msg.setSource(33790U);
    msg.setSourceEntity(80U);
    msg.setDestination(29960U);
    msg.setDestinationEntity(135U);
    msg.value = 0.08091228349155433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4229500520715995);
    msg.setSource(48328U);
    msg.setSourceEntity(244U);
    msg.setDestination(37554U);
    msg.setDestinationEntity(79U);
    msg.value = 0.576181769647919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09026263137994239);
    msg.setSource(44294U);
    msg.setSourceEntity(95U);
    msg.setDestination(1283U);
    msg.setDestinationEntity(112U);
    msg.value = 0.34939439372299697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5453565252855397);
    msg.setSource(46039U);
    msg.setSourceEntity(248U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(25U);
    msg.value = 0.5926484612060624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7490819539162852);
    msg.setSource(37817U);
    msg.setSourceEntity(71U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(21U);
    msg.value = 0.3533986007903691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.06235353392655563);
    msg.setSource(48411U);
    msg.setSourceEntity(138U);
    msg.setDestination(31634U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6066559504662501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.3015263023357868);
    msg.setSource(10794U);
    msg.setSourceEntity(98U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(65U);
    msg.value = 0.39301759917972545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8801335771427564);
    msg.setSource(26447U);
    msg.setSourceEntity(228U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(227U);
    msg.value = 0.905155205265078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.672821268914012);
    msg.setSource(35804U);
    msg.setSourceEntity(145U);
    msg.setDestination(61955U);
    msg.setDestinationEntity(38U);
    msg.restriction = 79U;
    msg.reason.assign("MXSWRZUYRINHBJVGFSUFHOSRHKUCPJIXOMNRCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.6053006400651523);
    msg.setSource(12040U);
    msg.setSourceEntity(182U);
    msg.setDestination(20110U);
    msg.setDestinationEntity(23U);
    msg.restriction = 3U;
    msg.reason.assign("OFKJIMCNXUPJQMMNZUPNZGQYFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.2054228957769928);
    msg.setSource(11914U);
    msg.setSourceEntity(156U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(115U);
    msg.restriction = 97U;
    msg.reason.assign("EXHNJMEFZDOMWPDUMGHKFVRUJFDJIKLAAJKMEONCXVRJFQFKONPZMLBSTYRPRKWQLTBUQLARMGONSHMOYPBQSWLSARRHPKTBUCDJCCVWLOYIBOLATYBAOIYIIKXXQZJUFUMUIAEMGZFPDSUTHBBWQWVGGWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
