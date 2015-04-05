#ifdef ZZ_INCLUDE_CODE
ZZ_4EF50:
	T0 = EMU_ReadU32(A0);
	T1 = EMU_ReadU32(A0 + 4); //+ 0x4
	T2 = EMU_ReadU32(A0 + 8); //+ 0x8
	T3 = EMU_ReadU32(A0 + 12); //+ 0xC
	T4 = EMU_ReadU32(A0 + 16); //+ 0x10
	GTE_SetRegister(GTE_CREG_RT11_RT12,T0);
	GTE_SetRegister(GTE_CREG_RT13_RT21,T1);
	GTE_SetRegister(GTE_CREG_RT22_RT23,T2);
	GTE_SetRegister(GTE_CREG_RT31_RT32,T3);
	GTE_SetRegister(GTE_CREG_RT33_NONE,T4);
	T0 = EMU_ReadU16(A1);
	T1 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = EMU_ReadU32(A1 + 12); //+ 0xC
	AT = 0xFFFF0000;
	T1 &= AT;
	T0 |= T1;
	GTE_SetRegister(GTE_DREG_VXY0,T0);
	GTE_SetRegister(GTE_DREG_VZ0,T2);
	GTE_Multiply_V0_Rotation();
	T0 = EMU_ReadU16(A1 + 2); //+ 0x2
	T1 = EMU_ReadU32(A1 + 8); //+ 0x8
	T2 = EMU_ReadS16(A1 + 14); //+ 0xE
	T1 <<= 16;
	T0 |= T1;
	T3 = GTE_GetRegister(GTE_DREG_IR1);
	T4 = GTE_GetRegister(GTE_DREG_IR2);
	T5 = GTE_GetRegister(GTE_DREG_IR3);
	GTE_SetRegister(GTE_DREG_VXY0,T0);
	GTE_SetRegister(GTE_DREG_VZ0,T2);
	GTE_Multiply_V0_Rotation();
	T0 = EMU_ReadU16(A1 + 4); //+ 0x4
	T1 = EMU_ReadU32(A1 + 8); //+ 0x8
	T2 = EMU_ReadU32(A1 + 16); //+ 0x10
	AT = 0xFFFF0000;
	T1 &= AT;
	T0 |= T1;
	T6 = GTE_GetRegister(GTE_DREG_IR1);
	T7 = GTE_GetRegister(GTE_DREG_IR2);
	T8 = GTE_GetRegister(GTE_DREG_IR3);
	GTE_SetRegister(GTE_DREG_VXY0,T0);
	GTE_SetRegister(GTE_DREG_VZ0,T2);
	GTE_Multiply_V0_Rotation();
	T3 &= 0xFFFF;
	T6 <<= 16;
	T6 |= T3;
	EMU_Write32(A0,T6);
	T5 &= 0xFFFF;
	T8 <<= 16;
	T8 |= T5;
	EMU_Write32(A0 + 12,T8); //+ 0xC
	T0 = GTE_GetRegister(GTE_DREG_IR1);
	T1 = GTE_GetRegister(GTE_DREG_IR2);
	T0 &= 0xFFFF;
	T4 <<= 16;
	T0 |= T4;
	EMU_Write32(A0 + 4,T0); //+ 0x4
	T7 &= 0xFFFF;
	T1 <<= 16;
	T1 |= T7;
	EMU_Write32(A0 + 8,T1); //+ 0x8
	EMU_Write32(A0 + 16,GTE_GetRegister(GTE_DREG_IR3)); //+ 0x10
	V0 = A0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(67);
	ZZ_JUMPREGISTER(0x8001EA88,ZZ_1E9C8_C0);
	ZZ_JUMPREGISTER(0x8001EAF8,ZZ_1E9C8_130);
	ZZ_JUMPREGISTER(0x80017DD8,ZZ_17CE8_F0);
	ZZ_JUMPREGISTER(0x80017E34,ZZ_17CE8_14C);
	ZZ_JUMPREGISTER(0x8001EDF4,ZZ_1ED20_D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004EF50,ZZ_4EF50);
ZZ_MARK(0x8004EF54);
ZZ_MARK(0x8004EF58);
ZZ_MARK(0x8004EF5C);
ZZ_MARK(0x8004EF60);
ZZ_MARK(0x8004EF64);
ZZ_MARK(0x8004EF68);
ZZ_MARK(0x8004EF6C);
ZZ_MARK(0x8004EF70);
ZZ_MARK(0x8004EF74);
ZZ_MARK(0x8004EF78);
ZZ_MARK(0x8004EF7C);
ZZ_MARK(0x8004EF80);
ZZ_MARK(0x8004EF84);
ZZ_MARK(0x8004EF88);
ZZ_MARK(0x8004EF8C);
ZZ_MARK(0x8004EF90);
ZZ_MARK(0x8004EF94);
ZZ_MARK(0x8004EF98);
ZZ_MARK(0x8004EF9C);
ZZ_MARK(0x8004EFA0);
ZZ_MARK(0x8004EFA4);
ZZ_MARK(0x8004EFA8);
ZZ_MARK(0x8004EFAC);
ZZ_MARK(0x8004EFB0);
ZZ_MARK(0x8004EFB4);
ZZ_MARK(0x8004EFB8);
ZZ_MARK(0x8004EFBC);
ZZ_MARK(0x8004EFC0);
ZZ_MARK(0x8004EFC4);
ZZ_MARK(0x8004EFC8);
ZZ_MARK(0x8004EFCC);
ZZ_MARK(0x8004EFD0);
ZZ_MARK(0x8004EFD4);
ZZ_MARK(0x8004EFD8);
ZZ_MARK(0x8004EFDC);
ZZ_MARK(0x8004EFE0);
ZZ_MARK(0x8004EFE4);
ZZ_MARK(0x8004EFE8);
ZZ_MARK(0x8004EFEC);
ZZ_MARK(0x8004EFF0);
ZZ_MARK(0x8004EFF4);
ZZ_MARK(0x8004EFF8);
ZZ_MARK(0x8004EFFC);
ZZ_MARK(0x8004F000);
ZZ_MARK(0x8004F004);
ZZ_MARK(0x8004F008);
ZZ_MARK(0x8004F00C);
ZZ_MARK(0x8004F010);
ZZ_MARK(0x8004F014);
ZZ_MARK(0x8004F018);
ZZ_MARK(0x8004F01C);
ZZ_MARK(0x8004F020);
ZZ_MARK(0x8004F024);
ZZ_MARK(0x8004F028);
ZZ_MARK(0x8004F02C);
ZZ_MARK(0x8004F030);
ZZ_MARK(0x8004F034);
ZZ_MARK(0x8004F038);
ZZ_MARK(0x8004F03C);
ZZ_MARK(0x8004F040);
ZZ_MARK(0x8004F044);
ZZ_MARK(0x8004F048);
ZZ_MARK(0x8004F04C);
ZZ_MARK(0x8004F050);
ZZ_MARK(0x8004F054);
ZZ_MARK(0x8004F058);
