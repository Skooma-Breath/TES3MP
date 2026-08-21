#ifndef OPENMW_WORLDSTATEAPI_HPP
#define OPENMW_WORLDSTATEAPI_HPP

#include <components/openmw-mp/Base/BaseWorldstate.hpp>
#include "../Types.hpp"

#define WORLDSTATEAPI \
    SCRIPT_FUNCTION("ReadReceivedWorldstate", WorldstateFunctions::ReadReceivedWorldstate),\
    \
    SCRIPT_FUNCTION("CopyReceivedWorldstateToStore", WorldstateFunctions::CopyReceivedWorldstateToStore),\
    \
    SCRIPT_FUNCTION("ClearKillChanges", WorldstateFunctions::ClearKillChanges),\
    SCRIPT_FUNCTION("ClearMapChanges", WorldstateFunctions::ClearMapChanges),\
    SCRIPT_FUNCTION("ClearClientGlobals", WorldstateFunctions::ClearClientGlobals),\
    \
    SCRIPT_FUNCTION("GetKillChangesSize", WorldstateFunctions::GetKillChangesSize),\
    SCRIPT_FUNCTION("GetMapChangesSize", WorldstateFunctions::GetMapChangesSize),\
    SCRIPT_FUNCTION("GetClientGlobalsSize", WorldstateFunctions::GetClientGlobalsSize),\
    \
    SCRIPT_FUNCTION("GetKillRefId", WorldstateFunctions::GetKillRefId),\
    SCRIPT_FUNCTION("GetKillNumber", WorldstateFunctions::GetKillNumber),\
    \
    SCRIPT_FUNCTION("GetWeatherRegion", WorldstateFunctions::GetWeatherRegion),\
    SCRIPT_FUNCTION("GetWeatherCurrent", WorldstateFunctions::GetWeatherCurrent),\
    SCRIPT_FUNCTION("GetWeatherNext", WorldstateFunctions::GetWeatherNext),\
    SCRIPT_FUNCTION("GetWeatherQueued", WorldstateFunctions::GetWeatherQueued),\
    SCRIPT_FUNCTION("GetWeatherTransitionFactor", WorldstateFunctions::GetWeatherTransitionFactor),\
    \
    SCRIPT_FUNCTION("GetMapTileCellX", WorldstateFunctions::GetMapTileCellX),\
    SCRIPT_FUNCTION("GetMapTileCellY", WorldstateFunctions::GetMapTileCellY),\
    \
    SCRIPT_FUNCTION("GetClientGlobalId", WorldstateFunctions::GetClientGlobalId),\
    SCRIPT_FUNCTION("GetClientGlobalVariableType", WorldstateFunctions::GetClientGlobalVariableType),\
    SCRIPT_FUNCTION("GetClientGlobalIntValue", WorldstateFunctions::GetClientGlobalIntValue),\
    SCRIPT_FUNCTION("GetClientGlobalFloatValue", WorldstateFunctions::GetClientGlobalFloatValue),\
    \
    SCRIPT_FUNCTION("SetAuthorityRegion", WorldstateFunctions::SetAuthorityRegion),\
    \
    SCRIPT_FUNCTION("SetWeatherRegion", WorldstateFunctions::SetWeatherRegion),\
    SCRIPT_FUNCTION("SetWeatherForceState", WorldstateFunctions::SetWeatherForceState),\
    SCRIPT_FUNCTION("SetWeatherCurrent", WorldstateFunctions::SetWeatherCurrent),\
    SCRIPT_FUNCTION("SetWeatherNext", WorldstateFunctions::SetWeatherNext),\
    SCRIPT_FUNCTION("SetWeatherQueued", WorldstateFunctions::SetWeatherQueued),\
    SCRIPT_FUNCTION("SetWeatherTransitionFactor", WorldstateFunctions::SetWeatherTransitionFactor),\
    \
    SCRIPT_FUNCTION("SetHour", WorldstateFunctions::SetHour),\
    SCRIPT_FUNCTION("SetDay", WorldstateFunctions::SetDay),\
    SCRIPT_FUNCTION("SetMonth", WorldstateFunctions::SetMonth),\
    SCRIPT_FUNCTION("SetYear", WorldstateFunctions::SetYear),\
    SCRIPT_FUNCTION("SetDaysPassed", WorldstateFunctions::SetDaysPassed),\
    SCRIPT_FUNCTION("SetTimeScale", WorldstateFunctions::SetTimeScale),\
    \
    SCRIPT_FUNCTION("SetPlayerCollisionState", WorldstateFunctions::SetPlayerCollisionState),\
    SCRIPT_FUNCTION("SetActorCollisionState", WorldstateFunctions::SetActorCollisionState),\
    SCRIPT_FUNCTION("SetPlacedObjectCollisionState", WorldstateFunctions::SetPlacedObjectCollisionState),\
    SCRIPT_FUNCTION("UseActorCollisionForPlacedObjects", WorldstateFunctions::UseActorCollisionForPlacedObjects),\
    \
    SCRIPT_FUNCTION("AddKill", WorldstateFunctions::AddKill),\
    SCRIPT_FUNCTION("AddClientGlobalInteger", WorldstateFunctions::AddClientGlobalInteger),\
    SCRIPT_FUNCTION("AddClientGlobalFloat", WorldstateFunctions::AddClientGlobalFloat),\
    SCRIPT_FUNCTION("AddSynchronizedClientScriptId", WorldstateFunctions::AddSynchronizedClientScriptId),\
    SCRIPT_FUNCTION("AddSynchronizedClientGlobalId", WorldstateFunctions::AddSynchronizedClientGlobalId),\
    SCRIPT_FUNCTION("AddEnforcedCollisionRefId", WorldstateFunctions::AddEnforcedCollisionRefId),\
    SCRIPT_FUNCTION("AddCellToReset", WorldstateFunctions::AddCellToReset),\
    SCRIPT_FUNCTION("AddDestinationOverride", WorldstateFunctions::AddDestinationOverride),\
    \
    SCRIPT_FUNCTION("ClearSynchronizedClientScriptIds", WorldstateFunctions::ClearSynchronizedClientScriptIds),\
    SCRIPT_FUNCTION("ClearSynchronizedClientGlobalIds", WorldstateFunctions::ClearSynchronizedClientGlobalIds),\
    SCRIPT_FUNCTION("ClearEnforcedCollisionRefIds", WorldstateFunctions::ClearEnforcedCollisionRefIds),\
    SCRIPT_FUNCTION("ClearCellsToReset", WorldstateFunctions::ClearCellsToReset),\
    SCRIPT_FUNCTION("ClearDestinationOverrides", WorldstateFunctions::ClearDestinationOverrides),\
    \
    SCRIPT_FUNCTION("SaveMapTileImageFile", WorldstateFunctions::SaveMapTileImageFile),\
    SCRIPT_FUNCTION("LoadMapTileImageFile", WorldstateFunctions::LoadMapTileImageFile),\
    \
    SCRIPT_FUNCTION("SendClientScriptGlobal", WorldstateFunctions::SendClientScriptGlobal),\
    SCRIPT_FUNCTION("SendClientScriptSettings", WorldstateFunctions::SendClientScriptSettings),\
    SCRIPT_FUNCTION("SendWorldKillCount", WorldstateFunctions::SendWorldKillCount),\
    SCRIPT_FUNCTION("SendWorldMap", WorldstateFunctions::SendWorldMap),\
    SCRIPT_FUNCTION("SendWorldTime", WorldstateFunctions::SendWorldTime),\
    SCRIPT_FUNCTION("SendWorldWeather", WorldstateFunctions::SendWorldWeather),\
    SCRIPT_FUNCTION("SendWorldCollisionOverride", WorldstateFunctions::SendWorldCollisionOverride),\
    SCRIPT_FUNCTION("SendCellReset", WorldstateFunctions::SendCellReset),\
    SCRIPT_FUNCTION("SendWorldDestinationOverride", WorldstateFunctions::SendWorldDestinationOverride),\
    SCRIPT_FUNCTION("SendWorldRegionAuthority", WorldstateFunctions::SendWorldRegionAuthority),\
    \
    SCRIPT_FUNCTION("ReadLastWorldstate", WorldstateFunctions::ReadLastWorldstate),\
    SCRIPT_FUNCTION("CopyLastWorldstateToStore", WorldstateFunctions::CopyLastWorldstateToStore)

