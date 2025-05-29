# 1 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 2 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_MapScripts::
# 3 "data//maps/PewterCity_Museum_1F/scripts.pory"
	.byte 0
# 4 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 5 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1::
# 6 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 7 "data//maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 8 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 9 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 10 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 11 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 12 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 13 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 14 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 15 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 16 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 17 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 18 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
# 19 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 20 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 21 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 22 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 23 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 24 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 25 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 26 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 27 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 28 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_ExplainAmber::
# 29 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 30 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 31 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 32 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 33 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 34 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 35 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 36 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 37 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 38 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 39 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 40 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 41 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 42 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 43 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 44 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 45 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 47 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 48 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 49 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 50 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 51 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 52 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 53 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 54 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 55 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 56 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 57 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 58 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 59 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 60 "data//maps/PewterCity_Museum_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data//maps/PewterCity_Museum_1F/scripts.pory"
	showmoneybox 0, 0
# 62 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 63 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
# 64 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 65 "data//maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 66 "data//maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 67 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 68 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 69 "data//maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
# 70 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 71 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 72 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 73 "data//maps/PewterCity_Museum_1F/scripts.pory"
	checkmoney 50
# 74 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 75 "data//maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 76 "data//maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 77 "data//maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 78 "data//maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 79 "data//maps/PewterCity_Museum_1F/scripts.pory"
	playse SE_SHOP
# 80 "data//maps/PewterCity_Museum_1F/scripts.pory"
	removemoney 50
# 81 "data//maps/PewterCity_Museum_1F/scripts.pory"
	updatemoneybox
# 82 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitse
# 83 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 84 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 85 "data//maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 86 "data//maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
# 87 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 88 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 89 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 90 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 91 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 92 "data//maps/PewterCity_Museum_1F/scripts.pory"
	return
# 93 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 94 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 95 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 96 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 97 "data//maps/PewterCity_Museum_1F/scripts.pory"
	return
# 98 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 99 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 100 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 101 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 102 "data//maps/PewterCity_Museum_1F/scripts.pory"
	return
# 103 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 104 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 105 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 106 "data//maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 107 "data//maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 108 "data//maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 109 "data//maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 110 "data//maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
# 111 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 112 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 113 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit::
# 114 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_down
# 115 "data//maps/PewterCity_Museum_1F/scripts.pory"
	step_end
# 116 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 117 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft::
# 118 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 119 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 120 "data//maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 121 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 122 "data//maps/PewterCity_Museum_1F/scripts.pory"
	step_end
# 123 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 124 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid::
# 125 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 126 "data//maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 127 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 128 "data//maps/PewterCity_Museum_1F/scripts.pory"
	step_end
# 129 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 130 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight::
# 131 "data//maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 132 "data//maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 133 "data//maps/PewterCity_Museum_1F/scripts.pory"
	step_end
# 134 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 135 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist2::
# 136 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
# 137 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 138 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 139 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_OldMan::
# 140 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
# 141 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 142 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 143 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 144 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 145 "data//maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 146 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 147 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 148 "data//maps/PewterCity_Museum_1F/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 149 "data//maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 150 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 151 "data//maps/PewterCity_Museum_1F/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 152 "data//maps/PewterCity_Museum_1F/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_OBTAIN_KEY_ITEM
# 153 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 154 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 155 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 156 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 157 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 158 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 159 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 160 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 161 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 162 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 163 "data//maps/PewterCity_Museum_1F/scripts.pory"
	release
# 164 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 165 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 166 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmber::
# 167 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
# 168 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 169 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 170 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 171 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 172 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 173 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8005, 10
# 174 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8006, 3
# 175 "data//maps/PewterCity_Museum_1F/scripts.pory"
	special OpenMuseumFossilPic
# 176 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 177 "data//maps/PewterCity_Museum_1F/scripts.pory"
	special CloseMuseumFossilPic
# 178 "data//maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
# 179 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
# 180 "data//maps/PewterCity_Museum_1F/scripts.pory"

# 181 "data//maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 182 "data//maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 183 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 184 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8005, 10
# 185 "data//maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8006, 3
# 186 "data//maps/PewterCity_Museum_1F/scripts.pory"
	special OpenMuseumFossilPic
# 187 "data//maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 188 "data//maps/PewterCity_Museum_1F/scripts.pory"
	special CloseMuseumFossilPic
# 189 "data//maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
# 190 "data//maps/PewterCity_Museum_1F/scripts.pory"
	end
