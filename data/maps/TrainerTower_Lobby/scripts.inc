# 1 "data//maps/TrainerTower_Lobby/scripts.pory"

# 2 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_MapScripts::
# 3 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_OnResume
# 4 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_OnReturnToField
# 5 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_OnTransition
# 6 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_OnLoad
# 7 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_OnFrame
# 8 "data//maps/TrainerTower_Lobby/scripts.pory"
	.byte 0
# 9 "data//maps/TrainerTower_Lobby/scripts.pory"

# 10 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnResume::
# 11 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_2, 0
# 12 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_resumetimer
# 13 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_shouldexit
# 14 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_OnResumeEnd
# 15 "data//maps/TrainerTower_Lobby/scripts.pory"
	@ Never reached, above always FALSE
# 16 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 17 "data//maps/TrainerTower_Lobby/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 7
# 18 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 19 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnResumeEnd::
# 20 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 21 "data//maps/TrainerTower_Lobby/scripts.pory"

# 22 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnReturnToField::
# 23 "data//maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_NURSE
# 24 "data//maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_MART_CLERK
# 25 "data//maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_RECEPTIONIST
# 26 "data//maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_COOLTRAINER_F
# 27 "data//maps/TrainerTower_Lobby/scripts.pory"
	addobject LOCALID_TOWER_BALDING_MAN
# 28 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 29 "data//maps/TrainerTower_Lobby/scripts.pory"

# 30 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnLoad::
# 31 "data//maps/TrainerTower_Lobby/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerTower_Lobby_OpenCounterBarrier
# 32 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 33 "data//maps/TrainerTower_Lobby/scripts.pory"

# 34 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OpenCounterBarrier::
# 35 "data//maps/TrainerTower_Lobby/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
# 36 "data//maps/TrainerTower_Lobby/scripts.pory"
	return
# 37 "data//maps/TrainerTower_Lobby/scripts.pory"

# 38 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnTransition::
# 39 "data//maps/TrainerTower_Lobby/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
# 40 "data//maps/TrainerTower_Lobby/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 41 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 42 "data//maps/TrainerTower_Lobby/scripts.pory"

# 43 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_OnFrame::
# 44 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
# 45 "data//maps/TrainerTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
# 46 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte 0
# 47 "data//maps/TrainerTower_Lobby/scripts.pory"

# 48 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ExitElevator::
# 49 "data//maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 50 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_ExitElevator
# 51 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 52 "data//maps/TrainerTower_Lobby/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
# 53 "data//maps/TrainerTower_Lobby/scripts.pory"
	special DrawWholeMapView
# 54 "data//maps/TrainerTower_Lobby/scripts.pory"
	playse SE_CLICK
# 55 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitse
# 56 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_D, 0
# 57 "data//maps/TrainerTower_Lobby/scripts.pory"
	releaseall
# 58 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 59 "data//maps/TrainerTower_Lobby/scripts.pory"

# 60 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_ExitElevator::
# 61 "data//maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 62 "data//maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 63 "data//maps/TrainerTower_Lobby/scripts.pory"
	step_end
# 64 "data//maps/TrainerTower_Lobby/scripts.pory"

# 65 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_Enter::
# 66 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 67 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_getchallengestatus
# 68 "data//maps/TrainerTower_Lobby/scripts.pory"
	switch VAR_RESULT
# 69 "data//maps/TrainerTower_Lobby/scripts.pory"
	case CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_LostChallenge
# 70 "data//maps/TrainerTower_Lobby/scripts.pory"
	case CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist
# 71 "data//maps/TrainerTower_Lobby/scripts.pory"
	case CHALLENGE_STATUS_NORMAL, TrainerTower_Lobby_EventScript_EnterEnd
# 72 "data//maps/TrainerTower_Lobby/scripts.pory"

# 73 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_LostChallenge::
# 74 "data//maps/TrainerTower_Lobby/scripts.pory"
	lock