class WorldstateFunctions
{
public:

    static mwmp::BaseWorldstate *readWorldstate;
    static mwmp::BaseWorldstate writeWorldstate;

    /**
    * \brief Use the last worldstate received by the server as the one being read.
    *
    * \return void
    */
    static void ReadReceivedWorldstate() noexcept;

    /**
    * \brief Take the contents of the read-only worldstate last received by the
    *        server from a player and move its contents to the stored worldstate
    *        that can be sent by the server.
    *
    * \return void
    */
    static void CopyReceivedWorldstateToStore() noexcept;

    /**
    * \brief Clear the kill count changes for the write-only worldstate.
    *
    * This is used to initialize the sending of new WorldKillCount packets.
    *
    * \return void
    */
    static void ClearKillChanges() noexcept;

    /**
    * \brief Clear the map changes for the write-only worldstate.
    *
    * This is used to initialize the sending of new WorldMap packets.
    *
    * \return void
    */
    static void ClearMapChanges() noexcept;

    /**
    * \brief Clear the client globals for the write-only worldstate.
    *
    * This is used to initialize the sending of new ClientScriptGlobal packets.
    *
    * \return void
    */
    static void ClearClientGlobals() noexcept;

    /**
    * \brief Get the number of indexes in the read worldstate's kill changes.
    *
    * \return The number of indexes.
    */
    static unsigned int GetKillChangesSize() noexcept;

