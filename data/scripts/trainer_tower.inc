@ Local IDs apply to all floors (not lobby or roof)
.equ HIDE_TRAINER_DOUBLES1, FLAG_TEMP_2
.equ HIDE_TRAINER_SINGLES,  FLAG_TEMP_3
.equ HIDE_TRAINER_KNOCKOUT, FLAG_TEMP_4
.equ HIDE_TRAINER_DOUBLES2, FLAG_TEMP_5
.equ HIDE_OWNER,            FLAG_TEMP_6

.equ DISABLE_SINGLES_TRIGGER,  VAR_TEMP_E
.equ DISABLE_DOUBLES_TRIGGER,  VAR_TEMP_F


@@ Map scripts

TrainerTower_OnResume::
	setvar VAR_TEMP_2, 0
	ttower_resumetimer
	end

TrainerTower_OnTransition::
	ttower_initfloor
	switch VAR_RESULT
	case CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SetObjectsSingles
	case CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_SetObjectsDoubles
	case CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_SetObjectsKnockout
	setflag HIDE_TRAINER_DOUBLES1
	setflag HIDE_TRAINER_SINGLES
	setflag HIDE_TRAINER_KNOCKOUT
	setflag HIDE_TRAINER_DOUBLES2
	setvar DISABLE_SINGLES_TRIGGER, TRUE
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
	end

TrainerTower_EventScript_SetObjectsSingles::
	setflag HIDE_TRAINER_DOUBLES1
	setflag HIDE_TRAINER_KNOCKOUT
	setflag HIDE_TRAINER_DOUBLES2
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
	setobjectxyperm       LOCALID_TOWER_TRAINER_SINGLES, 15, 13
	setobjectmovementtype LOCALID_TOWER_TRAINER_SINGLES, MOVEMENT_TYPE_FACE_LEFT
	goto TrainerTower_EventScript_HideOwner

TrainerTower_EventScript_SetObjectsDoubles::
	setflag HIDE_TRAINER_SINGLES
	setflag HIDE_TRAINER_KNOCKOUT
	setvar DISABLE_SINGLES_TRIGGER, TRUE
	ttower_isfloorcleared
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_EventScript_SetObjectsDoublesAlreadyBeaten
	setobjectxyperm       LOCALID_TOWER_TRAINER_DOUBLES1, 10, 12
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm       LOCALID_TOWER_TRAINER_DOUBLES2, 10, 13
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES2, MOVEMENT_TYPE_FACE_LEFT
	goto TrainerTower_EventScript_HideOwner

TrainerTower_EventScript_SetObjectsDoublesAlreadyBeaten::
	setobjectxyperm       LOCALID_TOWER_TRAINER_DOUBLES1, 10, 12
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm       LOCALID_TOWER_TRAINER_DOUBLES2, 11, 12
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES2, MOVEMENT_TYPE_FACE_DOWN
	goto TrainerTower_EventScript_HideOwner

@ Knockout challenge re-uses trainer objects
TrainerTower_EventScript_SetObjectsKnockout::
	setflag HIDE_TRAINER_DOUBLES2
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
	setobjectxyperm       LOCALID_TOWER_TRAINER_DOUBLES1, 10, 10
	setobjectmovementtype LOCALID_TOWER_TRAINER_DOUBLES1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm       LOCALID_TOWER_TRAINER_SINGLES, 14, 13
	setobjectmovementtype LOCALID_TOWER_TRAINER_SINGLES, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm       LOCALID_TOWER_TRAINER_KNOCKOUT, 10, 16
	setobjectmovementtype LOCALID_TOWER_TRAINER_KNOCKOUT, MOVEMENT_TYPE_FACE_UP
TrainerTower_EventScript_HideOwner:
	setflag HIDE_OWNER
	end

TrainerTower_OnFrame::
	map_script_2 VAR_TEMP_2, 0, TrainerTower_EventScript_EnterFloor
	.2byte 0

