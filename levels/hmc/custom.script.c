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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_hmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_wdw_skybox_mio0SegmentRomStart,_wdw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_hmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1621700),
TERRAIN(col_hmc_1_0xe0128e8),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,3314,2233,6637,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,1796,1624,3636,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2808,-792,710,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(122,3614,3774,5679,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-48,1850,-1367,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-4168,1156,7193,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4373,-1714,-3350,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3245,2100,3300,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,4373,1094,5723,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2695,1094,-1425,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2553,-2859,240,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-88,1094,1780,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4453,-1503,-2418,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2023,1114,3428,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1890,1249,-3458,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,445,-1288,6333,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,1153,3500,-7108,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2473,2233,6830,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,860,164,6310,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2530,1097,-638,0,180,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-538,1094,400,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1370,1094,235,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2498,-178,-1795,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2423,1249,-5420,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3133,1249,-6680,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,3318,1700,-3470,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10,2300,-3588,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,110,1249,-6773,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-300,1425,3998,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,925,1249,-4835,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-440,1412,-5418,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3633,1412,-5368,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,2520,-5839,108,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-945,-1261,6150,0,0,0,0x0, bhvLargeFishGroup,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,6,0),
WARP_NODE(241,6,1,66,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