    /**
    * \brief Get the number of indexes in the read worldstate's map changes.
    *
    * \return The number of indexes.
    */
    static unsigned int GetMapChangesSize() noexcept;

    /**
    * \brief Get the number of indexes in the read worldstate's client globals.
    *
    * \return The number of indexes.
    */
    static unsigned int GetClientGlobalsSize() noexcept;

    /**
    * \brief Get the refId at a certain index in the read worldstate's kill count changes.
    *
    * \param index The index of the kill count.
    * \return The refId.
    */
    static const char *GetKillRefId(unsigned int index) noexcept;

    /**
    * \brief Get the number of kills at a certain index in the read worldstate's kill count changes.
    *
    * \param index The index of the kill count.
    * \return The number of kills.
    */
    static int GetKillNumber(unsigned int index) noexcept;

    /**
    * \brief Get the weather region in the read worldstate.
    *
    * \return The weather region.
    */
    static const char *GetWeatherRegion() noexcept;

    /**
    * \brief Get the current weather in the read worldstate.
    *
    * \return The current weather.
    */
    static int GetWeatherCurrent() noexcept;

    /**
    * \brief Get the next weather in the read worldstate.
    *
    * \return The next weather.
    */
    static int GetWeatherNext() noexcept;

    /**
    * \brief Get the queued weather in the read worldstate.
    *
    * \return The queued weather.
    */
    static int GetWeatherQueued() noexcept;

    /**
    * \brief Get the transition factor of the weather in the read worldstate.
    *
    * \return The transition factor of the weather.
    */
    static double GetWeatherTransitionFactor() noexcept;

    /**
    * \brief Get the X coordinate of the cell corresponding to the map tile at a certain index in
    *        the read worldstate's map tiles.
    *
    * \param index The index of the map tile.
    * \return The X coordinate of the cell.
    */
    static int GetMapTileCellX(unsigned int index) noexcept;

    /**
    * \brief Get the Y coordinate of the cell corresponding to the map tile at a certain index in
    *        the read worldstate's map tiles.
    *
    * \param index The index of the map tile.
    * \return The Y coordinate of the cell.
    */
    static int GetMapTileCellY(unsigned int index) noexcept;

    /**
    * \brief Get the id of the global variable at a certain index in the read worldstate's
    *        client globals.
    *
    * \param index The index of the client global.
    * \return The id.
    */
    static const char *GetClientGlobalId(unsigned int index) noexcept;

    /**
    * \brief Get the type of the global variable at a certain index in the read worldstate's
    *        client globals.
    *
    * \param index The index of the client global.
    * \return The variable type (0 for INTEGER, 1 for LONG, 2 for FLOAT).
    */
    static unsigned short GetClientGlobalVariableType(unsigned int index) noexcept;

    /**
    * \brief Get the integer value of the global variable at a certain index in the read
    *        worldstate's client globals.
    *
    * \param index The index of the client global.
    * \return The integer value.
    */
    static int GetClientGlobalIntValue(unsigned int index) noexcept;

    /**
    * \brief Get the float value of the global variable at a certain index in the read
    *        worldstate's client globals.
    *
    * \param index The index of the client global.
    * \return The float value.
    */
    static double GetClientGlobalFloatValue(unsigned int index) noexcept;

    /**
    * \brief Set the region affected by the next WorldRegionAuthority packet sent.
    *
    * \param authorityRegion The region.
    * \return void
    */
    static void SetAuthorityRegion(const char* authorityRegion) noexcept;

