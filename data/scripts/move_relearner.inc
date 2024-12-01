Common_FreeMoveReminder::
# 4 "data/scripts/move_relearner.pory"
	lockall
# 5 "data/scripts/move_relearner.pory"
	faceplayer
# 6 "data/scripts/move_relearner.pory"
	msgbox Common_FreeMoveReminder_Text_0, MSGBOX_YESNO
# 7 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_FreeMoveReminder_2
# 10 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Choose
Common_FreeMoveReminder_1:
# 12 "data/scripts/move_relearner.pory"
	releaseall
# 13 "data/scripts/move_relearner.pory"
	end
# 15 "data/scripts/move_relearner.pory"
MoveRelearner_Choose:
# 16 "data/scripts/move_relearner.pory"
	special ChooseMonForMoveRelearner
# 17 "data/scripts/move_relearner.pory"
	waitstate
# 18 "data/scripts/move_relearner.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_FreeMoveReminder_6
Common_FreeMoveReminder_5:
# 21 "data/scripts/move_relearner.pory"
	special IsSelectedMonEgg
# 22 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_FreeMoveReminder_9
# 24 "data/scripts/move_relearner.pory"
	compare VAR_0x8005, FALSE
	goto_if_eq Common_FreeMoveReminder_10
Common_FreeMoveReminder_8:
# 27 "data/scripts/move_relearner.pory"
	special TeachMoveRelearnerMove
# 28 "data/scripts/move_relearner.pory"
	waitstate
# 29 "data/scripts/move_relearner.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq Common_FreeMoveReminder_14
# 32 "data/scripts/move_relearner.pory"
	msgbox Common_FreeMoveReminder_Text_1
# 33 "data/scripts/move_relearner.pory"
	releaseall
	end

Common_FreeMoveReminder_2:
# 8 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Bye
	goto Common_FreeMoveReminder_1

Common_FreeMoveReminder_6:
# 19 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Bye
	goto Common_FreeMoveReminder_5

Common_FreeMoveReminder_9:
# 23 "data/scripts/move_relearner.pory"
	goto MoveRelearner_NoEggs
	goto Common_FreeMoveReminder_8

Common_FreeMoveReminder_10:
# 25 "data/scripts/move_relearner.pory"
	goto MoveRelearner_NoMoves
	goto Common_FreeMoveReminder_8

Common_FreeMoveReminder_13:
# 37 "data/scripts/move_relearner.pory"
MoveRelearner_Bye:
# 38 "data/scripts/move_relearner.pory"
	msgbox Common_FreeMoveReminder_Text_2
# 39 "data/scripts/move_relearner.pory"
	releaseall
# 40 "data/scripts/move_relearner.pory"
	end
# 42 "data/scripts/move_relearner.pory"
MoveRelearner_NoEggs:
# 43 "data/scripts/move_relearner.pory"
	msgbox Common_FreeMoveReminder_Text_3
# 44 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Choose
# 46 "data/scripts/move_relearner.pory"
MoveRelearner_NoMoves:
# 47 "data/scripts/move_relearner.pory"
	msgbox Common_FreeMoveReminder_Text_4
# 48 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Choose
	return

Common_FreeMoveReminder_14:
# 30 "data/scripts/move_relearner.pory"
	goto MoveRelearner_Bye
	goto Common_FreeMoveReminder_13


Common_EventScript_MoveRelearner::
# 54 "data/scripts/move_relearner.pory"
	lock
# 55 "data/scripts/move_relearner.pory"
	faceplayer
# 56 "data/scripts/move_relearner.pory"
	message Common_EventScript_MoveRelearner_Text_0
# 58 "data/scripts/move_relearner.pory"
	waitmessage
# 59 "data/scripts/move_relearner.pory"
	goto Common_EventScript_MoveRelearnerDynMultiChoice
# 60 "data/scripts/move_relearner.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/scripts/move_relearner.pory"
	release
	end


Common_EventScript_MoveRelearnerDynMultiChoice::
# 66 "data/scripts/move_relearner.pory"
	showmoneybox 18, 0
# 67 "data/scripts/move_relearner.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, 0
# 68 "data/scripts/move_relearner.pory"
	goto_if_set FLAG_SYS_RECEIVED_EGG_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_2
