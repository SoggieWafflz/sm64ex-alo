#OW dorrie
OW_settings = ["[SetSpd(1)][FFSpd(-1)][EnBlip()][EnShadow()][Pop()]"]
OW_Box2 = ["[ShadedBGBox(0x16,0x120,0x14,164,0x20,0x20,0x20,0x80)][Pop()]"]
OW_Box1 = ["[ShadedBGBox(0x16,0x120,0x14,0x74,0x20,0x20,0x20,0x80)][Pop()]"]
OW_Box = ["[ShadedBGBox(0x18,0x120,0x08,0x50,0x20,0x20,0x20,0x80)][Pop()]"]

OW_scut_intro = ["[JumpLink('OW_settings')][SetOrigin(26,96)][ShadedBGBox(0x14,0x128,0x14,0x74,0x20,0x20,0x20,0x80)]\
Welcome to my world.[Pause(30)] Or should I say worlds hahaha.\n\
[Pause(30)]I've put together a special play palace just for you![Pause(30)]\n\
The player![Pause(30)] I'm all about the game.[Pause(20)] I study it,[Pause(20)]\n\
I live it.[Pause(30)] Before you lies my greatest creations.[Pause(30)]\n\
You will find greater realities than you've ever\n\
imagined before,[Pause(24)] just step inside and begin.[AbtnNextBox()]\
[MarioAction('ACT_IDLE')][TimeEndStr(0)]"]

OW_once = ["[CallOnce(0,'save_file_get_flag',1,[(1 << 9)])][CallOnce(1,'save_file_set_flags',1,[(1 << 9)])][MatchRtrn(0,0)][Pop()][GenericText()][AutoNextBox()][Jump('OW_dorrie2')]"]

BroDuteMsg = [
"[JumpLink('OW_settings')][SetOrigin(30,96)][JumpLink('OW_Box1')]\
The following is a message from BroDute.[AbtnNextBox()][JumpLink('OW_Box1')]\
STOP POSTING ABOUT EXTREME HACKS![Pause(50)]\n\
I'M TIRED OF SEEING IT![Pause(50)]\n\
My friends on Twitch streaming extreme hacks,[Pause(15)] on\n\
Discord its fucking extreme red coin stars.[Pause(30)]\n\
I was in a server,[Pause(15)] right,[Pause(15)] and ALL the channels are\n\
just #Kaizo stuff.[AbtnNextBox()][JumpLink('OW_Box1')]\
I showed my hack to my girlfriend,[Pause(15)] and the level I\n\
added sand and I said, [Pause(40)][PlayMusic(0xC)][LQ]Hey babe,[Pause(30)] when the\n\
level quicksand spam![Pause(30)] HAHA![RQ][Pause(30)]\
[AbtnNextBox()][JumpLink('OW_Box1')]\
I fucking looked at a star and I said,[Pause(30)]\n\
[LQ]That's a bit spammy![RQ][Pause(30)]\n\
I looked at one of my other hacks,[Pause(15)] I thought\n\
of Night of Doom and I go,\n\
[Pause(30)][LQ]STAR REVENGE?[Pause(30)] MORE LIKE NIGHT OF REVENGE![RQ][Pause(30)]\n\
AAAAAAAAAAAAAA[AbtnNextBox()][MarioAction('ACT_IDLE')][TimeEndStr(0)]"
]

Mission = [
"[JumpLink('OW_settings')][SetOrigin(30,96)][JumpLink('OW_Box1')]\
You're the first one to make it this far.[Pause(30)]\n\
What was once just a fun hack turned\n\
into this huge disaster.[Pause(30)] I was just trying\n\
to make romhacks.[Pause(30)] I don't know how it got this\n\
complicated.[AbtnNextBox()][JumpLink('OW_Box1')]\
What you saw before was the scraps of my\n\
my work.[Pause(30)] Now what lies ahead is a\n\
a mess of mangled together hacks.[Pause(30)]\n\
I believe you can be the one to fix all of this.[Pause(30)]\n\
Please save the dorrie's, and then enter the\n\
pipe behind me.[AbtnNextBox()][JumpLink('OW_Box1')]\
Ahead lies the origin of this disaster.[Pause(30)] You have\n\
to destroy the grand cyrstal to make everything\n\
right again.[Pause(30)]\n\
After that I'll handle the rest.[AbtnNextBox()][MarioAction('ACT_IDLE')][TimeEndStr(0)]"
]

