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
#include "levels/lll/header.h"

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _custom_skybox_noise_skybox_mio0SegmentRomStart, _custom_skybox_noise_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, lll_geo_0009E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, lll_geo_0009F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, lll_geo_000A10), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, lll_geo_000A28), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, lll_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, lll_geo_000A60), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, lll_geo_000A90), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, lll_geo_000AA8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, lll_geo_000AC0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, lll_geo_000AD8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, lll_geo_000AF0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART, lll_geo_000B20), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, lll_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING, lll_geo_000BB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM, lll_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS, lll_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM, lll_geo_000BF8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1, lll_geo_000C10), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2, lll_geo_000C30), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3, lll_geo_000C50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4, lll_geo_000C70), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5, lll_geo_000C90), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6, lll_geo_000CB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7, lll_geo_000CD0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8, lll_geo_000CF0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9, lll_geo_000D10), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10, lll_geo_000D30), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11, lll_geo_000D50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12, lll_geo_000D70), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13, lll_geo_000D90), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14, lll_geo_000DB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK, lll_geo_000DD0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG, lll_geo_000DE8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM, lll_geo_000A78), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE, lll_geo_000B50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE, lll_geo_000B68), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM, lll_geo_000B80), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM, lll_geo_000B98), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP, lll_geo_000EA8), 

	AREA(1, lll_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 2, 0x4C, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 2, 0x4B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_LLL, 1, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT(250, -4987, 5170, -5749, 0, 0, 0, 0x04230000, bhvDorriePanel),
		OBJECT(255, -6074, 4825, 1914, 0, -90, 0, 0x0, bhvGlowRot),
		OBJECT(MODEL_WOODEN_SIGNPOST, 269, 4471, -2994, 0, 0, 0, 0x240000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -19981, 2681, -3725, 0, 45, 0, 0x250000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 14332, 6013, 13307, 0, -90, 0, 0x260000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -10422, 5233, 1085, 0, 149, 0, 0x270000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -10301, 1088, -5782, 0, 43, 0, 0x280000, bhvMessagePanel),
		OBJECT(102, 269, 4498, -1831, 0, 90, 0, 0x0, bhvChainChomp),
		OBJECT(MODEL_WOODEN_SIGNPOST, 8966, 5123, 217, 0, 90, 0, 0x290000, bhvMessagePanel),
		OBJECT(223, -17120, 2318, -1545, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, -14989, 1448, -4550, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, -15308, 2509, 674, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, -5902, 11623, 16275, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, 13194, 6047, 14736, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, 13725, 6047, 12856, 0, 90, 0, 0x0, bhvChuckya),
		OBJECT(223, 4570, 4488, -913, 0, 87, 0, 0x0, bhvChuckya),
		OBJECT(194, -3441, 2584, -9419, 0, -90, 0, 0x0, bhvCirclingAmp),
		OBJECT(0, -5137, 1945, -10294, 0, -90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -600, 4872, 2670, 0, -90, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 7067, 3764, 7201, 0, 1, 0, 0x20000, bhvCoinFormation),
		OBJECT(180, -16035, 2632, 2670, 0, 90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 7021, 5402, 10871, 0, 90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -3818, 9742, 15241, 0, 90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -2141, 8933, 15376, 0, 90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 10424, 6342, 10976, 0, 90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 16861, 7859, -11229, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 13044, 7859, -12212, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 14379, 7859, -11720, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 15901, 7859, -10971, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -9654, 5951, -1283, 0, -90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -19252, 6474, 2261, 0, -90, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -17849, 6474, 2272, 0, -90, 0, 0x0, bhvFireSpitter),
		OBJECT(220, -810, 4235, 927, 0, -90, 0, 0x0, bhvFlyGuy),
		OBJECT(220, -13642, 2056, -3206, 0, 90, 0, 0x0, bhvFlyGuy),
		OBJECT(0, -2602, 3731, 6006, 0, -90, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -19121, 2730, -2982, 0, 90, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 8216, 3764, 7884, 0, 1, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 6503, 3764, 8317, 0, 1, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -7850, 5178, -2360, 0, -90, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 9611, 5181, 198, 0, 90, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -126, 4498, -1545, 0, 90, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(89, -16035, 2165, 4417, 0, -3, 0, 0x0, bhvHeaveHo),
		OBJECT(89, 4305, 4488, 1578, 0, 87, 0, 0x0, bhvHeaveHo),
		OBJECT(100, -6930, 10181, 15206, 0, 90, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, 412, 8118, 14756, 0, 90, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, 2903, 7182, 14421, 0, 90, 0, 0x0, bhvPiranhaPlant),
		OBJECT(100, 9897, 6047, 14432, 0, 90, 0, 0x0, bhvPiranhaPlant),
		OBJECT(103, -7489, 1025, -10235, 0, -90, 0, 0x0, bhvSmallWhomp),
		OBJECT(103, 6266, 4488, -2425, 0, 87, 0, 0x0, bhvSmallWhomp),
		OBJECT(103, 5967, 4488, 3291, 0, 90, 0, 0x0, bhvSmallWhomp),
		OBJECT(252, -2975, 3666, -5006, 0, -90, 0, 0x0, bhvPlusRot),
		OBJECT(255, 21291, 4660, 258, 0, -90, 0, 0x0, bhvGlowRot),
		OBJECT(255, 21525, 6905, 258, 0, -90, 0, 0x0, bhvGlowRot),
		OBJECT(MODEL_STAR, -22254, 6814, 3580, 0, -90, 0, 1, bhvStar),
		OBJECT(MODEL_STAR, -5033, 12447, 16226, 0, 90, 0, 0x02000001, bhvStar),
		OBJECT(MODEL_STAR, -5409, 6825, -6382, 0, 90, 0, 0x03000001, bhvStar),
		OBJECT(MODEL_NONE, -9662, 1574, -5229, 0, 180, 0, 0x120000, bhvAirborneWarp),
		OBJECT(MODEL_STAR, 14690, 8069, -11156, 0, 0, 0, 0x01000001, bhvStar),
		TERRAIN(lll_area_1_collision),
		MACRO_OBJECTS(lll_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x2B),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
