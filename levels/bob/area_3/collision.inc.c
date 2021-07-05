const Collision bob_area_3_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(425, -43, 250),
	COL_VERTEX(425, -43, -250),
	COL_VERTEX(425, 457, -250),
	COL_VERTEX(425, 457, 250),
	COL_VERTEX(1460, -43, -250),
	COL_VERTEX(1460, 457, -250),
	COL_VERTEX(1460, -43, 250),
	COL_VERTEX(1460, 457, 250),
	COL_VERTEX(-1863, -43, 645),
	COL_VERTEX(-1863, -43, -645),
	COL_VERTEX(-1863, 457, -645),
	COL_VERTEX(-1863, 457, 645),
	COL_VERTEX(-71, -43, -645),
	COL_VERTEX(-71, 457, -645),
	COL_VERTEX(-71, -43, 645),
	COL_VERTEX(-71, 457, 645),
	COL_TRI_INIT(SURFACE_DEFAULT, 24),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 7),
	COL_TRI(1, 0, 6),
	COL_TRI(1, 6, 4),
	COL_TRI(5, 7, 3),
	COL_TRI(5, 3, 2),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(9, 12, 13),
	COL_TRI(9, 13, 10),
	COL_TRI(12, 14, 15),
	COL_TRI(12, 15, 13),
	COL_TRI(14, 8, 11),
	COL_TRI(14, 11, 15),
	COL_TRI(9, 8, 14),
	COL_TRI(9, 14, 12),
	COL_TRI(13, 15, 11),
	COL_TRI(13, 11, 10),
	COL_TRI_STOP(),
	COL_END()
};