TrainerTower_EventScript_EnterFloor::
	setvar VAR_TEMP_2, 1
	ttower_isfloorcleared
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_EventScript_EndEnterFloor
	setvar DISABLE_SINGLES_TRIGGER, TRUE
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
TrainerTower_EventScript_EndEnterFloor:
	ttower_shouldexit
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_EventScript_WarpToLobby
	end

@ Never reached
TrainerTower_EventScript_WarpToLobby::
	warp MAP_TRAINER_TOWER_LOBBY, 9, 7
	waitstate


@@ Battle scripts

TrainerTower_EventScript_TriggerBattle::
	ttower_getchallengetype
	switch VAR_RESULT
	case CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_DoSingleBattle
	case CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_DoDoubleBattle
	case CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_DoKnockoutBattle

TrainerTower_EventScript_DoSingleBattle:
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_Delay48
	waitmovement 0
	setvar DISABLE_SINGLES_TRIGGER, TRUE
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_SingleTrainerApproach
	waitmovement 0
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, 0
	msgbox gStringVar4
	closemessage
	goto TrainerTower_EventScript_DoBattle

TrainerTower_EventScript_DoDoubleBattle::
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, VAR_TEMP_3
	msgbox gStringVar4
	setvar VAR_0x8004, TRAINER_TOWER_FUNC_GET_SPEECH
	setvar VAR_0x8005, TRAINER_TOWER_TEXT_INTRO
	addvar VAR_TEMP_3, 1
	goto_if_eq VAR_TEMP_3, 1, TrainerTower_EventScript_DoSecondTrainerIntro
	setvar VAR_TEMP_3, 0
TrainerTower_EventScript_DoSecondTrainerIntro:
	copyvar VAR_0x8006, VAR_TEMP_3
	special CallTrainerTowerFunc
	msgbox gStringVar4
	closemessage
	goto TrainerTower_EventScript_DoBattle

TrainerTower_EventScript_DoKnockoutBattle::
	switch VAR_TEMP_1
	case 0, TrainerTower_EventScript_DoKnockoutBattle1
	case 1, TrainerTower_EventScript_DoKnockoutBattle2
	case 2, TrainerTower_EventScript_DoKnockoutBattle3

TrainerTower_EventScript_DoKnockoutBattle1:
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_KNOCKOUT, TrainerTower_Movement_BottomKnockoutTrainerApproach
	waitmovement 0
	goto TrainerTower_EventScript_DoKnockoutBattleIntro

TrainerTower_EventScript_DoKnockoutBattle2::
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, TrainerTower_Movement_TopKnockoutTrainerApproach
	waitmovement 0
	goto TrainerTower_EventScript_DoKnockoutBattleIntro

TrainerTower_EventScript_DoKnockoutBattle3::
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_SINGLES, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_RightKnockoutTrainerApproach
	waitmovement 0
TrainerTower_EventScript_DoKnockoutBattleIntro:
	ttower_getspeech TRAINER_TOWER_TEXT_INTRO, VAR_TEMP_1
	msgbox gStringVar4
	closemessage
TrainerTower_EventScript_DoBattle:
	ttower_dobattle
	waitstate
	switch VAR_RESULT
	case B_OUTCOME_WON, TrainerTower_EventScript_WonBattle
	case B_OUTCOME_LOST, TrainerTower_EventScript_WarpToLobbyLost
	case B_OUTCOME_DREW, TrainerTower_EventScript_WarpToLobbyLost
TrainerTower_EventScript_WonBattle:
	ttower_getchallengetype
	switch VAR_RESULT
	case CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SetFloorCleared
	case CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_MoveDoublesTrainers
	case CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_CheckNextKnockoutBattle

TrainerTower_EventScript_CheckNextKnockoutBattle:
	switch VAR_TEMP_1
	case 0, TrainerTower_EventScript_DoSecondKnockoutBattle
	case 1, TrainerTower_EventScript_DoThirdKnockoutBattle
	case 2, TrainerTower_EventScript_MoveLastKnockoutTrainer

