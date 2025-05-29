# 1 "data//maps/PewterCity/scripts.pory"

# 2 "data//maps/PewterCity/scripts.pory"

# 3 "data//maps/PewterCity/scripts.pory"
PewterCity_MapScripts::
# 4 "data//maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 5 "data//maps/PewterCity/scripts.pory"
	.byte 0
# 6 "data//maps/PewterCity/scripts.pory"

# 7 "data//maps/PewterCity/scripts.pory"
PewterCity_OnTransition::
# 8 "data//maps/PewterCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 9 "data//maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
# 10 "data//maps/PewterCity/scripts.pory"
	end
# 11 "data//maps/PewterCity/scripts.pory"

# 12 "data//maps/PewterCity/scripts.pory"
@ Impossible to speak to this NPC from a facing dir != DIR_EAST normally, so they arent checked
# 13 "data//maps/PewterCity/scripts.pory"
@ Additionally, no movement script exists for facing DIR_SOUTH, which would necessitate walking out of bounds
# 14 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuide::
# 15 "data//maps/PewterCity/scripts.pory"
	lock
# 16 "data//maps/PewterCity/scripts.pory"
	faceplayer
# 17 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 18 "data//maps/PewterCity/scripts.pory"
	closemessage
# 19 "data//maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 20 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 21 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 22 "data//maps/PewterCity/scripts.pory"
	closemessage
# 23 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 24 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 25 "data//maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 26 "data//maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 27 "data//maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 28 "data//maps/PewterCity/scripts.pory"
	release
# 29 "data//maps/PewterCity/scripts.pory"
	end
# 30 "data//maps/PewterCity/scripts.pory"

# 31 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 32 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 33 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 34 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 35 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 36 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 37 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/PewterCity/scripts.pory"
	return
# 39 "data//maps/PewterCity/scripts.pory"

# 40 "data//maps/PewterCity/scripts.pory"
@ Unused
# 41 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 42 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 43 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 44 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 45 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 46 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 47 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 48 "data//maps/PewterCity/scripts.pory"
	return
# 49 "data//maps/PewterCity/scripts.pory"

# 50 "data//maps/PewterCity/scripts.pory"
@ Unused
# 51 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 52 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 53 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 54 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 55 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 56 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 57 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 58 "data//maps/PewterCity/scripts.pory"
	return
# 59 "data//maps/PewterCity/scripts.pory"

# 60 "data//maps/PewterCity/scripts.pory"
.macro walk_to_gym
# 61 "data//maps/PewterCity/scripts.pory"
	walk_left
# 62 "data//maps/PewterCity/scripts.pory"
	walk_left
# 63 "data//maps/PewterCity/scripts.pory"
	walk_left
# 64 "data//maps/PewterCity/scripts.pory"
	walk_up
# 65 "data//maps/PewterCity/scripts.pory"
	walk_left
# 66 "data//maps/PewterCity/scripts.pory"
	walk_left
# 67 "data//maps/PewterCity/scripts.pory"
	walk_left
# 68 "data//maps/PewterCity/scripts.pory"
	walk_left
# 69 "data//maps/PewterCity/scripts.pory"
	walk_left
# 70 "data//maps/PewterCity/scripts.pory"
	walk_left
# 71 "data//maps/PewterCity/scripts.pory"
	walk_left
# 72 "data//maps/PewterCity/scripts.pory"
	walk_left
# 73 "data//maps/PewterCity/scripts.pory"
	walk_left
# 74 "data//maps/PewterCity/scripts.pory"
	walk_left
# 75 "data//maps/PewterCity/scripts.pory"
	walk_left
# 76 "data//maps/PewterCity/scripts.pory"
	walk_left
# 77 "data//maps/PewterCity/scripts.pory"
	walk_left
# 78 "data//maps/PewterCity/scripts.pory"
	walk_left
# 79 "data//maps/PewterCity/scripts.pory"
	walk_left
# 80 "data//maps/PewterCity/scripts.pory"
	walk_up
# 81 "data//maps/PewterCity/scripts.pory"
	walk_up
# 82 "data//maps/PewterCity/scripts.pory"
	walk_up
# 83 "data//maps/PewterCity/scripts.pory"
	walk_up
# 84 "data//maps/PewterCity/scripts.pory"
	walk_up
# 85 "data//maps/PewterCity/scripts.pory"
	walk_up
# 86 "data//maps/PewterCity/scripts.pory"
	walk_up
# 87 "data//maps/PewterCity/scripts.pory"
	walk_up
# 88 "data//maps/PewterCity/scripts.pory"
	walk_up
# 89 "data//maps/PewterCity/scripts.pory"
	walk_up
# 90 "data//maps/PewterCity/scripts.pory"
	walk_left
# 91 "data//maps/PewterCity/scripts.pory"
	walk_left
# 92 "data//maps/PewterCity/scripts.pory"
	walk_left
# 93 "data//maps/PewterCity/scripts.pory"
	walk_left
# 94 "data//maps/PewterCity/scripts.pory"
	walk_left
# 95 "data//maps/PewterCity/scripts.pory"
	walk_left
# 96 "data//maps/PewterCity/scripts.pory"
	walk_left
# 97 "data//maps/PewterCity/scripts.pory"
	walk_left
# 98 "data//maps/PewterCity/scripts.pory"
	walk_left
# 99 "data//maps/PewterCity/scripts.pory"
	walk_left
# 100 "data//maps/PewterCity/scripts.pory"
	walk_left
# 101 "data//maps/PewterCity/scripts.pory"
	walk_left
