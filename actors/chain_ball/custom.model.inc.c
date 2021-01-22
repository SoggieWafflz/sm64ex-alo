#include "custom.model.inc.h"
const Vtx VB_metallic_ball_geo_0x6020aa0[] = {
{{{ -26, -26, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 26, -26, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 26, 26, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -26, 26, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

const Gfx DL_metallic_ball_geo_0x60212e8[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTextureImage(0, 2, 1, texture_metallic_ball_geo_0x6020ae8_custom),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_metallic_ball_geo_0x6020aa0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