OW_dorrie2 = [
	"[JumpLink('OW_settings')][SetRtrn(0)][SetOrigin(30,148)][JumpLink('OW_Box2')]\
	This is a confusing world.[Pause(30)] I'll try to tell you\nas much as I can.[Pause(30)]\
	[SetSpd(0)][FFSpd(0)][DialogOptions(7)]\
	How do I traverse these levels?[end]\
	How did this place come to be?[end]\
	Who is the bug like overlord?[end]\
	Tell me something interesting[end]\
	What happened to BroDute?[end]\
	Why are you here guiding me?[end]\
	How can I fix this place?[end]\
	I've learned enough[end]\
	[JumpLink('OW_settings')][JumpLink('OW_Box1')][SetOrigin(30,96)]\
	[DialogResponse(0)][JumpLink('StarTut')]\
	[DialogResponse(1)][JumpLink('HowMade')]\
	[DialogResponse(2)][JumpLink('SR_or_SA')]\
	[DialogResponse(3)][JumpLink('interesting1')]\
	[DialogResponse(4)][JumpLink('Where_Brodute')]\
	[DialogResponse(5)][JumpLink('Why_Guide')]\
	[DialogResponse(6)][JumpLink('How_Fix')]\
	[DialogResponse(7)][MarioAction('ACT_IDLE')][TimeEndStr(0)]\
	[GenericText()][SetSpd(0)][FFSpd(0)][SetOrigin(30,148)][Pause(2)][GotoRtrn(0)]"]

#How did this place come to be?
HowMade = [
	"Our overlord conquered these worlds with\n\
	a new power.[Pause(30)]\n\
	I don't know how it works,[Pause(15)] but he bent reality to\n\
	his will.[AbtnNextBox()][JumpLink('OW_Box1')]\
	As time went on,[Pause(15)] the worlds got\n\
	more distorted and tainted.[Pause(30)]\n\
	Many of them are barely recognizable,[Pause(15)] but to\n\
	him its some new form of art or something.[AbtnNextBox()][Pop()]"]

#How do I traverse these levels?
StarTut=[
	"Each level has a quiz of some sort.[Pause(30)]\n\
	The overlord wants to test your knowledge and\n\
	skills.[Pause(30)] I guess he is searching for someone\n\
	worthy.[AbtnNextBox()][JumpLink('OW_Box1')]\
	The quizzes take different forms,[Pause(15)] but each task\n\
	will have you traverse the level,[Pause(15)] and\n\
	answer questions.[Pause(30)] Only by doing both\n\
	will you be able to gather stars.[AbtnNextBox()][Pop()]"]

#Who is the bug like overlord?
SR_or_SA=[
	"He sees himself as a visionary.[Pause(30)]\n\
	A rom hacker by trade, he sought to conquer\n\
	the hacking world.[Pause(30)] Though it seems he wasn't\n\
	satisfied with his recognition.[AbtnNextBox()][JumpLink('OW_Box1')]\
	He gained a new power,[Pause(15)] and used it to take\n\
	everything by force in order to create the\n\
	ultimate romhacking world.[Pause(30)] He calls it Star\n\
	Revenge Adventure,[Pause(15)] whatever that means.[AbtnNextBox()][JumpLink('OW_Box1')]\
	I haven't heard or seen of him in a while.[Pause(30)]\n\
	Though it is without a doubt,[Pause(15)] that he makes all\n\
	the rules in this world.\
	[AbtnNextBox()][Pop()]"]