# 102 "data//maps/PewterCity/scripts.pory"
	walk_left
# 103 "data//maps/PewterCity/scripts.pory"
	walk_left
# 104 "data//maps/PewterCity/scripts.pory"
	walk_left
# 105 "data//maps/PewterCity/scripts.pory"
	walk_left
# 106 "data//maps/PewterCity/scripts.pory"
	walk_down
# 107 "data//maps/PewterCity/scripts.pory"
	walk_down
# 108 "data//maps/PewterCity/scripts.pory"
	walk_down
# 109 "data//maps/PewterCity/scripts.pory"
	walk_down
# 110 "data//maps/PewterCity/scripts.pory"
	walk_down
# 111 "data//maps/PewterCity/scripts.pory"
	walk_down
# 112 "data//maps/PewterCity/scripts.pory"
	walk_down
# 113 "data//maps/PewterCity/scripts.pory"
	walk_down
# 114 "data//maps/PewterCity/scripts.pory"
	walk_right
# 115 "data//maps/PewterCity/scripts.pory"
	walk_right
# 116 "data//maps/PewterCity/scripts.pory"
	walk_right
# 117 "data//maps/PewterCity/scripts.pory"
	walk_right
# 118 "data//maps/PewterCity/scripts.pory"
	walk_right
# 119 "data//maps/PewterCity/scripts.pory"
	walk_right
# 120 "data//maps/PewterCity/scripts.pory"
	walk_right
# 121 "data//maps/PewterCity/scripts.pory"
	walk_right
# 122 "data//maps/PewterCity/scripts.pory"
.endm
# 123 "data//maps/PewterCity/scripts.pory"

# 124 "data//maps/PewterCity/scripts.pory"
.macro walk_to_gym_alt
# 125 "data//maps/PewterCity/scripts.pory"
	walk_left
# 126 "data//maps/PewterCity/scripts.pory"
	walk_left
# 127 "data//maps/PewterCity/scripts.pory"
	walk_left
# 128 "data//maps/PewterCity/scripts.pory"
	walk_left
# 129 "data//maps/PewterCity/scripts.pory"
	walk_left
# 130 "data//maps/PewterCity/scripts.pory"
	walk_left
# 131 "data//maps/PewterCity/scripts.pory"
	walk_left
# 132 "data//maps/PewterCity/scripts.pory"
	walk_left
# 133 "data//maps/PewterCity/scripts.pory"
	walk_left
# 134 "data//maps/PewterCity/scripts.pory"
	walk_left
# 135 "data//maps/PewterCity/scripts.pory"
	walk_left
# 136 "data//maps/PewterCity/scripts.pory"
	walk_left
# 137 "data//maps/PewterCity/scripts.pory"
	walk_left
# 138 "data//maps/PewterCity/scripts.pory"
	walk_left
# 139 "data//maps/PewterCity/scripts.pory"
	walk_left
# 140 "data//maps/PewterCity/scripts.pory"
	walk_up
# 141 "data//maps/PewterCity/scripts.pory"
	walk_up
# 142 "data//maps/PewterCity/scripts.pory"
	walk_up
# 143 "data//maps/PewterCity/scripts.pory"
	walk_up
# 144 "data//maps/PewterCity/scripts.pory"
	walk_up
# 145 "data//maps/PewterCity/scripts.pory"
	walk_up
# 146 "data//maps/PewterCity/scripts.pory"
	walk_up
# 147 "data//maps/PewterCity/scripts.pory"
	walk_left
# 148 "data//maps/PewterCity/scripts.pory"
	walk_left
# 149 "data//maps/PewterCity/scripts.pory"
	walk_left
# 150 "data//maps/PewterCity/scripts.pory"
	walk_left
# 151 "data//maps/PewterCity/scripts.pory"
	walk_left
# 152 "data//maps/PewterCity/scripts.pory"
	walk_left
# 153 "data//maps/PewterCity/scripts.pory"
	walk_left
# 154 "data//maps/PewterCity/scripts.pory"
	walk_left
# 155 "data//maps/PewterCity/scripts.pory"
	walk_left
# 156 "data//maps/PewterCity/scripts.pory"
	walk_left
# 157 "data//maps/PewterCity/scripts.pory"
	walk_down
# 158 "data//maps/PewterCity/scripts.pory"
	walk_down
# 159 "data//maps/PewterCity/scripts.pory"
	walk_down
# 160 "data//maps/PewterCity/scripts.pory"
	walk_down
# 161 "data//maps/PewterCity/scripts.pory"
	walk_down
# 162 "data//maps/PewterCity/scripts.pory"
	walk_down
# 163 "data//maps/PewterCity/scripts.pory"
	walk_right
# 164 "data//maps/PewterCity/scripts.pory"
.endm
# 165 "data//maps/PewterCity/scripts.pory"

# 166 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 167 "data//maps/PewterCity/scripts.pory"
	delay_16
# 168 "data//maps/PewterCity/scripts.pory"
	delay_16
# 169 "data//maps/PewterCity/scripts.pory"
	delay_4
# 170 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_down
# 171 "data//maps/PewterCity/scripts.pory"
	step_end
# 172 "data//maps/PewterCity/scripts.pory"

# 173 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 174 "data//maps/PewterCity/scripts.pory"
	walk_down
# 175 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 176 "data//maps/PewterCity/scripts.pory"
	step_end
# 177 "data//maps/PewterCity/scripts.pory"

# 178 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 179 "data//maps/PewterCity/scripts.pory"
	delay_16
# 180 "data//maps/PewterCity/scripts.pory"
	step_end
