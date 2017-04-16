//
// Created by koncord on 05.01.16.
//

#ifndef OPENMW_NETWORKMESSAGES_HPP
#define OPENMW_NETWORKMESSAGES_HPP

#include <MessageIdentifiers.h>

enum GameMessages
{
    ID_MASTER_QUERY = ID_USER_PACKET_ENUM+1,
    ID_PLAYER_BASEINFO,
    ID_PLAYER_CHARGEN,
    ID_PLAYER_POS,
    ID_PLAYER_STATS_DYNAMIC,
    ID_PLAYER_ATTACK,
    ID_USER_MYID,
    ID_PLAYER_EQUIPMENT,
    ID_USER_DISCONNECTED,
    ID_PLAYER_DEATH,
    ID_PLAYER_RESURRECT,
    ID_CHAT_MESSAGE,
    ID_PLAYER_ANIM_FLAGS,

    ID_PLAYER_ATTRIBUTE,
    ID_PLAYER_SKILL,
    ID_PLAYER_LEVEL,
    ID_PLAYER_CHARCLASS,
    ID_HANDSHAKE,
    ID_LOADED,
    ID_GUI_MESSAGEBOX,
    ID_GAME_TIME,
    ID_PLAYER_INVENTORY,
    ID_PLAYER_SPELLBOOK,
    ID_PLAYER_JOURNAL,
    ID_PLAYER_ACTIVESKILLS,

    ID_PLAYER_CELL_CHANGE,
    ID_PLAYER_CELL_STATE,

    ID_ACTOR_LIST,
    ID_ACTOR_AUTHORITY,
    ID_ACTOR_TEST,
    ID_ACTOR_ANIM_PLAY,
    ID_ACTOR_ATTACK,
    ID_ACTOR_CELL_CHANGE,
    ID_ACTOR_ANIM_FLAGS,
    ID_ACTOR_STATS_DYNAMIC,
    ID_ACTOR_POSITION,
    ID_ACTOR_SPEECH,

    ID_OBJECT_PLACE,
    ID_OBJECT_DELETE,
    ID_OBJECT_SCALE,
    ID_OBJECT_LOCK,
    ID_OBJECT_UNLOCK,
    ID_OBJECT_MOVE,
    ID_OBJECT_ROTATE,
    ID_OBJECT_ANIM_PLAY,

    ID_CONTAINER,
    ID_DOOR_STATE,
    ID_MUSIC_PLAY,
    ID_VIDEO_PLAY,

    ID_SCRIPT_LOCAL_SHORT,
    ID_SCRIPT_LOCAL_FLOAT,
    ID_SCRIPT_MEMBER_SHORT,
    ID_SCRIPT_GLOBAL_SHORT,

    ID_GAME_CONSOLE,
    ID_GAME_PREINIT
};


#endif //OPENMW_NETWORKMESSAGES_HPP
