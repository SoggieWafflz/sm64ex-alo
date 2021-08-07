#5 hints, one question
c7_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]
c7_HINT_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][Pause(2)][SetSpd(0)]\
[EnShadow()][Pop()]"]
c7_Box = ["[ShadedBGBox(24,298,100,186,0x20,0x20,0x20,0x80)][Pop()]"]
c7_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

Fuck = ["[JumpLink('c7_Settings')][JumpLink('c7_Box')]\
       ------Overlord Dev Log 78------[Pause(32)]\n\
       - - Date [F*][H*]&$[F*][F*] &&$[F*][H*][F*][H*] - -\
[AbtnNextBox()][JumpLink('c7_Box')]\
Fuck. [Pause(80)]\n\
I really shouldn't have done that.[Pause(40)]\n\
I don't think there's any coming back from that.[Pause(40)]\n\
I just hope that won't have any lasting effects.\
[AbtnNextBox()][Jump('c7_End')]"]

AllGone = ["[JumpLink('c7_Settings')][JumpLink('c7_Box')]\
       ------Overlord Dev Log 255------[Pause(32)]\n\
       - - Date [F*][F*]&$[H*][H*] &&$[H*][H*][F*][F*] - -\
[AbtnNextBox()][JumpLink('c7_Box')]\
They're all gone.[Pause(40)] I didn't think this would\n\
happen.[Pause(40)] I never realized what was really\n\
powering the crystals.[Pause(40)]\n\
I shouldn't have abandoned them.\
[AbtnNextBox()][Jump('c7_End')]"]

c7_once = ["[CallOnce(0,'TE_get_flag',2,['&gDorrieState',1])][CallOnce(1,'TE_set_flag',2,['&gDorrieState',1])]\
[MatchRtrn(0,0)][Pop()][GenericText()][Jump('Dorrie_c7_2')]"]

Check_password_c7 = [
"[CallOnce(0,'TE_check_password',2,['c7_password',0])][MatchRtrn(0,1)][You got the password right][Jump('Spawn_Star_c7')]\
[GenericText()][JumpLink('c7_Settings')][JumpLink('c7_Box')]That doesn't appear to be it.[Pause(25)] You can try again\n\
though.[Pause(25)] I believe in you.[AbtnNextBox()][Jump('c7_End')]"]

Spawn_Star_c7 = [
"[JumpLink('c7_Settings')][JumpLink('c7_Box')]Thank you so much.[Pause(25)] I never thought\n\
there'd be anyone who actually liked kaizo enough\n\
to figure this one out.[Pause(25)] God speed.\
[AbtnNextBox()][CallOnce(1,'TE_set_flag',2,['&gStarSpawn',1])][Jump('c7_End')]"]

Dorrie_c7_2 = [
"[JumpLink('c7_Box')]There is a password to reset this world.[Pause(15)] Have\n\
you figured it out?[DialogOptions(1)]\
Yes[end]\
No[end]\
[DialogResponse(0)][JumpLink('c7_Box')]Amazing,[Pause(15)] now we can save\
romhacking.[AbtnNextBox()][ResetKeyboard()][StartKeyboard(0)][AutoNextBox()]\
[Jump('Check_password_c7')]\
[GenericText()][JumpLink('c7_Box')]Come back once you have figured it out.[AbtnNextBox()][Jump('c7_End')]"]

Dorrie_c7_1 = [
	"[JumpLink('c7_Settings')][JumpLink('c7_once')][JumpLink('c7_Box')]\
	This isn't even Star Revenge.[Pause(40)] What am I even\n\
	here for.[Pause(40)]\n\
	I really don't get it,[Pause(15)] if he really was looking\n\
	for the ultimate hack,[Pause(15)] why would he even\n\
	open a kaizo hack.[AbtnNextBox()][JumpLink('c7_Box')]\
	No matter how based,[Pause(15)] kaizo's will have a flock of\n\
	haters.[Pause(40)] This naive bug is fighting a losing battle.[Pause(40)]\n\
	Please,[Pause(15)] do me and romhacks a favor,[Pause(15)]\n\
	and destroy this world.[AbtnNextBox()][JumpLink('c7_Box')]\
	Once you are ready to save hacking,[Pause(15)] come speak\n\
	to me again.\
	[AbtnNextBox()][Jump('c7_End')]"]

c7_Hint1 = [
	"[JumpLink('c7_HINT_Settings')][JumpLink('c7_Box')]\
	May 26 2021.\
	[AbtnNextBox()][Jump('c7_End')]"]

c7_Hint2 = [
	"[JumpLink('c7_HINT_Settings')][JumpLink('c7_Box')]\
	blood for the blood god.\
	[AbtnNextBox()][Jump('c7_End')]"]

c7_Hint3 = [
	"[JumpLink('c7_HINT_Settings')][JumpLink('c7_Box')]\
	the darker and more somber of our pair.\
	[AbtnNextBox()][Jump('c7_End')]"]

c7_Hint4 = [
	"[JumpLink('c7_HINT_Settings')][JumpLink('c7_Box')]\
	the world between this sun and moon.\
	[AbtnNextBox()][Jump('c7_End')]"]