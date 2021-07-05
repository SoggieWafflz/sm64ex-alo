#quiz one

Q3_Settings = ["[SetSpd(1)][SetOrigin(32,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q3_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

Q3_start = ["[JumpLink('Q3_Settings')]\
The third quiz. You will be presented with\n\
a song of my own creation, and guess its origin.\n\
Every song played will have some relation\n\
to SR though. Get a question wrong and you\n\
lose three HP. Lose a life and you'll\n\
have to start all over![AbtnNextBox()]\
[Pop()]"]

#Quiz one - one
Quiz31_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q3_start')]",
#question
"[JumpLink('Q31')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[2])]\
[MatchRtrn(0,1)][JumpLink('Q3_right')]\
[MatchRtrn(0,0)][JumpLink('Q3_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[2])]\
[TriggerWarp(1,0x11)][Jump('Q3_End')]"
]

Q31 = ["[SetRtrn(2)]Question One:\n\
[PlayMusic(0x23)][PersistMusic()]\
A SNES classic. This theme is a follow up to the theme\n\
prominantly featured in SR2.5 Forgotten Lands III.[DialogOptions(3)]\
Electric Talk - Seiken Densetsu 3[end]\
Cursed Lands - Final Fantasy V[end]\
Black Omen - Chrono Trigger[end]\
Hint[end]\
[DialogResponse(3)]\
A song from this game is also used in\n\
Star Revenge 6.25 bowser 3\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q3_Settings')][Pop()]"]

#quiz one - two

Quiz32_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q3_Settings')]",
#question
"[JumpLink('Q32')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[1])]\
[MatchRtrn(0,1)][JumpLink('Q3_right')]\
[MatchRtrn(0,0)][JumpLink('Q3_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[1])]\
[TriggerWarp(1,0x11)][Jump('Q3_End')]"
]

Q32 =["\
[PlayMusic(0x24)][PersistMusic()]\
This game has perhaps\n\
the most notoriety among ports in SR games.\n\
Well known for always providing\n\
true bangers, and solid grooves.[AbtnNextBox()][SetRtrn(2)]\
Question Two:\n\
What sonic song is this.[DialogOptions(3)]\
Mirage Saloon Act 1 - Sonic Mania[end]\
Tidal Tempest Present- Sonic CD JP[end]\
Ice cap Zone 1 - Sonic 3 & Knuckles[end]\
Hint[end]\
[DialogResponse(3)]\
The correct answer is the only one that hasn't been\n\
inside of a SR game\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q3_Settings')][Pop()]"]

#quiz one - three

Quiz33_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q3_Settings')]",
#question
"[JumpLink('Q33')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q3_right')]\
[MatchRtrn(0,0)][JumpLink('Q3_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q3_End')]"
]

Q33 = ["[SetRtrn(2)]Question Three:\n\
[PlayMusic(0x25)][PersistMusic()]\
A song actually featured in a recent SR. This version\n\
though has only seen light in a single minihack.[DialogOptions(3)]\
White Forest - Pokemon Black&White[end]\
Orange Ocean - Kirby's Adventure[end]\
Beachside Dream - M&L Bowser's Inside Story[end]\
Hint[end]\
[DialogResponse(3)]\
Found in SR6.25\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q3_Settings')][Pop()]"]

#quiz one - four

Quiz34_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q3_Settings')]",
#question
"[JumpLink('Q34')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[2])]\
[MatchRtrn(0,1)][JumpLink('Q3_right')]\
[MatchRtrn(0,0)][JumpLink('Q3_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[2])]\
[TriggerWarp(1,0x11)][Jump('Q3_End')]"
]

Q34 = ["[SetRtrn(2)]Question Four:\n\
[PlayMusic(0x26)][PersistMusic()]\
Uhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh[Pause(64)].[Pause(20)].[Pause(20)].[Pause(20)]\n\
Pokemon.[Pause(48)][DialogOptions(3)]\
Wigglytuff's Guild - Pokemon Mystery Dungeon:\n\
Explorers of Sky[end]\
Vermillion City - Pokemon HG&SS[end]\
Pokemart - Pokemon Diamond&Pearl[end]\
Hint[end]",
#hint
"[DialogResponse(3)]\
You will be forced to play NoD again after this.\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q3_Settings')][Pop()]"]

#Question Wrong
Q3_wrong = ["Oh thats too bad. The answer was actually\n\
[CallLoop(2,'PrintAnswer',0,[])]\
[MatchRtrn(2,1)]Black Omen\
[MatchRtrn(2,2)]Tidal Tempest Present\
[MatchRtrn(2,3)]White Forest\
[MatchRtrn(2,4)]Pokemart\
[GenericText()]. You will be penalized three HP.\n\
Enjoy death and suffering for eternity.[AbtnNextBox()]\
[Pop()]"]

#Question right
Q3_right = ["Nice Job! As your host I am thoroughly\n\
impressed. The next level will be one\n\
I think this music fits well.\
[AbtnNextBox()][Pop()]"]