    /**
    * \brief Set the weather region in the write-only worldstate stored on the server.
    *
    * \param region The region.
    * \return void
    */
    static void SetWeatherRegion(const char* region) noexcept;

    /**
    * \brief Set the weather forcing state in the write-only worldstate stored on the server.
    *
    * Players who receive a packet with forced weather will switch to that weather immediately.
    *
    * \param forceState The weather forcing state.
    * \return void
    */
    static void SetWeatherForceState(bool forceState) noexcept;

    /**
    * \brief Set the current weather in the write-only worldstate stored on the server.
    *
    * \param currentWeather The current weather.
    * \return void
    */
    static void SetWeatherCurrent(int currentWeather) noexcept;

    /**
    * \brief Set the next weather in the write-only worldstate stored on the server.
    *
    * \param nextWeather The next weather.
    * \return void
    */
    static void SetWeatherNext(int nextWeather) noexcept;

    /**
    * \brief Set the queued weather in the write-only worldstate stored on the server.
    *
    * \param queuedWeather The queued weather.
    * \return void
    */
    static void SetWeatherQueued(int queuedWeather) noexcept;

    /**
    * \brief Set the transition factor for the weather in the write-only worldstate stored on the server.
    *
    * \param transitionFactor The transition factor.
    * \return void
    */
    static void SetWeatherTransitionFactor(double transitionFactor) noexcept;

    /**
    * \brief Set the world's hour in the write-only worldstate stored on the server.
    *
    * \param hour The hour.
    * \return void
    */
    static void SetHour(double hour) noexcept;

    /**
    * \brief Set the world's day in the write-only worldstate stored on the server.
    *
    * \param day The day.
    * \return void
    */
    static void SetDay(int day) noexcept;

    /**
    * \brief Set the world's month in the write-only worldstate stored on the server.
    *
    * \param month The month.
    * \return void
    */
    static void SetMonth(int month) noexcept;

    /**
    * \brief Set the world's year in the write-only worldstate stored on the server.
    *
    * \param year The year.
    * \return void
    */
    static void SetYear(int year) noexcept;

    /**
    * \brief Set the world's days passed in the write-only worldstate stored on the server.
    *
    * \param daysPassed The days passed.
    * \return void
    */
    static void SetDaysPassed(int daysPassed) noexcept;

    /**
    * \brief Set the world's time scale in the write-only worldstate stored on the server.
    *
    * \param timeScale The time scale.
    * \return void
    */
    static void SetTimeScale(double timeScale) noexcept;

    /**
    * \brief Set the collision state for other players in the write-only worldstate stored
    *        on the server.
    *
    * \param state The collision state.
    * \return void
    */
    static void SetPlayerCollisionState(bool state) noexcept;

    /**
    * \brief Set the collision state for actors in the write-only worldstate stored on the
    *        server.
    *
    * \param state The collision state.
    * \return void
    */
    static void SetActorCollisionState(bool state) noexcept;

    /**
    * \brief Set the collision state for placed objects in the write-only worldstate stored
    *        on the server.
    *
    * \param state The collision state.
    * \return void
    */
    static void SetPlacedObjectCollisionState(bool state) noexcept;

    /**
    * \brief Whether placed objects with collision turned on should use actor collision, i.e.
    *        whether they should be slippery and prevent players from standing on them.
    *
    * \param useActorCollision Whether to use actor collision.
    * \return void
    */
    static void UseActorCollisionForPlacedObjects(bool useActorCollision) noexcept;

    /**
    * \brief Add a new kill count to the kill count changes.
    *
    * \param refId The refId of the kill count.
    * \param number The number of kills in the kill count.
    * \return void
    */
    static void AddKill(const char* refId, int number) noexcept;

    /**
    * \brief Add a new client global integer to the client globals.
    *
    * \param id The id of the client global.
    * \param variableType The variable type (0 for SHORT, 1 for LONG).
    * \param intValue The integer value of the client global.
    * \return void
    */
    static void AddClientGlobalInteger(const char* id, int intValue, unsigned int variableType = 0) noexcept;

    /**
    * \brief Add a new client global float to the client globals.
    *
    * \param id The id of the client global.
    * \param floatValue The float value of the client global.
    * \return void
    */
    static void AddClientGlobalFloat(const char* id, double floatValue) noexcept;

    /**
    * \brief Add an ID to the list of script IDs whose variable changes should be sent to the
    *        the server by clients.
    *
    * \param scriptId The ID.
    * \return void
    */
    static void AddSynchronizedClientScriptId(const char* scriptId) noexcept;

