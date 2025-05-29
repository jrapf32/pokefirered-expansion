# 1 "data//maps/Route25_SeaCottage/scripts.pory"

# 2 "data//maps/Route25_SeaCottage/scripts.pory"

# 3 "data//maps/Route25_SeaCottage/scripts.pory"

# 4 "data//maps/Route25_SeaCottage/scripts.pory"
.equ BILL_IN_TELEPORTER,     FLAG_TEMP_2
# 5 "data//maps/Route25_SeaCottage/scripts.pory"
.equ RETURN_AFTER_SS_TICKET, FLAG_TEMP_3
# 6 "data//maps/Route25_SeaCottage/scripts.pory"

# 7 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_MapScripts::
# 8 "data//maps/Route25_SeaCottage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_OnTransition
# 9 "data//maps/Route25_SeaCottage/scripts.pory"
	.byte 0
# 10 "data//maps/Route25_SeaCottage/scripts.pory"

# 11 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_OnTransition::
# 12 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_HideClefairyBill
# 13 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket
# 14 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 15 "data//maps/Route25_SeaCottage/scripts.pory"

# 16 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_HideClefairyBill::
# 17 "data//maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 18 "data//maps/Route25_SeaCottage/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
# 19 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 20 "data//maps/Route25_SeaCottage/scripts.pory"

# 21 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_SetReturnedAfterSSTicket::
# 22 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag RETURN_AFTER_SS_TICKET
# 23 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 24 "data//maps/Route25_SeaCottage/scripts.pory"

# 25 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_Bill::
# 26 "data//maps/Route25_SeaCottage/scripts.pory"
	lock
# 27 "data//maps/Route25_SeaCottage/scripts.pory"
	faceplayer
# 28 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_BillGoLookAtPC
# 29 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_BillGoToSSAnne
# 30 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_BillGiveSSTicket
# 31 "data//maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 32 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillAskForHelpMale
# 33 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillAskForHelpFemale
# 34 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 35 "data//maps/Route25_SeaCottage/scripts.pory"

# 36 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpMale::
# 37 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
# 38 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 39 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 40 "data//maps/Route25_SeaCottage/scripts.pory"

# 41 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelpFemale::
# 42 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
# 43 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillAskForHelp
# 44 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 45 "data//maps/Route25_SeaCottage/scripts.pory"

# 46 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillAskForHelp::
# 47 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route25_SeaCottage_EventScript_DeclineHelpBill
# 48 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 49 "data//maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 50 "data//maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 51 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth
# 52 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 53 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 54 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route25_SeaCottage_EventScript_BillWalkToTeleporter
# 55 "data//maps/Route25_SeaCottage/scripts.pory"
	opendoor 10, 3
# 56 "data//maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 57 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillEnterTeleporter
# 58 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 59 "data//maps/Route25_SeaCottage/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 60 "data//maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 61 "data//maps/Route25_SeaCottage/scripts.pory"
	closedoor 10, 3
# 62 "data//maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 63 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag BILL_IN_TELEPORTER
# 64 "data//maps/Route25_SeaCottage/scripts.pory"
	release
# 65 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 66 "data//maps/Route25_SeaCottage/scripts.pory"

# 67 "data//maps/Route25_SeaCottage/scripts.pory"
@ Just returns after message, execution continues as if player had said yes
# 68 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBill::
# 69 "data//maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 70 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_DeclineHelpBillMale
# 71 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_DeclineHelpBillFemale
# 72 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 73 "data//maps/Route25_SeaCottage/scripts.pory"

# 74 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillMale::
# 75 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
# 76 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 77 "data//maps/Route25_SeaCottage/scripts.pory"

# 78 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_DeclineHelpBillFemale::
# 79 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
# 80 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 81 "data//maps/Route25_SeaCottage/scripts.pory"

# 82 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporterSouth::
# 83 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporterSouth
# 84 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 85 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 86 "data//maps/Route25_SeaCottage/scripts.pory"

# 87 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillWalkToTeleporter::
# 88 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_Movement_BillWalkToTeleporter
# 89 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 91 "data//maps/Route25_SeaCottage/scripts.pory"

# 92 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGoToSSAnne::
# 93 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
# 94 "data//maps/Route25_SeaCottage/scripts.pory"
	release
# 95 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 96 "data//maps/Route25_SeaCottage/scripts.pory"

# 97 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 98 "data//maps/Route25_SeaCottage/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 99 "data//maps/Route25_SeaCottage/scripts.pory"
	checkplayergender
# 100 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route25_SeaCottage_EventScript_BillThanksMale
# 101 "data//maps/Route25_SeaCottage/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route25_SeaCottage_EventScript_BillThanksFemale
# 102 "data//maps/Route25_SeaCottage/scripts.pory"
	checkitemspace ITEM_SS_TICKET
