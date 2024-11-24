# 1 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_MapScripts::
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_OnFrame
# 4 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.byte 0
# 5 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 6 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_OnFrame:
# 7 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.2byte 0
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ After the below calculation, VAR_TEMP_4 is the room number of the door the player entered
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, left column   (Rm 1)
# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, middle column (Rm 2)
# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, right column	(Rm 3)
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  left column   (Rm 4)
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  middle column (Rm 5)
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  right column  (Rm 6)
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 21, AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 36, AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_3, 2, AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 2, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 6, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 33 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn::
# 34 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
# 35 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 36 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 37 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn::
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 40 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow::
# 42 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 45 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 46 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 47 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 49 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
# 50 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 51 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2::
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
# 58 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 63 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle::
# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 68 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 76 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 81 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 82 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6::
# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 93 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle::
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 97 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle::
# 98 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
# 99 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle::
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle::
# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 110 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 111 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 112 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
# 113 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 114 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 115 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash:
# 116 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
# 117 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "But it's just trash…$"

AbandonedShip_PileOfCoins_1::
# 121 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 122 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_0
	checkitem ITEM_GIMMIGHOUL_COIN, 999
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_1_2
	checkitem ITEM_GIMMIGHOUL_COIN, 800
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_1_3
# 137 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_3
# 138 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	giveitem ITEM_GIMMIGHOUL_COIN, 200
# 139 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_PileOfCoins_1_7
AbandonedShip_PileOfCoins_1_1:
# 143 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject 1
# 144 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
	end

AbandonedShip_PileOfCoins_1_2:
# 124 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_1
	goto AbandonedShip_PileOfCoins_1_1

AbandonedShip_PileOfCoins_1_3:
# 126 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_2
# 127 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeitem ITEM_GIMMIGHOUL_COIN, 2000
# 128 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	additem ITEM_GIMMIGHOUL_COIN, 999
# 135 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SHIP_TREASURE_1
	goto AbandonedShip_PileOfCoins_1_1

AbandonedShip_PileOfCoins_1_7:
# 140 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto AbandonedShip_PileOfCoins_1_1


AbandonedShip_PileOfCoins_2::
# 149 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 150 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_0
	checkitem ITEM_GIMMIGHOUL_COIN, 999
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_2_2
	checkitem ITEM_GIMMIGHOUL_COIN, 800
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_2_3
# 165 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_3
# 166 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	giveitem ITEM_GIMMIGHOUL_COIN, 200
# 167 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_PileOfCoins_2_7
AbandonedShip_PileOfCoins_2_1:
# 171 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject 5
# 172 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
	end

AbandonedShip_PileOfCoins_2_2:
# 152 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_1
	goto AbandonedShip_PileOfCoins_2_1

AbandonedShip_PileOfCoins_2_3:
# 154 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_2
# 155 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeitem ITEM_GIMMIGHOUL_COIN, 2000
# 156 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	additem ITEM_GIMMIGHOUL_COIN, 999
# 163 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SHIP_TREASURE_2
	goto AbandonedShip_PileOfCoins_2_1

AbandonedShip_PileOfCoins_2_7:
# 168 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto AbandonedShip_PileOfCoins_2_1


AbandonedShip_PileOfCoins_3::
# 177 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 178 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_0
	checkitem ITEM_GIMMIGHOUL_COIN, 999
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_3_2
	checkitem ITEM_GIMMIGHOUL_COIN, 800
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_3_3
# 193 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_3
# 194 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	giveitem ITEM_GIMMIGHOUL_COIN, 200
# 195 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_PileOfCoins_3_7
AbandonedShip_PileOfCoins_3_1:
# 199 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject 6
# 200 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
	end

AbandonedShip_PileOfCoins_3_2:
# 180 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_1
	goto AbandonedShip_PileOfCoins_3_1

AbandonedShip_PileOfCoins_3_3:
# 182 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_2
# 183 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeitem ITEM_GIMMIGHOUL_COIN, 2000
# 184 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	additem ITEM_GIMMIGHOUL_COIN, 999
# 191 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SHIP_TREASURE_3
	goto AbandonedShip_PileOfCoins_3_1

AbandonedShip_PileOfCoins_3_7:
# 196 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto AbandonedShip_PileOfCoins_3_1


AbandonedShip_PileOfCoins_4::
# 205 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 206 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_0
	checkitem ITEM_GIMMIGHOUL_COIN, 999
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_4_2
	checkitem ITEM_GIMMIGHOUL_COIN, 800
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_4_3
# 221 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_3
# 222 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	giveitem ITEM_GIMMIGHOUL_COIN, 200
# 223 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_PileOfCoins_4_7
AbandonedShip_PileOfCoins_4_1:
# 227 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject 7
# 228 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
	end

AbandonedShip_PileOfCoins_4_2:
# 208 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_1
	goto AbandonedShip_PileOfCoins_4_1

AbandonedShip_PileOfCoins_4_3:
# 210 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_2
# 211 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeitem ITEM_GIMMIGHOUL_COIN, 2000
# 212 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	additem ITEM_GIMMIGHOUL_COIN, 999
# 219 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SHIP_TREASURE_4
	goto AbandonedShip_PileOfCoins_4_1

AbandonedShip_PileOfCoins_4_7:
# 224 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto AbandonedShip_PileOfCoins_4_1


AbandonedShip_PileOfCoins_5::
# 233 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lock
# 234 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_0
	checkitem ITEM_GIMMIGHOUL_COIN, 999
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_5_2
	checkitem ITEM_GIMMIGHOUL_COIN, 800
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AbandonedShip_PileOfCoins_5_3
# 249 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_3
# 250 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	giveitem ITEM_GIMMIGHOUL_COIN, 200
# 251 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_PileOfCoins_5_7
AbandonedShip_PileOfCoins_5_1:
# 255 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeobject 8
# 256 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	release
	end

AbandonedShip_PileOfCoins_5_2:
# 236 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_1
	goto AbandonedShip_PileOfCoins_5_1

AbandonedShip_PileOfCoins_5_3:
# 238 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_PileOfCoins_1_Text_2
# 239 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	removeitem ITEM_GIMMIGHOUL_COIN, 2000
# 240 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	additem ITEM_GIMMIGHOUL_COIN, 999
# 247 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setflag FLAG_SHIP_TREASURE_5
	goto AbandonedShip_PileOfCoins_5_1

AbandonedShip_PileOfCoins_5_7:
# 252 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto AbandonedShip_PileOfCoins_5_1


AbandonedShip_PileOfCoins_1_Text_0:
# 122 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's a pile of coins!$"

AbandonedShip_PileOfCoins_1_Text_1:
# 124 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "Your bag is filled with coins already!$"

AbandonedShip_PileOfCoins_1_Text_2:
# 126 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "You scoop all the coins into your bag.\n"
	.string "You couldn't possibly carry any more!$"

AbandonedShip_PileOfCoins_1_Text_3:
# 137 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "You scoop all the coins into your bag.$"
