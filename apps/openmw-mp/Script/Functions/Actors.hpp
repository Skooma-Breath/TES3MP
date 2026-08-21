#ifndef OPENMW_ACTORAPI_HPP
#define OPENMW_ACTORAPI_HPP

#define ACTORAPI \
    SCRIPT_FUNCTION("ReadReceivedActorList", ActorFunctions::ReadReceivedActorList),\
    SCRIPT_FUNCTION("ReadCellActorList", ActorFunctions::ReadCellActorList),\
    \
    SCRIPT_FUNCTION("ClearActorList", ActorFunctions::ClearActorList),\
    SCRIPT_FUNCTION("SetActorListPid", ActorFunctions::SetActorListPid),\
    \
    SCRIPT_FUNCTION("CopyReceivedActorListToStore", ActorFunctions::CopyReceivedActorListToStore),\
    \
    SCRIPT_FUNCTION("GetActorListSize", ActorFunctions::GetActorListSize),\
    SCRIPT_FUNCTION("GetActorListAction", ActorFunctions::GetActorListAction),\
    \
    SCRIPT_FUNCTION("GetActorCell", ActorFunctions::GetActorCell),\
    SCRIPT_FUNCTION("GetActorRefId", ActorFunctions::GetActorRefId),\
    SCRIPT_FUNCTION("GetActorRefNum", ActorFunctions::GetActorRefNum),\
    SCRIPT_FUNCTION("GetActorMpNum", ActorFunctions::GetActorMpNum),\
    \
    SCRIPT_FUNCTION("GetActorPosX", ActorFunctions::GetActorPosX),\
    SCRIPT_FUNCTION("GetActorPosY", ActorFunctions::GetActorPosY),\
    SCRIPT_FUNCTION("GetActorPosZ", ActorFunctions::GetActorPosZ),\
    SCRIPT_FUNCTION("GetActorRotX", ActorFunctions::GetActorRotX),\
    SCRIPT_FUNCTION("GetActorRotY", ActorFunctions::GetActorRotY),\
    SCRIPT_FUNCTION("GetActorRotZ", ActorFunctions::GetActorRotZ),\
    \
    SCRIPT_FUNCTION("GetActorHealthBase", ActorFunctions::GetActorHealthBase),\
    SCRIPT_FUNCTION("GetActorHealthCurrent", ActorFunctions::GetActorHealthCurrent),\
    SCRIPT_FUNCTION("GetActorHealthModified", ActorFunctions::GetActorHealthModified),\
    SCRIPT_FUNCTION("GetActorMagickaBase", ActorFunctions::GetActorMagickaBase),\
    SCRIPT_FUNCTION("GetActorMagickaCurrent", ActorFunctions::GetActorMagickaCurrent),\
    SCRIPT_FUNCTION("GetActorMagickaModified", ActorFunctions::GetActorMagickaModified),\
    SCRIPT_FUNCTION("GetActorFatigueBase", ActorFunctions::GetActorFatigueBase),\
    SCRIPT_FUNCTION("GetActorFatigueCurrent", ActorFunctions::GetActorFatigueCurrent),\
    SCRIPT_FUNCTION("GetActorFatigueModified", ActorFunctions::GetActorFatigueModified),\
    \
    SCRIPT_FUNCTION("GetActorEquipmentItemRefId", ActorFunctions::GetActorEquipmentItemRefId),\
    SCRIPT_FUNCTION("GetActorEquipmentItemCount", ActorFunctions::GetActorEquipmentItemCount),\
    SCRIPT_FUNCTION("GetActorEquipmentItemCharge", ActorFunctions::GetActorEquipmentItemCharge),\
    SCRIPT_FUNCTION("GetActorEquipmentItemEnchantmentCharge", ActorFunctions::GetActorEquipmentItemEnchantmentCharge),\
    \
    SCRIPT_FUNCTION("DoesActorHavePlayerKiller", ActorFunctions::DoesActorHavePlayerKiller),\
    SCRIPT_FUNCTION("GetActorKillerPid", ActorFunctions::GetActorKillerPid),\
    SCRIPT_FUNCTION("GetActorKillerRefId", ActorFunctions::GetActorKillerRefId),\
    SCRIPT_FUNCTION("GetActorKillerRefNum", ActorFunctions::GetActorKillerRefNum),\
    SCRIPT_FUNCTION("GetActorKillerMpNum", ActorFunctions::GetActorKillerMpNum),\
    SCRIPT_FUNCTION("GetActorKillerName", ActorFunctions::GetActorKillerName),\
    SCRIPT_FUNCTION("GetActorDeathState", ActorFunctions::GetActorDeathState),\
    \
    SCRIPT_FUNCTION("GetActorSpellsActiveChangesSize", ActorFunctions::GetActorSpellsActiveChangesSize),\
    SCRIPT_FUNCTION("GetActorSpellsActiveChangesAction", ActorFunctions::GetActorSpellsActiveChangesAction),\
    SCRIPT_FUNCTION("GetActorSpellsActiveId", ActorFunctions::GetActorSpellsActiveId),\
    SCRIPT_FUNCTION("GetActorSpellsActiveDisplayName", ActorFunctions::GetActorSpellsActiveDisplayName),\
    SCRIPT_FUNCTION("GetActorSpellsActiveStackingState", ActorFunctions::GetActorSpellsActiveStackingState),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectCount", ActorFunctions::GetActorSpellsActiveEffectCount),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectId", ActorFunctions::GetActorSpellsActiveEffectId),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectArg", ActorFunctions::GetActorSpellsActiveEffectArg),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectMagnitude", ActorFunctions::GetActorSpellsActiveEffectMagnitude),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectDuration", ActorFunctions::GetActorSpellsActiveEffectDuration),\
    SCRIPT_FUNCTION("GetActorSpellsActiveEffectTimeLeft", ActorFunctions::GetActorSpellsActiveEffectTimeLeft),\
    \
    SCRIPT_FUNCTION("DoesActorSpellsActiveHavePlayerCaster", ActorFunctions::DoesActorSpellsActiveHavePlayerCaster),\
    SCRIPT_FUNCTION("GetActorSpellsActiveCasterPid", ActorFunctions::GetActorSpellsActiveCasterPid),\
    SCRIPT_FUNCTION("GetActorSpellsActiveCasterRefId", ActorFunctions::GetActorSpellsActiveCasterRefId),\
    SCRIPT_FUNCTION("GetActorSpellsActiveCasterRefNum", ActorFunctions::GetActorSpellsActiveCasterRefNum),\
    SCRIPT_FUNCTION("GetActorSpellsActiveCasterMpNum", ActorFunctions::GetActorSpellsActiveCasterMpNum),\
    \
    SCRIPT_FUNCTION("DoesActorHavePosition", ActorFunctions::DoesActorHavePosition),\
    SCRIPT_FUNCTION("DoesActorHaveStatsDynamic", ActorFunctions::DoesActorHaveStatsDynamic),\
    \
    SCRIPT_FUNCTION("SetActorListCell", ActorFunctions::SetActorListCell),\
    SCRIPT_FUNCTION("SetActorListAction", ActorFunctions::SetActorListAction),\
    \
    SCRIPT_FUNCTION("SetActorCell", ActorFunctions::SetActorCell),\
    SCRIPT_FUNCTION("SetActorRefId", ActorFunctions::SetActorRefId),\
    SCRIPT_FUNCTION("SetActorRefNum", ActorFunctions::SetActorRefNum),\
    SCRIPT_FUNCTION("SetActorMpNum", ActorFunctions::SetActorMpNum),\
    \
    SCRIPT_FUNCTION("SetActorPosition", ActorFunctions::SetActorPosition),\
    SCRIPT_FUNCTION("SetActorRotation", ActorFunctions::SetActorRotation),\
    \
    SCRIPT_FUNCTION("SetActorHealthBase", ActorFunctions::SetActorHealthBase),\
    SCRIPT_FUNCTION("SetActorHealthCurrent", ActorFunctions::SetActorHealthCurrent),\
    SCRIPT_FUNCTION("SetActorHealthModified", ActorFunctions::SetActorHealthModified),\
    SCRIPT_FUNCTION("SetActorMagickaBase", ActorFunctions::SetActorMagickaBase),\
    SCRIPT_FUNCTION("SetActorMagickaCurrent", ActorFunctions::SetActorMagickaCurrent),\
    SCRIPT_FUNCTION("SetActorMagickaModified", ActorFunctions::SetActorMagickaModified),\
    SCRIPT_FUNCTION("SetActorFatigueBase", ActorFunctions::SetActorFatigueBase),\
    SCRIPT_FUNCTION("SetActorFatigueCurrent", ActorFunctions::SetActorFatigueCurrent),\
    SCRIPT_FUNCTION("SetActorFatigueModified", ActorFunctions::SetActorFatigueModified),\
    \
    SCRIPT_FUNCTION("SetActorDeathState", ActorFunctions::SetActorDeathState),\
    SCRIPT_FUNCTION("SetActorDeathInstant", ActorFunctions::SetActorDeathInstant),\
    SCRIPT_FUNCTION("SetActorSound", ActorFunctions::SetActorSound),\
    SCRIPT_FUNCTION("SetActorSpellsActiveAction", ActorFunctions::SetActorSpellsActiveAction),\
    \
    SCRIPT_FUNCTION("SetActorAIAction", ActorFunctions::SetActorAIAction),\
    SCRIPT_FUNCTION("SetActorAITargetToPlayer", ActorFunctions::SetActorAITargetToPlayer),\
    SCRIPT_FUNCTION("SetActorAITargetToObject", ActorFunctions::SetActorAITargetToObject),\
    SCRIPT_FUNCTION("SetActorAICoordinates", ActorFunctions::SetActorAICoordinates),\
    SCRIPT_FUNCTION("SetActorAIDistance", ActorFunctions::SetActorAIDistance),\
    SCRIPT_FUNCTION("SetActorAIDuration", ActorFunctions::SetActorAIDuration),\
    SCRIPT_FUNCTION("SetActorAIRepetition", ActorFunctions::SetActorAIRepetition),\
    \
    SCRIPT_FUNCTION("EquipActorItem", ActorFunctions::EquipActorItem),\
    SCRIPT_FUNCTION("UnequipActorItem", ActorFunctions::UnequipActorItem),\
    \
    SCRIPT_FUNCTION("AddActorSpellActive", ActorFunctions::AddActorSpellActive),\
    SCRIPT_FUNCTION("AddActorSpellActiveEffect", ActorFunctions::AddActorSpellActiveEffect),\
    \
    SCRIPT_FUNCTION("AddActor", ActorFunctions::AddActor),\
    \
    SCRIPT_FUNCTION("SendActorList", ActorFunctions::SendActorList),\
    SCRIPT_FUNCTION("SendActorAuthority", ActorFunctions::SendActorAuthority),\
    SCRIPT_FUNCTION("SendActorPosition", ActorFunctions::SendActorPosition),\
    SCRIPT_FUNCTION("SendActorStatsDynamic", ActorFunctions::SendActorStatsDynamic),\
    SCRIPT_FUNCTION("SendActorEquipment", ActorFunctions::SendActorEquipment),\
    SCRIPT_FUNCTION("SendActorSpellsActiveChanges", ActorFunctions::SendActorSpellsActiveChanges),\
    SCRIPT_FUNCTION("SendActorSpeech", ActorFunctions::SendActorSpeech),\
    SCRIPT_FUNCTION("SendActorDeath", ActorFunctions::SendActorDeath),\
    SCRIPT_FUNCTION("SendActorAI", ActorFunctions::SendActorAI),\
    SCRIPT_FUNCTION("SendActorCellChange", ActorFunctions::SendActorCellChange),\
    \
    SCRIPT_FUNCTION("ReadLastActorList", ActorFunctions::ReadLastActorList),\
    SCRIPT_FUNCTION("InitializeActorList", ActorFunctions::InitializeActorList),\
    SCRIPT_FUNCTION("CopyLastActorListToStore", ActorFunctions::CopyLastActorListToStore),\
    SCRIPT_FUNCTION("GetActorRefNumIndex", ActorFunctions::GetActorRefNumIndex),\
    SCRIPT_FUNCTION("GetActorKillerRefNumIndex", ActorFunctions::GetActorKillerRefNumIndex),\
    SCRIPT_FUNCTION("SetActorRefNumIndex", ActorFunctions::SetActorRefNumIndex)

