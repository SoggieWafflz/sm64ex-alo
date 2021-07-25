#5 hints, one question
c6_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][FFSpd(-1)][EnBlip()]\
[EnShadow()][Pop()]"]
c6_HINT_Settings = ["[a comment, you can put anything here and it won't compile]\
[SetSpd(1)][SetOrigin(28,168)][Pause(2)][SetSpd(0)]\
[EnShadow()][Pop()]"]
c6_Box = ["[ShadedBGBox(24,298,100,186,0x20,0x20,0x20,0x80)][Pop()]"]
c6_End = ["[MarioAction('ACT_IDLE')][TimeEndStr(1)]"]

CrystalExplain = ["[JumpLink('c6_Settings')][JumpLink('c6_Box')]\
       ------Overlord Dev Log 132------[Pause(32)]\n\
       - - Date [F*][F*]&$[F*][H*] &&$[H*][H*][F*][F*] - -\
[AbtnNextBox()][JumpLink('c6_Box')]\
These spike crystals seem to be more powerful. [Pause(40)]\n\
They hold together worlds better,[Pause(20)] and can\n\
even stitch together different dimensions.[Pause(40)]\n\
These will be the key to conquering all worlds.\
[AbtnNextBox()][Jump('c6_End')]"]

DorrieDeath = ["[JumpLink('c6_Settings')][JumpLink('c6_Box')]\
       ------Overlord Dev Log 222------[Pause(32)]\n\
       - - Date [H*][H*]&$[F*][F*] &&$[F*][F*][H*][H*] - -\
[AbtnNextBox()][JumpLink('c6_Box')]\
If they don't want to work,[Pause(15)] I'll just do it myself.[Pause(40)]\n\
I always knew Jerry was a lazy piece of garbage.[Pause(40)]\n\
Don't they realize I am making history here.[AbtnNextBox()][JumpLink('c6_Box')]\
They'll be sorry.[Pause(40)] Now, I alone will stand atop\n\
of all worlds. Soon I will activate the largest\n\
power crystal and make it all mine.\
[AbtnNextBox()][Jump('c6_End')]"]

c6_once = ["[CallOnce(0,'TE_get_flag',2,['&gDorrieState',1])][CallOnce(1,'TE_set_flag',2,['&gDorrieState',1])]\
[MatchRtrn(0,0)][Pop()][GenericText()][Jump('Dorrie_c6_2')]"]

Check_password_c6 = [
"[CallOnce(0,'TE_check_password',2,['c6_password',0])][MatchRtrn(0,1)][You got the password right][Jump('Spawn_Star_c6')]\
[GenericText()][JumpLink('c6_Settings')][JumpLink('c6_Box')]That doesn't appear to be it.[Pause(25)] You can try again\n\
though.[Pause(25)] I believe in you.[AbtnNextBox()][Jump('c6_End')]"]

Spawn_Star_c6 = [
"[JumpLink('c6_Settings')][JumpLink('c6_Box')]Awesome.[Pause(25)] Now once you find\n\
that bug make sure you let him know ASA\n\
sucks.[Pause(25)] Peace.[AbtnNextBox()][CallOnce(1,'TE_set_flag',2,['&gStarSpawn',1])][Jump('c6_End')]"]

Dorrie_c6_2 = [
"[JumpLink('c6_Box')]There is a password to reset this world.[Pause(15)] Have\n\
you figured it out?[DialogOptions(1)]\
Yes[end]\
No[end]\
[DialogResponse(0)][JumpLink('c6_Box')]Nice,[Pause(15)] let's tear this\n\
place down.[AbtnNextBox()][ResetKeyboard()][StartKeyboard(0)][AutoNextBox()]\
[Jump('Check_password_c6')]\
[GenericText()]Come back once you have figured it out.[AbtnNextBox()][Jump('c6_End')]"]

Dorrie_c6_1 = [
	"[JumpLink('c6_Settings')][JumpLink('c6_once')][JumpLink('c6_Box')]\
	That scuttle guy was a huge pain.[Pause(40)] He went through\n\
	all this trouble and didn't even make anything himself.[Pause(40)]\n\
	If you ask me,[Pause(15)] this is classic him.[Pause(40)]\n\
	I really hope you destroy him completely.[AbtnNextBox()][JumpLink('c6_Box')]\
	To really stick it to him,[Pause(15)] you have to destroy\n\
	it all.[Pause(40)] Destroy everything he's worked\n\
	on,[Pause(15)] bring it all to dust.[AbtnNextBox()][JumpLink('c6_Box')]\
	Once you are ready smash this place,[Pause(15)] come speak\n\
	to me again.\
	[AbtnNextBox()][Jump('c6_End')]"]

c6_Hint1 = [
	"[JumpLink('c6_HINT_Settings')][JumpLink('c6_Box')]\
	Reptilia Squamata Serpentes Colubroides\n\
	Viperidae Crotalinae Crotalus.\
	[AbtnNextBox()][Jump('c6_End')]"]

c6_Hint2 = [
	"[JumpLink('c6_HINT_Settings')][JumpLink('c6_Box')]\
	A losing roll, never bet against the devil.\
	[AbtnNextBox()][Jump('c6_End')]"]

c6_Hint3 = [
	"[JumpLink('c6_HINT_Settings')][JumpLink('c6_Box')]\
	TWO WORDS TWO DICE NO DEUCE\
	[AbtnNextBox()][Jump('c6_End')]"]