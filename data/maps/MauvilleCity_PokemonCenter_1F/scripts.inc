# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON CENTER.\p"
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"

Generic_FreeMoveReminder::
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_0
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Generic_FreeMoveReminder_2
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Generic_FreeMoveReminder_6
# 70 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8005, FALSE
	goto_if_eq Generic_FreeMoveReminder_7
Generic_FreeMoveReminder_5:
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special TeachMoveRelearnerMove
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Generic_FreeMoveReminder_10
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_5
Generic_FreeMoveReminder_1:
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end

Generic_FreeMoveReminder_2:
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_1
	goto Generic_FreeMoveReminder_1

Generic_FreeMoveReminder_6:
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_2
	goto Generic_FreeMoveReminder_5

Generic_FreeMoveReminder_7:
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_3
	goto Generic_FreeMoveReminder_5

Generic_FreeMoveReminder_10:
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox Generic_FreeMoveReminder_Text_4
	goto Generic_FreeMoveReminder_1


Generic_FreeMoveReminder_Text_0:
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "i am the move tutor, i will teach your\n"
	.string "pokemon a move they previously knew$"

Generic_FreeMoveReminder_Text_1:
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "come back later$"

Generic_FreeMoveReminder_Text_2:
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "can't teach egg$"

Generic_FreeMoveReminder_Text_3:
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "no moves to teach$"

Generic_FreeMoveReminder_Text_4:
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "oh that's too bad, see you next time$"

Generic_FreeMoveReminder_Text_5:
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "teach more of your pokemon moves!$"
