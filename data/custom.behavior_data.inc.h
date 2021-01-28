//Include this file at the bottom of behavior_data.c

const BehaviorScript bhvFlipBlock_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
SET_INT(oAction, 0),
SET_FLOAT(oCollisionDistance, 500),
LOAD_COLLISION_DATA(col_FlipBlock_MOP_0x7d1a98),
BEGIN_LOOP(),
CALL_NATIVE(bhv_flip_block_loop),
SET_INT(oInteractStatus, 0),
END_LOOP(),
};


const BehaviorScript bhvNoteblock_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
SET_HOME(),
LOAD_COLLISION_DATA(col_Noteblock_MOP_0xaa6444),
SCALE(0,64),
BEGIN_LOOP(),
CALL_NATIVE(bhv_noteblock_loop),
CALL_NATIVE(load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvSandblock_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
LOAD_COLLISION_DATA(col_Sandblock_MOP_0xaa6444),
BEGIN_LOOP(),
CALL_NATIVE(bhv_sandblock_loop),
END_LOOP(),
};

const BehaviorScript bhvSpring_MOP[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_HITBOX(160,160),
SET_INTERACT_TYPE(INTERACT_COIN),
SET_INT(oIntangibleTimer, 0),
BEGIN_LOOP(),
CALL_NATIVE(bhv_Spring_loop),
END_LOOP(),
};

const BehaviorScript bhvJukebox_MOP[] = {
BEGIN(OBJ_LIST_UNIMPORTANT),
DEACTIVATE(),
};

const BehaviorScript bhvShell_1_MOP[] = {
BEGIN(OBJ_LIST_DESTRUCTIVE),
SCALE(0,400),
GOTO(bhvBreakableBoxSmall+1),
};
const BehaviorScript bhvShell_2_MOP[] = {
BEGIN(OBJ_LIST_DESTRUCTIVE),
SCALE(0,400),
GOTO(bhvBreakableBoxSmall+1),
};

const BehaviorScript bhvShrink_Platform_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
LOAD_COLLISION_DATA(col_Shrink_Platform_MOP_0xad3720),
BEGIN_LOOP(),
CALL_NATIVE(bhv_shrinkplatform_loop),
CALL_NATIVE(load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvSwitchblock_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
LOAD_COLLISION_DATA(col_Switchblock_MOP_0x7d3058),
BEGIN_LOOP(),
CALL_NATIVE(bhv_Switchblock_loop),
END_LOOP(),
};

const BehaviorScript bhvSwitchblock_Switch_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
LOAD_COLLISION_DATA(col_Switchblock_Switch_MOP_0x7d7348),
BEGIN_LOOP(),
CALL_NATIVE(bhv_Switchblock_Switch_loop),
END_LOOP(),
};


const BehaviorScript bhvEmitter_MOP[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO),
SET_FLOAT(oDrawingDistance,5120),
BEGIN_LOOP(),
CALL_NATIVE(bhv_emitter_loop),
END_LOOP(),
};

const BehaviorScript bhvFlipswitch_Panel_StarSpawn_MOP[] = {
BEGIN(OBJ_LIST_GENACTOR),
CALL_NATIVE(bhv_flipswitch_panel_starspawn_init),
BEGIN_LOOP(),
CALL_NATIVE(bhv_flipswitch_panel_starspawn_loop),
END_LOOP(),
};

const BehaviorScript bhvFlipswitch_Panel_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
LOAD_COLLISION_DATA(col_Flipswitch_Panel_MOP_0x7daf78),
SET_FLOAT(oCollisionDistance,1024),
CALL_NATIVE(bhv_flipswitch_panel_init),
BEGIN_LOOP(),
CALL_NATIVE(bhv_flipswitch_panel_loop),
CALL_NATIVE(load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvCheckpoint_Flag_MOP[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO),
SET_INT(oInteractType,INTERACT_POLE),
SET_HITBOX(64,650),
CALL_NATIVE(bhv_checkpoint_flag_init),
BEGIN_LOOP(),
CALL_NATIVE(bhv_checkpoint_flag_loop),
SET_INT(oIntangibleTimer, 0),
END_LOOP(),
};

const BehaviorScript bhvFlipswap_Platform_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
SET_INT(oFaceAngleRoll,0),
LOAD_COLLISION_DATA(col_Flipswap_Platform_MOP_0x7d9d88),
BEGIN_LOOP(),
CALL_NATIVE(bhv_flipswap_loop),
CALL_NATIVE(load_object_collision_model),
END_LOOP(),
};

//bhvYellowCoin gets converted
const BehaviorScript bhvPSwitch_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(purple_switch_seg8_collision_0800C7A8),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_pswitch_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

//fuck blarrg
const BehaviorScript bhvBeta_Blarrg_MOP[] = {
BEGIN(OBJ_LIST_UNIMPORTANT),
DEACTIVATE(),
};

// not done
//model edits
//flip swap missing border
//shrink plat missing border
//flip block looks weird

const BehaviorScript bhvGreen_Switchboard_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(purple_switch_seg8_collision_0800C7A8),
    BEGIN_LOOP(),
        // CALL_NATIVE(bhv_purple_switch_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

const BehaviorScript bhvMoving_Rotating_Block_MOP[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
LOAD_COLLISION_DATA(col_Moving_Rotating_Block_MOP_0x7e3ea0),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
// CALL_NATIVE(bhv_purple_switch_loop),
CALL_NATIVE(load_object_collision_model),
END_LOOP(),
};
