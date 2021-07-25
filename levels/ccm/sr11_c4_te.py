#5 hints, one question
c4_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]
c4_HINT_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][Pause(2)][SetSpd(0)]\
[EnShadow()][Pop()]"]
c4_Box = ["[ShadedBGBox(24,298,100,186,0x20,0x20,0x20,0x80)][Pop()]"]
c4_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

FoundCrystals = ["[JumpLink('c4_Settings')][JumpLink('c4_Box')]\
       ------Overlord Dev Log 4------[Pause(32)]\n\
       - - Date [F*][F*]&$[F*][H*] &&$[F*][H*][F*][H*] - -\
[AbtnNextBox()][JumpLink('c4_Box')]\
I have discovered a new mysterious crystal. [Pause(40)]It seems\n\
to greatly increase my hacking powers.[Pause(20)]\n\
I feel like I really can make the best hack ever with this.[Pause(40)]\n\
I'm excited to see whats possible with this.\
[AbtnNextBox()][Jump('c4_End')]"]

Power = ["[JumpLink('c4_Settings')][JumpLink('c4_Box')]\
       ------Overlord Dev Log 52------[Pause(32)]\n\
       - - Date [F*][F*]&$[H*][H*] &&$[F*][F*][F*][F*] - -\
[AbtnNextBox()][JumpLink('c4_Box')]\
These crystals are incredibly powerful.[Pause(40)] So far I've\n\
taken over 10 worlds,[Pause(15)] and I don't feel like I've used\n\
even a tenth of my potential.[Pause(40)][AbtnNextBox()][JumpLink('c4_Box')]\
I can do anything with these,[Pause(20)] I'll become the ultimate hacker.\n\
[Pause(30)]There's nothing that can stop me.[Pause(30)] I'll make\n\
every single hack mine.\
[AbtnNextBox()][Jump('c4_End')]"]

c4_once = ["[CallOnce(0,'TE_get_flag',2,['&gDorrieState',1])][CallOnce(1,'TE_set_flag',2,['&gDorrieState',1])]\
[MatchRtrn(0,0)][Pop()][GenericText()][Jump('Dorrie_c4_2')]"]

Check_password_c4 = [
"[CallOnce(0,'TE_check_password',2,['c4_password',0])][MatchRtrn(0,1)][You got the password right][Jump('Spawn_Star_c4')]\
[GenericText()][JumpLink('c4_Settings')][JumpLink('c4_Box')]That doesn't appear to be it.[Pause(25)] You can try again\n\
though.[Pause(25)] I believe in you.[AbtnNextBox()][Jump('c4_End')]"]

Spawn_Star_c4 = [
"[JumpLink('c4_Settings')][JumpLink('c4_Box')]You've figured it out.[Pause(25)] Congrats.[Pause(25)]\n\
Now I can return this world to its proper\n\
state.[Pause(25)] Thank you.[AbtnNextBox()][CallOnce(1,'TE_set_flag',2,['&gStarSpawn',1])][Jump('c4_End')]"]

Dorrie_c4_2 = [
"[JumpLink('c4_Box')]There is a password to reset this world.[Pause(15)] Have\n\
you figured it out?[DialogOptions(1)]\
Yes[end]\
No[end]\
[DialogResponse(0)][JumpLink('c4_Box')]Ok,[Pause(15)] give me the password and I can destroy\n\
this world.[AbtnNextBox()][ResetKeyboard()][StartKeyboard(0)][AutoNextBox()]\
[Jump('Check_password_c4')]\
[GenericText()]Come back once you have figured it out.[AbtnNextBox()][Jump('c4_End')]"]

Dorrie_c4_1 = [
	"[JumpLink('c4_Settings')][JumpLink('c4_once')][JumpLink('c4_Box')]\
	Have you come to save us?[Pause(40)] We've become trapped in\n\
	these worlds,[Pause(15)] through our own conceit.[Pause(40)]\n\
	Of course there was a cost to it all,[Pause(15)] nothing\n\
	in the world is free after all.[AbtnNextBox()][JumpLink('c4_Box')]\
	If you want to save us, you have to undo this\n\
	world completely.[Pause(40)] Remove the binds constricting these\n\
	world to this space,[Pause(15)] and destroy it entirely.[AbtnNextBox()][JumpLink('c4_Box')]\
	Once you are ready to say farewell,[Pause(15)] come speak\n\
	to me again.\
	[AbtnNextBox()][Jump('c4_End')]"]

c4_Hint1 = [
	"[JumpLink('c4_HINT_Settings')][JumpLink('c4_Box')]\
	The origin of this curse.\
	[AbtnNextBox()][Jump('c4_End')]"]

c4_Hint2 = [
	"[JumpLink('c4_HINT_Settings')][JumpLink('c4_Box')]\
	There is no madness left. Only tranquility.\
	[AbtnNextBox()][Jump('c4_End')]"]

c4_Hint3 = [
	"[JumpLink('c4_HINT_Settings')][JumpLink('c4_Box')]\
	This was supposed to be my greatest creation.\n\
	Now all I have is empty pride.\
	[AbtnNextBox()][Jump('c4_End')]"]

c4_Hint4 = [
	"[JumpLink('c4_HINT_Settings')][JumpLink('c4_Box')]\
	All caps to respect the name.\
	[AbtnNextBox()][Jump('c4_End')]"]