# 181 "data//maps/PewterCity/scripts.pory"

# 182 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 183 "data//maps/PewterCity/scripts.pory"
	walk_left
# 184 "data//maps/PewterCity/scripts.pory"
	walk_left
# 185 "data//maps/PewterCity/scripts.pory"
	walk_left
# 186 "data//maps/PewterCity/scripts.pory"
	walk_left
# 187 "data//maps/PewterCity/scripts.pory"
	walk_left
# 188 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 189 "data//maps/PewterCity/scripts.pory"
	step_end
# 190 "data//maps/PewterCity/scripts.pory"

# 191 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 192 "data//maps/PewterCity/scripts.pory"
	delay_16
# 193 "data//maps/PewterCity/scripts.pory"
	step_end
# 194 "data//maps/PewterCity/scripts.pory"

# 195 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 196 "data//maps/PewterCity/scripts.pory"
	walk_up
# 197 "data//maps/PewterCity/scripts.pory"
	walk_left
# 198 "data//maps/PewterCity/scripts.pory"
	walk_left
# 199 "data//maps/PewterCity/scripts.pory"
	walk_left
# 200 "data//maps/PewterCity/scripts.pory"
	walk_left
# 201 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 202 "data//maps/PewterCity/scripts.pory"
	step_end
# 203 "data//maps/PewterCity/scripts.pory"

# 204 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 205 "data//maps/PewterCity/scripts.pory"
	walk_down
# 206 "data//maps/PewterCity/scripts.pory"
	walk_left
# 207 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 208 "data//maps/PewterCity/scripts.pory"
	walk_in_place_up
# 209 "data//maps/PewterCity/scripts.pory"
	step_end
# 210 "data//maps/PewterCity/scripts.pory"

# 211 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 212 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 213 "data//maps/PewterCity/scripts.pory"
	walk_right
# 214 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 215 "data//maps/PewterCity/scripts.pory"
	step_end
# 216 "data//maps/PewterCity/scripts.pory"

# 217 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 218 "data//maps/PewterCity/scripts.pory"
	walk_in_place_right
# 219 "data//maps/PewterCity/scripts.pory"
	step_end
# 220 "data//maps/PewterCity/scripts.pory"

# 221 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 222 "data//maps/PewterCity/scripts.pory"
	walk_left
# 223 "data//maps/PewterCity/scripts.pory"
	walk_left
# 224 "data//maps/PewterCity/scripts.pory"
	walk_left
# 225 "data//maps/PewterCity/scripts.pory"
	walk_left
# 226 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 227 "data//maps/PewterCity/scripts.pory"
	walk_right
# 228 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 229 "data//maps/PewterCity/scripts.pory"
	step_end
# 230 "data//maps/PewterCity/scripts.pory"

# 231 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 232 "data//maps/PewterCity/scripts.pory"
	walk_in_place_down
# 233 "data//maps/PewterCity/scripts.pory"
	step_end
# 234 "data//maps/PewterCity/scripts.pory"

# 235 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 236 "data//maps/PewterCity/scripts.pory"
	walk_left
# 237 "data//maps/PewterCity/scripts.pory"
	walk_left
# 238 "data//maps/PewterCity/scripts.pory"
	walk_left
# 239 "data//maps/PewterCity/scripts.pory"
	walk_left
# 240 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 241 "data//maps/PewterCity/scripts.pory"
	walk_right
# 242 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 243 "data//maps/PewterCity/scripts.pory"
	step_end
# 244 "data//maps/PewterCity/scripts.pory"

# 245 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 246 "data//maps/PewterCity/scripts.pory"
	walk_down
# 247 "data//maps/PewterCity/scripts.pory"
	walk_left
# 248 "data//maps/PewterCity/scripts.pory"
	walk_left
# 249 "data//maps/PewterCity/scripts.pory"
	walk_left
# 250 "data//maps/PewterCity/scripts.pory"
	walk_left
# 251 "data//maps/PewterCity/scripts.pory"
	walk_left
# 252 "data//maps/PewterCity/scripts.pory"
	walk_left
# 253 "data//maps/PewterCity/scripts.pory"
	walk_left
# 254 "data//maps/PewterCity/scripts.pory"
	walk_left
# 255 "data//maps/PewterCity/scripts.pory"
	walk_left
# 256 "data//maps/PewterCity/scripts.pory"
	step_end
# 257 "data//maps/PewterCity/scripts.pory"

# 258 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 259 "data//maps/PewterCity/scripts.pory"
	lockall
# 260 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 261 "data//maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 262 "data//maps/PewterCity/scripts.pory"
	end
# 263 "data//maps/PewterCity/scripts.pory"

# 264 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 265 "data//maps/PewterCity/scripts.pory"
	lockall
# 266 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 267 "data//maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 268 "data//maps/PewterCity/scripts.pory"
	end
# 269 "data//maps/PewterCity/scripts.pory"

# 270 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 271 "data//maps/PewterCity/scripts.pory"
	lockall
# 272 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 273 "data//maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 274 "data//maps/PewterCity/scripts.pory"
	end
# 275 "data//maps/PewterCity/scripts.pory"

# 276 "data//maps/PewterCity/scripts.pory"
@ This trigger is inaccessible and its corresponding movement script isnt linked
# 277 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 278 "data//maps/PewterCity/scripts.pory"
	lockall
# 279 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 280 "data//maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 281 "data//maps/PewterCity/scripts.pory"
	end
# 282 "data//maps/PewterCity/scripts.pory"

