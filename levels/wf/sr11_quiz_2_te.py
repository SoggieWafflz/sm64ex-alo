#quiz one

Q2_Settings = ["[SetSpd(1)][SetOrigin(32,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q2_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

Q2_start = ["[JumpLink('Q2_Settings')]\
The second quiz. This time you will hear\n\
a song and have to guess which SR it's from.\n\
Get a question wrong and you\n\
lose three HP. Lose a life and you'll\n\
have to start all over![AbtnNextBox()]\
[Pop()]"]

#Quiz one - one
Quiz21_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q2_start')]",
#question
"[JumpLink('Q21')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]

Q21 = ["[SetRtrn(2)]Question One:\n\
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
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#quiz one - two

Quiz22_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q2_Settings')]",
#question
"[JumpLink('Q22')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[1])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[1])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]

Q22 =["[SetRtrn(2)]Question Two:\n\
[PlayMusic(8)][PersistMusic()]\
You can't have Star Revenge without Sonic songs.\n\
Almost all games have seen use at\n\
least once, and for good reason.[DialogOptions(3)]\
Stardust Speedway - Sonic Mania[end]\
Mystic Cave Zone- Sonic the Hedgehog 2[end]\
Metallic Madness Present - Sonic CD JP[end]\
Hint[end]\
[DialogResponse(3)]\
This comes from Star Revenge 5 course 4\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#quiz one - three

Quiz23_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q2_Settings')]",
#question
"[JumpLink('Q23')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]

Q23 = ["[SetRtrn(2)]Question Three:\n\
[PlayMusic(9)][PersistMusic()]\
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
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#quiz one - four

Quiz24_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q2_Settings')]",
#question
"[JumpLink('Q24')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]

Q24 = ["[SetRtrn(2)]Question Four:\n\
[PlayMusic(0xC)][PersistMusic()]\
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
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#Question Wrong
Q2_wrong = ["Oh thats too bad. The answer was actually\n\
[CallLoop(2,'PrintAnswer',0,[])]\
[MatchRtrn(2,1)]Forest of Fear\
[MatchRtrn(2,2)]Mystic Cave\
[MatchRtrn(2,3)]Athletic Theme\
[MatchRtrn(2,4)]Crocodile Cacophony\
[GenericText()]. You'll have to do this next\n\
level with three less health now. Good luck.[AbtnNextBox()]\
[Pop()]"]

#Question right
Q2_right = ["Correct! Quite the noggin on this one, or\n\
ear I should say. Good luck on the next level.\
[AbtnNextBox()][Pop()]"]