# 103 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route25_SeaCottage_EventScript_NoRoomForSSTicket
# 104 "data//maps/Route25_SeaCottage/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_OBTAIN_KEY_ITEM
# 105 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 106 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 107 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 108 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_SYS_NOT_SOMEONES_PC
# 109 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGoToSSAnne
# 110 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 111 "data//maps/Route25_SeaCottage/scripts.pory"

# 112 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksMale::
# 113 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
# 114 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 115 "data//maps/Route25_SeaCottage/scripts.pory"

# 116 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillThanksFemale::
# 117 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
# 118 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 119 "data//maps/Route25_SeaCottage/scripts.pory"

# 120 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_NoRoomForSSTicket::
# 121 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
# 122 "data//maps/Route25_SeaCottage/scripts.pory"
	release
# 123 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 124 "data//maps/Route25_SeaCottage/scripts.pory"

# 125 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillGoLookAtPC::
# 126 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
# 127 "data//maps/Route25_SeaCottage/scripts.pory"
	release
# 128 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 129 "data//maps/Route25_SeaCottage/scripts.pory"

# 130 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporter::
# 131 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 132 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 133 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 134 "data//maps/Route25_SeaCottage/scripts.pory"

# 135 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToTeleporterSouth::
# 136 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 137 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 138 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 139 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 140 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_in_place_faster_up
# 141 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 142 "data//maps/Route25_SeaCottage/scripts.pory"

# 143 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillEnterTeleporter::
# 144 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 145 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 146 "data//maps/Route25_SeaCottage/scripts.pory"

# 147 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_Computer::
# 148 "data//maps/Route25_SeaCottage/scripts.pory"
	lockall
# 149 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_set RETURN_AFTER_SS_TICKET, Route25_SeaCottage_EventScript_OpenBillsMonList
# 150 "data//maps/Route25_SeaCottage/scripts.pory"
	goto_if_set BILL_IN_TELEPORTER, Route25_SeaCottage_EventScript_RunCellSeparator
# 151 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 152 "data//maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 153 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 154 "data//maps/Route25_SeaCottage/scripts.pory"

# 155 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator::
# 156 "data//maps/Route25_SeaCottage/scripts.pory"
	fadeoutbgm 0
# 157 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 158 "data//maps/Route25_SeaCottage/scripts.pory"
	closemessage
# 159 "data//maps/Route25_SeaCottage/scripts.pory"
	clearflag BILL_IN_TELEPORTER
# 160 "data//maps/Route25_SeaCottage/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 161 "data//maps/Route25_SeaCottage/scripts.pory"
	special SpawnCameraObject
# 162 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanToTeleporters
# 163 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 164 "data//maps/Route25_SeaCottage/scripts.pory"
	delay 35
# 165 "data//maps/Route25_SeaCottage/scripts.pory"
	playse SE_PIN
# 166 "data//maps/Route25_SeaCottage/scripts.pory"
	waitse
# 167 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 0
# 168 "data//maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 169 "data//maps/Route25_SeaCottage/scripts.pory"
	delay 10
# 170 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 171 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 172 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 173 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 174 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 175 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 176 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 177 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, 1
# 178 "data//maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterHousing
# 179 "data//maps/Route25_SeaCottage/scripts.pory"
	playse SE_WARP_IN
# 180 "data//maps/Route25_SeaCottage/scripts.pory"
	special AnimateTeleporterCable
# 181 "data//maps/Route25_SeaCottage/scripts.pory"
	waitse
# 182 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 183 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 184 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 185 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 186 "data//maps/Route25_SeaCottage/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 187 "data//maps/Route25_SeaCottage/scripts.pory"
	opendoor 3, 3
# 188 "data//maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 189 "data//maps/Route25_SeaCottage/scripts.pory"
	fadeinbgm 0
# 190 "data//maps/Route25_SeaCottage/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 191 "data//maps/Route25_SeaCottage/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 192 "data//maps/Route25_SeaCottage/scripts.pory"
	delay 50
# 193 "data//maps/Route25_SeaCottage/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 194 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillExitTeleporter
# 195 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 196 "data//maps/Route25_SeaCottage/scripts.pory"
	waitfanfare
# 197 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route25_SeaCottage_Movement_CameraPanBackFromTeleporters
# 198 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 199 "data//maps/Route25_SeaCottage/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 200 "data//maps/Route25_SeaCottage/scripts.pory"
	closedoor 3, 3
# 201 "data//maps/Route25_SeaCottage/scripts.pory"
	waitdooranim
