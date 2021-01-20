#include "custom.model.inc.h"
const Vtx VB_pokey_head_geo_0x5011710[] = {
{{{ 26, 26, 0 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -25, 26, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -25, -25, 0 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 26, -25, 0 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
};

const Gfx DL_pokey_head_geo_0x50127d8[] = {
gsSPDisplayList(DL_pokey_head_geo_0x5012750),
gsDPSetTextureImage(0, 2, 1, texture_pokey_head_geo_0x5011750_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_pokey_head_geo_0x5012798),
gsSPEndDisplayList(),
};

const Gfx DL_pokey_head_geo_0x5012750[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPEndDisplayList(),
};

const Gfx DL_pokey_head_geo_0x5012798[] = {
gsSPVertex(VB_pokey_head_geo_0x5011710, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_pokey_head_geo_0x5012808[] = {
gsSPDisplayList(DL_pokey_head_geo_0x5012750),
gsDPSetTextureImage(0, 2, 1, texture_pokey_head_geo_0x5011f50_custom),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPDisplayList(DL_pokey_head_geo_0x5012798),
gsSPEndDisplayList(),
};

