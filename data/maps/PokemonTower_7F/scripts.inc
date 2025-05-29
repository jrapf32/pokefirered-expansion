# 1 "data//maps/PokemonTower_7F/scripts.pory"

# 2 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_MapScripts::
# 3 "data//maps/PokemonTower_7F/scripts.pory"
	.byte 0
# 4 "data//maps/PokemonTower_7F/scripts.pory"

# 5 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_MrFuji::
# 6 "data//maps/PokemonTower_7F/scripts.pory"
	lock
# 7 "data//maps/PokemonTower_7F/scripts.pory"
	faceplayer
# 8 "data//maps/PokemonTower_7F/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data//maps/PokemonTower_7F/scripts.pory"
	setflag FLAG_HIDE_TOWER_FUJI
# 10 "data//maps/PokemonTower_7F/scripts.pory"
	clearflag FLAG_HIDE_POKEHOUSE_FUJI
# 11 "data//maps/PokemonTower_7F/scripts.pory"
	setflag FLAG_RESCUED_MR_FUJI
# 12 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_MrFujiThankYouFollowMe
# 13 "data//maps/PokemonTower_7F/scripts.pory"
	closemessage
# 14 "data//maps/PokemonTower_7F/scripts.pory"
	warp MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE, 4, 7
# 15 "data//maps/PokemonTower_7F/scripts.pory"
	waitstate
# 16 "data//maps/PokemonTower_7F/scripts.pory"
	release
# 17 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 18 "data//maps/PokemonTower_7F/scripts.pory"

# 19 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt1::
# 20 "data//maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_19, PokemonTower_7F_Text_Grunt1Intro, PokemonTower_7F_Text_Grunt1Defeat, PokemonTower_7F_EventScript_DefeatedGrunt1
# 21 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 22 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 23 "data//maps/PokemonTower_7F/scripts.pory"

# 24 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1::
# 25 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle
# 26 "data//maps/PokemonTower_7F/scripts.pory"
	closemessage
# 27 "data//maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 28 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt1ExitMid
# 29 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 11, PokemonTower_7F_EventScript_Grunt1ExitRight
# 30 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt1ExitLeft
# 31 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1Exit
# 32 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 33 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 34 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 35 "data//maps/PokemonTower_7F/scripts.pory"

# 36 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitMid::
# 37 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitMid
# 38 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 39 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 40 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 41 "data//maps/PokemonTower_7F/scripts.pory"

# 42 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitRight::
# 43 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitRight
# 44 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 45 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 46 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 47 "data//maps/PokemonTower_7F/scripts.pory"

# 48 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt1ExitLeft::
# 49 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_Movement_Grunt1ExitLeft
# 50 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 51 "data//maps/PokemonTower_7F/scripts.pory"
	playse SE_EXIT
# 52 "data//maps/PokemonTower_7F/scripts.pory"
	delay 25
# 53 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt1
# 54 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 55 "data//maps/PokemonTower_7F/scripts.pory"

# 56 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt1::
# 57 "data//maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT1
# 58 "data//maps/PokemonTower_7F/scripts.pory"
	release
# 59 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 60 "data//maps/PokemonTower_7F/scripts.pory"

# 61 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitMid::
# 62 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 63 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 64 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 65 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 66 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 67 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 68 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 69 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 70 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 71 "data//maps/PokemonTower_7F/scripts.pory"

# 72 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitRight::
# 73 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 74 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 75 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 76 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 77 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 78 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 79 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 80 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 81 "data//maps/PokemonTower_7F/scripts.pory"

# 82 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1Exit::
# 83 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 84 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 85 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 86 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 87 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 88 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 89 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 90 "data//maps/PokemonTower_7F/scripts.pory"

# 91 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt1ExitLeft::
# 92 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 93 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 94 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 95 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 96 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 97 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 98 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 99 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 100 "data//maps/PokemonTower_7F/scripts.pory"
	walk_in_place_faster_left
# 101 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 102 "data//maps/PokemonTower_7F/scripts.pory"

# 103 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt2::
# 104 "data//maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_20, PokemonTower_7F_Text_Grunt2Intro, PokemonTower_7F_Text_Grunt2Defeat, PokemonTower_7F_EventScript_DefeatedGrunt2
# 105 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 106 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 107 "data//maps/PokemonTower_7F/scripts.pory"

# 108 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2::
# 109 "data//maps/PokemonTower_7F/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 1
# 110 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle
# 111 "data//maps/PokemonTower_7F/scripts.pory"
	closemessage