# 75 "data//maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 76 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 77 "data//maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 78 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
# 79 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ExitChallenge
# 80 "data//maps/TrainerTower_Lobby/scripts.pory"

# 81 "data//maps/TrainerTower_Lobby/scripts.pory"
@ Presumably E-Reader related
# 82 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist::
# 83 "data//maps/TrainerTower_Lobby/scripts.pory"
	lock
# 84 "data//maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 85 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 86 "data//maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 87 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
# 88 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallenge::
# 89 "data//maps/TrainerTower_Lobby/scripts.pory"
	closemessage
# 90 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 91 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 92 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 93 "data//maps/TrainerTower_Lobby/scripts.pory"
	release
# 94 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_EnterEnd::
# 95 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 96 "data//maps/TrainerTower_Lobby/scripts.pory"

# 97 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_Nurse::
# 98 "data//maps/TrainerTower_Lobby/scripts.pory"
	lock
# 99 "data//maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 100 "data//maps/TrainerTower_Lobby/scripts.pory"
	call EventScript_PkmnCenterNurse
# 101 "data//maps/TrainerTower_Lobby/scripts.pory"
	release
# 102 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 103 "data//maps/TrainerTower_Lobby/scripts.pory"

# 104 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_Receptionist::
# 105 "data//maps/TrainerTower_Lobby/scripts.pory"
	lock
# 106 "data//maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 107 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_getbeatchallenge
# 108 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_Lobby_EventScript_ThanksForCompeting
# 109 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
# 110 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ReceptionistEnd
# 111 "data//maps/TrainerTower_Lobby/scripts.pory"

# 112 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ThanksForCompeting::
# 113 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
# 114 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ReceptionistEnd::
# 115 "data//maps/TrainerTower_Lobby/scripts.pory"
	release
# 116 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 117 "data//maps/TrainerTower_Lobby/scripts.pory"

# 118 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_MartClerk::
# 119 "data//maps/TrainerTower_Lobby/scripts.pory"
	lock
# 120 "data//maps/TrainerTower_Lobby/scripts.pory"
	faceplayer
# 121 "data//maps/TrainerTower_Lobby/scripts.pory"
	message Text_MayIHelpYou
# 122 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitmessage
# 123 "data//maps/TrainerTower_Lobby/scripts.pory"
	pokemart TrainerTower_Lobby_Mart_Items
# 124 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox Text_PleaseComeAgain
# 125 "data//maps/TrainerTower_Lobby/scripts.pory"
	release
# 126 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 127 "data//maps/TrainerTower_Lobby/scripts.pory"

# 128 "data//maps/TrainerTower_Lobby/scripts.pory"
	.align 2
# 129 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Mart_Items::
# 130 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 131 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 132 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 133 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_MAX_POTION
# 134 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 135 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_REVIVE
# 136 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 137 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 138 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 139 "data//maps/TrainerTower_Lobby/scripts.pory"
	.2byte ITEM_NONE
# 140 "data//maps/TrainerTower_Lobby/scripts.pory"
	release
# 141 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 142 "data//maps/TrainerTower_Lobby/scripts.pory"

# 143 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_EntryTrigger::
# 144 "data//maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 145 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 146 "data//maps/TrainerTower_Lobby/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 147 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
# 148 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_getnumfloors
# 149 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_EventScript_AllFloorsUsed
# 150 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
# 151 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 152 "data//maps/TrainerTower_Lobby/scripts.pory"

# 153 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_AllFloorsUsed::
# 154 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
# 155 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge::
# 156 "data//maps/TrainerTower_Lobby/scripts.pory"
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
# 157 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitmessage
# 158 "data//maps/TrainerTower_Lobby/scripts.pory"
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO, FALSE
# 159 "data//maps/TrainerTower_Lobby/scripts.pory"
	switch VAR_RESULT
