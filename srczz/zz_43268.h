#ifdef ZZ_INCLUDE_CODE
	ZZ_CLOCKCYCLES(10,0x80043268);
ZZ_43268:
	A0 = 0xFFFF0000;
	T8 = T0 & 0xFFFF;
	T9 = T1 & A0;
	T8 |= T9;
	GTE_SetRegister(GTE_DREG_VXY0,T8);
	GTE_SetRegister(GTE_DREG_VZ0,T3);
	T8 = T0 >> 16;
	T9 = T2 << 16;
	GTE_Execute(4743186);
	T8 |= T9;
	T9 = T3 >> 16;
	GTE_SetRegister(GTE_DREG_VXY1,T8);
	GTE_SetRegister(GTE_DREG_VZ1,T9);
	T8 = T1 & 0xFFFF;
	T9 = T2 & A0;
	T8 |= T9;
	T0 = GTE_GetRegister(GTE_DREG_IR1);
	T1 = GTE_GetRegister(GTE_DREG_IR2);
	T3 = GTE_GetRegister(GTE_DREG_IR3);
	GTE_Execute(4775954);
	GTE_SetRegister(GTE_DREG_VXY2,T8);
	GTE_SetRegister(GTE_DREG_VZ2,T4);
	T0 &= 0xFFFF;
	T1 <<= 16;
	T3 &= 0xFFFF;
	T8 = GTE_GetRegister(GTE_DREG_IR1);
	T2 = GTE_GetRegister(GTE_DREG_IR2);
	T9 = GTE_GetRegister(GTE_DREG_IR3);
	GTE_Execute(4808722);
	T8 <<= 16;
	T0 |= T8;
	T2 &= 0xFFFF;
	T9 <<= 16;
	T3 |= T9;
	T8 = GTE_GetRegister(GTE_DREG_IR1);
	T9 = GTE_GetRegister(GTE_DREG_IR2);
	T4 = GTE_GetRegister(GTE_DREG_IR3);
	T8 &= 0xFFFF;
	T1 |= T8;
	T9 <<= 16;
	T2 |= T9;
#endif
ZZ_MARK_TARGET(0x80043268,ZZ_43268);
ZZ_MARK(0x8004326C);
ZZ_MARK(0x80043270);
ZZ_MARK(0x80043274);
ZZ_MARK(0x80043278);
ZZ_MARK(0x8004327C);
ZZ_MARK(0x80043280);
ZZ_MARK(0x80043284);
ZZ_MARK(0x80043288);
ZZ_MARK(0x8004328C);
ZZ_MARK(0x80043290);
ZZ_MARK(0x80043294);
ZZ_MARK(0x80043298);
ZZ_MARK(0x8004329C);
ZZ_MARK(0x800432A0);
ZZ_MARK(0x800432A4);
ZZ_MARK(0x800432A8);
ZZ_MARK(0x800432AC);
ZZ_MARK(0x800432B0);
ZZ_MARK(0x800432B4);
ZZ_MARK(0x800432B8);
ZZ_MARK(0x800432BC);
ZZ_MARK(0x800432C0);
ZZ_MARK(0x800432C4);
ZZ_MARK(0x800432C8);
ZZ_MARK(0x800432CC);
ZZ_MARK(0x800432D0);
ZZ_MARK(0x800432D4);
ZZ_MARK(0x800432D8);
ZZ_MARK(0x800432DC);
ZZ_MARK(0x800432E0);
ZZ_MARK(0x800432E4);
ZZ_MARK(0x800432E8);
ZZ_MARK(0x800432EC);
ZZ_MARK(0x800432F0);
ZZ_MARK(0x800432F4);
ZZ_MARK(0x800432F8);
ZZ_MARK(0x800432FC);
ZZ_MARK(0x80043300);
ZZ_MARK(0x80043304);
ZZ_MARK(0x80043308);
