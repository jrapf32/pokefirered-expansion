# 1 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 2 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 3 "data//maps/SevenIsland_House_Room1/scripts.pory"
.equ TRAINER_VISITING, VAR_TEMP_1
# 4 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 5 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_MapScripts::
# 6 "data//maps/SevenIsland_House_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_OnTransition
# 7 "data//maps/SevenIsland_House_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_OnFrame
# 8 "data//maps/SevenIsland_House_Room1/scripts.pory"
	.byte 0
# 9 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 10 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_OnTransition::
# 11 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special ValidateEReaderTrainer
# 12 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout
# 13 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_ne VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0, SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor
# 14 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 15 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 16 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout::
# 17 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setvar TRAINER_VISITING, TRUE
# 18 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
# 19 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
# 20 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
# 21 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 22 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 23 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor::
# 24 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
# 25 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 27 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 28 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_OnFrame::
# 29 "data//maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 30 "data//maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 31 "data//maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 32 "data//maps/SevenIsland_House_Room1/scripts.pory"
	.2byte 0
# 33 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 34 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
# 35 "data//maps/SevenIsland_House_Room1/scripts.pory"
	lockall
# 36 "data//maps/SevenIsland_House_Room1/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 37 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerReEnterRoom
# 38 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 39 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer
# 40 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 41 "data//maps/SevenIsland_House_Room1/scripts.pory"
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
# 42 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 43 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 44 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_BattleWonComment
# 45 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_BattleLostComment
# 46 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_BattleTiedComment
# 47 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 48 "data//maps/SevenIsland_House_Room1/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 49 "data//maps/SevenIsland_House_Room1/scripts.pory"
	releaseall
# 50 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 51 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 52 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleWonComment::
# 53 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
# 54 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 55 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 56 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleLostComment::
# 57 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
# 58 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 59 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 60 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleTiedComment::
# 61 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
# 62 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 63 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 64 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerReEnterRoom::
# 65 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_down
# 66 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 67 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 68 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer::
# 69 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 70 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_down
# 71 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 72 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 73 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman::
# 74 "data//maps/SevenIsland_House_Room1/scripts.pory"
	lock
# 75 "data//maps/SevenIsland_House_Room1/scripts.pory"
	faceplayer
# 76 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special ValidateEReaderTrainer
# 77 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer
# 78 "data//maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq TRAINER_VISITING, TRUE, SevenIsland_House_Room1_EventScript_TrainerVisiting
# 79 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 80 "data//maps/SevenIsland_House_Room1/scripts.pory"
	release
# 81 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 82 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 83 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer::
# 84 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 85 "data//maps/SevenIsland_House_Room1/scripts.pory"
	release
# 86 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 87 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 88 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting::
# 89 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special SavePlayerParty
# 90 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special BufferEReaderTrainerName
# 91 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 92 "data//maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 93 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call SevenIsland_House_Room1_EventScript_ChooseParty
# 94 "data//maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 95 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 96 "data//maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 97 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 98 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call EventScript_AskSaveGame
# 99 "data//maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 100 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special SavePlayerParty
# 101 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 102 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
# 103 "data//maps/SevenIsland_House_Room1/scripts.pory"
	closemessage
# 104 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth
# 105 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SevenIsland_House_Room1_EventScript_EnterBattleRoomEast
# 106 "data//maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SevenIsland_House_Room1_EventScript_EnterBattleRoomWest
# 107 "data//maps/SevenIsland_House_Room1/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
# 108 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitstate
# 109 "data//maps/SevenIsland_House_Room1/scripts.pory"
	release
# 110 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 111 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 112 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_DeclineBattle::
# 113 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 114 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
# 115 "data//maps/SevenIsland_House_Room1/scripts.pory"
	release
# 116 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
# 117 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 118 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_ChooseParty::
# 119 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
# 120 "data//maps/SevenIsland_House_Room1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data//maps/SevenIsland_House_Room1/scripts.pory"
	special ChooseHalfPartyForBattle
# 122 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitstate
# 123 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 124 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 125 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth::
# 126 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 127 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth
# 128 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 129 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 130 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 131 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomEast::
# 132 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight
# 133 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast
# 134 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 135 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 136 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 137 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomWest::
# 138 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 139 "data//maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest
# 140 "data//maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 141 "data//maps/SevenIsland_House_Room1/scripts.pory"
	return
# 142 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 143 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth::
# 144 "data//maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 145 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 146 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 147 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 148 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 149 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast::
# 150 "data//maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 151 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 152 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 153 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 154 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 155 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest::
# 156 "data//maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 157 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_left
# 158 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 159 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 160 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 161 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft::
# 162 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_left
# 163 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_right
# 164 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 165 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 166 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight::
# 167 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 168 "data//maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_left
# 169 "data//maps/SevenIsland_House_Room1/scripts.pory"
	step_end
# 170 "data//maps/SevenIsland_House_Room1/scripts.pory"

# 171 "data//maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_Box::
# 172 "data//maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
# 173 "data//maps/SevenIsland_House_Room1/scripts.pory"
	end