Common_EventScript_MoveRelearnerDynMultiChoice_1:
# 71 "data/scripts/move_relearner.pory"
	goto_if_set FLAG_SYS_RECEIVED_TM_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_5
Common_EventScript_MoveRelearnerDynMultiChoice_4:
# 74 "data/scripts/move_relearner.pory"
	goto_if_set FLAG_SYS_RECEIVED_TUTOR_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_8
Common_EventScript_MoveRelearnerDynMultiChoice_7:
# 77 "data/scripts/move_relearner.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_4, 4
# 78 "data/scripts/move_relearner.pory"
	dynmultistack 0, 0, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 79 "data/scripts/move_relearner.pory"
	closemessage
# 80 "data/scripts/move_relearner.pory"
	hidemoneybox
# 81 "data/scripts/move_relearner.pory"
	switch VAR_RESULT
# 83 "data/scripts/move_relearner.pory"
	case 0, Common_EventScript_MoveRelearnerDynMultiChoice_12
# 93 "data/scripts/move_relearner.pory"
	case 1, Common_EventScript_MoveRelearnerDynMultiChoice_13
# 102 "data/scripts/move_relearner.pory"
	case 2, Common_EventScript_MoveRelearnerDynMultiChoice_14
# 112 "data/scripts/move_relearner.pory"
	case 3, Common_EventScript_MoveRelearnerDynMultiChoice_15
# 123 "data/scripts/move_relearner.pory"
	case 4, Common_EventScript_MoveRelearnerDynMultiChoice_16
Common_EventScript_MoveRelearnerDynMultiChoice_16:
# 124 "data/scripts/move_relearner.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 125 "data/scripts/move_relearner.pory"
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_2:
# 69 "data/scripts/move_relearner.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, 1
	goto Common_EventScript_MoveRelearnerDynMultiChoice_1

Common_EventScript_MoveRelearnerDynMultiChoice_5:
# 72 "data/scripts/move_relearner.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, 2
	goto Common_EventScript_MoveRelearnerDynMultiChoice_4

Common_EventScript_MoveRelearnerDynMultiChoice_8:
# 75 "data/scripts/move_relearner.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, 3
	goto Common_EventScript_MoveRelearnerDynMultiChoice_7

Common_EventScript_MoveRelearnerDynMultiChoice_10:
# 128 "data/scripts/move_relearner.pory"
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_12:
	checkmoney 2000
# 0 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_17
# 90 "data/scripts/move_relearner.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_13:
	checkmoney 1000
# 0 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_20
# 99 "data/scripts/move_relearner.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_14:
	checkmoney 100
# 0 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_23
# 109 "data/scripts/move_relearner.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_15:
	checkmoney 500
# 0 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_26
# 119 "data/scripts/move_relearner.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_17:
# 85 "data/scripts/move_relearner.pory"
	setvar VAR_TEMP_1, 2000
# 86 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
# 87 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_20:
# 95 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
# 96 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_23:
# 104 "data/scripts/move_relearner.pory"
	setvar VAR_TEMP_1, 100
# 105 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
# 106 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_26:
# 114 "data/scripts/move_relearner.pory"
	setvar VAR_TEMP_1, 500
# 115 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
# 116 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10


MoveRelearner_AnythingElse::
# 133 "data/scripts/move_relearner.pory"
	message MoveRelearner_AnythingElse_Text_0
# 134 "data/scripts/move_relearner.pory"
	waitmessage
# 135 "data/scripts/move_relearner.pory"
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	return


MoveRelearner_CannotAfford::
# 139 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_CannotAfford_Text_0, MSGBOX_AUTOCLOSE
	checkmoney 200
# 0 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveRelearner_CannotAfford_1
# 145 "data/scripts/move_relearner.pory"
	release
	end

MoveRelearner_CannotAfford_1:
# 142 "data/scripts/move_relearner.pory"
	call MoveRelearner_AnythingElse
	return


MoveRelearner_TeachMove::
# 151 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_0, MSGBOX_DEFAULT
# 152 "data/scripts/move_relearner.pory"
	special ChooseMonForMoveRelearner
# 153 "data/scripts/move_relearner.pory"
	waitstate
