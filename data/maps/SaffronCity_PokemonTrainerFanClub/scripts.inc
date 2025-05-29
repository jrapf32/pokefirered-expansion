# 1 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_MapScripts::
# 3 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_OnFrame
# 4 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 5 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 6 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 7 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnFrame::
# 8 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 9 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 10 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 11 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 12 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 13 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 14 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 15 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 16 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	playse SE_PIN
# 17 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 18 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 19 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 20 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 21 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 22 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	closemessage
# 23 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 24 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 25 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 27 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 28 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 29 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 30 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 31 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 32 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 33 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 34 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 35 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 36 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 37 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 38 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 39 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 40 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 41 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 42 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 43 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 44 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 45 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 46 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 47 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 48 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 49 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 50 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 51 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 52 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 53 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 54 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer::
# 55 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 56 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 57 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 58 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 59 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 60 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 61 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 62 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 63 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 64 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer::
# 65 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 66 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 67 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 68 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 69 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 70 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer::
# 71 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 72 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 73 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 74 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 75 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 76 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 77 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 78 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition::
# 79 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
# 80 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 81 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 82 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 83 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 84 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 85 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 86 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 87 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 88 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 89 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 90 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 91 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 92 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 93 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 94 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 95 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 96 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 97 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 98 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 99 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 100 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 101 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 102 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 103 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 104 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 105 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 106 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 107 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 108 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 109 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 110 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 111 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 112 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 113 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
# 114 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 115 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 116 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 117 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 118 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
# 119 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 120 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 121 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 122 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 123 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
# 124 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 125 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 126 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 127 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 128 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
# 129 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 130 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 131 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 132 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 133 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
# 134 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 135 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 136 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 137 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 138 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
# 139 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 140 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 141 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 142 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 143 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
# 144 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 145 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 146 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 147 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 148 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
# 149 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 150 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 151 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 152 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 153 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 154 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 155 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 156 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 157 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 158 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 159 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 160 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 161 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 162 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 163 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 164 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
# 165 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 166 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
# 167 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 168 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
# 169 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 170 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 171 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 172 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 173 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
# 174 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 175 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
# 176 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 177 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 178 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 179 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 180 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
# 181 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 182 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 183 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 184 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 185 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
# 186 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 187 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 188 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 189 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 190 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
# 191 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 192 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 193 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 194 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 195 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 196 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 197 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 198 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 199 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 200 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 201 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 202 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 203 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 204 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 205 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 206 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 207 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 208 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 209 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 210 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 211 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 212 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 213 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 214 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 215 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 216 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 217 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 218 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 219 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 220 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 221 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 222 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 223 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 224 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 225 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 226 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 227 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 228 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 229 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 230 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 231 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 232 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 233 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 234 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 235 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 236 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
# 237 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 238 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
# 239 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 240 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 241 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 242 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 243 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 244 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 245 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 246 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 247 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
# 248 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 249 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 250 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 251 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 252 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 253 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 254 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 255 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 256 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 257 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 258 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 259 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 260 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 261 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 262 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 263 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 264 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 265 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 266 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 267 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 268 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 269 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 270 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 271 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 272 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
# 273 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 274 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
# 275 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 276 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 277 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 278 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 279 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 280 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 281 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 282 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 283 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
# 284 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 285 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 286 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 287 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 288 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 289 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 290 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 291 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 292 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 293 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 294 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 295 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 296 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 297 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 298 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 299 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 300 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 301 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 302 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 303 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 304 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 305 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 306 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 307 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 308 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 309 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 310 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 311 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 312 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 313 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 314 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 315 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 316 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 317 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 318 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 319 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 320 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 321 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 322 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 323 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 324 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 325 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 326 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 327 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 328 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 329 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 330 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 331 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 332 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 333 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 334 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 335 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 336 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 337 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 338 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 339 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
# 340 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 341 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 342 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 343 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 344 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 345 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 346 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 347 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 348 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
# 349 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 350 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 351 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 352 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 353 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 354 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 355 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 356 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 357 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 358 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 359 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 360 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 361 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 362 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 363 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 364 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 365 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 366 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 367 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 368 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 369 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
# 370 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 371 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 372 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 373 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 374 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 375 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 376 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 377 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 378 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
# 379 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 380 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 381 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 382 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 383 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 384 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 385 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 386 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 387 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 388 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 389 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 390 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 391 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 392 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 393 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 394 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 395 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 396 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 397 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 398 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 399 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
# 400 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 401 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 402 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 403 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 404 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 405 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 406 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 407 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 408 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
# 409 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 410 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 411 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 412 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 413 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 414 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 415 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 416 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 417 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 418 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 419 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 420 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 421 "data//maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
