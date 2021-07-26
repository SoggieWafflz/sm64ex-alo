#5 hints, one question
c5_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]
c5_HINT_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][Pause(2)][SetSpd(0)]\
[EnShadow()][Pop()]"]
c5_Box = ["[ShadedBGBox(24,298,100,186,0x20,0x20,0x20,0x80)][Pop()]"]
c5_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

JourneyBegin = ["[JumpLink('c5_Settings')][JumpLink('c5_Box')]\
       ------Overlord Dev Log 2------[Pause(32)]\n\
       - - Date [F*][H*]&$[F*][H*] &&$[H*][H*][F*][H*] - -\
[AbtnNextBox()][JumpLink('c5_Box')]\
I must search for the future of romhacking. [Pause(40)]At\n\
this rate,[Pause(15)] I will never become a legend.[Pause(20)]\n\
No matter what I do,[Pause(15)] I feel like I'm always behind.[Pause(40)]\n\
My quest to make the best hack starts now.\
[AbtnNextBox()][Jump('c5_End')]"]

EnlistHelp = ["[JumpLink('c5_Settings')][JumpLink('c5_Box')]\
       ------Overlord Dev Log 14------[Pause(32)]\n\
       - - Date [F*][F*]&$[F*][H*] &&$[F*][H*][H*][H*] - -\
[AbtnNextBox()][JumpLink('c5_Box')]\
I have started a company.[Pause(40)] I need all\n\
the help I can get to use this new power.[Pause(40)]\n\
It's me and the dorrie's,[Pause(15)] 9 to 5.[AbtnNextBox()][JumpLink('c5_Box')]\
I really should have gotten help earlier.[Pause(40)] No one\n\
hacks by themselves anymore.[Pause(30)] I need to stop\n\
being such a loner.\
[AbtnNextBox()][Jump('c5_End')]"]

c5_once = ["[CallOnce(0,'TE_get_flag',2,['&gDorrieState',1])][CallOnce(1,'TE_set_flag',2,['&gDorrieState',1])]\
[MatchRtrn(0,0)][Pop()][GenericText()][Jump('Dorrie_c5_2')]"]

Check_password_c5 = [
"[CallOnce(0,'TE_check_password',2,['c5_password',0])][MatchRtrn(0,1)][You got the password right][Jump('Spawn_Star_c5')]\
[GenericText()][JumpLink('c5_Settings')][JumpLink('c5_Box')]That doesn't appear to be it.[Pause(25)] You can try again\n\
though.[Pause(25)] I believe in you.[AbtnNextBox()][Jump('c5_End')]"]

Spawn_Star_c5 = [
"[JumpLink('c5_Settings')][JumpLink('c5_Box')]Finally.[Pause(25)] I can return to my wife.[Pause(25)]\n\
I cannot thank you enough.[Pause(25)] If you can,[Pause(10)] go easy on\n\
the bug.[Pause(25)] I don't think he meant for this.\
[AbtnNextBox()][CallOnce(1,'TE_set_flag',2,['&gStarSpawn',1])][Jump('c5_End')]"]

Dorrie_c5_2 = [
"[JumpLink('c5_Box')]There is a password to reset this world.[Pause(15)] Have\n\
you figured it out?[DialogOptions(1)]\
Yes[end]\
No[end]\
[DialogResponse(0)][JumpLink('c5_Box')]Ok,[Pause(15)] just say it and I'll\n\
end it all.[AbtnNextBox()][ResetKeyboard()][StartKeyboard(0)][AutoNextBox()]\
[Jump('Check_password_c5')]\
[GenericText()]Come back once you have figured it out.[AbtnNextBox()][Jump('c5_End')]"]

Dorrie_c5_1 = [
	"[JumpLink('c5_Settings')][JumpLink('c5_once')][JumpLink('c5_Box')]\
	I almost gave up hope.[Pause(40)] I've been here so long\n\
	I've forgotten almost everything.[Pause(40)]\n\
	The only thing left is the memory of my wife.[Pause(40)]\n\
	She sucks at cooking,[Pause(20)] but I love her anyway.[AbtnNextBox()][JumpLink('c5_Box')]\
	If you can,[Pause(15)] would you please undo this world\n\
	completely.[Pause(40)] It's the only way to make things\n\
	right.[AbtnNextBox()][JumpLink('c5_Box')]\
	If you have the power to do it,[Pause(15)] come speak to\n\
	me again.\
	[AbtnNextBox()][Jump('c5_End')]"]

c5_Hint1 = [
	"[JumpLink('c5_HINT_Settings')][JumpLink('c5_Box')]\
	The reason for all things Star Revenge.\
	[AbtnNextBox()][Jump('c5_End')]"]

c5_Hint2 = [
	"[JumpLink('c5_HINT_Settings')][JumpLink('c5_Box')]\
	Alone and silent, a sign of fortune.\
	[AbtnNextBox()][Jump('c5_End')]"]

c5_Hint3 = [
	"[JumpLink('c5_HINT_Settings')][JumpLink('c5_Box')]\
	No space, JustNature.\
	[AbtnNextBox()][Jump('c5_End')]"]

c5_Hint4 = [
	"[JumpLink('c5_HINT_Settings')][JumpLink('c5_Box')]\
	Blue is the lonliest color.\
	[AbtnNextBox()][Jump('c5_End')]"]