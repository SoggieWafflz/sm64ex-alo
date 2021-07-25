#include "src/game/text_engine.h"
void spawn_te_init(void){
	SetupTextEngine(32,60,TE_Strings[o->oBehParams2ndByte],0);
}
u32 gStarSpawn=0;
void te_spawn_star(void){
	struct Object *sp30;
	if(o->oAction){
		o->oPosY+=10.0f;
	}
	if(gStarSpawn){
		gStarSpawn=0;
		spawn_star(sp30,o->oPosX, o->oPosY, o->oPosZ);
		sp30->oBehParams = 0x05000000;
		o->oAction = 1;
	}
}
void te_destroy_level(void){
	if((save_file_get_star_flags(gCurrSaveFileNum - 1,(o->oBehParams&0xFF) - 1)&0x20)>0){
		o->activeFlags=0;
	}
}