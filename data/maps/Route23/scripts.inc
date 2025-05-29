# 1 "data//maps/Route23/scripts.pory"

# 2 "data//maps/Route23/scripts.pory"

# 3 "data//maps/Route23/scripts.pory"
Route23_MapScripts::
# 4 "data//maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 5 "data//maps/Route23/scripts.pory"
	.byte 0
# 6 "data//maps/Route23/scripts.pory"

# 7 "data//maps/Route23/scripts.pory"
Route23_OnTransition::
# 8 "data//maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 9 "data//maps/Route23/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 10 "data//maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 11 "data//maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 12 "data//maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 13 "data//maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
# 14 "data//maps/Route23/scripts.pory"
	end
# 15 "data//maps/Route23/scripts.pory"

# 16 "data//maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 17 "data//maps/Route23/scripts.pory"
	lock
# 18 "data//maps/Route23/scripts.pory"
	faceplayer
# 19 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 20 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 21 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 22 "data//maps/Route23/scripts.pory"
	end
# 23 "data//maps/Route23/scripts.pory"

# 24 "data//maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 25 "data//maps/Route23/scripts.pory"
	lock
# 26 "data//maps/Route23/scripts.pory"
	faceplayer
# 27 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 28 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 29 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 30 "data//maps/Route23/scripts.pory"
	end
# 31 "data//maps/Route23/scripts.pory"

# 32 "data//maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 33 "data//maps/Route23/scripts.pory"
	lock
# 34 "data//maps/Route23/scripts.pory"
	faceplayer
# 35 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 36 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 37 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 38 "data//maps/Route23/scripts.pory"
	end
# 39 "data//maps/Route23/scripts.pory"

# 40 "data//maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 41 "data//maps/Route23/scripts.pory"
	lock
# 42 "data//maps/Route23/scripts.pory"
	faceplayer
# 43 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 44 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 45 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 46 "data//maps/Route23/scripts.pory"
	end
# 47 "data//maps/Route23/scripts.pory"

# 48 "data//maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 49 "data//maps/Route23/scripts.pory"
	lock
# 50 "data//maps/Route23/scripts.pory"
	faceplayer
# 51 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 52 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 53 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 54 "data//maps/Route23/scripts.pory"
	end
# 55 "data//maps/Route23/scripts.pory"

# 56 "data//maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 57 "data//maps/Route23/scripts.pory"
	lock
# 58 "data//maps/Route23/scripts.pory"
	faceplayer
# 59 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 60 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 61 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 62 "data//maps/Route23/scripts.pory"
	end
# 63 "data//maps/Route23/scripts.pory"

# 64 "data//maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 65 "data//maps/Route23/scripts.pory"
	lock
# 66 "data//maps/Route23/scripts.pory"
	faceplayer
# 67 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 68 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 69 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 70 "data//maps/Route23/scripts.pory"
	end
# 71 "data//maps/Route23/scripts.pory"

# 72 "data//maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 73 "data//maps/Route23/scripts.pory"
	lockall
# 74 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 75 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 76 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 77 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 78 "data//maps/Route23/scripts.pory"
	end
# 79 "data//maps/Route23/scripts.pory"

# 80 "data//maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 81 "data//maps/Route23/scripts.pory"
	lockall
# 82 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 83 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 84 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 85 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 86 "data//maps/Route23/scripts.pory"
	end
# 87 "data//maps/Route23/scripts.pory"

# 88 "data//maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 89 "data//maps/Route23/scripts.pory"
	lockall
# 90 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 91 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 92 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 93 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 94 "data//maps/Route23/scripts.pory"
	end
# 95 "data//maps/Route23/scripts.pory"

# 96 "data//maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 97 "data//maps/Route23/scripts.pory"
	lockall
# 98 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 99 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 100 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 101 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 102 "data//maps/Route23/scripts.pory"
	end
# 103 "data//maps/Route23/scripts.pory"

# 104 "data//maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 105 "data//maps/Route23/scripts.pory"
	lockall
# 106 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 107 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 108 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 109 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 110 "data//maps/Route23/scripts.pory"
	end
# 111 "data//maps/Route23/scripts.pory"

# 112 "data//maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 113 "data//maps/Route23/scripts.pory"
	lockall
# 114 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 115 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 116 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 117 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 118 "data//maps/Route23/scripts.pory"
	end
# 119 "data//maps/Route23/scripts.pory"

# 120 "data//maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 121 "data//maps/Route23/scripts.pory"
	lockall
# 122 "data//maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 123 "data//maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 124 "data//maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 125 "data//maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 126 "data//maps/Route23/scripts.pory"
	end
# 127 "data//maps/Route23/scripts.pory"

# 128 "data//maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 129 "data//maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 130 "data//maps/Route23/scripts.pory"
	end
