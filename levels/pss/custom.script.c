#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom53345984_skybox_mio0SegmentRomStart,_SkyboxCustom53345984_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(131,0x04037070),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_GEO(137,0x04036f60),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
// LOAD_MODEL_FROM_GEO(245,0x0404cf00),
// LOAD_MODEL_FROM_GEO(246,0x0404ce00),
// LOAD_MODEL_FROM_GEO(247,0x0404cf80),
// LOAD_MODEL_FROM_GEO(248,0x0404cfc0),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe0eada0),
SET_BACKGROUND_MUSIC(0,58),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-11742,-617,0,0,90,0,0xa0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,381,0,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(122,-9823,4006,0,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-2713,6218,0,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,7026,7389,0,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,12878,7133,0,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,8127,-2517,0,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1495,-4645,0,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6851,-885,0,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(146,-3382,3460,0,0,-90,0,0xa5a0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-4632,4743,0,0,-90,0,0x506e0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-5697,6232,0,0,90,0,0x3c0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-4074,6495,0,0,90,0,0x1e0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(0,-2199,325,0,0,-90,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,9772,3059,0,0,-90,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,10272,5076,0,0,-90,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,8520,5826,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,4085,-3439,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,9000,-6437,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,9651,-6175,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,11502,-5190,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,12752,-5190,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-10222,-5436,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-11221,-4937,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-12239,-4426,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-12741,-2674,0,0,0,0,0x7e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(120,-3853,3199,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-8985,1690,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,3274,3208,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,7408,458,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,3000,-1792,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,4007,-4562,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-9477,-4316,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-846,2438,0,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,2751,-6881,0,0,0,0,0x750000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-3015,6802,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3408,6233,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5027,4373,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7724,3663,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1511,4278,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7854,-2406,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1858,1591,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5497,-67,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2054,-387,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4925,-1725,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,9417,4819,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8894,6971,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7271,-3615,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,11252,-6320,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2395,-6000,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5009,-3528,0,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-10730,-4226,0,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-13239,-4537,0,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3349,-6609,0,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-12103,4381,0,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,12139,-2606,0,0,90,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-623,-6634,0,0,0,0,0x750000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(122,-10379,1862,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,5003,-2603,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,1780,2130,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,10934,-6148,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10088,5628,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-10802,-5661,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-1776,-6414,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-12842,-5086,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,265,1112,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,3375,-4378,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,3724,-6680,0,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(192,-9596,-836,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-8890,-1367,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-9636,1643,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7183,-6591,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2213,-83,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,7736,1023,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2180,-6857,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7736,-6591,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4618,4167,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(212,-1241,-5078,0,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(192,8327,-2846,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(152,9021,3097,0,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(0,8,4,378,0,0,0,110, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,4,0,0,0,111, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,5,18,0,0,0,112, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,5,18,0,0,0,113, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,5,18,0,0,0,114, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,5,18,0,0,0,115, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,5,18,0,0,0,116, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,382,0,0,0,117, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,378,0,0,0,118, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,4,0,0,0,119, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,32,5,11,0,0,0,120, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,1,4,4,0,0,0,121, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,6,1,140,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,141,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