# 283 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 284 "data//maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 285 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 286 "data//maps/PewterCity/scripts.pory"
	closemessage
# 287 "data//maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 288 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 289 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 290 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 291 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 292 "data//maps/PewterCity/scripts.pory"
	closemessage
# 293 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 294 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 295 "data//maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 296 "data//maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 297 "data//maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 298 "data//maps/PewterCity/scripts.pory"
	releaseall
# 299 "data//maps/PewterCity/scripts.pory"
	end
# 300 "data//maps/PewterCity/scripts.pory"

# 301 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 302 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 303 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 304 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 305 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 306 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 307 "data//maps/PewterCity/scripts.pory"
	return
# 308 "data//maps/PewterCity/scripts.pory"

# 309 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 310 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 311 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 312 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 313 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 314 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 315 "data//maps/PewterCity/scripts.pory"
	return
# 316 "data//maps/PewterCity/scripts.pory"

# 317 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 318 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 319 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 320 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 321 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 322 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 323 "data//maps/PewterCity/scripts.pory"
	return
# 324 "data//maps/PewterCity/scripts.pory"

# 325 "data//maps/PewterCity/scripts.pory"
@ Unused
# 326 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 327 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 328 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 329 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 330 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 331 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 332 "data//maps/PewterCity/scripts.pory"
	return
# 333 "data//maps/PewterCity/scripts.pory"

# 334 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 335 "data//maps/PewterCity/scripts.pory"
	walk_left
# 336 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 337 "data//maps/PewterCity/scripts.pory"
	step_end
# 338 "data//maps/PewterCity/scripts.pory"

# 339 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 340 "data//maps/PewterCity/scripts.pory"
	walk_up
# 341 "data//maps/PewterCity/scripts.pory"
	walk_left
# 342 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 343 "data//maps/PewterCity/scripts.pory"
	step_end
# 344 "data//maps/PewterCity/scripts.pory"

# 345 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 346 "data//maps/PewterCity/scripts.pory"
	walk_up
# 347 "data//maps/PewterCity/scripts.pory"
	walk_up
# 348 "data//maps/PewterCity/scripts.pory"
	walk_left
# 349 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 350 "data//maps/PewterCity/scripts.pory"
	step_end
# 351 "data//maps/PewterCity/scripts.pory"

# 352 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 353 "data//maps/PewterCity/scripts.pory"
	walk_left
# 354 "data//maps/PewterCity/scripts.pory"
	walk_left
# 355 "data//maps/PewterCity/scripts.pory"
	walk_left
# 356 "data//maps/PewterCity/scripts.pory"
	walk_left
# 357 "data//maps/PewterCity/scripts.pory"
	walk_up
# 358 "data//maps/PewterCity/scripts.pory"
	walk_left
# 359 "data//maps/PewterCity/scripts.pory"
	walk_left
# 360 "data//maps/PewterCity/scripts.pory"
	walk_left
# 361 "data//maps/PewterCity/scripts.pory"
	walk_up
# 362 "data//maps/PewterCity/scripts.pory"
	walk_up
# 363 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 364 "data//maps/PewterCity/scripts.pory"
	step_end
# 365 "data//maps/PewterCity/scripts.pory"

# 366 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 367 "data//maps/PewterCity/scripts.pory"
	walk_left
# 368 "data//maps/PewterCity/scripts.pory"
	walk_down
# 369 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_right
# 370 "data//maps/PewterCity/scripts.pory"
	walk_in_place_right
# 371 "data//maps/PewterCity/scripts.pory"
	step_end
# 372 "data//maps/PewterCity/scripts.pory"

# 373 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 374 "data//maps/PewterCity/scripts.pory"
	walk_down
# 375 "data//maps/PewterCity/scripts.pory"
	walk_in_place_down
# 376 "data//maps/PewterCity/scripts.pory"
	step_end
# 377 "data//maps/PewterCity/scripts.pory"

# 378 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 379 "data//maps/PewterCity/scripts.pory"
	walk_down
# 380 "data//maps/PewterCity/scripts.pory"
	walk_down
# 381 "data//maps/PewterCity/scripts.pory"
	walk_in_place_down
# 382 "data//maps/PewterCity/scripts.pory"
	step_end
# 383 "data//maps/PewterCity/scripts.pory"

# 384 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 385 "data//maps/PewterCity/scripts.pory"
	walk_down
# 386 "data//maps/PewterCity/scripts.pory"
	walk_down
# 387 "data//maps/PewterCity/scripts.pory"
	walk_right
# 388 "data//maps/PewterCity/scripts.pory"
	walk_down
# 389 "data//maps/PewterCity/scripts.pory"
	walk_right
# 390 "data//maps/PewterCity/scripts.pory"
	walk_in_place_right
# 391 "data//maps/PewterCity/scripts.pory"
	step_end
# 392 "data//maps/PewterCity/scripts.pory"

# 393 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 394 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 395 "data//maps/PewterCity/scripts.pory"
	walk_right
# 396 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 397 "data//maps/PewterCity/scripts.pory"
	step_end
# 398 "data//maps/PewterCity/scripts.pory"

# 399 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 400 "data//maps/PewterCity/scripts.pory"
	walk_left
# 401 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 402 "data//maps/PewterCity/scripts.pory"
	walk_right
# 403 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 404 "data//maps/PewterCity/scripts.pory"
	step_end
# 405 "data//maps/PewterCity/scripts.pory"

# 406 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 407 "data//maps/PewterCity/scripts.pory"
	walk_up
# 408 "data//maps/PewterCity/scripts.pory"
	walk_left
