#OW dorrie
OW_settings = ["[SetSpd(1)][FFSpd(-1)][EnBlip()][Pop()]"]
OW_Box = ["[ShadedBGBox(0x18,0x120,0x08,0x50,0x20,0x20,0x20,0x80)][Pop()]"]

OW_dorrie1 = ["[JumpLink('OW_settings')][JumpLink('OW_Box')]\
Glad you made it out all right.[Pause(14)] It's practically\n\
war out there,[Pause(10)] but we can't use that name for\n\
copyright reasons.[AbtnNextBox()][JumpLink('OW_Box')]\
Well as you have seen,[Pause(10)] the world of star revenge\n\
has been broken into fragments.[Pause(14)] You see the\n\
natural order was disturbed from the outside.[Pause(14)]\n\
The world Brodute ruled over has been upsurped\n\
by some unknown foreign bug like entity.[AbtnNextBox()][JumpLink('OW_Box')]\
Luckily as your friendly neighborhood dorrie,[Pause(10)]\n\
I can navigate the clusters to help guide you\n\
back to your rightful place,[Pause(14)] SR 5.5 the best SR.[Pause(14)]\n\
There's 3 stars to collect,[Pause(10)] and in order to get\n\
them you have to appease the scuttling overlord.[AbtnNextBox()][JumpLink('OW_Box')]\
His guidance is as follows,[Pause(20)]\n\
[LQ]Answer my questions,[Pause(20)]\n\
songs of mystery.[Pause(20)]\n\
Or you'll be dead[Pause(20)]\n\
before you can count to three![RQ].[AbtnNextBox()][JumpLink('OW_Box')]\
Just jump into any pipe to start your timely\n\
death,[Pause(10)] but only after a message from our \n\
sponsor.[AbtnNextBox()][JumpLink('OW_Box')]\
[LQ]Advanced Text Engine now available in native\n\
C code, download today![Pause(14)] Also download RM2C, the\n\
perfect tool to convert any binary hack to\n\
decomp automagically![RQ][AbtnNextBox()][JumpLink('OW_Box')]\
If you need any hints about the levels feel\n\
free to ask me anytime.[AbtnNextBox()]\
[MarioAction('ACT_IDLE')][AbtnEndStr()]"]

