#include "src/game/text_engine.h"
void spawn_te_init(void){
	SetupTextEngine(32,60,TE_Strings[o->oBehParams2ndByte],0);
}
u32 gStarSpawn=0;
u32 gStarSpawn1=0;
u32 gStarSpawn2=0;
void te_spawn_star(void){
	if(o->oAction){
		o->oPosY+=10.0f;
	}
	if(gStarSpawn){
		gStarSpawn=0;
		f32 facingZ = coss(o->oFaceAngleYaw)*700.0f;
		f32 facingX = sins(o->oFaceAngleYaw)*700.0f;
		cur_obj_spawn_star_at_y_offset(o->oPosX+facingX, o->oPosY+300.0f, o->oPosZ+facingZ, 0.0f);
		o->oAction = 1;
	}
}
void te_spawn_star2(void){
	if(o->oAction){
		o->oPosY+=10.0f;
	}
	if(gStarSpawn1){
		gStarSpawn1=0;
		f32 facingZ = coss(o->oFaceAngleYaw)*200.0f;
		f32 facingX = sins(o->oFaceAngleYaw)*200.0f;
		cur_obj_spawn_star_at_y_offset(o->oPosX+facingX, o->oPosY+300.0f, o->oPosZ+facingZ, 0.0f);
		o->oBehParams=0x00330001;
	}
	if(gStarSpawn2){
		gStarSpawn2=0;
		f32 facingZ = coss(o->oFaceAngleYaw)*700.0f;
		f32 facingX = sins(o->oFaceAngleYaw)*700.0f;
		cur_obj_spawn_star_at_y_offset(o->oPosX+facingX, o->oPosY+300.0f, o->oPosZ+facingZ, 0.0f);
		o->oAction = 1;
	}
}
void te_destroy_level(void){
	if((save_file_get_star_flags(gCurrSaveFileNum - 1,(o->oBehParams&0xFF) - 1)&0x20)>0){
		o->activeFlags=0;
	}
}