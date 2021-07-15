#include "src/game/envfx_snow.h"

const GeoLayout TorusRotGeo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, TorusRot_Torus_mesh_layer_1),
		GEO_DISPLAY_LIST(1, TorusRot_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
