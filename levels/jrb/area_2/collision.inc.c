const Collision jrb_area_2_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(4),
	COL_VERTEX(-1373, -1373, -180),
	COL_VERTEX(1373, -1373, -180),
	COL_VERTEX(1373, 1373, -180),
	COL_VERTEX(-1373, 1373, -180),
	COL_TRI_INIT(SURFACE_DEFAULT, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI_STOP(),
	COL_END()
};