# 154 "data/scripts/move_relearner.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMove_2
MoveRelearner_TeachMove_1:
# 157 "data/scripts/move_relearner.pory"
	special IsSelectedMonEgg
# 158 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMove_5
MoveRelearner_TeachMove_4:
# 164 "data/scripts/move_relearner.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMove_8
MoveRelearner_TeachMove_7:
# 171 "data/scripts/move_relearner.pory"
	switch VAR_MOVE_RELEARNER_STATE
# 173 "data/scripts/move_relearner.pory"
	case MOVE_RELEARNER_EGG_MOVES, MoveRelearner_TeachMove_12
# 175 "data/scripts/move_relearner.pory"
	case MOVE_RELEARNER_TM_MOVES, MoveRelearner_TeachMove_13
# 177 "data/scripts/move_relearner.pory"
	case MOVE_RELEARNER_TUTOR_MOVES, MoveRelearner_TeachMove_14
# 180 "data/scripts/move_relearner.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_6
MoveRelearner_TeachMove_10:
# 183 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_7, MSGBOX_DEFAULT
# 184 "data/scripts/move_relearner.pory"
	special TeachMoveRelearnerMove
# 185 "data/scripts/move_relearner.pory"
	waitstate
# 186 "data/scripts/move_relearner.pory"
	compare VAR_0x8004, NO
	goto_if_eq MoveRelearner_TeachMove_17
# 190 "data/scripts/move_relearner.pory"
	showmoneybox 18, 0
# 191 "data/scripts/move_relearner.pory"
	removemoney VAR_TEMP_1
# 192 "data/scripts/move_relearner.pory"
	updatemoneybox
# 193 "data/scripts/move_relearner.pory"
	playse SE_SHOP
# 194 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_8, MSGBOX_DEFAULT
# 196 "data/scripts/move_relearner.pory"
	hidemoneybox
MoveRelearner_TeachMove_16:
# 198 "data/scripts/move_relearner.pory"
	release
	end

MoveRelearner_TeachMove_2:
# 155 "data/scripts/move_relearner.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_1

MoveRelearner_TeachMove_5:
# 159 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_1, MSGBOX_AUTOCLOSE
# 161 "data/scripts/move_relearner.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_4

MoveRelearner_TeachMove_8:
# 165 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
# 168 "data/scripts/move_relearner.pory"
	call MoveRelearner_AnythingElse
# 169 "data/scripts/move_relearner.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_7

MoveRelearner_TeachMove_12:
# 174 "data/scripts/move_relearner.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_3
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_13:
# 176 "data/scripts/move_relearner.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_4
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_14:
# 178 "data/scripts/move_relearner.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_5
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_17:
# 187 "data/scripts/move_relearner.pory"
	goto MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_16


EventScript_MoveRelearnerDynMultiChoice::
# 205 "data/scripts/move_relearner.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, Common_EventScript_MoveRelearnerDynMultiChoice_Text_4
# 206 "data/scripts/move_relearner.pory"
	closemessage
# 207 "data/scripts/move_relearner.pory"
	switch VAR_RESULT
# 209 "data/scripts/move_relearner.pory"
	case 0, EventScript_MoveRelearnerDynMultiChoice_3
# 213 "data/scripts/move_relearner.pory"
	case 1, EventScript_MoveRelearnerDynMultiChoice_4
# 217 "data/scripts/move_relearner.pory"
	case 2, EventScript_MoveRelearnerDynMultiChoice_5
# 221 "data/scripts/move_relearner.pory"
	case 3, EventScript_MoveRelearnerDynMultiChoice_6
# 226 "data/scripts/move_relearner.pory"
	case 4, EventScript_MoveRelearnerDynMultiChoice_7
EventScript_MoveRelearnerDynMultiChoice_7:
# 227 "data/scripts/move_relearner.pory"
	release
	end

EventScript_MoveRelearnerDynMultiChoice_1:
# 230 "data/scripts/move_relearner.pory"
	release
	end

EventScript_MoveRelearnerDynMultiChoice_3:
# 210 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
# 211 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_4:
# 214 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
# 215 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_5:
# 218 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
# 219 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_6:
# 222 "data/scripts/move_relearner.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
# 223 "data/scripts/move_relearner.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1