#tell me something interesting
interesting2=[
	"There are challenge modes you can apply via\n\
	the pause menu![Pause(30)] Press R and scroll down to\n\
	challenges and you have a list of 13 to\n\
	choose from.[Pause(30)] Unfortunately the move badges\n\
	option does not work at this time.[AbtnNextBox()][Pop()]"]
interesting1=[
	"You can swap between the new puppy, and classic\n\
	camera using the pause menu.[Pause(30)] Puppycam\n\
	collides with walls,[Pause(15)] allowing you to keep mario\n\
	in view in tight spaces,[Pause(15)] as well as shift the pitch\n\
	of the camera.[Pause(30)] You can press L to swap between\n\
	analog and discrete pitch adjustments.[AbtnNextBox()][JumpLink('OW_Box1')]\
	The classic camera also has upgrades.[Pause(30)]\n\
	You can zoom out farther than before,[Pause(15)] and use\n\
	the dpad to adjust your view.[AbtnNextBox()][Pop()]"]
interesting3=[
	"The crawling overlord is hosting another\n\
	hacking comp right now.[Pause(30)] If youre a hacker\n\
	make sure to check it out.[AbtnNextBox()][Pop()]"]

#What happened to BroDute?
Where_Brodute = [
	"A tragic tale.[Pause(30)]\n\
	While he was distracted,[Pause(15)] he was abducted away\n\
	never to be seen again.[Pause(30)] I imagine he is somewhere\n\
	in this world,[Pause(15)] lost and complaining about\n\
	speedrunners kaizo players all alone.\n[Pause(30)]What an awful fate.[AbtnNextBox()][Pop()]"]

#Why are you here guiding me?
Why_Guide = [
	"I used to work for him.[Pause(30)]\n\
	A mere errand dorrie,[Pause(15)] I performed menial tasks\n\
	for the overlord.[Pause(30)] He was kind to me, but I\n\
	didn't seem to be spared from our fate.[AbtnNextBox()][JumpLink('OW_Box1')]\
	I hope to help those who fall into our world.[Pause(30)]\n\
	I have a dream that maybe one day,[Pause(15)] someone will\n\
	be able to free us all.\
	[AbtnNextBox()][Pop()]"]

#How can I fix this place?
How_Fix = [
	"Only the overlord knows that.[Pause(30)]\n\
	What I do know is he is waiting.[Pause(30)] Waiting for\n\
	someone to complete his tasks.[Pause(30)] I am but a\n\
	messenger.[Pause(30)] Even the help I give has been\nprepared by him.[AbtnNextBox()][Pop()]"]

OW_dorrie1 = [
	"[JumpLink('OW_once')]\
	[JumpLink('OW_settings')][SetOrigin(30,96)][JumpLink('OW_Box1')]\
	Glad you made it out all right.[Pause(30)] It's practically\n\
	war out there,[Pause(18)] but we can't use that name for\n\
	copyright reasons.[AbtnNextBox()][JumpLink('OW_Box1')]\
	Well as you have seen,[Pause(14)] the world of star revenge\n\
	has been broken into fragments.[Pause(30)] You see the\n\
	natural order was disturbed from the outside.[Pause(30)]\n\
	The world Brodute ruled over has been upsurped\n\
	by a foreign bug like entity.[AbtnNextBox()][JumpLink('OW_Box1')]\
	Luckily as your friendly neighborhood dorrie,[Pause(14)]\n\
	I can navigate the clusters to help guide you\n\
	back to your rightful place,[Pause(20)] SR 5.5 the best SR.[Pause(30)]\n\
	There's 11 stars to collect,[Pause(14)] and in order to get\n\
	them you have to appease the scuttling overlord.[AbtnNextBox()][JumpLink('OW_Box1')]\
	His guidance is as follows,[Pause(20)]\n\
	[LQ]Answer my questions,[Pause(20)]\n\
	songs of mystery.[Pause(20)]\n\
	Or you'll be dead[Pause(20)]\n\
	before you can count to three![RQ].[AbtnNextBox()][JumpLink('OW_Box1')]\
	Just jump into any pipe to start your timely\n\
	death,[Pause(14)] but only after a message from our \n\
	sponsor.[AbtnNextBox()][JumpLink('OW_Box1')]\
	[LQ]Advanced Text Engine now available in native\n\
	C code, download today![Pause(30)] Also download RM2C, the\n\
	perfect tool to convert any binary hack to\n\
	decomp automagically![RQ][AbtnNextBox()][JumpLink('OW_Box1')]\
	If you need any hints about the levels feel\n\
	free to ask me anytime.[AbtnNextBox()]\
	[MarioAction('ACT_IDLE')][TimeEndStr(0)]"]

