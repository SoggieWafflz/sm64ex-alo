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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
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
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x2541700),
TERRAIN(col_vcutm_1_0xe1080c0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,2153,1639,5243,0,180,0,0xf0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,-3898,5019,3738,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,5515,5182,-7256,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,13012,3480,9522,0,0,0,0xb0007, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,15797,4911,16590,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6508,7320,-16984,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-19787,9229,3157,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(137,6867,3696,-13459,0,45,0,0x30005, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2143,1773,3642,0,0,0,0x7000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(124,-12340,4669,-17947,0,0,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(195,-20446,4069,-1535,0,0,0,0x20000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(188,-763,3289,2618,0,0,0,0x120000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,-762,4079,2927,0,0,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-763,4079,4551,0,180,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6081,7229,3743,0,90,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(85,-3688,5704,3739,0,90,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,8148,-213,8211,0,0,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-3520,4683,3740,0,0,0,0x280000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,15799,4578,15993,0,0,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,13310,-2816,8929,0,0,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,7233,3348,-13083,0,0,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-12552,4699,-11019,0,0,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6323,5599,-2550,0,0,0,0x140000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-18590,4098,-299,0,0,0,0x1e0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(137,-13488,5416,-1430,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-1430,3871,-4370,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1159,1561,-895,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-774,4122,3744,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,13741,-1977,11301,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7963,5041,-3370,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-20025,4676,663,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-19778,5920,-2228,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5454,3484,3751,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(188,2184,1489,3604,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2256,2419,-8699,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3827,2419,-10526,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-10986,2269,-16868,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-9439,2269,-16937,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-19368,4069,616,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-19390,4069,-1200,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-18248,4069,-558,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,13226,-2396,12458,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(122,-13542,5190,-426,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,1408,2340,-386,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,12891,-2175,10269,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-3671,5910,3113,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-3672,5910,4351,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-18601,5190,-856,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,2131,1710,785,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,4168,5040,-14369,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,8113,5040,-10478,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,-11515,4890,-16971,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(120,480,2988,-3131,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,12577,-2757,9531,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,5642,2508,-11901,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-13198,4758,-16989,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-18588,5058,-300,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(124,-8338,4969,-2405,0,129,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(146,-8962,4717,-4351,-90,-135,0,0x3ca50000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-8957,5317,-2554,-90,-90,0,0x28b40000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-12325,5317,-2550,-90,90,0,0x28b40000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-14663,5317,-299,-90,-90,0,0x28aa0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-17723,5317,-300,-90,90,0,0x28b40000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-18593,5317,569,-90,180,0,0x73910000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-19194,6202,-2250,-90,0,0,0x96a00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-19785,7102,1652,-90,174,0,0xa0be0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-18595,8301,-3754,-90,-3,0,0xaaea0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-13691,4717,-17004,-90,90,0,0xd2ff0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(123,6417,2344,-12608,0,-45,0,0x960000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-12309,2194,-17000,0,0,0,0x960000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,13313,-1796,15459,0,45,0,0x500000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,14554,-746,16709,0,45,0,0x500000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,15788,308,15449,0,0,0,0x500000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,15791,3503,18351,0,0,0,0x500000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(124,13506,-1796,14056,0,-135,0,0x1e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,14504,3241,18348,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6505,7000,-16978,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5344,4743,3739,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,2765,4111,-9906,0,45,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2765,4088,-9906,0,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,3810,4315,-10521,0,45,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,3810,4293,-10521,0,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,4913,3849,-11115,0,45,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,4913,3826,-11115,0,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,2286,4685,-8901,0,45,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2286,4662,-8901,0,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,1758,3750,-7574,0,45,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,1758,3727,-7574,0,45,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(212,13545,3247,9518,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,8150,-149,7902,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,0,32640,8704,0,0,0,0xe0fc098, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,0,32640,8704,0,0,0,0xe0fc168, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,0,32640,8704,0,0,0,0xe0ff928, Bhv_Custom_0x0040f000,31),
OBJECT_WITH_ACTS(0,8,4,846,0,0,0,57, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,0,32512,8704,0,0,0,0xe119588, Bhv_Custom_0x0040f000,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,4,1,69,0),
WARP_NODE(20,18,1,20,0),
WARP_NODE(30,18,1,30,0),
WARP_NODE(40,18,1,40,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,53,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
