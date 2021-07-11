#quiz one

Q2_Settings = ["[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q2_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]
Q2_Box = ["[ShadedBGBox(24,296,100,186,0x20,0x20,0x20,0x80)][Pop()]"]

TexSeams = ["[JumpLink('Q2_Settings')][JumpLink('Q2_Box')]\
       ------Overlord Dev Log 122------[Pause(32)]\n\
       - - Date [F*][F*]&$[H*][H*] &&$[H*][F*][H*][F*] - -\
[AbtnNextBox()][JumpLink('Q2_Box')]Completely ridiculous. [Pause(40)]What is this texture work.[Pause(20)]\n\
A five year old could do better.[Pause(20)] Have you seen these\n\
seams???[Pause(40)] Whoever constructed this hack needs to \n\
have their hacking liscense removed.\n\
Get that intern fired.[Pause(30)] If I see them again I don't\n\
know what I'm going to do.\
[AbtnNextBox()][Jump('Q2_End')]"]

ObjectSpam = ["[JumpLink('Q2_Settings')][JumpLink('Q2_Box')]\
       ------Overlord Dev Log 96 ------[Pause(32)]\n\
       - - Date [H*][H*]&$[H*][F*] &&$[H*][F*][F*][F*] - -\
[AbtnNextBox()][JumpLink('Q2_Box')]\
Your scuttling overlord here. [Pause(40)]I have received\n\
numerous complaints about the quality of my level\n\
design.[Pause(30)] Henceforth,[Pause(20)] I have decided to ignore\n\
all criticism and pretend everyone else is\n\
simply a hater.[AbtnNextBox()][JumpLink('Q2_Box')]\
Any employee criticism deemed to have given \n\
invalid criticism will be subject to\n\
immediate termination.[Pause(50)] This is a hater free\n\
company.[AbtnNextBox()][Jump('Q2_End')]"]

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
A peaceful theme for a snow level.\n\
or maybe a garden, or island in the sea.\n\
A song with many potential faces.[DialogOptions(3)]\
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
Somber, sorrowful, melancholic.\n\
This level reflects the darker tone that\n\
many star revenge levels have.[DialogOptions(3)]\
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
[MatchRtrn(0,1)][JumpLink('Q2_right_end')]\
[MatchRtrn(0,0)][JumpLink('Q2_wrong_end')]\
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

#Question Wrong
Q2_wrong_end = ["Oh thats too bad. The answer was actually\n\
Abyss of Purple Pinkness - Star Revenge 5.5.\n\
[GenericText()]Hopefully you brighten up soon, or\n\
you will die a painful dying death.[AbtnNextBox()][JumpLink('Q2_Last')]\
[Pop()]"]

#Question right
Q2_right_end = ["Excellent! You have proven yourself knowledgeable\n\
and have earned the respect of your peers.\
[AbtnNextBox()][JumpLink('Q2_Last')][Pop()]"]

Q2_Last = ["Ahh.[Pause(40)] You know this sort of generic response\n\
actually hurts me.[Pause(40)] I should put more effort in.[Pause(20)]\n\
As your overlord,[Pause(20)] you deserve to know me.[Pause(40)] The real me.[Pause(40)]\n\
Well you'll know soon.[Pause(30)] I've actually been working on\n\
something.[Pause(40)] I'm proud of it a little bit. Well maybe,[Pause(14)]\n\
the pride always fades once everyone else sees it.[AbtnNextBox()][Pop()]"]