# 202 "data//maps/Route25_SeaCottage/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom
# 203 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmovement 0
# 204 "data//maps/Route25_SeaCottage/scripts.pory"
	special RemoveCameraObject
# 205 "data//maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 206 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 207 "data//maps/Route25_SeaCottage/scripts.pory"

# 208 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 209 "data//maps/Route25_SeaCottage/scripts.pory"
	playse SE_BALL
# 210 "data//maps/Route25_SeaCottage/scripts.pory"
	waitse
# 211 "data//maps/Route25_SeaCottage/scripts.pory"
	delay 20
# 212 "data//maps/Route25_SeaCottage/scripts.pory"
	return
# 213 "data//maps/Route25_SeaCottage/scripts.pory"

# 214 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanToTeleporters::
# 215 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 216 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_up
# 217 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 218 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 219 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 220 "data//maps/Route25_SeaCottage/scripts.pory"

# 221 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_CameraPanBackFromTeleporters::
# 222 "data//maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 223 "data//maps/Route25_SeaCottage/scripts.pory"
	delay_16
# 224 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 225 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 226 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 227 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_left
# 228 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 229 "data//maps/Route25_SeaCottage/scripts.pory"

# 230 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_OpenBillsMonList::
# 231 "data//maps/Route25_SeaCottage/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 232 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 233 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 234 "data//maps/Route25_SeaCottage/scripts.pory"

# 235 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_BillsMonList::
# 236 "data//maps/Route25_SeaCottage/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 237 "data//maps/Route25_SeaCottage/scripts.pory"
	waitmessage
# 238 "data//maps/Route25_SeaCottage/scripts.pory"
	multichoice 0, 0, MULTICHOICE_EEVEELUTIONS, FALSE
# 239 "data//maps/Route25_SeaCottage/scripts.pory"
	switch VAR_RESULT
# 240 "data//maps/Route25_SeaCottage/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_ViewEevee
# 241 "data//maps/Route25_SeaCottage/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_ViewFlareon
# 242 "data//maps/Route25_SeaCottage/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_ViewJolteon
# 243 "data//maps/Route25_SeaCottage/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_ViewVaporeon
# 244 "data//maps/Route25_SeaCottage/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_ExitBillsMonList
# 245 "data//maps/Route25_SeaCottage/scripts.pory"
	case 127, Route25_SeaCottage_EventScript_ExitBillsMonList
# 246 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 247 "data//maps/Route25_SeaCottage/scripts.pory"

# 248 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewEevee::
# 249 "data//maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 250 "data//maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 251 "data//maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 252 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_EEVEE
# 253 "data//maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 254 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 255 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 256 "data//maps/Route25_SeaCottage/scripts.pory"

# 257 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewFlareon::
# 258 "data//maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_FLAREON, 10, 3
# 259 "data//maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 260 "data//maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 261 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 262 "data//maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 263 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 264 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 265 "data//maps/Route25_SeaCottage/scripts.pory"

# 266 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewJolteon::
# 267 "data//maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_JOLTEON, 10, 3
# 268 "data//maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 269 "data//maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 270 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 271 "data//maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 272 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 273 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 274 "data//maps/Route25_SeaCottage/scripts.pory"

# 275 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ViewVaporeon::
# 276 "data//maps/Route25_SeaCottage/scripts.pory"
	showmonpic SPECIES_VAPOREON, 10, 3
# 277 "data//maps/Route25_SeaCottage/scripts.pory"
	waitbuttonpress
# 278 "data//maps/Route25_SeaCottage/scripts.pory"
	hidemonpic
# 279 "data//maps/Route25_SeaCottage/scripts.pory"
	setvar VAR_0x8004, SPECIES_VAPOREON
# 280 "data//maps/Route25_SeaCottage/scripts.pory"
	special SetSeenMon
# 281 "data//maps/Route25_SeaCottage/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
# 282 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 283 "data//maps/Route25_SeaCottage/scripts.pory"

# 284 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_EventScript_ExitBillsMonList::
# 285 "data//maps/Route25_SeaCottage/scripts.pory"
	releaseall
# 286 "data//maps/Route25_SeaCottage/scripts.pory"
	end
# 287 "data//maps/Route25_SeaCottage/scripts.pory"

# 288 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillWalkToMiddleOfRoom::
# 289 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 290 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 291 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 292 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_right
# 293 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 294 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 295 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
# 296 "data//maps/Route25_SeaCottage/scripts.pory"

# 297 "data//maps/Route25_SeaCottage/scripts.pory"
Route25_SeaCottage_Movement_BillExitTeleporter::
# 298 "data//maps/Route25_SeaCottage/scripts.pory"
	walk_down
# 299 "data//maps/Route25_SeaCottage/scripts.pory"
	step_end
