#include "custom.model.inc.h"
Vtx VB_wdw_geo_000628_0x7013c00[] = {
{{{ 256, -63, 640 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 256, 64, 640 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -255, 64, 640 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ -255, -63, 640 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ -255, -63, 640 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 64, 640 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 64, -639 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -255, -63, -639 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -255, -63, -639 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ 256, 64, -639 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 256, -63, -639 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 256, -63, -639 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 64, 640 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 256, -63, 640 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 64, -639 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ -255, 64, -639 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
};

Vtx VB_wdw_geo_000628_0x7013d00[] = {
{{{ 256, -63, 640 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
{{{ -255, -63, 640 }, 0, { 990, 0 }, { 0, 129, 0, 255}}},
{{{ -255, -63, -639 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ 256, -63, -639 }, 0, { 0, 990 }, { 0, 129, 0, 255}}},
{{{ 256, 64, -639 }, 0, { 990, -1054 }, { 0, 127, 0, 255}}},
{{{ -255, 64, 640 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 256, 64, 640 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 64, -639 }, 0, { 0, -1054 }, { 0, 127, 0, 255}}},
};

Light_t Light_wdw_geo_000628_0x7013bf0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wdw_geo_000628_0x7013be8 = {
{153, 153, 153}, 0, {153, 153, 153}, 0
};

Gfx DL_wdw_geo_000628_0x7013e40[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wdw_geo_000628_0x7013d80),
gsSPDisplayList(DL_wdw_geo_000628_0x7013df8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_000628_0x7013d80[] = {
gsDPSetTextureImage(0, 2, 1, wdw_geo_000628__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wdw_geo_000628_0x7013bf0.col, 1),
gsSPLight(&Light_wdw_geo_000628_0x7013be8.col, 2),
gsSPVertex(VB_wdw_geo_000628_0x7013c00, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,8, 15, 9, 0),
gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_000628_0x7013df8[] = {
gsDPSetTextureImage(0, 2, 1, wdw_geo_000628__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wdw_geo_000628_0x7013d00, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

