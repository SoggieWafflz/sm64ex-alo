#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(5, 0, -128, 0, wf_dl_Border_fade_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(6, 0, -128, 0, wf_dl_Border_fade_001_mesh_layer_6),
		GEO_TRANSLATE_NODE_WITH_DL(5, 8555, 3662, 11219, wf_dl_Fade_Island_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(6, wf_dl_Fade_Island_mesh_layer_6),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(4, 0, 826, 3164, wf_dl_Grate_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, wf_dl_Grate_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(4, 8550, 245, 11145, wf_dl_Grate_001_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, wf_dl_Grate_001_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(4, 0, 99, 0, wf_dl_Grate_002_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, wf_dl_Grate_002_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 245, 0, wf_dl_Island_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 8555, 3648, 11219, wf_dl_Island_2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, -128, 0, wf_dl_Lava_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(6, 0, 6511, 0, wf_dl_Lava_Plane_Decal_mesh_layer_6),
		GEO_TRANSLATE_NODE_WITH_DL(1, -11415, 1030, 8739, wf_dl_Pyramid_mesh_layer_1),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(5, 0, 758, 0, wf_dl_Rain_Drops_mesh_layer_5),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(5, 8531, 758, 11276, wf_dl_Rain_Drops_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, 8550, 245, 11145, wf_dl_Rock_mesh_layer_1),
		GEO_DISPLAY_LIST(1, wf_dl_Starting_Platform_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 13770, 13, -7365, wf_dl_Volcano_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, 8550, 245, 11145, wf_dl_Waterfall_non_solid_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, 8550, 245, 11145, wf_dl_Waterfall_non_solid_002_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(5, 8550, 245, 11145, wf_dl_Waterfall_solid_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -250, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
