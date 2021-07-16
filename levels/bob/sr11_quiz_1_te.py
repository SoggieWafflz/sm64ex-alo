#quiz one

Q1_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]

Q1_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

Q1_Box = ["[ShadedBGBox(24,298,100,186,0x20,0x20,0x20,0x80)][Pop()]"]

Q1_start = ["[JumpLink('Q1_Settings')]\
This will be our first set of questions. Listen\n\
to a music track and guess its origin.\n\
Get a question wrong and you\n\
lose three HP. Lose a life and you'll\n\
have to start all over![AbtnNextBox()]\
[Pop()]"]

TeamDev = ["[JumpLink('Q1_Settings')][JumpLink('Q1_Box')]\
       ------Overlord Dev Log 18------[Pause(32)]\n\
       - - Date [H*][H*]&$[H*][H*] &&$[F*][F*][F*][F*] - -\
[AbtnNextBox()][JumpLink('Q1_Box')]\
Congratulations team. [Pause(40)]We've commandeered our first\n\
world.[Pause(20)] Drinks are on me this weekend.[Pause(20)] You all better\n\
show up.[Pause(40)] This is an official teambuilder.[Pause(40)] Jerry,[Pause(30)]\n\
tell your wife her meatloaf fucking sucks,[Pause(30)] you don't\n\
need that garbage,[Pause(30)] you're drinking with us.\
[AbtnNextBox()][JumpLink('Q1_Box')]\
Everyone meet up behind the world start warp.\n\
[Pause(30)]I'll show you the limits of \
power we've just taken.\
[AbtnNextBox()][Jump('Q1_End')]"]

#Quiz one - one
Quiz11_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q1_start')]",
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
#sr 625 B1
Q11 = ["[SetRtrn(2)]Question One:\n\
[PlayMusic(6)][PersistMusic()]\
This frightful song is home to dungeon\n\
exploration game, pokemon mystery dungeon.[DialogOptions(3)]\
Forest of Fear - Explorers of Sky[end]\
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
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q1_Settings')]",
#question
"[JumpLink('Q12')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[1])]\
[MatchRtrn(0,1)][JumpLink('Q1_right')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[1])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]
#SR5 c4
Q12 =["[SetRtrn(2)]Question Two:\n\
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
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#quiz one - three

Quiz13_Handle = [
#start message
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q1_Settings')]",
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
#sr1 c2
Q13 = ["[SetRtrn(2)]Question Three:\n\
[PlayMusic(9)][PersistMusic()]\
A song remixed to death and back. A\n\
mario classic.[DialogOptions(3)]\
Athletic Theme - Super Mario World[end]\
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
"[MarioAction('ACT_WAITING_FOR_DIALOG')][JumpLink('Q1_Settings')]",
#question
"[JumpLink('Q14')]",
#question was answered, handle response
"[CallLoop(0,'DetermineAnswer',1,[0])]\
[MatchRtrn(0,1)][JumpLink('Q1_right_Last')]\
[MatchRtrn(0,0)][JumpLink('Q1_wrong_Last')]\
[GenericText()]\
[CallOnce(1,'DamageAnswer',1,[0])]\
[TriggerWarp(1,0x11)][Jump('Q1_End')]"
]
#NoD c15
Q14 = ["[SetRtrn(2)]Question Four:\n\
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
"[GenericText()][JumpLink('Q1_Settings')][Pop()]"]

#Question Wrong
Q1_wrong = ["Oh thats too bad. The answer was actually\n\
[CallLoop(2,'PrintAnswer',0,[])]\
[MatchRtrn(2,1)]Forest of Fear\
[MatchRtrn(2,2)]Mystic Cave\
[MatchRtrn(2,3)]Athletic Theme\
[MatchRtrn(2,4)]Crocodile Cacophony\
[GenericText()]. You'll have to do this next\n\
level with three less health now. Good luck.[AbtnNextBox()]\
[Pop()]"]

#Question right
Q1_right = ["Correct! Quite the noggin on this one, or\n\
ear I should say. Good luck on the next level.\
[AbtnNextBox()][Pop()]"]

#Last Question right
Q1_right_Last = ["Correct! Now surely you've already\n\
recognized your fate.\
[AbtnNextBox()][JumpLink('Q1_Last')][Pop()]"]

#Question Wrong Last
Q1_wrong_Last = ["Oh thats too bad. The answer was actually\n\
Crocodile Cacophony.[JumpLink('Q1_Last')][Pop()]"]

Q1_Last = ["\
Good luck on Night of Doom\n\
foolish mortal. Feel the pain I feel.[AbtnNextBox()]\
Tremble in fear as all your hopes of surviving\n\
and passing this challenge are erased.\n\
I will revel in your anguished screams. HAHAHAHAHAHAHA\n\
HAHAHAHAHAHHAHAHAHAHAHAHHAHAHAHAHAHAHAHA[AbtnNextBox()]\
[Pop()]"]

NoDMsg = ["[JumpLink('Q1_Settings')][JumpLink('Q1_Box')]\
       ------Overlord Dev Log 121------[Pause(32)]\n\
       - - Date [H*][H*]&$[H*][H*] &&$[F*][F*][F*][F*] - -\
[AbtnNextBox()][JumpLink('Q1_Box')]I probably got you real good didn't I?\n\
I am not that mean. I am a gentle and kind overlord,\n\
who nuzzle uwus his subject's as appropriately\nneeded.[AbtnNextBox()][JumpLink('Q1_Box')]\
I also provide some single coins in harder to reach\n\
for healing as needed. Even if you fail my tasks,\nthere\
is still room for redemption. No need for\nthanks, I\
do it for free.\n\
- Your scuttling overlord[AbtnNextBox()][Jump('Q1_End')]"]