    /**
    * \brief Add an ID to the list of global IDs whose value changes should be sent to the
    *        server by clients.
    *
    * \param globalId The ID.
    * \return void
    */
    static void AddSynchronizedClientGlobalId(const char* globalId) noexcept;

    /**
    * \brief Add a refId to the list of refIds for which collision should be enforced
    *        irrespective of other settings.
    *
    * \param refId The refId.
    * \return void
    */
    static void AddEnforcedCollisionRefId(const char* refId) noexcept;

    /**
    * \brief Add a cell with given cellDescription to the list of cells that should be reset on the client.
    *
    * \return void
    */
    static void AddCellToReset(const char * cellDescription) noexcept;

    /**
    * \brief Add a destination override containing the cell description for the old cell
    *        and the new cell.
    *
    * \param oldCellDescription The old cell description.
    * \param newCellDescription The new cell description.
    * \return void
    */
    static void AddDestinationOverride(const char* oldCellDescription, const char* newCellDescription) noexcept;

    /**
    * \brief Clear the list of script IDs whose variable changes should be sent to the
    *        the server by clients.
    *
    * \return void
    */
    static void ClearSynchronizedClientScriptIds() noexcept;

    /**
    * \brief Clear the list of global IDs whose value changes should be sent to the
    *        the server by clients.
    *
    * \return void
    */
    static void ClearSynchronizedClientGlobalIds() noexcept;

    /**
    * \brief Clear the list of refIds for which collision should be enforced irrespective
    *        of other settings.
    *
    * \return void
    */
    static void ClearEnforcedCollisionRefIds() noexcept;

    /**
    * \brief Clear the list of cells which should be reset on the client.
    *
    * \return void
    */
    static void ClearCellsToReset() noexcept;

    /**
    * \brief Clear the list of destination overrides.
    *
    * \return void
    */
    static void ClearDestinationOverrides() noexcept;

    /**
    * \brief Save the .png image data of the map tile at a certain index in the read worldstate's
    *        map changes.
    *
    * \param index The index of the map tile.
    * \param filePath The file path of the resulting file.
    * \return void
    */
    static void SaveMapTileImageFile(unsigned int index, const char *filePath) noexcept;

    /**
    * \brief Load a .png file as the image data for a map tile and add it to the write-only worldstate
    *        stored on the server.
    *
    * \param cellX The X coordinate of the cell corresponding to the map tile.
    * \param cellY The Y coordinate of the cell corresponding to the map tile.
    * \param filePath The file path of the loaded file.
    * \return void
    */
    static void LoadMapTileImageFile(int cellX, int cellY, const char* filePath) noexcept;

    /**
    * \brief Send a ClientScriptGlobal packet with the current client script globals in
    *        the write-only worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendClientScriptGlobal(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a ClientScriptSettings packet with the current client script settings in
    *        the write-only worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendClientScriptSettings(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a WorldKillCount packet with the current set of kill count changes in the write-only
    *        worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldKillCount(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a WorldRegionAuthority packet establishing a certain player as the only one who
    *        should process certain region-specific events (such as weather changes).
    *
    * It is always sent to all players.
    *
    * \param pid The player ID attached to the packet.
    * \return void
    */
    static void SendWorldRegionAuthority(unsigned short pid) noexcept;

    /**
    * \brief Send a WorldMap packet with the current set of map changes in the write-only
    *        worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldMap(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a WorldTime packet with the current time and time scale in the write-only
    *        worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldTime(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a WorldWeather packet with the current weather in the write-only worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldWeather(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a WorldCollisionOverride packet with the current collision overrides in
    *        the write-only worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldCollisionOverride(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send a CellReset packet with a list of cells,
    *
    * \param pid The player ID attached to the packet.
    * \return void
    */
    static void SendCellReset(unsigned short pid, bool sendToOtherPlayers) noexcept;

    /**
    * \brief Send a WorldDestinationOverride packet with the current destination overrides in
    *        the write-only worldstate.
    *
    * \param pid The player ID attached to the packet.
    * \param sendToOtherPlayers Whether this packet should be sent to players other than the
    *                           player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendWorldDestinationOverride(unsigned short pid, bool sendToOtherPlayers, bool skipAttachedPlayer) noexcept;


    // All methods below are deprecated versions of methods from above

    static void ReadLastWorldstate() noexcept;
    static void CopyLastWorldstateToStore() noexcept;

};

#endif //OPENMW_WORLDSTATEAPI_HPP
