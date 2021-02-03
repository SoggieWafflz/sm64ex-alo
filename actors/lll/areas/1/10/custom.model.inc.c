#include "custom.model.inc.h"
Vtx VB_lll_geo_000A78_0x70162e0[] = {
{{{ 0, 307, -895 }, 0, { 0, -3012 }, { 0, 127, 0, 255}}},
{{{ -767, 307, 384 }, 0, { -2586, 1244 }, { 0, 127, 0, 255}}},
{{{ 0, 307, 896 }, 0, { 0, 2946 }, { 0, 127, 0, 255}}},
{{{ -767, 307, -383 }, 0, { -2586, -1310 }, { 0, 127, 0, 255}}},
{{{ 768, 307, 384 }, 0, { 2522, 1244 }, { 0, 127, 0, 255}}},
{{{ 768, 307, -383 }, 0, { 2524, -1310 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000A78_0x7016340[] = {
{{{ -767, 0, 384 }, 0, { 1160, 990 }, { 129, 0, 0, 255}}},
{{{ -767, 307, -383 }, 0, { -3096, 0 }, { 129, 0, 0, 255}}},
{{{ -767, 0, -383 }, 0, { -3096, 990 }, { 129, 0, 0, 255}}},
{{{ 768, 0, -383 }, 0, { 330, 990 }, { 127, 0, 0, 255}}},
{{{ 768, 307, -383 }, 0, { 330, 0 }, { 127, 0, 0, 255}}},
{{{ 768, 307, 384 }, 0, { -4118, 0 }, { 127, 0, 0, 255}}},
{{{ 768, 0, 384 }, 0, { -4118, 990 }, { 127, 0, 0, 255}}},
{{{ 768, 0, 384 }, 0, { 4226, 990 }, { 70, 0, 105, 255}}},
{{{ 768, 307, 384 }, 0, { 4226, 0 }, { 70, 0, 105, 255}}},
{{{ 0, 307, 896 }, 0, { 0, 0 }, { 70, 0, 105, 255}}},
{{{ 0, 0, 896 }, 0, { 0, 990 }, { 70, 0, 105, 255}}},
{{{ 0, 0, 896 }, 0, { 1160, 990 }, { 186, 0, 105, 255}}},
{{{ -767, 307, 384 }, 0, { -3096, 0 }, { 186, 0, 105, 255}}},
{{{ -767, 0, 384 }, 0, { -3096, 990 }, { 186, 0, 105, 255}}},
{{{ 0, 307, 896 }, 0, { 1160, 0 }, { 186, 0, 105, 255}}},
};

Vtx VB_lll_geo_000A78_0x7016430[] = {
{{{ 0, 0, -895 }, 0, { 966, 990 }, { 70, 0, 151, 255}}},
{{{ 0, 307, -895 }, 0, { 966, 0 }, { 70, 0, 151, 255}}},
{{{ 768, 307, -383 }, 0, { -3096, 0 }, { 70, 0, 151, 255}}},
{{{ -767, 0, 384 }, 0, { 1160, 990 }, { 129, 0, 0, 255}}},
{{{ -767, 307, 384 }, 0, { 1160, 0 }, { 129, 0, 0, 255}}},
{{{ -767, 307, -383 }, 0, { -3096, 0 }, { 129, 0, 0, 255}}},
{{{ -767, 0, -383 }, 0, { 1160, 990 }, { 186, 0, 151, 255}}},
{{{ 0, 307, -895 }, 0, { -3096, 0 }, { 186, 0, 151, 255}}},
{{{ 0, 0, -895 }, 0, { -3096, 990 }, { 186, 0, 151, 255}}},
{{{ -767, 307, -383 }, 0, { 1160, 0 }, { 186, 0, 151, 255}}},
{{{ 768, 0, -383 }, 0, { -3096, 990 }, { 70, 0, 151, 255}}},
};

const Light_t Light_lll_geo_000A78_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

const Ambient_t Light_lll_geo_000A78_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

const Gfx DL_lll_geo_000A78_0x70165c8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000A78_0x70164e0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000A78_0x7016538),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

const Gfx DL_lll_geo_000A78_0x70164e0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000A78__texture_07005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000A78_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000A78_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000A78_0x70162e0, 6, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(0, 2, 4, 0,0, 4, 5, 0),
gsSPEndDisplayList(),
};

const Gfx DL_lll_geo_000A78_0x7016538[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000A78__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000A78_0x7016340, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 14, 12, 0),
gsSPVertex(VB_lll_geo_000A78_0x7016430, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 9, 7, 0),
gsSP1Triangle(0, 2, 10, 0),
gsSPEndDisplayList(),
};

