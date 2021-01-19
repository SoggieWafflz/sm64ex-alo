#include "custom.model.inc.h"
const Vtx VB_bowser_impact_smoke_geo_0x6062b78[] = {
{{{ -150, 150, 0 }, 0, { 0, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 150, 0 }, 0, { 2016, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 300, 0 }, 0, { 2016, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 300, 0 }, 0, { 0, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 0, 0 }, 0, { 0, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 0, 0 }, 0, { 2016, 992 }, { 40, 25, 20, 255}}},
{{{ 150, 150, 0 }, 0, { 2016, 0 }, { 40, 25, 20, 255}}},
{{{ -150, 150, 0 }, 0, { 0, 0 }, { 40, 25, 20, 255}}},
};

const Gfx DL_bowser_impact_smoke_geo_0x6062c88[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605ab78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605bb78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062bf8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, TEXEL0, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, TEXEL0, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062c28[] = {
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062c40[] = {
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062c58[] = {
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062d28[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605cb78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605db78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062dc8[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605eb78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x605fb78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

const Gfx DL_bowser_impact_smoke_geo_0x6062e68[] = {
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062bf8),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x6060b78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPVertex(VB_bowser_impact_smoke_geo_0x6062b78, 8, 0),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c28),
gsDPSetTextureImage(3, 2, 1, texture_bowser_impact_smoke_geo_0x6061b78_custom),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsDPPipeSync(),
gsDPSetTile(3, 2, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c40),
gsSPDisplayList(DL_bowser_impact_smoke_geo_0x6062c58),
gsSPEndDisplayList(),
};