TrainerTower_EventScript_DoSecondKnockoutBattle:
	addvar VAR_TEMP_1, 1
	goto TrainerTower_EventScript_DoKnockoutBattle

TrainerTower_EventScript_DoThirdKnockoutBattle::
	addvar VAR_TEMP_1, 1
	goto TrainerTower_EventScript_DoKnockoutBattle

TrainerTower_EventScript_MoveDoublesTrainers::
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, TrainerTower_Movement_DoublesTrainer2OutOfWay
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, TrainerTower_Movement_DoublesTrainer1FaceDown
	goto TrainerTower_EventScript_SetFloorCleared

TrainerTower_EventScript_MoveLastKnockoutTrainer::
	applymovement LOCALID_TOWER_TRAINER_SINGLES, TrainerTower_Movement_LastKnockoutTrainerOutOfWay
TrainerTower_EventScript_SetFloorCleared:
	ttower_clearedfloor
	end

TrainerTower_EventScript_WarpToLobbyLost::
	special HealPlayerParty
	ttower_setlost
	warp MAP_TRAINER_TOWER_LOBBY, 9, 7
	waitstate


@@ Speaking to trainers after battle

TrainerTower_EventScript_SpeakToDoublesTrainer1::
	ttower_getchallengetype
	switch VAR_RESULT
	case CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_DoublesTrainer1PostBattle
	case CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_DoublesTrainer1PostBattle
	case CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_KnockoutTrainer2PostBattle
TrainerTower_EventScript_DoublesTrainer1PostBattle:
	setvar VAR_0x8006, 0
	goto TrainerTower_EventScript_DoPostBattleText

TrainerTower_EventScript_KnockoutTrainer2PostBattle::
	setvar VAR_0x8006, 1
	goto TrainerTower_EventScript_DoPostBattleText

TrainerTower_EventScript_SpeakToSinglesTrainer::
	ttower_getchallengetype
	switch VAR_RESULT
	case CHALLENGE_TYPE_SINGLE, TrainerTower_EventScript_SinglesTrainerPostBattle
	case CHALLENGE_TYPE_DOUBLE, TrainerTower_EventScript_SinglesTrainerPostBattle
	case CHALLENGE_TYPE_KNOCKOUT, TrainerTower_EventScript_KnockoutTrainer3PostBattle
TrainerTower_EventScript_SinglesTrainerPostBattle:
	setvar VAR_0x8006, 0
	goto TrainerTower_EventScript_DoPostBattleText

TrainerTower_EventScript_KnockoutTrainer3PostBattle::
	setvar VAR_0x8006, 2
	goto TrainerTower_EventScript_DoPostBattleText

TrainerTower_EventScript_SpeakToKnockoutTrainer::
	setvar VAR_0x8006, 0
	goto TrainerTower_EventScript_DoPostBattleText

TrainerTower_EventScript_SpeakToDoublesTrainer2::
	setvar VAR_0x8006, 1
TrainerTower_EventScript_DoPostBattleText:
	ttower_getspeech TRAINER_TOWER_TEXT_AFTER
	lock
	faceplayer
	msgbox gStringVar4
	release
	return


@@ Speaking to owner

TrainerTower_EventScript_SpeakToOwner::
	lock
	faceplayer
	ttower_getownerstate
	switch VAR_RESULT
	case 0, TrainerTower_Roof_EventScript_Arrived
	case 1, TrainerTower_Roof_EventScript_GivePrize
	case 2, TrainerTower_Roof_EventScript_OwnerEnd

TrainerTower_Roof_EventScript_Arrived:
	msgbox TrainerTower_Roof_Text_ImOwnerBattledPerfectly
TrainerTower_Roof_EventScript_GivePrize:
	ttower_giveprize
	switch VAR_RESULT
	case 0, TrainerTower_Roof_EventScript_ReceivePrize
	case 1, TrainerTower_Roof_EventScript_NoRoomForPrize
	case 2, TrainerTower_Roof_EventScript_CheckFinalTime

