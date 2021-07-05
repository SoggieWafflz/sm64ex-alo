#quiz one

Q1_Settings = ["[SetSpd(1)][SetOrigin(32,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q1_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

Q1_start = ["[JumpLink('Q1_Settings')]\
This will be our first set of\n\
questions. Get a question wrong and you\n\
lose three HP. Lose a life and you'll\n\
have to start all over![AbtnNextBox()]\
[Pop()]"]

#Quiz one - one
Quiz11_Handle = [
#start message
"[JumpLink('Q1_start')]",
#question
"[JumpLink('Q11')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q1_right')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]

Q11 = ["[SetRtrn(2)]Question One:\n\
[PlayMusic(6)][PersistMusic()]\
This frightful song is home to dungeon\n\
exploration game, pokemon mystery dungeon.[DialogOptions(3)]\
Forest of Fear- Explorers of Sky[end]\
Steam Cave - Explorers of Time[end]\
Sinister Woods - Red Rescue Team[end]\
Hint[end]\
[DialogResponse(3)]\
This song is used in Star Revenge 6.25 bowser 1\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#quiz one - two

Quiz12_Handle = [
#start message
"[JumpLink('Q1_Settings')]",
#question
"[JumpLink('Q12')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[2])]\
[MatchRtrn(0,1)][JumpLink('Q1_right')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[2])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]

Q12 =["Question Two:\n\
[PlayMusic(6)][PersistMusic()]\
You can't have Star Revenge without Sonic CD.\n\
Almost all its tracks have seen use at\n\
least once, across many games.[DialogOptions(3)]\
Stardust Speedway - Sonic Mania[end]\
Wacky Workbench Present - Sonic CD JP[end]\
Metallic Madness Bad Future - Sonic CD JP[end]\
Hint[end]\
[DialogResponse(3)]\
This comes from Star Revenge 5.5 course 8\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#quiz one - three

Quiz13_Handle = [
#start message
"[JumpLink('Q1_Settings')]",
#question
"[JumpLink('Q13')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q1_right')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]

Q13 = ["Question Three:\n\
[PlayMusic(7)][PersistMusic()]\
A song remixed to death and back. A\n\
mario classic.[DialogOptions(3)]\
Athletic Theme - Super Mario World *[end]\
Underground Theme - Super Mario Bros.[end]\
Overworld - Super Mario Bros. 2[end]\
Hint[end]\
[DialogResponse(3)]\
From Star Revenge 1 course 2\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#quiz one - four

Quiz14_Handle = [
#start message
"[JumpLink('Q1_Settings')]",
#question
"[JumpLink('Q14')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q1_right')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]

Q14 = ["[SetupReturn(2)]Question Four:\n\
[PlayMusic(8)][PersistMusic()]\
Our final question. A theme filled with\n\
horror and crushed dreams.[DialogOptions(3)]\
Crocodile Cacophony - Donkey Kong Country[end]\
Riddle Tower - Paper Mario TTYD[end]\
Twilight - Zelda Twlight Princess[end]\
Hint[end]",
#hint
"[DialogResponse(3)]\
From BroDutes favorite hack, Night of\n\
Doom course 15\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#Question Wrong
Q1_wrong = ["Oh thats too bad. The answer was actually\n\
[CallLoop(2,'PrintAnswer',0,[])]\
[MatchRtrn(2,1)]Angry Aztec\
[MatchRtrn(2,2)]Metallic Madness Bad Future\
[MatchRtrn(2,3)]Athletic Theme\
[MatchRtrn(2,4)]Crocodile Cacophony\
[GenericText()].You'll have to do this next\n\
level with three less health now. Good luck.[AbtnNextBox()]\
[Pop()]"]

#Question right
Q1_right = ["Correct! Quite the noggin on this one, or\n\
ear I should say. Good luck on the next level.\
[AbtnNextBox()][Pop()]"]