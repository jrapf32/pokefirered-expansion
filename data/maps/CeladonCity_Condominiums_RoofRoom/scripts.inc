# 1 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 2 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_MapScripts::
# 3 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	.byte 0
# 4 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 5 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 6 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
# 7 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 8 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 9 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 10 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	lock
# 11 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	faceplayer
# 12 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 13 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	givemon SPECIES_EEVEE, 25
# 14 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
# 15 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
# 16 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 17 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	release
# 18 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 19 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 20 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
# 21 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 22 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 23 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 24 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 25 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitfanfare
# 26 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 27 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 28 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 29 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 30 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 31 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 32 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 33 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 34 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
# 35 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 36 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 38 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 39 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitfanfare
# 40 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 41 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 42 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 43 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 44 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 45 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 46 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 47 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
# 48 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_TransferredToPC
# 49 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 50 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 51 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 52 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
# 53 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setflag FLAG_GOT_EEVEE
# 54 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	release
# 55 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 56 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 57 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 58 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
# 59 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 60 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 61 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 62 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	lockall
# 63 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 64 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 65 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 66 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 67 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_LINKED_DIRECT_UNION, FALSE
# 68 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	switch VAR_RESULT
# 69 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 70 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 71 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 72 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 73 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 74 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 75 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 76 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 77 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 78 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 79 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_LINKED_DIRECT_UNION, FALSE
# 80 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	switch VAR_RESULT
# 81 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 82 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 83 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 84 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 85 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 86 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 87 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 88 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
# 89 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
# 90 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 91 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 92 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 93 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
# 94 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
# 95 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 96 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 97 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 98 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
# 99 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
# 100 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 101 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
# 102 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"

# 103 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
# 104 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	releaseall
# 105 "data//maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	end