MoveRelearner_TeachMoveDebug::
# 235 "data/scripts/move_relearner.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 236 "data/scripts/move_relearner.pory"
	special ChooseMonForMoveRelearner
# 237 "data/scripts/move_relearner.pory"
	waitstate
# 238 "data/scripts/move_relearner.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMoveDebug_2
# 241 "data/scripts/move_relearner.pory"
	special IsSelectedMonEgg
# 242 "data/scripts/move_relearner.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMoveDebug_5
MoveRelearner_TeachMoveDebug_4:
# 247 "data/scripts/move_relearner.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMoveDebug_8
MoveRelearner_TeachMoveDebug_7:
# 252 "data/scripts/move_relearner.pory"
	special TeachMoveRelearnerMove
# 253 "data/scripts/move_relearner.pory"
	waitstate
# 254 "data/scripts/move_relearner.pory"
	release
	end

MoveRelearner_TeachMoveDebug_2:
	end

MoveRelearner_TeachMoveDebug_5:
# 243 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_1, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_4

MoveRelearner_TeachMoveDebug_8:
# 248 "data/scripts/move_relearner.pory"
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_7


Common_FreeMoveReminder_Text_0:
# 6 "data/scripts/move_relearner.pory"
	.string "I am the MOVE MASTER! Shall I teach\n"
	.string "your POKéMON a move?$"

Common_FreeMoveReminder_Text_1:
# 32 "data/scripts/move_relearner.pory"
	.string "Be sure to come back and teach more\n"
	.string "moves to your POKéMON!$"

Common_FreeMoveReminder_Text_2:
# 38 "data/scripts/move_relearner.pory"
	.string "Come back soon!$"

Common_FreeMoveReminder_Text_3:
# 43 "data/scripts/move_relearner.pory"
	.string "I may be the MOVE MASTER, but I can't\n"
	.string "teach an EGG any moves!$"

Common_FreeMoveReminder_Text_4:
# 47 "data/scripts/move_relearner.pory"
	.string "Impossible! I can't teach this POKéMON\n"
	.string "any moves!$"

Common_EventScript_MoveRelearner_Text_0:
# 56 "data/scripts/move_relearner.pory"
	.string "Hi, I'm the Move Relearner.\n"
	.string "Would you like to learn new moves?$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_0:
# 67 "data/scripts/move_relearner.pory"
	.string "Level Up Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_1:
# 69 "data/scripts/move_relearner.pory"
	.string "Egg Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_2:
# 72 "data/scripts/move_relearner.pory"
	.string "TM Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_3:
# 75 "data/scripts/move_relearner.pory"
	.string "Tutor Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_4:
# 77 "data/scripts/move_relearner.pory"
	.string "See ya!$"

MoveRelearner_AnythingElse_Text_0:
# 133 "data/scripts/move_relearner.pory"
	.string "Is there anything else I may do for you?$"

MoveRelearner_CannotAfford_Text_0:
# 139 "data/scripts/move_relearner.pory"
	.string "I'm sorry…\n"
	.string "You cannot afford that.$"

MoveRelearner_TeachMove_Text_0:
# 151 "data/scripts/move_relearner.pory"
	.string "Please choose your POKéMON.$"

MoveRelearner_TeachMove_Text_1:
# 159 "data/scripts/move_relearner.pory"
	.string "I'm sorry…\n"
	.string "But an Egg can't learn moves.$"

MoveRelearner_TeachMove_Text_2:
# 165 "data/scripts/move_relearner.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

MoveRelearner_TeachMove_Text_3:
# 174 "data/scripts/move_relearner.pory"
	.string "egg move$"

MoveRelearner_TeachMove_Text_4:
# 176 "data/scripts/move_relearner.pory"
	.string "TM$"

MoveRelearner_TeachMove_Text_5:
# 178 "data/scripts/move_relearner.pory"
	.string "tutor move$"

MoveRelearner_TeachMove_Text_6:
# 180 "data/scripts/move_relearner.pory"
	.string "move$"

MoveRelearner_TeachMove_Text_7:
# 183 "data/scripts/move_relearner.pory"
	.string "Which {STR_VAR_3} should I teach?$"

MoveRelearner_TeachMove_Text_8:
# 194 "data/scripts/move_relearner.pory"
	.string "Thank you for using our services.\n"
	.string "Please come again!$"