#shoutout board
Shoutouts = ["[JumpLink('OW_settings')][TransAbs(32,96)][ShadedBGBox(0x18,0x120,48,112,0x20,0x20,0x20,0x80)]\
List of absolute legends - paginated for\n\
leisurely reading.[AbtnNextBox()][SetRtrn(0)]\
[SetSpd(-4)][NoFFSpd()][TransAbs(32,140)]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)][DialogOptions(7)]\
TomatoBird8[end]\
Aglab2[end]\
LinCrash[end]\
DarGos[end]\
Mushie64[end]\
CSZ[end]\
InfiniteVoid[end]\
Pg 2[end]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
[TransAbs(32,127)]\
[DialogResponse(0)][JumpLink('Tomatobird8')]\
[DialogResponse(1)][JumpLink('Aglab2')]\
[DialogResponse(2)][JumpLink('LinCrash')]\
[DialogResponse(3)][JumpLink('DarGos')]\
[DialogResponse(4)][JumpLink('Mushie')]\
[DialogResponse(5)][JumpLink('CSZ')]\
[DialogResponse(6)][JumpLink('Infvoid')]\
[DialogResponse(7)]\
[StartDialogBracket(0)][AutoNextBox()][SetRtrn(2)]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
[TransAbs(32,140)]\
[DialogOptions(7)]\
Usernamesarespiders[end]\
PyroJay[end]\
Brodute[end]\
Kaze[end]\
Scuttlebug_Raiser[end]\
Short_Mentions[end]\
Pg 1[end]\
Done learning about legends[end][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
[TransAbs(32,127)]\
[DialogResponse(0)][JumpLink('Usernamesarespiders')]\
[DialogResponse(1)][JumpLink('PyroJay')]\
[DialogResponse(2)][JumpLink('Brodute')]\
[DialogResponse(3)][JumpLink('Kaze')]\
[DialogResponse(4)][JumpLink('Scuttlebug_Raiser')]\
[DialogResponse(5)][JumpLink('Short_Mentions')]\
[DialogResponse(6)][GotoRtrn(0)]\
[DialogResponse(7)][AutoNextBox()][MarioAction('ACT_IDLE')][TimeEndStr(0)]\
[GenericText()][GotoRtrn(2)]\
[EndDialogBracket(0)][GenericText()][GotoRtrn(0)]"]

Infvoid = ["\
legend status - void\n\
dorrie status - void\n\
feats. Speedruns almost all Star Revenge Games\n\
God of SR2.5\n\
Leader of the Harm Police\n\
Hosts SRM\n\
Subscribe today![AbtnNextBox()][Pop()]"]

Tomatobird8 = ["\
legend status - absolute\n\
dorrie status - lad\n\
feats. Kept an almost perfect database of all\n\
hacks when sm64hacks fell and maintains it\n\
to this day.\n\
Held star road 130 and 80 star records.\n\
Makes lit hacks\n\
Subscribe today![AbtnNextBox()][Pop()]"]

Aglab2 = ["\
legend status - yes\n\
dorrie status - yes\n\
feats. Makes the best hacks. Makes custom code\n\
that massively improves hacks for all.\n\
Subscibble today![AbtnNextBox()][Pop()]"]

LinCrash = ["\
legend status - legend\n\
dorrie status - friend of dorrie's\n\
feats. played and beat most extreme hacks.\n\
extensive knowledge on rom hacks. A true OG.\n\
Also makes lit hacks.\n\
Subscribe today![AbtnNextBox()][Pop()]"]

DarGos = ["\
legend status - you already know\n\
dorrie status - is dorrie\n\
feats. epic TASer, epic hacker, epic youtuber,\n\
epic all around.\n\
subscribe today![AbtnNextBox()][Pop()]"]

Mushie = ["\
legend status - made birthday 64\n\
dorrie status - unknown\n\
feats. Is probably the one reading this.\n\
Only person in the universe who still runs LI.\n\
Do not subscribe under any circumstance.[AbtnNextBox()][Pop()]"]

CSZ = ["\
legend status - unit\n\
dorrie status - dorrie\n\
feats. hangs with the hottest dudes, drives the\n\
flyist cars and drinks the coldest water.\n\
lit TASer and lad.\n\
subscribe[AbtnNextBox()][Pop()]"]

Usernamesarespiders = ["\
legend status - spider\n\
dorrie status - spider\n\
feats. is a spider. makes good hacks, especially\n\
for a spider.\n\
subscribe[AbtnNextBox()][Pop()]"]

PyroJay = ["\
legend status - helped me on this hack\n\
dorrie status - dorrie appreciator\n\
feats. helped me on this hack.\n\
subscribe[AbtnNextBox()][Pop()]"]

Brodute = ["\
legend status - creator of star revenge\n\
dorrie status - friend of all dorries\n\
feats. wears hawaiin shirts, hates kaizo hacks\n\
and speedrunners just the right amount.\n\
makes fun hacks.\n\
subscribe.[AbtnNextBox()][Pop()]"]

Kaze = ["\
legend status - can lift big weights\n\
dorrie status - enemy of dorries\n\
feats. continually dmca'd by the bored intern\n\
in nintendos legal department.\n\
made every single rom hack of all time.\n\
managed to be the only hacker who has\n\
abused dorrie.[AbtnNextBox()][Pop()]"]

Scuttlebug_Raiser = ["\
legend status - omitted\n\
dorrie status - omitted\n\
feats. Founder of the thriving and completely\n\
alive kirby64 hacking community. Made many\n\
rom hacks of questionable quality (this one\n\
included)\n\
Creator of several sm64 hacking and kirby\n\
hacking tools (download today).[AbtnNextBox()][Pop()]"]

Short_Mentions = ["[AutoNextBox()][JumpLink('OW_Box')]\
Quills - Made an epic first hack ever for my\n\
hacking comp. Also a lad.\n\
Reonu - Another comp participant and cool\n\
hacker.[AbtnNextBox()][JumpLink('OW_Box')]\
AndrewSM64 - Play WSA today\n\
Fazana - Creator of the most controversial\n\
upgrade patch (I like it though)\n\
Aloxado - Maintains decomp repo with the\n\
most platform compatability, likes isabelle.[AbtnNextBox()][JumpLink('OW_Box')]\
Drunkrazy - Cool speedrunning man who\n\
probably wants a shoutout.\n\
Mr. Comit - epic sex joke maker. creator of\n\
ligma[AbtnNextBox()][JumpLink('OW_Box')]\
prakxo - wanted a shoutout\n\
Shin3 - haha kbr\n\
mint - hey put me in the screem shot too[AbtnNextBox()][JumpLink('OW_Box')]\
A Random Player - ASA is hot garbage\n\
KingToad64 - PRChase\n\
someone2639 - another epic kirby hacker.\n\
creator of nothing64 2. follow him on soundcloud.[AbtnNextBox()][Pop()]"]