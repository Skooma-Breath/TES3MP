#include <components/openmw-mp/NetworkMessages.hpp>
#include <PacketPriority.h>
#include <RakPeer.h>
#include "ActorPacket.hpp"

using namespace mwmp;

ActorPacket::ActorPacket(RakNet::RakPeerInterface *peer) : BasePacket(peer)
{
    packetID = 0;
    priority = HIGH_PRIORITY;
    reliability = RELIABLE_ORDERED;
    orderChannel = CHANNEL_ACTOR;
    this->peer = peer;
}

ActorPacket::~ActorPacket()
{

}

void ActorPacket::setActorList(BaseActorList *newActorList)
{
    actorList = newActorList;
    guid = actorList->guid;
}

void ActorPacket::Packet(RakNet::BitStream *newBitstream, bool send)
{
    if (!PacketHeader(newBitstream, send))
        return;

    for (unsigned int i = 0; i < actorList->count; i++)
    {
        BaseActor actor{};

        if (send)
            actor = actorList->baseActors.at(i);

        if (!RW(actor.refNum, send) || !RW(actor.mpNum, send))
        {
            actorList->isValid = false;
            return;
        }

        Actor(actor, send);

        if (!packetValid)
        {
            actorList->isValid = false;
            return;
        }

        if (!send)
            actorList->baseActors.push_back(actor);
    }
}

bool ActorPacket::PacketHeader(RakNet::BitStream *newBitstream, bool send)
{
    BasePacket::Packet(newBitstream, send);

    if (!RW(actorList->cell.mData, send, true) || !RW(actorList->cell.mName, send, true))
    {
        actorList->isValid = false;
        return false;
    }

    if (send)
        actorList->count = (unsigned int)(actorList->baseActors.size());
    else
        actorList->baseActors.clear();

    if (!RW(actorList->count, send))
    {
        actorList->isValid = false;
        return false;
    }

    if (actorList->count > maxActors)
    {
        actorList->isValid = false;
        return false;
    }

    return true;
}


void ActorPacket::Actor(BaseActor &actor, bool send)
{

}
