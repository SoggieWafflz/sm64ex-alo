#include "custom.model.inc.h"
Vtx VB_rr_geo_0008F0_0x701ae48[] = {
{{{ 205, 102, -306 }, 0, { 2522, 1498 }, { 173, 187, 209, 255}}},
{{{ -204, 102, 307 }, 0, { 0, 990 }, { 173, 187, 209, 255}}},
{{{ 205, 102, 307 }, 0, { 990, 0 }, { 173, 187, 209, 255}}},
{{{ -204, 102, -306 }, 0, { 1500, 2520 }, { 173, 187, 209, 255}}},
{{{ -204, 102, -306 }, 0, { 36, 1124 }, { 89, 122, 179, 255}}},
{{{ -204, 0, -306 }, 0, { 0, 990 }, { 89, 122, 179, 255}}},
{{{ -204, 0, 307 }, 0, { 786, 582 }, { 89, 122, 179, 255}}},
{{{ -204, 102, 307 }, 0, { 854, 718 }, { 89, 122, 179, 255}}},
{{{ 205, 102, 307 }, 0, { 854, 718 }, { 89, 122, 179, 255}}},
{{{ 205, 0, 307 }, 0, { 786, 582 }, { 89, 122, 179, 255}}},
{{{ 205, 0, -306 }, 0, { 0, 990 }, { 89, 122, 179, 255}}},
{{{ 205, 102, -306 }, 0, { 36, 1124 }, { 89, 122, 179, 255}}},
{{{ 205, 0, 307 }, 0, { 990, 0 }, { 56, 94, 150, 255}}},
{{{ -204, 0, 307 }, 0, { 0, 990 }, { 56, 94, 150, 255}}},
{{{ -204, 0, -306 }, 0, { 1500, 2520 }, { 56, 94, 150, 255}}},
{{{ 205, 0, -306 }, 0, { 2522, 1498 }, { 56, 94, 150, 255}}},
};

Vtx VB_rr_geo_0008F0_0x701af48[] = {
{{{ -204, 102, 307 }, 0, { 138, 820 }, { 117, 146, 203, 255}}},
{{{ -204, 0, 307 }, 0, { 0, 990 }, { 117, 146, 203, 255}}},
{{{ 205, 0, 307 }, 0, { 650, 1670 }, { 117, 146, 203, 255}}},
{{{ 205, 102, 307 }, 0, { 820, 1500 }, { 117, 146, 203, 255}}},
{{{ 205, 102, -306 }, 0, { 820, 1500 }, { 117, 146, 203, 255}}},
{{{ 205, 0, -306 }, 0, { 650, 1670 }, { 117, 146, 203, 255}}},
{{{ -204, 0, -306 }, 0, { 0, 990 }, { 117, 146, 203, 255}}},
{{{ -204, 102, -306 }, 0, { 138, 820 }, { 117, 146, 203, 255}}},
};

const Gfx DL_rr_geo_0008F0_0x701b058[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_rr_geo_0008F0_0x701afc8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_rr_geo_0008F0_0x701afc8[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_0008F0__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_0008F0_0x701ae48, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPVertex(VB_rr_geo_0008F0_0x701af48, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