# 409 "data//maps/PewterCity/scripts.pory"
	walk_to_gym
# 410 "data//maps/PewterCity/scripts.pory"
	walk_right
# 411 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 412 "data//maps/PewterCity/scripts.pory"
	step_end
# 413 "data//maps/PewterCity/scripts.pory"

# 414 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 415 "data//maps/PewterCity/scripts.pory"
	walk_left
# 416 "data//maps/PewterCity/scripts.pory"
	walk_left
# 417 "data//maps/PewterCity/scripts.pory"
	walk_left
# 418 "data//maps/PewterCity/scripts.pory"
	walk_up
# 419 "data//maps/PewterCity/scripts.pory"
	walk_left
# 420 "data//maps/PewterCity/scripts.pory"
	walk_left
# 421 "data//maps/PewterCity/scripts.pory"
	walk_left
# 422 "data//maps/PewterCity/scripts.pory"
	walk_up
# 423 "data//maps/PewterCity/scripts.pory"
	walk_up
# 424 "data//maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 425 "data//maps/PewterCity/scripts.pory"
	walk_right
# 426 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 427 "data//maps/PewterCity/scripts.pory"
	step_end
# 428 "data//maps/PewterCity/scripts.pory"

# 429 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_Lass::
# 430 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 431 "data//maps/PewterCity/scripts.pory"
	end
# 432 "data//maps/PewterCity/scripts.pory"

# 433 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 434 "data//maps/PewterCity/scripts.pory"
	lock
# 435 "data//maps/PewterCity/scripts.pory"
	faceplayer
# 436 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 437 "data//maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 438 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 439 "data//maps/PewterCity/scripts.pory"
	closemessage
# 440 "data//maps/PewterCity/scripts.pory"
	delay 10
# 441 "data//maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 442 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 443 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 444 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 445 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 446 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 447 "data//maps/PewterCity/scripts.pory"
	closemessage
# 448 "data//maps/PewterCity/scripts.pory"
	delay 10
# 449 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 450 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 451 "data//maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 452 "data//maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 453 "data//maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 454 "data//maps/PewterCity/scripts.pory"
	release
# 455 "data//maps/PewterCity/scripts.pory"
	end
# 456 "data//maps/PewterCity/scripts.pory"

# 457 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 458 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 459 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 460 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 461 "data//maps/PewterCity/scripts.pory"
	return
# 462 "data//maps/PewterCity/scripts.pory"

# 463 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 464 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 465 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 466 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 467 "data//maps/PewterCity/scripts.pory"
	return
# 468 "data//maps/PewterCity/scripts.pory"

# 469 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 470 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 471 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 472 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 473 "data//maps/PewterCity/scripts.pory"
	return
# 474 "data//maps/PewterCity/scripts.pory"

# 475 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 476 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 477 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 478 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 479 "data//maps/PewterCity/scripts.pory"
	return
# 480 "data//maps/PewterCity/scripts.pory"

# 481 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 482 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 483 "data//maps/PewterCity/scripts.pory"
	release
# 484 "data//maps/PewterCity/scripts.pory"
	end
# 485 "data//maps/PewterCity/scripts.pory"

# 486 "data//maps/PewterCity/scripts.pory"
.macro walk_to_museum
# 487 "data//maps/PewterCity/scripts.pory"
	walk_up
# 488 "data//maps/PewterCity/scripts.pory"
	walk_up
# 489 "data//maps/PewterCity/scripts.pory"
	walk_up
# 490 "data//maps/PewterCity/scripts.pory"
	walk_up
# 491 "data//maps/PewterCity/scripts.pory"
	walk_left
# 492 "data//maps/PewterCity/scripts.pory"
	walk_left
# 493 "data//maps/PewterCity/scripts.pory"
	walk_left
# 494 "data//maps/PewterCity/scripts.pory"
	walk_left
# 495 "data//maps/PewterCity/scripts.pory"
	walk_left
# 496 "data//maps/PewterCity/scripts.pory"
	walk_left
# 497 "data//maps/PewterCity/scripts.pory"
	walk_left
# 498 "data//maps/PewterCity/scripts.pory"
	walk_left
# 499 "data//maps/PewterCity/scripts.pory"
	walk_left
# 500 "data//maps/PewterCity/scripts.pory"
	walk_left
# 501 "data//maps/PewterCity/scripts.pory"
	walk_up
# 502 "data//maps/PewterCity/scripts.pory"
	walk_up
# 503 "data//maps/PewterCity/scripts.pory"
	walk_up
# 504 "data//maps/PewterCity/scripts.pory"
	walk_up
# 505 "data//maps/PewterCity/scripts.pory"
	walk_left
# 506 "data//maps/PewterCity/scripts.pory"
	walk_left
# 507 "data//maps/PewterCity/scripts.pory"
	walk_left
# 508 "data//maps/PewterCity/scripts.pory"
	walk_left
# 509 "data//maps/PewterCity/scripts.pory"
	walk_left
# 510 "data//maps/PewterCity/scripts.pory"
	walk_left
# 511 "data//maps/PewterCity/scripts.pory"
.endm
# 512 "data//maps/PewterCity/scripts.pory"

# 513 "data//maps/PewterCity/scripts.pory"
.macro walk_to_museum_south
# 514 "data//maps/PewterCity/scripts.pory"
	walk_up
# 515 "data//maps/PewterCity/scripts.pory"
	walk_up
# 516 "data//maps/PewterCity/scripts.pory"
	walk_up
# 517 "data//maps/PewterCity/scripts.pory"
	walk_left
