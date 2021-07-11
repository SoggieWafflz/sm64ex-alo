#quiz one

Q3_Settings = ["[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q3_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]
Q3_Box = ["[ShadedBGBox(24,296,100,186,0x20,0x20,0x20,0x80)][Pop()]"]
Q3_start = ["[JumpLink('Q3_Settings')]\
The third quiz. You will be presented with\n\
a song of my own creation, and guess its origin.\n\
Every song played will have some relation\n\
to SR though. Get a question wrong and you\n\
lose three HP. Lose a life and you'll\n\
have to start all over![AbtnNextBox()]\
[Pop()]"]

RemixLvls = ["[JumpLink('Q3_Settings')][JumpLink('Q3_Box')]\
       -------Overlord Dev Log 275-------[Pause(32)]\n\
       - - Date [F*][H*]&$[F*][H*] &&$[H*][H*][F*][F*] - -\
[AbtnNextBox()][JumpLink('Q3_Box')]\
You will work overtime. [Pause(60)]You will enjoy it.[Pause(60)]\n\
Are you aware of the sacrifices I have made for\n\
this to happen?[AbtnNextBox()][JumpLink('Q3_Box')]\
Jerry,[Pause(30)] you have a wonderful wife,[Pause(30)] her\n\
cooking aside.[Pause(50)] Don't you have things you can't\n\
sacrifice?[Pause(80)] Next time I see you,[Pause(30)] I want nothing\n\
but a positive attitude.[Pause(40)] Do not disappoint me.\
[AbtnNextBox()][Jump('Q3_End')]"]

Sacrifice = ["[JumpLink('Q3_Settings')][JumpLink('Q3_Box')]\
       ------Overlord Dev Log 145------[Pause(32)]\n\
       - - Date [F*][H*]&$[H*][F*] &&$[H*][F*][F*][F*] - -\
[AbtnNextBox()][JumpLink('Q3_Box')]\
My team doesn't respect me. [Pause(40)]It takes hard work to make it in life.[Pause(40)]\n\
I've sacrificed a lot for this,[Pause(40)] and for what?\n\
A tech demo??[Pause(60)] They don't have my vision.[Pause(30)]\n\
They don't understand the sacrifice,[Pause(20)] the passion,[Pause(20)] the art.[Pause(40)]\n\
They are so lost,[Pause(30)] it's laughable.\
[AbtnNextBox()][JumpLink('Q3_Box')]\
Why should I even bother with the opinions of\n\
simpletons.[Pause(40)] They are like ants to my intellect.\n\
[Pause(40)] I shall pay them no mind. Each second they occupy is\n\
worth a thousands worlds,[Pause(30)] and I have\n\
so many more to make.[Pause(20)]\
[AbtnNextBox()][Jump('Q3_End')]"]

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
#3.5 c2
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
#SR0 course 2
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
Found in SR0\
[AbtnNextBox()][SetSpd(0)][FFSpd(0)][GotoRtrn(2)]",
#question was answered
"[GenericText()][JumpLink('Q3_Settings')][Pop()]"]

#quiz one - four
#SRR c3,SR1c3,NoDc3
Quiz34_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q3_Settings')]",
#question
"[JumpLink('Q34')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[2])]\
[MatchRtrn(0,1)][JumpLink('Q3_right_last')]\
[MatchRtrn(0,0)][JumpLink('Q3_wrong_last')]\
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

#Question Wrong
Q3_wrong_last = ["Oh thats too bad. The answer was actually Pokemart.\n\
You will be penalized three HP.\n\
Enjoy death and suffering for eternity.[AbtnNextBox()][JumpLink('Q3_last')]\
[Pop()]"]

#Question right
Q3_right_last = ["I am thoroughly \
impressed. The next level will be one\n\
I think this music fits well.\
[AbtnNextBox()][JumpLink('Q3_last')][Pop()]"]

#Question right
Q3_last = ["You're progressing.[Pause(32)] I'm proud of you.[Pause(32)]\n\
They told me no one would make it this far.[Pause(32)] They\n\
called me crazy.[Pause(32)] Well maybe I am crazy.\
[AbtnNextBox()]\
I used to have a team of hard workers on this project.[Pause(32)]\n\
They couldn't handle it.[Pause(32)] They didn't have the\n\
mental aptitude for this.[Pause(32)] They couldn't see what I saw.[Pause(32)]\n\
I've been misunderstood for so long,[Pause(18)] but now,[Pause(18)] no longer.[Pause(32)]\n\
Soon you'll see my greatest creation.\
[AbtnNextBox()][Pop()]"]