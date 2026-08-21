#include "PlayerProcessor.hpp"
#include "Networking.hpp"

#include <components/openmw-mp/TimedLog.hpp>
#include <exception>

using namespace mwmp;

template<class T>
typename BasePacketProcessor<T>::processors_t BasePacketProcessor<T>::processors;

bool PlayerProcessor::Process(RakNet::Packet &packet) noexcept
{
    for (auto &processor : processors)
    {
        if (processor.first == packet.data[0])
        {
            Player *player = Players::getPlayer(packet.guid);
            PlayerPacket *myPacket = Networking::get().getPlayerPacketController()->GetPacket(packet.data[0]);
            myPacket->setPlayer(player);

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

            if (!processor.second->avoidReading && !myPacket->isPacketValid())
            {
                LOG_MESSAGE_SIMPLE(TimedLog::LOG_ERROR, "Received invalid %s; disconnecting sender",
                    processor.second->strPacketID.c_str());
                Networking::getPtr()->kickPlayer(packet.guid, false);
                return true;
            }

            processor.second->Do(*myPacket, *player);
            return true;
        }
    }
    return false;
}