# 518 "data//maps/PewterCity/scripts.pory"
	walk_left
# 519 "data//maps/PewterCity/scripts.pory"
	walk_left
# 520 "data//maps/PewterCity/scripts.pory"
	walk_left
# 521 "data//maps/PewterCity/scripts.pory"
	walk_left
# 522 "data//maps/PewterCity/scripts.pory"
	walk_left
# 523 "data//maps/PewterCity/scripts.pory"
	walk_left
# 524 "data//maps/PewterCity/scripts.pory"
	walk_left
# 525 "data//maps/PewterCity/scripts.pory"
	walk_left
# 526 "data//maps/PewterCity/scripts.pory"
	walk_up
# 527 "data//maps/PewterCity/scripts.pory"
	walk_up
# 528 "data//maps/PewterCity/scripts.pory"
	walk_up
# 529 "data//maps/PewterCity/scripts.pory"
	walk_up
# 530 "data//maps/PewterCity/scripts.pory"
	walk_left
# 531 "data//maps/PewterCity/scripts.pory"
	walk_left
# 532 "data//maps/PewterCity/scripts.pory"
	walk_left
# 533 "data//maps/PewterCity/scripts.pory"
	walk_left
# 534 "data//maps/PewterCity/scripts.pory"
	walk_left
# 535 "data//maps/PewterCity/scripts.pory"
	walk_left
# 536 "data//maps/PewterCity/scripts.pory"
.endm
# 537 "data//maps/PewterCity/scripts.pory"

# 538 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 539 "data//maps/PewterCity/scripts.pory"
	walk_up
# 540 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 541 "data//maps/PewterCity/scripts.pory"
	delay_8
# 542 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 543 "data//maps/PewterCity/scripts.pory"
	step_end
# 544 "data//maps/PewterCity/scripts.pory"

# 545 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 546 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 547 "data//maps/PewterCity/scripts.pory"
	walk_left
# 548 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 549 "data//maps/PewterCity/scripts.pory"
	step_end
# 550 "data//maps/PewterCity/scripts.pory"

# 551 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 552 "data//maps/PewterCity/scripts.pory"
	delay_16
# 553 "data//maps/PewterCity/scripts.pory"
	delay_16
# 554 "data//maps/PewterCity/scripts.pory"
	walk_left
# 555 "data//maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 556 "data//maps/PewterCity/scripts.pory"
	delay_8
# 557 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 558 "data//maps/PewterCity/scripts.pory"
	step_end
# 559 "data//maps/PewterCity/scripts.pory"

# 560 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 561 "data//maps/PewterCity/scripts.pory"
	walk_left
# 562 "data//maps/PewterCity/scripts.pory"
	walk_up
# 563 "data//maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 564 "data//maps/PewterCity/scripts.pory"
	walk_left
# 565 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 566 "data//maps/PewterCity/scripts.pory"
	step_end
# 567 "data//maps/PewterCity/scripts.pory"

# 568 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 569 "data//maps/PewterCity/scripts.pory"
	walk_left
# 570 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 571 "data//maps/PewterCity/scripts.pory"
	delay_8
# 572 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 573 "data//maps/PewterCity/scripts.pory"
	step_end
# 574 "data//maps/PewterCity/scripts.pory"

# 575 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 576 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 577 "data//maps/PewterCity/scripts.pory"
	walk_left
# 578 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 579 "data//maps/PewterCity/scripts.pory"
	step_end
# 580 "data//maps/PewterCity/scripts.pory"

# 581 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 582 "data//maps/PewterCity/scripts.pory"
	walk_right
# 583 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 584 "data//maps/PewterCity/scripts.pory"
	delay_8
# 585 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 586 "data//maps/PewterCity/scripts.pory"
	step_end
# 587 "data//maps/PewterCity/scripts.pory"

# 588 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 589 "data//maps/PewterCity/scripts.pory"
	walk_to_museum
# 590 "data//maps/PewterCity/scripts.pory"
	walk_left
# 591 "data//maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 592 "data//maps/PewterCity/scripts.pory"
	step_end
# 593 "data//maps/PewterCity/scripts.pory"

# 594 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 595 "data//maps/PewterCity/scripts.pory"
	walk_down
# 596 "data//maps/PewterCity/scripts.pory"
	walk_right
# 597 "data//maps/PewterCity/scripts.pory"
	walk_right
# 598 "data//maps/PewterCity/scripts.pory"
	walk_right
# 599 "data//maps/PewterCity/scripts.pory"
	walk_right
# 600 "data//maps/PewterCity/scripts.pory"
	walk_right
# 601 "data//maps/PewterCity/scripts.pory"
	walk_right
# 602 "data//maps/PewterCity/scripts.pory"
	walk_right
# 603 "data//maps/PewterCity/scripts.pory"
	walk_down
# 604 "data//maps/PewterCity/scripts.pory"
	walk_down
# 605 "data//maps/PewterCity/scripts.pory"
	walk_down
# 606 "data//maps/PewterCity/scripts.pory"
	walk_right
# 607 "data//maps/PewterCity/scripts.pory"
	walk_right
# 608 "data//maps/PewterCity/scripts.pory"
	walk_right
# 609 "data//maps/PewterCity/scripts.pory"
	step_end
# 610 "data//maps/PewterCity/scripts.pory"

# 611 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_FatMan::
# 612 "data//maps/PewterCity/scripts.pory"
	lock
# 613 "data//maps/PewterCity/scripts.pory"
	faceplayer
# 614 "data//maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 615 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 616 "data//maps/PewterCity/scripts.pory"
	release