#shoutout board
Shoutouts = ["[JumpLink('OW_settings')][TransAbs(32,96)][ShadedBGBox(0x18,0x120,48,112,0x20,0x20,0x20,0x80)]\
List of absolute legends - paginated for\n\
leisurely reading.[AbtnNextBox()][SetRtrn(0)]\
[SetSpd(-4)][NoFFSpd()][TransAbs(32,140)]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)][DialogOptions(6)]\
TomatoBird8[end]\
Aglab2[end]\
LinCrash[end]\
DarGos[end]\
SimpleFlips[end]\
CSZ[end]\
Pg 2[end]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
[TransAbs(32,127)]\
[DialogResponse(0)][JumpLink('Tomatobird8')]\
[DialogResponse(1)][JumpLink('Aglab2')]\
[DialogResponse(2)][JumpLink('LinCrash')]\
[DialogResponse(3)][JumpLink('DarGos')]\
[DialogResponse(4)][JumpLink('SimpleFlips')]\
[DialogResponse(5)][JumpLink('CSZ')]\
[DialogResponse(6)]\
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

SimpleFlips = ["\
legend status - did the cool LI jump\n\
dorrie status - unknown\n\
feats. Is probably the one reading this.\n\
Spends hours on pointless things for swag points.\n\
Has played this hack (probably)\n\
You're probably already subscribed to his YT.[AbtnNextBox()][Pop()]"]

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
in nintendos legal department or just someone\n\
pretending to he nintendo.\n\
made every single rom hack of all time\n\
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
upgrade patch (I like it though)[AbtnNextBox()][JumpLink('OW_Box')]\
Aloxado - Maintains decomp repo with the\n\
most platform compatability, likes isabelle.\n\
Drunkrazy - Cool speedrunning man who\n\
probably wants a shoutout.[AbtnNextBox()][JumpLink('OW_Box')]\
Mr. Comit - epic sex joke maker. creator of\n\
ligma\n\
prakxo - wanted a shoutout\n\
Shin3 - haha kbr[AbtnNextBox()][JumpLink('OW_Box')]\
mint - hey put me in the scree shot too\n\
A Random Player - ASA is hot garbage\n\
KingToad64 - PRChase\n\
someone2639 - another rpic kirby hacker.\n\
creator of nothing64 2. follow him on soundcloud.[AbtnNextBox()][Pop()]"]

#how its made
HowMade = ["[SetSpd(1)][FFSpd(-1)][TransAbs(32,127)]\
[ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
[F*][F*]How its made, romhacking edition[F*][F*][Pause(24)]\n\
First the hacker starts out with nothing but\n\
a blank copy of sm64.[AbtnNextBox()][TransAbs(32,127)][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
The hacker places his or\n\
her copy of the nintendo classic into their\n\
tool of choice to start the hack setup process.[Pause(14)]\n\
This particular hack was made using sm64\n\
decomp.[Pause(14)] After the setup is done, our hacker\n\
proceeded to steal all the level models from\n\
brodute.[AbtnNextBox()][TransAbs(32,127)][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
How is this possible you ask?[Pause(24)] Well a combination\n\
of several new tools were used to perfectly\n\
recreate all aspects of old levels in a way\n\
that was easily editable for decomp.[AbtnNextBox()][TransAbs(32,127)][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
First a port of the source game is made for\n\
decomp using RM2C.[Pause(20)] Details can be found at your\n\
local rom hacking forum.[Pause(20)] Once this process is\n\
complete our hacker now has access to all\n\
models,[Pause(12)] textures,[Pause(12)] music[Pause(12)] and object placement\n\
in C format allowing easy access,[Pause(14)] but that is\n\
just the beginning.[AbtnNextBox()][TransAbs(32,127)][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
Afterwards,[Pause(12)] using a special blender plugin,[Pause(12)]\n\
these levels can be imported into blender\n\
with near perfect recreation of\n\
the C specification in a fast64 compliant\n\
form.[Pause(14)] This allows our hacker to quickly and\n\
easily edit whats needed and export it back\n\
right away.[AbtnNextBox()][TransAbs(32,127)][ShadedBGBox(0x18,0x120,0x20,144,0x20,0x20,0x20,0x80)]\
Now you can combine and merge pieces from\n\
any older hack with complete ease and with\n\
almost no manual fixes required.[AbtnNextBox()][MarioAction('ACT_IDLE')][TimeEndStr(0)]"]

#second dorrie talk
OW_dorrie2 = ["Ok champ, what do you need help with?\n\
tell me about this world again\n\
how do I get stars\n\
is this a star adventure or star revenge game\n\
tell me something interesting"]

#how do I get stars
StarTut=["Each level will start with a musical quiz.\n\
I will play a song from a Star Revenge level\n\
and if you can guess the right one you pass.\n\
If you get it wrong youll be damaged severely.\n\
After each question you'll have to traverse\n\
the level in question to go to the next question.\n\
Make it to the final level and you get a star!"]

#SR or SA
SR_or_SA=["Yes.\n\
Well you see its quite complicated. To explain\n\
the machinations behind the grand design of\n\
this game we first have to go over years of\n\
dorrie lore.\n\
In the beginning, there was a young boy and girl\n\
dorrie who lived in paradise. Well things\n\
some things happened and now we have to pay\n\
taxes. This made dorries very bitter. We even\n\
opened several business ventures such as\n\
a construction company, go kart rentals and\n\
a treasure hunting guild. Eventually we had\n\
enough, and we decided on world domination.\n\
Well and you know the rest hahaha.\n\
Anyway long story short you cant catch an\n\
apple from a tree you haven't planted yet.\n\
I hope that answers your question."]

#tell me something interesting
interesting1=["You can play almost all the hack with levels\n\
in this hack on PC in 60 fps. Afterall they\n\
were all ported to decomp to make this\n\
hack possible."]

#interesting 2
interesting2=["There are challenge modes you can apply via\n\
the pause menu! Press R and scroll down to\n\
challenges and you have a list of 13 to\n\
choose from. Unfortunately the move badges\n\
option does not work at this time."]

#interesting 3
interesting3=["The crawling overlord is hosting another\n\
hacking comp in a month. If youre a hacker\n\
make sure to check it out."]