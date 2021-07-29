
end_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[Pop()]"]

end_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]
end_state = ["[CallOnce(0,'TE_get_state',1,['&ScutState'])][CallOnce(1,'TE_inc_state',1,['&ScutState'])][Pop()]"]

Scut_Talk=["[JumpLink('end_Settings')][JumpLink('end_state')]\
[MatchRtrn(0,0)][JumpLink('s1stText')]\
[MatchRtrn(0,1)][JumpLink('s2ndText')]\
[MatchRtrn(0,2)][JumpLink('s3rdText')]\
[MatchRtrn(0,3)][JumpLink('s4thText')]\
[MatchRtrn(0,4)][JumpLink('s5thText')]\
[MatchRtrn(0,5)][JumpLink('s6thText')]\
[MatchRtrn(0,6)][JumpLink('s7thText')]\
[MatchRtrn(0,7)][JumpLink('s8thText')]\
[MatchRtrn(0,8)][JumpLink('s9thText')]\
[MatchRtrn(0,9)][JumpLink('s10thText')]\
[MatchRtrn(0,10)][JumpLink('s11thText')]\
[MatchRtrn(0,11)][JumpLink('s12thText')]\
[MatchRtrn(0,12)][JumpLink('s13thText')]\
[MatchRtrn(0,13)][JumpLink('s14thText')]\
[MatchRtrn(0,14)][JumpLink('s15thText')]\
[GenericText()][Jump('end_End')]\
"]

s1stText = [
"Thank you. [Pause(30)]Now that the crystal is\n\
destroyed I am able to return it\n\
all back to normal.[Pause(30)]\n\
I will have to stay here. [Pause(30)]I hope you\n\
were able to save all the dorries.[Pause(30)]\n\
Take this star,[Pause(15)] and with this your\n\
journey will be over.[AbtnNextBox()][CallOnce(1,'TE_set_flag',2,['&gStarSpawn1',1])][Pop()]"]

s2ndText=[
"There ain't much left. [Pause(30)]Just this old\n\
washed up hacker and the star you\n\
should get.[Pause(30)]\n\
I appreciate you bothered to talk to\n\
me again though. [Pause(30)]Makes these old\n\
bones feel young again.[Pause(30)] Hahaha.[AbtnNextBox()][Pop()]"]

s3rdText=[
"Wow,[Pause(15)] are you a fan or something?[Pause(40)]\n\
You got something to say?[Pause(30)] I can\n\
do autographs if you want.[Pause(30)]\n\
Anything for a fan. [Pause(30)]Hahaha.[AbtnNextBox()][Pop()]"]

s4thText=[
"Ok thats enough. [Pause(30)]Get the star.[Pause(30)]\n\
You need to end this world, [Pause(15)]no\n\
matter how much you respect and\n\
appreciate me.[AbtnNextBox()][Pop()]"]

s5thText=[
"Did you know ASA is a hack you\n\
can play right now?[Pause(30)] I mean,[Pause(15)] you\n\
clearly aren't busy so I figured I'd\n\
suggest it. [Pause(30)]Hahaha.[AbtnNextBox()][Pop()]"]

s6thText=[
"Well now this is just awkward.[Pause(30)] I\n\
was trying to go out as hero and\n\
now you're just standing here.[Pause(30)]\n\
Like,[Pause(15)] how can I destroy the empire\n\
I've built up with you gawkin at me.[Pause(30)]\n\
At this point,[Pause(15)] you're actively inhibiting\n\
the saving of the universe.[AbtnNextBox()][Pop()]"]

s7thText=[
"So anyway what type of anime babe\n\
do you like? [Pause(30)]Personally,[Pause(15)] I like them\n\
wit long spikey and poisonous legs.[Pause(30)]\n\
At least 8 but the more the merrier.[AbtnNextBox()][Pop()]"]

s8thText=[
"I mean like if Im being honest,[Pause(15)] I really\n\
would like at least 50 legs.[Pause(30)] Covered in\n\
poisonous needles.[Pause(30)] I want an alpha\n\
lady spider who will feast on my\n\
carcus the moment after mating\n\
and use my flesh for sustenance.[AbtnNextBox()][Pop()]"]

s9thText=[
"Ok, not gonna say anything after I\n\
laid myself out like that huh?[Pause(30)] Have some\n\
shame.[Pause(30)]\n\
Really some people. [Pause(30)]Just take the\n\
star man.[Pause(30)] I need to save star revenge.[AbtnNextBox()][Pop()]"]

s10thText=[
"[PlayMusic(0x2f)][PersistMusic()]Well if you're gonna stay at least listen\n\
to some music.[Pause(30)] Can't just sit in\n\
silence forever.[AbtnNextBox()][Pop()]"]

s11thText=[
"And now I wait.[Pause(300)]\n\
Humm.[Pause(300)]\n\
Dummm.[Pause(300)]\n\
Hummmmmm.[Pause(300)]\n\
Dummmmmmmmm.[Pause(300)]\n\
Bored yet?[AbtnNextBox()][Pop()]"]

s12thText=[
"100 seconds.[Pause(3000)][AbtnNextBox()][Pop()]"]

s13thText=[
"I dont even want to save the world\n\
anymore.[Pause(30)] Next time you talk to me\n\
I'm ending hacks forever.[Pause(30)]\n\
No more Mr. nice Bug[AbtnNextBox()][Pop()]"]

s14thText=[
"Anddddddddddddddd\n\
Softlocked.[Pause(9000)][AbtnNextBox()][Pop()]"]

s15thText=[
"LOL jk.[Pause(30)] Here take this extra star.[CallOnce(1,'TE_set_flag',2,['&gStarSpawn2',1])]\n\
Fuckin speedrunners will never\n\
find this shit LOL.[Pause(30)]\n\
Assuming they even care about\n\
little ol' me and my hacks.[Pause(30)]\n\
This ones for you BroDute.[Pause(30)]\n\
Peace.[AbtnNextBox()][Pop()]"]