# 617 "data//maps/PewterCity/scripts.pory"
	end
# 618 "data//maps/PewterCity/scripts.pory"

# 619 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 620 "data//maps/PewterCity/scripts.pory"
	lock
# 621 "data//maps/PewterCity/scripts.pory"
	faceplayer
# 622 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 623 "data//maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 624 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 625 "data//maps/PewterCity/scripts.pory"
	release
# 626 "data//maps/PewterCity/scripts.pory"
	end
# 627 "data//maps/PewterCity/scripts.pory"

# 628 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 629 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 630 "data//maps/PewterCity/scripts.pory"
	release
# 631 "data//maps/PewterCity/scripts.pory"
	end
# 632 "data//maps/PewterCity/scripts.pory"

# 633 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 634 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 635 "data//maps/PewterCity/scripts.pory"
	end
# 636 "data//maps/PewterCity/scripts.pory"

# 637 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 638 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 639 "data//maps/PewterCity/scripts.pory"
	end
# 640 "data//maps/PewterCity/scripts.pory"

# 641 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 642 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 643 "data//maps/PewterCity/scripts.pory"
	end
# 644 "data//maps/PewterCity/scripts.pory"

# 645 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymSign::
# 646 "data//maps/PewterCity/scripts.pory"
	lockall
# 647 "data//maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 648 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 649 "data//maps/PewterCity/scripts.pory"
	releaseall
# 650 "data//maps/PewterCity/scripts.pory"
	end
# 651 "data//maps/PewterCity/scripts.pory"

# 652 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_CitySign::
# 653 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 654 "data//maps/PewterCity/scripts.pory"
	end
# 655 "data//maps/PewterCity/scripts.pory"

# 656 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAide::
# 657 "data//maps/PewterCity/scripts.pory"
	lock
# 658 "data//maps/PewterCity/scripts.pory"
	faceplayer
# 659 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 660 "data//maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 661 "data//maps/PewterCity/scripts.pory"
	release
# 662 "data//maps/PewterCity/scripts.pory"
	end
# 663 "data//maps/PewterCity/scripts.pory"

# 664 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerTop::
# 665 "data//maps/PewterCity/scripts.pory"
	lockall
# 666 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 667 "data//maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 668 "data//maps/PewterCity/scripts.pory"
	releaseall
# 669 "data//maps/PewterCity/scripts.pory"
	end
# 670 "data//maps/PewterCity/scripts.pory"

# 671 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerMid::
# 672 "data//maps/PewterCity/scripts.pory"
	lockall
# 673 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 674 "data//maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 675 "data//maps/PewterCity/scripts.pory"
	releaseall
# 676 "data//maps/PewterCity/scripts.pory"
	end
# 677 "data//maps/PewterCity/scripts.pory"

# 678 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 679 "data//maps/PewterCity/scripts.pory"
	lockall
# 680 "data//maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 681 "data//maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 682 "data//maps/PewterCity/scripts.pory"
	releaseall
# 683 "data//maps/PewterCity/scripts.pory"
	end
# 684 "data//maps/PewterCity/scripts.pory"

# 685 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes::
# 686 "data//maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 687 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 688 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 689 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 690 "data//maps/PewterCity/scripts.pory"
	waitse
# 691 "data//maps/PewterCity/scripts.pory"
	playse SE_PIN
# 692 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 693 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 694 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 695 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 696 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 697 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 698 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 699 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 700 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 701 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 702 "data//maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 703 "data//maps/PewterCity/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 704 "data//maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 705 "data//maps/PewterCity/scripts.pory"
	waitmessage
# 706 "data//maps/PewterCity/scripts.pory"
	waitfanfare
# 707 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 708 "data//maps/PewterCity/scripts.pory"
	special DisableMsgBoxWalkaway
# 709 "data//maps/PewterCity/scripts.pory"
	signmsg
# 710 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 711 "data//maps/PewterCity/scripts.pory"
	normalmsg
# 712 "data//maps/PewterCity/scripts.pory"
	call EventScript_RestorePrevTextColor
# 713 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 714 "data//maps/PewterCity/scripts.pory"
	closemessage
# 715 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 716 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 717 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 718 "data//maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 719 "data//maps/PewterCity/scripts.pory"
	delay 30
# 720 "data//maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 721 "data//maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 722 "data//maps/PewterCity/scripts.pory"
	closemessage
# 723 "data//maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 724 "data//maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 725 "data//maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 726 "data//maps/PewterCity/scripts.pory"
	return
# 727 "data//maps/PewterCity/scripts.pory"

# 728 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideNoticePlayer::
# 729 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 730 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 731 "data//maps/PewterCity/scripts.pory"
	return
# 732 "data//maps/PewterCity/scripts.pory"

# 733 "data//maps/PewterCity/scripts.pory"
@ Aide already at player
# 734 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer0::
# 735 "data//maps/PewterCity/scripts.pory"
	closemessage
# 736 "data//maps/PewterCity/scripts.pory"
	delay 20
# 737 "data//maps/PewterCity/scripts.pory"
	return
# 738 "data//maps/PewterCity/scripts.pory"

# 739 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer1::
# 740 "data//maps/PewterCity/scripts.pory"
	closemessage
# 741 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 742 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 743 "data//maps/PewterCity/scripts.pory"
	return
# 744 "data//maps/PewterCity/scripts.pory"

# 745 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer2::
# 746 "data//maps/PewterCity/scripts.pory"
	closemessage
# 747 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 748 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 749 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 750 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 751 "data//maps/PewterCity/scripts.pory"
	return