class ActorFunctions
{
public:

    /**
    * \brief Use the last actor list received by the server as the one being read.
    *
    * \return void
    */
    static void ReadReceivedActorList() noexcept;

    /**
    * \brief Use the temporary actor list stored for a cell as the one being read.
    *
    * This type of actor list is used to store actor positions and dynamic stats and is deleted
    * when the cell is unloaded.
    *
    * \param cellDescription The description of the cell whose actor list should be read.
    * \return void
    */
    static void ReadCellActorList(const char* cellDescription) noexcept;

    /**
    * \brief Clear the data from the actor list stored on the server.
    *
    * \return void
    */
    static void ClearActorList() noexcept;

    /**
    * \brief Set the pid attached to the ActorList.
    *
    * \param pid The player ID to whom the actor list should be attached.
    * \return void
    */
    static void SetActorListPid(unsigned short pid) noexcept;

    /**
    * \brief Take the contents of the read-only actor list last received by the
    *        server from a player and move its contents to the stored object list
    *        that can be sent by the server.
    *
    * \return void
    */
    static void CopyReceivedActorListToStore() noexcept;

    /**
    * \brief Get the number of indexes in the read actor list.
    *
    * \return The number of indexes.
    */
    static unsigned int GetActorListSize() noexcept;

    /**
    * \brief Get the action type used in the read actor list.
    *
    * \return The action type (0 for SET, 1 for ADD, 2 for REMOVE, 3 for REQUEST).
    */
    static unsigned char GetActorListAction() noexcept;

