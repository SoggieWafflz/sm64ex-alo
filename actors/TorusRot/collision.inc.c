const Collision TorusRot_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(32),
	COL_VERTEX(844, 0, 0),
	COL_VERTEX(597, 0, -597),
	COL_VERTEX(530, 94, -530),
	COL_VERTEX(750, 94, 0),
	COL_VERTEX(464, 0, -464),
	COL_VERTEX(656, 0, 0),
	COL_VERTEX(530, -94, -530),
	COL_VERTEX(750, -94, 0),
	COL_VERTEX(0, 0, -844),
	COL_VERTEX(0, 94, -750),
	COL_VERTEX(0, 0, -656),
	COL_VERTEX(0, -94, -750),
	COL_VERTEX(-597, 0, -597),
	COL_VERTEX(-530, 94, -530),
	COL_VERTEX(-464, 0, -464),
	COL_VERTEX(-530, -94, -530),
	COL_VERTEX(-844, 0, 0),
	COL_VERTEX(-750, 94, 0),
	COL_VERTEX(-656, 0, 0),
	COL_VERTEX(-750, -94, 0),
	COL_VERTEX(-597, 0, 597),
	COL_VERTEX(-530, 94, 530),
	COL_VERTEX(-464, 0, 464),
	COL_VERTEX(-530, -94, 530),
	COL_VERTEX(0, 0, 844),
	COL_VERTEX(0, 94, 750),
	COL_VERTEX(0, 0, 656),
	COL_VERTEX(0, -94, 750),
	COL_VERTEX(597, 0, 597),
	COL_VERTEX(530, 94, 530),
	COL_VERTEX(464, 0, 464),
	COL_VERTEX(530, -94, 530),
	COL_TRI_INIT(SURFACE_NO_CAM_COLLISION, 64),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(1, 8, 9),
	COL_TRI(1, 9, 2),
	COL_TRI(2, 9, 10),
	COL_TRI(2, 10, 4),
	COL_TRI(4, 10, 11),
	COL_TRI(4, 11, 6),
	COL_TRI(6, 11, 8),
	COL_TRI(6, 8, 1),
	COL_TRI(8, 12, 13),
	COL_TRI(8, 13, 9),
	COL_TRI(9, 13, 14),
	COL_TRI(9, 14, 10),
	COL_TRI(10, 14, 15),
	COL_TRI(10, 15, 11),
	COL_TRI(11, 15, 12),
	COL_TRI(11, 12, 8),
	COL_TRI(12, 16, 17),
	COL_TRI(12, 17, 13),
	COL_TRI(13, 17, 18),
	COL_TRI(13, 18, 14),
	COL_TRI(14, 18, 19),
	COL_TRI(14, 19, 15),
	COL_TRI(15, 19, 16),
	COL_TRI(15, 16, 12),
	COL_TRI(16, 20, 21),
	COL_TRI(16, 21, 17),
	COL_TRI(17, 21, 22),
	COL_TRI(17, 22, 18),
	COL_TRI(18, 22, 23),
	COL_TRI(18, 23, 19),
	COL_TRI(19, 23, 20),
	COL_TRI(19, 20, 16),
	COL_TRI(20, 24, 25),
	COL_TRI(20, 25, 21),
	COL_TRI(21, 25, 26),
	COL_TRI(21, 26, 22),
	COL_TRI(22, 26, 27),
	COL_TRI(22, 27, 23),
	COL_TRI(23, 27, 24),
	COL_TRI(23, 24, 20),
	COL_TRI(24, 28, 29),
	COL_TRI(24, 29, 25),
	COL_TRI(25, 29, 30),
	COL_TRI(25, 30, 26),
	COL_TRI(26, 30, 31),
	COL_TRI(26, 31, 27),
	COL_TRI(27, 31, 28),
	COL_TRI(27, 28, 24),
	COL_TRI(28, 0, 3),
	COL_TRI(28, 3, 29),
	COL_TRI(29, 3, 5),
	COL_TRI(29, 5, 30),
	COL_TRI(30, 5, 7),
	COL_TRI(30, 7, 31),
	COL_TRI(31, 7, 0),
	COL_TRI(31, 0, 28),
	COL_TRI_STOP(),
	COL_END()
};