# 160 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_ChooseChallenge
# 161 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_DeclineChallenge
# 162 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_ChallengeInfo
# 163 "data//maps/TrainerTower_Lobby/scripts.pory"
	case SCR_MENU_CANCEL, TrainerTower_Lobby_EventScript_DeclineChallenge
# 164 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 165 "data//maps/TrainerTower_Lobby/scripts.pory"

# 166 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ChallengeInfo::
# 167 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
# 168 "data//maps/TrainerTower_Lobby/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 169 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 170 "data//maps/TrainerTower_Lobby/scripts.pory"

# 171 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge::
# 172 "data//maps/TrainerTower_Lobby/scripts.pory"
	multichoice 13, 3, MULTICHOICE_TRAINER_TOWER_MODE, FALSE
# 173 "data//maps/TrainerTower_Lobby/scripts.pory"
	switch VAR_RESULT
# 174 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_BeginChallenge
# 175 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_BeginChallenge
# 176 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_BeginChallenge
# 177 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 3, TrainerTower_Lobby_EventScript_BeginChallenge
# 178 "data//maps/TrainerTower_Lobby/scripts.pory"
	case 4, TrainerTower_Lobby_EventScript_DeclineChallenge
# 179 "data//maps/TrainerTower_Lobby/scripts.pory"
	case SCR_MENU_CANCEL, TrainerTower_Lobby_EventScript_DeclineChallenge
# 180 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 181 "data//maps/TrainerTower_Lobby/scripts.pory"

# 182 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_BeginChallenge::
# 183 "data//maps/TrainerTower_Lobby/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 184 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
# 185 "data//maps/TrainerTower_Lobby/scripts.pory"
	special HealPlayerParty
# 186 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
# 187 "data//maps/TrainerTower_Lobby/scripts.pory"
	ttower_startchallenge
# 188 "data//maps/TrainerTower_Lobby/scripts.pory"
	releaseall
# 189 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 190 "data//maps/TrainerTower_Lobby/scripts.pory"

# 191 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_DeclineChallenge::
# 192 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
# 193 "data//maps/TrainerTower_Lobby/scripts.pory"
	closemessage
# 194 "data//maps/TrainerTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 195 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitmovement 0
# 196 "data//maps/TrainerTower_Lobby/scripts.pory"
	releaseall
# 197 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 198 "data//maps/TrainerTower_Lobby/scripts.pory"

# 199 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_FaceReceptionist::
# 200 "data//maps/TrainerTower_Lobby/scripts.pory"
	face_right
# 201 "data//maps/TrainerTower_Lobby/scripts.pory"
	step_end
# 202 "data//maps/TrainerTower_Lobby/scripts.pory"

# 203 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_Movement_WalkDown::
# 204 "data//maps/TrainerTower_Lobby/scripts.pory"
	walk_down
# 205 "data//maps/TrainerTower_Lobby/scripts.pory"
	step_end
# 206 "data//maps/TrainerTower_Lobby/scripts.pory"

# 207 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_ShowRecords::
# 208 "data//maps/TrainerTower_Lobby/scripts.pory"
	lockall
# 209 "data//maps/TrainerTower_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data//maps/TrainerTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 1
# 211 "data//maps/TrainerTower_Lobby/scripts.pory"
	special ShowBattleRecords
# 212 "data//maps/TrainerTower_Lobby/scripts.pory"
	waitstate
# 213 "data//maps/TrainerTower_Lobby/scripts.pory"
	releaseall
# 214 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 215 "data//maps/TrainerTower_Lobby/scripts.pory"

# 216 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_CooltrainerF::
# 217 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
# 218 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
# 219 "data//maps/TrainerTower_Lobby/scripts.pory"

# 220 "data//maps/TrainerTower_Lobby/scripts.pory"
TrainerTower_Lobby_EventScript_BaldingMan::
# 221 "data//maps/TrainerTower_Lobby/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
# 222 "data//maps/TrainerTower_Lobby/scripts.pory"
	end