    /**
    * \brief Get the cell description of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The cell description.
    */
    static const char *GetActorCell(unsigned int index) noexcept;
    
    /**
    * \brief Get the refId of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refId.
    */
    static const char *GetActorRefId(unsigned int index) noexcept;

    /**
    * \brief Get the refNum of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refNum.
    */
    static unsigned int GetActorRefNum(unsigned int index) noexcept;

    /**
    * \brief Get the mpNum of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The mpNum.
    */
    static unsigned int GetActorMpNum(unsigned int index) noexcept;

    /**
    * \brief Get the X position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The X position.
    */
    static double GetActorPosX(unsigned int index) noexcept;

    /**
    * \brief Get the Y position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Y position.
    */
    static double GetActorPosY(unsigned int index) noexcept;

    /**
    * \brief Get the Z position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Z position.
    */
    static double GetActorPosZ(unsigned int index) noexcept;

    /**
    * \brief Get the X rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The X rotation.
    */
    static double GetActorRotX(unsigned int index) noexcept;

    /**
    * \brief Get the Y rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Y rotation.
    */
    static double GetActorRotY(unsigned int index) noexcept;

    /**
    * \brief Get the Z rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Z rotation.
    */
    static double GetActorRotZ(unsigned int index) noexcept;

    /**
    * \brief Get the base health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base health.
    */
    static double GetActorHealthBase(unsigned int index) noexcept;