# 752 "data//maps/PewterCity/scripts.pory"

# 753 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer3::
# 754 "data//maps/PewterCity/scripts.pory"
	closemessage
# 755 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 756 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 757 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 758 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 759 "data//maps/PewterCity/scripts.pory"
	return
# 760 "data//maps/PewterCity/scripts.pory"

# 761 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit0::
# 762 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 763 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 764 "data//maps/PewterCity/scripts.pory"
	return
# 765 "data//maps/PewterCity/scripts.pory"

# 766 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit1::
# 767 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 768 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 769 "data//maps/PewterCity/scripts.pory"
	return
# 770 "data//maps/PewterCity/scripts.pory"

# 771 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit2::
# 772 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 773 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 774 "data//maps/PewterCity/scripts.pory"
	return
# 775 "data//maps/PewterCity/scripts.pory"

# 776 "data//maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit3::
# 777 "data//maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 778 "data//maps/PewterCity/scripts.pory"
	waitmovement 0
# 779 "data//maps/PewterCity/scripts.pory"
	return
# 780 "data//maps/PewterCity/scripts.pory"

# 781 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid::
# 782 "data//maps/PewterCity/scripts.pory"
	delay_4
# 783 "data//maps/PewterCity/scripts.pory"
	walk_down
# 784 "data//maps/PewterCity/scripts.pory"
	step_end
# 785 "data//maps/PewterCity/scripts.pory"

# 786 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom::
# 787 "data//maps/PewterCity/scripts.pory"
	delay_4
# 788 "data//maps/PewterCity/scripts.pory"
	walk_down
# 789 "data//maps/PewterCity/scripts.pory"
	walk_down
# 790 "data//maps/PewterCity/scripts.pory"
	step_end
# 791 "data//maps/PewterCity/scripts.pory"

# 792 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0::
# 793 "data//maps/PewterCity/scripts.pory"
	walk_down
# 794 "data//maps/PewterCity/scripts.pory"
	walk_left
# 795 "data//maps/PewterCity/scripts.pory"
	walk_left
# 796 "data//maps/PewterCity/scripts.pory"
	walk_left
# 797 "data//maps/PewterCity/scripts.pory"
	walk_left
# 798 "data//maps/PewterCity/scripts.pory"
	walk_left
# 799 "data//maps/PewterCity/scripts.pory"
	walk_left
# 800 "data//maps/PewterCity/scripts.pory"
	walk_left
# 801 "data//maps/PewterCity/scripts.pory"
	walk_left
# 802 "data//maps/PewterCity/scripts.pory"
	walk_left
# 803 "data//maps/PewterCity/scripts.pory"
	step_end
# 804 "data//maps/PewterCity/scripts.pory"

# 805 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1::
# 806 "data//maps/PewterCity/scripts.pory"
	walk_left
# 807 "data//maps/PewterCity/scripts.pory"
	walk_down
# 808 "data//maps/PewterCity/scripts.pory"
	walk_left
# 809 "data//maps/PewterCity/scripts.pory"
	walk_left
# 810 "data//maps/PewterCity/scripts.pory"
	walk_left
# 811 "data//maps/PewterCity/scripts.pory"
	walk_left
# 812 "data//maps/PewterCity/scripts.pory"
	walk_left
# 813 "data//maps/PewterCity/scripts.pory"
	walk_left
# 814 "data//maps/PewterCity/scripts.pory"
	walk_left
# 815 "data//maps/PewterCity/scripts.pory"
	walk_left
# 816 "data//maps/PewterCity/scripts.pory"
	step_end
# 817 "data//maps/PewterCity/scripts.pory"

# 818 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2::
# 819 "data//maps/PewterCity/scripts.pory"
	walk_left
# 820 "data//maps/PewterCity/scripts.pory"
	walk_left
# 821 "data//maps/PewterCity/scripts.pory"
	walk_left
# 822 "data//maps/PewterCity/scripts.pory"
	walk_left
# 823 "data//maps/PewterCity/scripts.pory"
	walk_left
# 824 "data//maps/PewterCity/scripts.pory"
	walk_left
# 825 "data//maps/PewterCity/scripts.pory"
	walk_left
# 826 "data//maps/PewterCity/scripts.pory"
	walk_left
# 827 "data//maps/PewterCity/scripts.pory"
	walk_left
# 828 "data//maps/PewterCity/scripts.pory"
	step_end
# 829 "data//maps/PewterCity/scripts.pory"

# 830 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3::
# 831 "data//maps/PewterCity/scripts.pory"
	walk_left
# 832 "data//maps/PewterCity/scripts.pory"
	walk_left
# 833 "data//maps/PewterCity/scripts.pory"
	walk_left
# 834 "data//maps/PewterCity/scripts.pory"
	walk_left
# 835 "data//maps/PewterCity/scripts.pory"
	walk_left
# 836 "data//maps/PewterCity/scripts.pory"
	walk_left
# 837 "data//maps/PewterCity/scripts.pory"
	walk_left
# 838 "data//maps/PewterCity/scripts.pory"
	walk_left
# 839 "data//maps/PewterCity/scripts.pory"
	walk_left
# 840 "data//maps/PewterCity/scripts.pory"
	step_end
# 841 "data//maps/PewterCity/scripts.pory"

# 842 "data//maps/PewterCity/scripts.pory"
@ Unused
# 843 "data//maps/PewterCity/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 844 "data//maps/PewterCity/scripts.pory"
	walk_in_place_left
# 845 "data//maps/PewterCity/scripts.pory"
	step_end
