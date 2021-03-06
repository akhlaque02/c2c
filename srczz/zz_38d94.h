#ifdef ZZ_INCLUDE_CODE
ZZ_38D94:
	SP -= 72;
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = A0;
	EMU_Write32(SP + 40,S2); //+ 0x28
	S2 = A1;
	EMU_Write32(SP + 44,S3); //+ 0x2C
	S3 = S2 & 0x3F;
	A3 = S2 >> 20;
	EMU_Write32(SP + 52,S5); //+ 0x34
	S5 = A3 & 0xF;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 60,S7); //+ 0x3C
	EMU_Write32(SP + 56,S6); //+ 0x38
	EMU_Write32(SP + 48,S4); //+ 0x30
	if (S3)
	{
		EMU_Write32(SP + 36,S1); //+ 0x24
		ZZ_CLOCKCYCLES(16,0x80038DEC);
		goto ZZ_38D94_58;
	}
	EMU_Write32(SP + 36,S1); //+ 0x24
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V1 = S5 + 1;
	S5 = V1;
	V1 = S5 << 2;
	V0 = V0 - V1;
	S3 = EMU_ReadU32(V0);
	ZZ_CLOCKCYCLES(22,0x80038DEC);
ZZ_38D94_58:
	if ((int32_t)S3 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(3,0x80038E6C);
		goto ZZ_38D94_D8;
	}
	S1 = R0;
	S4 = A3 & 0xF;
	V0 = -S4;
	S7 = V0 << 2;
	V0 = S2 >> 24;
	V0 ^= 0x46;
	S6 = V0 < 1;
	ZZ_CLOCKCYCLES(9,0x80038E10);
ZZ_38D94_7C:
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	A1 = S2 >> 12;
	A2 = S2 >> 6;
	A0 = S0;
	A1 &= 0xFF;
	A2 &= 0x3F;
	A3 = S4;
	EMU_Write32(SP + 20,S6); //+ 0x14
	V0 += S7;
	RA = 0x80038E3C; //ZZ_38D94_A8
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80019928);
	goto ZZ_19928;
ZZ_38D94_A8:
	V1 = V0;
	V0 = (int32_t)V1 < -254;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80038E58);
		goto ZZ_38D94_C4;
	}
	EMU_Write32(V1 + 80,S0); //+ 0x50
	EMU_Write32(S0 + 212,V1); //+ 0xD4
	ZZ_CLOCKCYCLES(7,0x80038E5C);
	goto ZZ_38D94_C8;
ZZ_38D94_C4:
	EMU_Write32(S0 + 212,R0); //+ 0xD4
	ZZ_CLOCKCYCLES(1,0x80038E5C);
ZZ_38D94_C8:
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x80038E10);
		goto ZZ_38D94_7C;
	}
	ZZ_CLOCKCYCLES(4,0x80038E6C);
ZZ_38D94_D8:
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V1 = S5 << 2;
	V0 = V0 - V1;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	S7 = EMU_ReadU32(SP + 60); //+ 0x3C
	S6 = EMU_ReadU32(SP + 56); //+ 0x38
	S5 = EMU_ReadU32(SP + 52); //+ 0x34
	S4 = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x8003A26C,ZZ_3A234_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80038D94,0x80038DEC,ZZ_38D94);
ZZ_MARK_TARGET(0x80038DEC,0x80038E10,ZZ_38D94_58);
ZZ_MARK_TARGET(0x80038E10,0x80038E3C,ZZ_38D94_7C);
ZZ_MARK_TARGET(0x80038E3C,0x80038E58,ZZ_38D94_A8);
ZZ_MARK_TARGET(0x80038E58,0x80038E5C,ZZ_38D94_C4);
ZZ_MARK_TARGET(0x80038E5C,0x80038E6C,ZZ_38D94_C8);
ZZ_MARK_TARGET(0x80038E6C,0x80038EAC,ZZ_38D94_D8);
