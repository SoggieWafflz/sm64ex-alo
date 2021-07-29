Lights1 sa_dl_black_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Vtx sa_dl_Cube_006_mesh_layer_1_vtx_0[24] = {
	{{{-1282, -429, 1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, -429, -1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, -1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, 1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, -429, -1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, -1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, -1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, -1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, -1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, 1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, 1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, -1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, 1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, -429, 1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, 1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, 1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, -429, -1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, -429, 1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, 1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, -429, -1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, -1212},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{1282, 350, 1212},0, {1008, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, 1212},0, {1008, -16},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-1282, 350, -1212},0, {-16, -16},{0x0, 0x0, 0x0, 0xFF}}},
};

Gfx sa_dl_Cube_006_mesh_layer_1_tri_0[] = {
	gsSPVertex(sa_dl_Cube_006_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(sa_dl_Cube_006_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_sa_dl_black[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(sa_dl_black_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_sa_dl_black[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx sa_dl_Cube_006_mesh_layer_1[] = {
	gsSPDisplayList(mat_sa_dl_black),
	gsSPDisplayList(sa_dl_Cube_006_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_sa_dl_black),
	gsSPEndDisplayList(),
};

Gfx sa_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

