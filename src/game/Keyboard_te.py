#This keyboard is required for Text Engine usage. Do not delete
TE_KEYBOARD_lower = ["[ShadedBGBox(0x20,0x120,0x18,0x78,0x20,0x20,0x20,0x80)][ShadedBGBox(0x32,0x110,0x98,0xb8,0x20,0x20,0x20,0x80)][ScaleText(2,1.2)][this is a test comment][SetOrigin(32,96)] 0 1 2 3 4 5 6 7 8 9[ScaleText(2.2,1.2)]\n",
#You can also put comments in with a '#'. 
#Just make sure to end the string before hand.
"  q w e r t y u i o p\n\
 a s d f g h j k l :\n\
  z x c v b n m","[ScaleText(2.0,1.2)] & ? !\n\
  ^  SPACE   END  < [F*][TransAbs(0x38,0x9c)]","[StartKeyboard(0)][Pad()][Pad()][StartKeyboard(0)]"]
TE_KEYBOARD_upper = ["[ShadedBGBox(0x20,0x120,0x18,0x78,0x20,0x20,0x20,0x80)]","[ShadedBGBox(0x32,0x110,0x98,0xb8,0x20,0x20,0x20,0x80)][ScaleText(2.0,1.2)]","[SetOrigin(32,96)] 0 1 2 3 4 5 6 7 8 9\n\
  Q W E R T Y U I O P\n\
 A S D F G H J K L :\n\
  Z X C V B N M & ? !\n\
  ^  SPACE   END  < [F*][TransAbs(0x38,0x9c)]","[StartKeyboard(0)]","[Pad()][Pad()][StartKeyboard(0)]"]

te_test = ["Test Function[CallLoop(0,'is_anim_at_end',2,('&gMarioStates[0]','3'))][DisplayMatchReturn(0,0)]123[DialogResponseGenericText()][end]"]
#intro monologue - dorrie
Intro_Text = ["[SetSpd(1)][TransAbs(32,80)]\
[ShadedBGBox(0x18,0x120,0x18,96,0x20,0x20,0x20,0x80)]\
Hey friend,[Pause(26)] welcome to star revenge.[Pause(90)]\n\
Old school players will remember this one,[Pause(26)]\n\
it's the original Star Revenge![Pause(120)]\n\
Well,[Pause(40)] not exactly.[Pause(120)] You may have noticed something\n\
funny by this point...[Pause(240)][AutoNextBox()][SetSpd(1)][FFSpd(-1)][TransAbs(32,80)]\
[ShadedBGBox(0x18,0x120,0x18,96,0x20,0x20,0x20,0x80)]\
Thats right,[Pause(26)] this world is actually made of\n\
fragments from star revenge.[Pause(90)] A lot has\n\
happened in the world since Brodute's last\n\
release.[Pause(490)] In fact we skipped 3 whole\n\
Star Revenges before making it here.[Pause(240)][AutoNextBox()]\
[SetSpd(1)][FFSpd(-1)][TransAbs(32,80)]\
[ShadedBGBox(0x18,0x120,0x18,96,0x20,0x20,0x20,0x80)]\
I have so much to share,[Pause(80)] but you'll have to\n\
meet me in person with a power star before\n\
I get to all that.[TimeEndStr(240)]"]