TrainerTower_Roof_EventScript_ReceivePrize:
	msgbox TrainerTower_Roof_Text_ThisIsForYou
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message Text_ObtainedTheX
	waitfanfare
	waitmessage
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS_POCKET
	msgbox Text_PutItemAway
	call EventScript_RestorePrevTextColor
	goto TrainerTower_Roof_EventScript_CheckFinalTime

TrainerTower_Roof_EventScript_NoRoomForPrize::
	msgbox TrainerTower_Roof_Text_ThisIsForYou
	msgbox Text_BagIsFull
	goto TrainerTower_Roof_EventScript_CheckFinalTime

TrainerTower_Roof_EventScript_CheckFinalTime::
	ttower_checkfinaltime
	switch VAR_RESULT
	case 0, TrainerTower_Roof_EventScript_NewRecord
	case 1, TrainerTower_Roof_EventScript_NoNewRecord
	case 2, TrainerTower_Roof_EventScript_OwnerEnd

TrainerTower_Roof_EventScript_NewRecord:
	msgbox TrainerTower_Roof_Text_DoneItInRecordTime
	goto TrainerTower_Roof_EventScript_OwnerEnd

TrainerTower_Roof_EventScript_NoNewRecord::
	msgbox TrainerTower_Roof_Text_TookSweetTimeGettingHere
TrainerTower_Roof_EventScript_OwnerEnd:
	msgbox TrainerTower_Roof_Text_IdLikeToSeeBetterTime
	release
	return

TrainerTower_EventScript_ShowTime::
	lockall
	ttower_gettime
	msgbox TrainerTower_Text_XMinYZSec
	releaseall
	end


@@ Battle triggers

TrainerTower_EventScript_SingleBattleTrigger::
	goto TrainerTower_EventScript_TriggerBattle

TrainerTower_EventScript_DoubleBattleTriggerTop::
	setvar VAR_TEMP_3, 0
	ttower_checkdoubles
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, TrainerTower_EventScript_IneligibleForDoubleBattle
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_DOUBLES1, Common_Movement_Delay48
	goto TrainerTower_EventScript_TriggerDoubleBattle

TrainerTower_EventScript_DoubleBattleTriggerBottom::
	setvar VAR_TEMP_3, 1
	ttower_checkdoubles
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, TrainerTower_EventScript_IneligibleForDoubleBattle
	ttower_encountermusic
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TOWER_TRAINER_DOUBLES2, Common_Movement_Delay48
TrainerTower_EventScript_TriggerDoubleBattle:
	waitmovement 0
	setvar DISABLE_DOUBLES_TRIGGER, TRUE
	goto TrainerTower_EventScript_TriggerBattle

TrainerTower_EventScript_IneligibleForDoubleBattle::
	lockall
	playse SE_DING_DONG
	msgbox TrainerTower_Lobby_Text_NeedTwoMonsForDouble
	closemessage
	applymovement LOCALID_PLAYER, TrainerTower_Movement_PushPlayerBack
	waitmovement 0
	releaseall
	end

TrainerTower_Movement_SingleTrainerApproach:
	walk_left
TrainerTower_Movement_RightKnockoutTrainerApproach::
	walk_left
	walk_left
TrainerTower_Movement_PushPlayerBack:
	walk_left
	step_end

TrainerTower_Movement_BottomKnockoutTrainerApproach::
	walk_up
	walk_up
	step_end

TrainerTower_Movement_TopKnockoutTrainerApproach::
	walk_down
	walk_down
	step_end

TrainerTower_Movement_DoublesTrainer2OutOfWay::
	walk_right
TrainerTower_Movement_LastKnockoutTrainerOutOfWay:
	walk_up
	face_down
	step_end

TrainerTower_Movement_DoublesTrainer1FaceDown::
	face_down
	step_end