    /**
    * \brief Get the current health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current health.
    */
    static double GetActorHealthCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified health.
    */
    static double GetActorHealthModified(unsigned int index) noexcept;

    /**
    * \brief Get the base magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base magicka.
    */
    static double GetActorMagickaBase(unsigned int index) noexcept;

    /**
    * \brief Get the current magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current magicka.
    */
    static double GetActorMagickaCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified magicka.
    */
    static double GetActorMagickaModified(unsigned int index) noexcept;

    /**
    * \brief Get the base fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base fatigue.
    */
    static double GetActorFatigueBase(unsigned int index) noexcept;

    /**
    * \brief Get the current fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current fatigue.
    */
    static double GetActorFatigueCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified fatigue.
    */
    static double GetActorFatigueModified(unsigned int index) noexcept;

    /**
    * \brief Get the refId of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The refId.
    */
    static const char *GetActorEquipmentItemRefId(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the count of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The item count.
    */
    static int GetActorEquipmentItemCount(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the charge of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The charge.
    */
    static int GetActorEquipmentItemCharge(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the enchantment charge of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The enchantment charge.
    */
    static double GetActorEquipmentItemEnchantmentCharge(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Check whether the killer of the actor at a certain index in the read actor list is a player.
    *
    * \param index The index of the actor.
    * \return Whether the actor was killed by a player.
    */
    static bool DoesActorHavePlayerKiller(unsigned int index) noexcept;

    /**
    * \brief Get the player ID of the killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The player ID of the killer.
    */
    static int GetActorKillerPid(unsigned int index) noexcept;

    /**
    * \brief Get the refId of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refId of the killer.
    */
    static const char *GetActorKillerRefId(unsigned int index) noexcept;

    /**
    * \brief Get the refNum of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refNum of the killer.
    */
    static unsigned int GetActorKillerRefNum(unsigned int index) noexcept;

    /**
    * \brief Get the mpNum of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The mpNum of the killer.
    */
    static unsigned int GetActorKillerMpNum(unsigned int index) noexcept;

    /**
    * \brief Get the name of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The name of the killer.
    */
    static const char *GetActorKillerName(unsigned int index) noexcept;

    /**
    * \brief Get the deathState of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The deathState.
    */
    static unsigned int GetActorDeathState(unsigned int index) noexcept;

    /**
    * \brief Get the number of indexes in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \return The number of indexes for spells active changes.
    */
    static unsigned int GetActorSpellsActiveChangesSize(unsigned int actorIndex) noexcept;

    /**
    * \brief Get the action type used in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \return The action type (0 for SET, 1 for ADD, 2 for REMOVE).
    */
    static unsigned int GetActorSpellsActiveChangesAction(unsigned int actorIndex) noexcept;

    /**
    * \brief Get the spell id at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The spell id.
    */
    static const char* GetActorSpellsActiveId(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the spell display name at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The spell display name.
    */
    static const char* GetActorSpellsActiveDisplayName(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the spell stacking state at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The spell stacking state.
    */
    static bool GetActorSpellsActiveStackingState(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the number of effects at an index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The number of effects.
    */
    static unsigned int GetActorSpellsActiveEffectCount(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the id for an effect index at a spell index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \param effectIndex The index of the effect.
    * \return The id of the effect.
    */
    static unsigned int GetActorSpellsActiveEffectId(unsigned int actorIndex, unsigned int spellIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the arg for an effect index at a spell index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \param effectIndex The index of the effect.
    * \return The arg of the effect.
    */
    static int GetActorSpellsActiveEffectArg(unsigned int actorIndex, unsigned int spellIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the magnitude for an effect index at a spell index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \param effectIndex The index of the effect.
    * \return The magnitude of the effect.
    */
    static double GetActorSpellsActiveEffectMagnitude(unsigned int actorIndex, unsigned int spellIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the duration for an effect index at a spell index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \param effectIndex The index of the effect.
    * \return The duration of the effect.
    */
    static double GetActorSpellsActiveEffectDuration(unsigned int actorIndex, unsigned int spellIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Get the time left for an effect index at a spell index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \param effectIndex The index of the effect.
    * \return The time left for the effect.
    */
    static double GetActorSpellsActiveEffectTimeLeft(unsigned int actorIndex, unsigned int spellIndex, unsigned int effectIndex) noexcept;

    /**
    * \brief Check whether the spell at a certain index in an actor's latest spells active changes has a player
    *        as its caster.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return Whether a player is the caster of the spell.
    */
    static bool DoesActorSpellsActiveHavePlayerCaster(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the player ID of the caster of the spell at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The player ID of the caster.
    */
    static int GetActorSpellsActiveCasterPid(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the refId of the actor caster of the spell at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The refId of the caster.
    */
    static const char* GetActorSpellsActiveCasterRefId(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the refNum of the actor caster of the spell at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The refNum of the caster.
    */
    static unsigned int GetActorSpellsActiveCasterRefNum(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Get the mpNum of the actor caster of the spell at a certain index in an actor's latest spells active changes.
    *
    * \param actorIndex The index of the actor.
    * \param spellIndex The index of the spell.
    * \return The mpNum of the caster.
    */
    static unsigned int GetActorSpellsActiveCasterMpNum(unsigned int actorIndex, unsigned int spellIndex) noexcept;

    /**
    * \brief Check whether there is any positional data for the actor at a certain index in
    * the read actor list.
    *
    * This is only useful when reading the actor list data recorded for a particular cell.
    *
    * \param index The index of the actor.
    * \return Whether the read actor list contains positional data.
    */
    static bool DoesActorHavePosition(unsigned int index) noexcept;

    /**
    * \brief Check whether there is any dynamic stats data for the actor at a certain index in
    * the read actor list.
    *
    * This is only useful when reading the actor list data recorded for a particular cell.
    *
    * \param index The index of the actor.
    * \return Whether the read actor list contains dynamic stats data.
    */
    static bool DoesActorHaveStatsDynamic(unsigned int index) noexcept;

    /**
    * \brief Set the cell of the temporary actor list stored on the server.
    *
    * The cell is determined to be an exterior cell if it fits the pattern of a number followed
    * by a comma followed by another number.
    *
    * \param cellDescription The description of the cell.
    * \return void
    */
    static void SetActorListCell(const char* cellDescription) noexcept;

    /**
    * \brief Set the action type of the temporary actor list stored on the server.
    *
    * \param action The action type (0 for SET, 1 for ADD, 2 for REMOVE, 3 for REQUEST).
    * \return void
    */
    static void SetActorListAction(unsigned char action) noexcept;

    /**
    * \brief Set the cell of the temporary actor stored on the server.
    *
    * Used for ActorCellChange packets, where a specific actor's cell now differs from that of the
    * actor list.
    *
    * The cell is determined to be an exterior cell if it fits the pattern of a number followed
    * by a comma followed by another number.
    *
    * \param cellDescription The description of the cell.
    * \return void
    */
    static void SetActorCell(const char* cellDescription) noexcept;

    /**
    * \brief Set the refId of the temporary actor stored on the server.
    *
    * \param refId The refId.
    * \return void
    */
    static void SetActorRefId(const char* refId) noexcept;

    /**
    * \brief Set the refNum of the temporary actor stored on the server.
    *
    * \param refNum The refNum.
    * \return void
    */
    static void SetActorRefNum(int refNum) noexcept;

    /**
    * \brief Set the mpNum of the temporary actor stored on the server.
    *
    * \param mpNum The mpNum.
    * \return void
    */
    static void SetActorMpNum(int mpNum) noexcept;

    /**
    * \brief Set the position of the temporary actor stored on the server.
    *
    * \param x The X position.
    * \param y The Y position.
    * \param z The Z position.
    * \return void
    */
    static void SetActorPosition(double x, double y, double z) noexcept;

    /**
    * \brief Set the rotation of the temporary actor stored on the server.
    *
    * \param x The X rotation.
    * \param y The Y rotation.
    * \param z The Z rotation.
    * \return void
    */
    static void SetActorRotation(double x, double y, double z) noexcept;

    /**
    * \brief Set the base health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorHealthBase(double value) noexcept;

    /**
    * \brief Set the current health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorHealthCurrent(double value) noexcept;

    /**
    * \brief Set the modified health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorHealthModified(double value) noexcept;

    /**
    * \brief Set the base magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorMagickaBase(double value) noexcept;

    /**
    * \brief Set the current magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorMagickaCurrent(double value) noexcept;

    /**
    * \brief Set the modified magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorMagickaModified(double value) noexcept;

    /**
    * \brief Set the base fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorFatigueBase(double value) noexcept;

    /**
    * \brief Set the current fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorFatigueCurrent(double value) noexcept;

    /**
    * \brief Set the modified fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    static void SetActorFatigueModified(double value) noexcept;

    /**
    * \brief Set the sound of the temporary actor stored on the server.
    *
    * \param sound The sound.
    * \return void
    */
    static void SetActorSound(const char* sound) noexcept;

    /**
    * \brief Set the deathState of the temporary actor stored on the server.
    *
    * \param deathState The deathState.
    * \return void
    */
    static void SetActorDeathState(unsigned int deathState) noexcept;

    /**
    * \brief Set whether the death of the temporary actor stored on the server should
    *        be instant or not.
    *
    * \param isInstant Whether the death should be instant.
    * \return void
    */
    static void SetActorDeathInstant(bool isInstant) noexcept;

    /**
    * \brief Set the action type in the spells active changes of the temporary actor
    *        stored on the server.
    *
    * \param action The action (0 for SET, 1 for ADD, 2 for REMOVE).
    * \return void
    */
    static void SetActorSpellsActiveAction(unsigned char action) noexcept;

    /**
    * \brief Set the AI action of the temporary actor stored on the server.
    *
    * \param action The new action.
    * \return void
    */
    static void SetActorAIAction(unsigned int action) noexcept;

    /**
    * \brief Set a player as the AI target of the temporary actor stored on the server.
    *
    * \param pid The player ID.
    * \return void
    */
    static void SetActorAITargetToPlayer(unsigned short pid) noexcept;

    /**
    * \brief Set another object as the AI target of the temporary actor stored on the server.
    *
    * \param refNum The refNum of the target object.
    * \param mpNum The mpNum of the target object.
    * \return void
    */
    static void SetActorAITargetToObject(int refNum, int mpNum) noexcept;

    /**
    * \brief Set the coordinates for the AI package associated with the current AI action.
    *
    * \param x The X coordinate.
    * \param y The Y coordinate.
    * \param z The Z coordinate.
    * \return void
    */
    static void SetActorAICoordinates(double x, double y, double z) noexcept;

    /**
    * \brief Set the distance of the AI package associated with the current AI action.
    *
    * \param distance The distance of the package.
    * \return void
    */
    static void SetActorAIDistance(unsigned int distance) noexcept;

    /**
    * \brief Set the duration of the AI package associated with the current AI action.
    *
    * \param duration The duration of the package.
    * \return void
    */
    static void SetActorAIDuration(unsigned int duration) noexcept;

    /**
    * \brief Set whether the current AI package should be repeated.
    *
    * Note: This only has an effect on the WANDER package.
    *
    * \param shouldRepeat Whether the package should be repeated.
    * \return void
    */
    static void SetActorAIRepetition(bool shouldRepeat) noexcept;

    /**
    * \brief Equip an item in a certain slot of the equipment of the temporary actor stored
    * on the server.
    *
    * \param slot The equipment slot.
    * \param refId The refId of the item.
    * \param count The count of the item.
    * \param charge The charge of the item.
    * \param enchantmentCharge The enchantment charge of the item.
    * \return void
    */
    static void EquipActorItem(unsigned short slot, const char* refId, unsigned int count, int charge, double enchantmentCharge = -1) noexcept;

    /**
    * \brief Unequip the item in a certain slot of the equipment of the temporary actor stored
    * on the server.
    *
    * \param slot The equipment slot.
    * \return void
    */
    static void UnequipActorItem(unsigned short slot) noexcept;

    /**
    * \brief Add a new active spell to the spells active changes for the temporary actor stored,
    *        on the server, using the temporary effect values stored so far.
    *
    * \param spellId The spellId of the spell.
    * \param displayName The displayName of the spell.
    * \param stackingState Whether the spell should stack with other instances of itself.
    * \return void
    */
    static void AddActorSpellActive(const char* spellId, const char* displayName, bool stackingState) noexcept;

    /**
    * \brief Add a new effect to the next active spell that will be added to the temporary actor
    *        stored on the server.
    *
    * \param effectId The id of the effect.
    * \param magnitude The magnitude of the effect.
    * \param duration The duration of the effect.
    * \param timeLeft The timeLeft for the effect.
    * \param arg The arg of the effect when applicable, e.g. the skill used for Fortify Skill or the attribute
    *            used for Fortify Attribute.
    * \return void
    */
    static void AddActorSpellActiveEffect(int effectId, double magnitude, double duration, double timeLeft, int arg) noexcept;

    /**
    * \brief Add a copy of the server's temporary actor to the server's temporary actor list.
    *
    * In the process, the server's temporary actor will automatically be cleared so a new
    * one can be set up.
    *
    * \return void
    */
    static void AddActor() noexcept;

    /**
    * \brief Send an ActorList packet.
    *
    * It is sent only to the player for whom the current actor list was initialized.
    *
    * \return void
    */
    static void SendActorList() noexcept;

    /**
    * \brief Send an ActorAuthority packet.
    *
    * The player for whom the current actor list was initialized is recorded in the server memory
    * as the new actor authority for the actor list's cell.
    *
    * The packet is sent to that player as well as all other players who have the cell loaded.
    *
    * \return void
    */
    static void SendActorAuthority() noexcept;

    /**
    * \brief Send an ActorPosition packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    static void SendActorPosition(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorStatsDynamic packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    static void SendActorStatsDynamic(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorEquipment packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    static void SendActorEquipment(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorSpellsActive packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    static void SendActorSpellsActiveChanges(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorSpeech packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendActorSpeech(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorDeath packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendActorDeath(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorAI packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    static void SendActorAI(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorCellChange packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    static void SendActorCellChange(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;


    // All methods below are deprecated versions of methods from above

    static void ReadLastActorList() noexcept;
    static void InitializeActorList(unsigned short pid) noexcept;
    static void CopyLastActorListToStore() noexcept;
    static unsigned int GetActorRefNumIndex(unsigned int index) noexcept;
    static unsigned int GetActorKillerRefNumIndex(unsigned int index) noexcept;
    static void SetActorRefNumIndex(int refNum) noexcept;
};


#endif //OPENMW_ACTORAPI_HPP
