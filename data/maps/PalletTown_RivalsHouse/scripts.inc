# 1 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 2 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 3 "data//maps/PalletTown_RivalsHouse/scripts.pory"
.equ RECEIVED_TOWN_MAP, VAR_TEMP_1
# 4 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 5 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_MapScripts::
# 6 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
# 7 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	.byte 0
# 8 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 9 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_OnTransition::
# 10 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 11 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
# 12 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 13 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 14 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 15 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
# 17 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	return
# 18 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 19 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 20 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	setvar RECEIVED_TOWN_MAP, TRUE
# 21 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	return
# 22 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 23 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy::
# 24 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 25 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 26 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 27 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
# 28 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq RECEIVED_TOWN_MAP, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 29 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 30 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 31 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 32 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 33 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 34 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 35 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 36 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 37 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 38 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 39 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 40 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 41 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 42 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 43 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 44 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon::
# 45 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	
# 46 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	
# 47 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 48 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 49 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 50 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 51 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	special ChoosePartyMon
# 52 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	waitstate
# 53 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 54 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 55 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 56 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 57 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 58 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 59 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 60 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_HEAL
# 62 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 63 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServices
# 64 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 66 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 67 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 68 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 69 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 70 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 71 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 72 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 73 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 74 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 75 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 76 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 77 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 78 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 79 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 80 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 81 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 82 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 83 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	switch VAR_RESULT
# 84 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
# 85 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
# 86 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
# 87 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
# 88 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
# 89 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
# 90 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
# 91 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 92 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 93 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 94 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 95 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 96 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 97 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 98 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 99 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 100 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 101 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 102 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 103 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 104 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 105 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 106 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 107 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 108 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 109 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 110 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 111 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 112 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 113 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 114 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 115 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 116 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 117 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 118 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 119 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 120 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 121 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 122 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 123 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 124 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 125 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 126 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 127 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 128 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 129 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 130 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 131 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 132 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 133 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 134 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 135 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 136 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 137 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 138 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 139 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 140 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 141 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 142 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 143 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 144 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 145 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 146 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 147 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 148 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 149 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 150 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 151 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 152 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 153 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 154 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 155 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 156 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 157 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 158 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 159 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 160 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_TownMap::
# 161 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
# 162 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 163 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 164 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Bookshelf::
# 165 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
# 166 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 167 "data//maps/PalletTown_RivalsHouse/scripts.pory"

# 168 "data//maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Picture::
# 169 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
# 170 "data//maps/PalletTown_RivalsHouse/scripts.pory"
	end
