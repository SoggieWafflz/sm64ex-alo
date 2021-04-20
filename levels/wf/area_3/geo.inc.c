#include "src/game/envfx_snow.h"

const GeoLayout wf_area_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -680, -382, -9527, wf_dl_Plane_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, -680, -382, -9527, wf_dl_Plane_018_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2394, -504, -9376, wf_dl_Plane_019_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1562, -513, -9376, wf_dl_Plane_020_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -873, -504, -10435, wf_dl_Plane_021_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(5, -680, -382, -9527, wf_dl_Plane_022_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, -324, 3669, -10908, wf_dl_Plane_024_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_3[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 15664, 0, 0, 15414, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_3_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
