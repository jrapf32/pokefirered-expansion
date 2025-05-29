# 1 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 2 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 3 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_MapScripts::
# 4 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 5 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_OnFrame
# 6 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	.byte 0
# 7 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 8 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnTransition::
# 9 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 10 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
# 11 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 12 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 13 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 14 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	playbgm MUS_CREDITS, 0
# 15 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	return
# 16 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 17 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnFrame::
# 18 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
# 19 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	.2byte 0
# 20 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 21 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 22 "data//maps/IndigoPlateau_Exterior/scripts.pory"
@ After beating the champion, you are warped to the main
# 23 "data//maps/IndigoPlateau_Exterior/scripts.pory"
@ entrance of Indigo Plateau. This script starts running
# 24 "data//maps/IndigoPlateau_Exterior/scripts.pory"
@ immediately after your walking animation.
# 25 "data//maps/IndigoPlateau_Exterior/scripts.pory"
@ The script is timed to the music.
# 26 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits::
# 27 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	lockall
# 28 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 105
# 29 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 30 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival exits building. Spawn a dummy object to lock the camera.
# 31 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 32 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 33 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	special SpawnCameraObject
# 34 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 35 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 36 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 37 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 38 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 39 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 40 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 41 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival runs off
# 42 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 43 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 44 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 45 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 46 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 47 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak exits building
# 48 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 49 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 50 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 51 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 52 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 53 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 54 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 55 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 160
# 56 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 57 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak looks at player, then walks off
# 58 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 59 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 60 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 61 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 62 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 63 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player begin to leave
# 64 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 65 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 66 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 155
# 67 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 68 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 69 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay 90
# 70 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 71 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player runs off
# 72 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 73 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 74 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 75 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 76 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 77 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	@ Reset the map state and roll the credits
# 78 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	special RemoveCameraObject
# 79 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 80 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 81 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 82 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	special DoCredits
# 83 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 84 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	releaseall
# 85 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 86 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 87 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 88 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 89 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 90 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 91 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 92 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 93 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 94 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 95 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 96 "data//maps/IndigoPlateau_Exterior/scripts.pory"
@ Unused
# 97 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding::
# 98 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 99 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 100 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 101 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 102 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave::
# 103 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 104 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_4
# 105 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 106 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 107 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 108 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave::
# 109 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 110 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_right
# 111 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 112 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 113 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 114 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 115 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 116 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 117 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 118 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 119 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 120 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 121 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 122 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 123 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 124 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 125 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave::
# 126 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_right
# 127 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 128 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 129 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 130 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 131 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 132 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 133 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 134 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround::
# 135 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 136 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 137 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 138 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 139 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	face_right
# 140 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	lock_facing_direction
# 141 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_left
# 142 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	unlock_facing_direction
# 143 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 144 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 145 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague::
# 146 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_up
# 147 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 148 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 149 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave::
# 150 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 151 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 152 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 153 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 154 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 155 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 156 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 157 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 158 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 159 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding::
# 160 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 161 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 162 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 163 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave::
# 164 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_left
# 165 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 166 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 167 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 168 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 169 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 170 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 171 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 172 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 173 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 174 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 175 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 176 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 177 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 178 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 179 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 180 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 181 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 182 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 183 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 184 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 185 "data//maps/IndigoPlateau_Exterior/scripts.pory"

# 186 "data//maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding::
# 187 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 188 "data//maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
