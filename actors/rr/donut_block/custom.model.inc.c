#include "custom.model.inc.h"
Vtx VB_rr_geo_000920_0x701b348[] = {
{{{ 102, 51, -306 }, 0, { 224, 1244 }, { 114, 93, 41, 255}}},
{{{ 51, 0, 307 }, 0, { 122, 1192 }, { 114, 93, 41, 255}}},
{{{ 51, 0, -306 }, 0, { 122, 1192 }, { 114, 93, 41, 255}}},
{{{ 102, 51, 307 }, 0, { 224, 1244 }, { 114, 93, 41, 255}}},
{{{ -50, 0, -306 }, 0, { 70, 1040 }, { 114, 93, 41, 255}}},
{{{ -101, 51, 307 }, 0, { 122, 938 }, { 114, 93, 41, 255}}},
{{{ -101, 51, -306 }, 0, { 122, 938 }, { 114, 93, 41, 255}}},
{{{ -50, 0, 307 }, 0, { 70, 1040 }, { 114, 93, 41, 255}}},
{{{ 51, 0, -306 }, 0, { 122, 1192 }, { 102, 80, 33, 255}}},
{{{ -50, 0, 307 }, 0, { 70, 1040 }, { 102, 80, 33, 255}}},
{{{ -50, 0, -306 }, 0, { 70, 1040 }, { 102, 80, 33, 255}}},
{{{ 51, 0, 307 }, 0, { 122, 1192 }, { 102, 80, 33, 255}}},
{{{ 102, 154, -306 }, 0, { 376, 1192 }, { 155, 124, 61, 255}}},
{{{ 102, 154, 307 }, 0, { 376, 1192 }, { 155, 124, 61, 255}}},
{{{ 102, 51, 307 }, 0, { 224, 1244 }, { 155, 124, 61, 255}}},
{{{ 102, 51, -306 }, 0, { 224, 1244 }, { 155, 124, 61, 255}}},
};

Vtx VB_rr_geo_000920_0x701b448[] = {
{{{ -101, 51, -306 }, 0, { 122, 938 }, { 155, 124, 61, 255}}},
{{{ -101, 154, 307 }, 0, { 274, 888 }, { 155, 124, 61, 255}}},
{{{ -101, 154, -306 }, 0, { 274, 888 }, { 155, 124, 61, 255}}},
{{{ -101, 51, 307 }, 0, { 122, 938 }, { 155, 124, 61, 255}}},
{{{ -101, 154, -306 }, 0, { 274, 888 }, { 205, 196, 151, 255}}},
{{{ -101, 154, 307 }, 0, { 274, 888 }, { 205, 196, 151, 255}}},
{{{ 102, 154, 307 }, 0, { 376, 1192 }, { 205, 196, 151, 255}}},
{{{ 102, 154, -306 }, 0, { 376, 1192 }, { 205, 196, 151, 255}}},
{{{ 102, 154, 307 }, 0, { 376, 1192 }, { 172, 157, 82, 255}}},
{{{ -101, 154, 307 }, 0, { 274, 888 }, { 172, 157, 82, 255}}},
{{{ -101, 51, 307 }, 0, { 122, 938 }, { 172, 157, 82, 255}}},
{{{ 51, 0, 307 }, 0, { 122, 1192 }, { 172, 157, 82, 255}}},
{{{ 102, 51, 307 }, 0, { 224, 1244 }, { 172, 157, 82, 255}}},
{{{ -50, 0, 307 }, 0, { 70, 1040 }, { 172, 157, 82, 255}}},
};

Vtx VB_rr_geo_000920_0x701b528[] = {
{{{ -101, 51, -306 }, 0, { 122, 938 }, { 172, 157, 82, 255}}},
{{{ 51, 0, -306 }, 0, { 122, 1192 }, { 172, 157, 82, 255}}},
{{{ -50, 0, -306 }, 0, { 70, 1040 }, { 172, 157, 82, 255}}},
{{{ 102, 154, -306 }, 0, { 376, 1192 }, { 172, 157, 82, 255}}},
{{{ 102, 51, -306 }, 0, { 224, 1244 }, { 172, 157, 82, 255}}},
{{{ -101, 154, -306 }, 0, { 274, 888 }, { 172, 157, 82, 255}}},
};

Vtx VB_rr_geo_000920_0x701b6d0[] = {
{{{ 61, 143, 317 }, 0, { 990, 0 }, { 199, 162, 104, 255}}},
{{{ -60, 20, 317 }, 0, { 0, 990 }, { 199, 162, 104, 255}}},
{{{ 61, 20, 317 }, 0, { 990, 990 }, { 199, 162, 104, 255}}},
{{{ -60, 143, 317 }, 0, { 0, 0 }, { 199, 162, 104, 255}}},
{{{ 61, 20, -316 }, 0, { 990, 990 }, { 199, 162, 104, 255}}},
{{{ -60, 143, -316 }, 0, { 0, 0 }, { 199, 162, 104, 255}}},
{{{ 61, 143, -316 }, 0, { 990, 0 }, { 199, 162, 104, 255}}},
{{{ -60, 20, -316 }, 0, { 0, 990 }, { 199, 162, 104, 255}}},
};

const Gfx DL_rr_geo_000920_0x701b660[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_rr_geo_000920_0x701b588),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_rr_geo_000920_0x701b588[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_000920__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_000920_0x701b348, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPVertex(VB_rr_geo_000920_0x701b448, 14, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 12, 0),
gsSP2Triangles(8, 13, 11, 0,8, 10, 13, 0),
gsSPVertex(VB_rr_geo_000920_0x701b528, 6, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 4, 0),
gsSP2Triangles(0, 4, 1, 0,0, 5, 3, 0),
gsSPEndDisplayList(),
};

const Gfx DL_rr_geo_000920_0x701b798[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_rr_geo_000920_0x701b750),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

const Gfx DL_rr_geo_000920_0x701b750[] = {
gsDPSetTextureImage(0, 2, 1, rr_geo_000920__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_rr_geo_000920_0x701b6d0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

