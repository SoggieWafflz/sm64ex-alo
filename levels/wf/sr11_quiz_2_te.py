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
#SR0 c10
Q21 = ["[SetRtrn(2)]Question One:\n\
[PlayMusic(0x11)][PersistMusic()]\
This frightful song is home to dungeon\n\
exploration game, pokemon mystery dungeon.[DialogOptions(3)]\
Floating Gardens - Star Revenge 0[end]\
Frosty Water Park - Star Revenge 4.5[end]\
Forgotten Cove of Fiore - Star Revenge 5[end]\
Hint[end]\
[DialogResponse(3)]\
This song is from Sonic Mania.\
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
"[CallLoop(0,'DetermineAnswer',1,[2])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[2])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]
#SR2.5 c13 (THI)
Q22 =["[SetRtrn(2)]Question Two:\n\
[PlayMusic(0x13)][PersistMusic()]\
Another common source game, many of the recent.\n\
star revenge games share songs from this title.[DialogOptions(3)]\
Ocher Dunes Canyon - Star Revenge 1.5[end]\
Abheinn Factory - Star Revenge 3[end]\
Forgotten Lands I - Star Revenge 2.5[end]\
Hint[end]\
[DialogResponse(3)]\
This song originates from M&L Partners in Time.\
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
#SRR WC
Q23 = ["[SetRtrn(2)]Question Three:\n\
[PlayMusic(0x14)][PersistMusic()]\
The goto when you need some abstract sky or sea\n\
type of feel. Used in too many hacks.[DialogOptions(3)]\
Tower of Hope - Star Revenge Redone[end]\
Sea Fortress Mizu - Star Revenge 7[end]\
Borderline Valley - Star Revenge 2: TTM[end]\
Hint[end]\
[DialogResponse(3)]\
From the level everyone hates in \n\
Super Mario Sunshine.\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#quiz one - four
#SR5.5 C5
Quiz24_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q2_Settings')]",
#question
"[JumpLink('Q24')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[1])]\
[MatchRtrn(0,1)][JumpLink('Q2_right')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[1])]\
[TriggerWarp(1,0x11)][Jump('Q2_End')]"
]

Q24 = ["[SetRtrn(2)]Question Four:\n\
[PlayMusic(0x19)][PersistMusic()]\
A theme anyone with taste would recognize.\n\
Shame on you if you don't know this.[DialogOptions(3)]\
Sanctuary of Sealing - Star Revenge 3.5[end]\
Abyss of Purple Pinkness - Star Revenge 5.5[end]\
Scarlet Forest - Star Revenge 6.25[end]\
Hint[end]",
#hint
"[DialogResponse(3)]\
Phantons Favorite.\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q2_Settings')][Pop()]"]

#Question Wrong
Q2_wrong = ["Oh thats too bad. The answer was actually\n\
[CallLoop(2,'PrintAnswer',0,[])]\
[MatchRtrn(2,1)]Floating Gardens - Star Revenge 0.\n\
[MatchRtrn(2,2)]Forgotten Lands I - Star Revenge 2.5.\n\
[MatchRtrn(2,3)]Tower of Hope - Star Revenge Redone.\n\
[MatchRtrn(2,4)]Abyss of Purple Pinkness - Star Revenge 5.5.\n\
[GenericText()]Hopefully you brighten up soon, or\n\
you will die a painful dying death.[AbtnNextBox()]\
[Pop()]"]

#Question right
Q2_right = ["Excellent! You have proven yourself knowledgeable\n\
and have earned the respect of your peers.\
[AbtnNextBox()][Pop()]"]