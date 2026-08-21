#include "ActorProcessor.hpp"
#include "Networking.hpp"

#include <components/openmw-mp/TimedLog.hpp>
#include <exception>

using namespace mwmp;

template<class T>
typename BasePacketProcessor<T>::processors_t BasePacketProcessor<T>::processors;

void ActorProcessor::Do(ActorPacket &packet, Player &player, BaseActorList &actorList)
{
    packet.Send(true);
}

bool ActorProcessor::Process(RakNet::Packet &packet, BaseActorList &actorList) noexcept
{
    // Clear our BaseActorList before loading new data in it
    actorList.cell.blank();
    actorList.baseActors.clear();
    actorList.guid = packet.guid;

    for (auto &processor : processors)
    {
        if (processor.first == packet.data[0])
        {
            Player *player = Players::getPlayer(packet.guid);
            ActorPacket *myPacket = Networking::get().getActorPacketController()->GetPacket(packet.data[0]);

            myPacket->setActorList(&actorList);
            actorList.isValid = true;

            if (!processor.second->avoidReading)
            {
                try
                {
                    myPacket->Read();
                }
                catch (const std::exception &e)
                {
                    LOG_MESSAGE_SIMPLE(TimedLog::LOG_ERROR, "Exception while parsing %s: %s",
                        processor.second->strPacketID.c_str(), e.what());
                    Networking::getPtr()->kickPlayer(packet.guid, false);
                    return true;
                }
                catch (...)
                {
                    LOG_MESSAGE_SIMPLE(TimedLog::LOG_ERROR, "Unknown exception while parsing %s",
                        processor.second->strPacketID.c_str());
                    Networking::getPtr()->kickPlayer(packet.guid, false);
                    return true;
                }
            }

            if (processor.second->avoidReading || (actorList.isValid && myPacket->isPacketValid()))
                processor.second->Do(*myPacket, *player, actorList);
            else
            {
                LOG_MESSAGE_SIMPLE(TimedLog::LOG_ERROR, "Received %s that failed integrity check; disconnecting sender",
                    processor.second->strPacketID.c_str());
                Networking::getPtr()->kickPlayer(packet.guid, false);
            }

            return true;
        }
    }
    return false;
}