# 112 "data//maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 113 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 12, PokemonTower_7F_EventScript_Grunt2ExitLeft
# 114 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 13, PokemonTower_7F_EventScript_Grunt2ExitRight
# 115 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2Exit
# 116 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 117 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 118 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 119 "data//maps/PokemonTower_7F/scripts.pory"

# 120 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt2ExitLeft::
# 121 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitLeft
# 122 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 123 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 124 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 125 "data//maps/PokemonTower_7F/scripts.pory"

# 126 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt2ExitRight::
# 127 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_Movement_Grunt2ExitRight
# 128 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 129 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt2
# 130 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 131 "data//maps/PokemonTower_7F/scripts.pory"

# 132 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt2::
# 133 "data//maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT2
# 134 "data//maps/PokemonTower_7F/scripts.pory"
	release
# 135 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 136 "data//maps/PokemonTower_7F/scripts.pory"

# 137 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitLeft::
# 138 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 139 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 140 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 141 "data//maps/PokemonTower_7F/scripts.pory"
	walk_left
# 142 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 143 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 144 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 145 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 146 "data//maps/PokemonTower_7F/scripts.pory"

# 147 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2Exit::
# 148 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 149 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 150 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 151 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 152 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 153 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 154 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 155 "data//maps/PokemonTower_7F/scripts.pory"

# 156 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt2ExitRight::
# 157 "data//maps/PokemonTower_7F/scripts.pory"
	walk_left
# 158 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 159 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 160 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 161 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 162 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 163 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 164 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 165 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 166 "data//maps/PokemonTower_7F/scripts.pory"

# 167 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt3::
# 168 "data//maps/PokemonTower_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_21, PokemonTower_7F_Text_Grunt3Intro, PokemonTower_7F_Text_Grunt3Defeat, PokemonTower_7F_EventScript_DefeatedGrunt3
# 169 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 170 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 171 "data//maps/PokemonTower_7F/scripts.pory"

# 172 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3::
# 173 "data//maps/PokemonTower_7F/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle
# 174 "data//maps/PokemonTower_7F/scripts.pory"
	closemessage
# 175 "data//maps/PokemonTower_7F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 176 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 10, PokemonTower_7F_EventScript_Grunt3ExitRight
# 177 "data//maps/PokemonTower_7F/scripts.pory"
	goto_if_eq VAR_0x8004, 9, PokemonTower_7F_EventScript_Grunt3ExitLeft
# 178 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3Exit
# 179 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 180 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 181 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 182 "data//maps/PokemonTower_7F/scripts.pory"

# 183 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt3ExitRight::
# 184 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitRight
# 185 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 186 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 187 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 188 "data//maps/PokemonTower_7F/scripts.pory"

# 189 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Grunt3ExitLeft::
# 190 "data//maps/PokemonTower_7F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_Movement_Grunt3ExitLeft
# 191 "data//maps/PokemonTower_7F/scripts.pory"
	waitmovement 0
# 192 "data//maps/PokemonTower_7F/scripts.pory"
	goto PokemonTower_7F_EventScript_RemoveGrunt3
# 193 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 194 "data//maps/PokemonTower_7F/scripts.pory"

# 195 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_RemoveGrunt3::
# 196 "data//maps/PokemonTower_7F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT3
# 197 "data//maps/PokemonTower_7F/scripts.pory"
	release
# 198 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 199 "data//maps/PokemonTower_7F/scripts.pory"

# 200 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_EventScript_Unused::
# 201 "data//maps/PokemonTower_7F/scripts.pory"
	release
# 202 "data//maps/PokemonTower_7F/scripts.pory"
	end
# 203 "data//maps/PokemonTower_7F/scripts.pory"

# 204 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitRight::
# 205 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 206 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 207 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 208 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 209 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 210 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 211 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 212 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 213 "data//maps/PokemonTower_7F/scripts.pory"

# 214 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3Exit::
# 215 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 216 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 217 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 218 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 219 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 220 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 221 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
# 222 "data//maps/PokemonTower_7F/scripts.pory"

# 223 "data//maps/PokemonTower_7F/scripts.pory"
PokemonTower_7F_Movement_Grunt3ExitLeft::
# 224 "data//maps/PokemonTower_7F/scripts.pory"
	walk_right
# 225 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 226 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 227 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 228 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 229 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 230 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 231 "data//maps/PokemonTower_7F/scripts.pory"
	walk_down
# 232 "data//maps/PokemonTower_7F/scripts.pory"
	step_end
