# 1 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 2 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
.set DID_CHANSEY_DANCE, FLAG_TEMP_2
# 3 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_MapScripts::
# 4 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	.byte 0
# 5 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 6 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan::
# 7 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	lock
# 8 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	goto_if_set DID_CHANSEY_DANCE, SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced
# 9 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 10 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 11 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 12 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	fadedefaultbgm
# 13 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 14 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 15 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 16 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 17 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 18 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance, MSGBOX_YESNO
# 19 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_SevaultCanyon_House_EventScript_DeclineDance
# 20 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance
# 21 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	closemessage
# 22 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 23 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown
# 24 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 25 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 26 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 27 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 28 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	fadedefaultbgm
# 29 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay 30
# 30 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 31 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow
# 32 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	setflag DID_CHANSEY_DANCE
# 33 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
# 34 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	end
# 35 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 36 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown::
# 37 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 38 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 39 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	return
# 40 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 41 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced::
# 42 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 43 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmovement 0
# 44 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 45 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
# 46 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	end
# 47 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 48 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_DeclineDance::
# 49 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 50 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ComeOnDance
# 51 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
# 52 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	end
# 53 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 54 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_Movement_ChanseyDance::
# 55 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 56 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 57 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 58 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 59 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 60 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 61 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_down
# 62 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_16
# 63 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_right
# 64 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 65 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_up
# 66 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 67 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_left
# 68 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 69 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	walk_in_place_faster_down
# 70 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	delay_4
# 71 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	step_end
# 72 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"

# 73 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_Chansey::
# 74 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	lock
# 75 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	faceplayer
# 76 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitse
# 77 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 78 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_Chansey
# 79 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	waitmoncry
# 80 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	release
# 81 "data//maps/SevenIsland_SevaultCanyon_House/scripts.pory"
	end
