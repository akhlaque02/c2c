#ifdef ZZ_INCLUDE_CODE
ZZ_4F810:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = 0x80060000;
	V1 = EMU_ReadU16(V1 - 5504); //+ 0xFFFFEA80
	SP -= 40;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 16,S0); //+ 0x10
	A1 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	S2 = A0;
	EMU_Write16(V0 + 422,V1); //+ 0x1A6
	RA = 0x8004F850; //ZZ_4F810_40
	S3 = A1 & 0x7FF;
	ZZ_CLOCKCYCLES(16,0x80050068);
	goto ZZ_50068;
ZZ_4F810_40:
	if (!S1)
	{
		V0 = S1 < 65;
		ZZ_CLOCKCYCLES(2,0x8004F938);
		goto ZZ_4F810_128;
	}
	V0 = S1 < 65;
	ZZ_CLOCKCYCLES(2,0x8004F858);
ZZ_4F810_48:
	if (!V0)
	{
		S0 = 64;
		ZZ_CLOCKCYCLES(2,0x8004F864);
		goto ZZ_4F810_54;
	}
	S0 = 64;
	S0 = S1;
	ZZ_CLOCKCYCLES(3,0x8004F864);
ZZ_4F810_54:
	if ((int32_t)S0 <= 0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(2,0x8004F890);
		goto ZZ_4F810_80;
	}
	V1 = R0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	ZZ_CLOCKCYCLES(4,0x8004F874);
ZZ_4F810_64:
	V0 = EMU_ReadU16(S2);
	S2 += 2;
	V1 += 2;
	EMU_Write16(A0 + 424,V0); //+ 0x1A8
	V0 = (int32_t)V1 < (int32_t)S0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x8004F874);
		goto ZZ_4F810_64;
	}
	ZZ_CLOCKCYCLES(7,0x8004F890);
ZZ_4F810_80:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	A0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	V0 = A0 & 0xFFCF;
	V0 |= 0x10;
	RA = 0x8004F8B4; //ZZ_4F810_A4
	EMU_Write16(V1 + 426,V0); //+ 0x1AA
	ZZ_CLOCKCYCLES(9,0x80050068);
	goto ZZ_50068;
ZZ_4F810_A4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x400;
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(8,0x8004F920);
		goto ZZ_4F810_110;
	}
	V1 = R0;
	V1 += 1;
	ZZ_CLOCKCYCLES(9,0x8004F8D8);
ZZ_4F810_C8:
	V0 = V1 < 3841;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004F900);
		goto ZZ_4F810_F0;
	}
	A0 = 0x80010000;
	A0 += 4236;
	A1 = 0x80010000;
	RA = 0x8004F8F8; //ZZ_4F810_E8
	A1 += 4268;
	ZZ_CLOCKCYCLES(8,0x800494DC);
	goto ZZ_494DC;
ZZ_4F810_E8:
	ZZ_CLOCKCYCLES(2,0x8004F920);
	goto ZZ_4F810_110;
ZZ_4F810_F0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x400;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(8,0x8004F8D8);
		goto ZZ_4F810_C8;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(8,0x8004F920);
ZZ_4F810_110:
	RA = 0x8004F928; //ZZ_4F810_118
	S1 = S1 - S0;
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F810_118:
	RA = 0x8004F930; //ZZ_4F810_120
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F810_120:
	if (S1)
	{
		V0 = S1 < 65;
		ZZ_CLOCKCYCLES(2,0x8004F858);
		goto ZZ_4F810_48;
	}
	V0 = S1 < 65;
	ZZ_CLOCKCYCLES(2,0x8004F938);
ZZ_4F810_128:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = EMU_ReadU16(V0 + 426); //+ 0x1AA
	A1 = S3 & 0xFFFF;
	V1 = A0 & 0xFFCF;
	EMU_Write16(V0 + 426,V1); //+ 0x1AA
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x7FF;
	if (V0 == A1)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(12,0x8004F9B4);
		goto ZZ_4F810_1A4;
	}
	V1 = R0;
	V1 += 1;
	ZZ_CLOCKCYCLES(13,0x8004F96C);
ZZ_4F810_15C:
	V0 = V1 < 3841;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004F994);
		goto ZZ_4F810_184;
	}
	A0 = 0x80010000;
	A0 += 4236;
	A1 = 0x80010000;
	RA = 0x8004F98C; //ZZ_4F810_17C
	A1 += 4288;
	ZZ_CLOCKCYCLES(8,0x800494DC);
	goto ZZ_494DC;
ZZ_4F810_17C:
	ZZ_CLOCKCYCLES(2,0x8004F9B4);
	goto ZZ_4F810_1A4;
ZZ_4F810_184:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x7FF;
	if (V0 != A1)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(8,0x8004F96C);
		goto ZZ_4F810_15C;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(8,0x8004F9B4);
ZZ_4F810_1A4:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 40;
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8004F728,ZZ_4F590_198);
	ZZ_JUMPREGISTER(0x8004FE20,ZZ_4FDB4_6C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F810,0x8004F850,ZZ_4F810);
ZZ_MARK_TARGET(0x8004F850,0x8004F858,ZZ_4F810_40);
ZZ_MARK_TARGET(0x8004F858,0x8004F864,ZZ_4F810_48);
ZZ_MARK_TARGET(0x8004F864,0x8004F874,ZZ_4F810_54);
ZZ_MARK_TARGET(0x8004F874,0x8004F890,ZZ_4F810_64);
ZZ_MARK_TARGET(0x8004F890,0x8004F8B4,ZZ_4F810_80);
ZZ_MARK_TARGET(0x8004F8B4,0x8004F8D8,ZZ_4F810_A4);
ZZ_MARK_TARGET(0x8004F8D8,0x8004F8F8,ZZ_4F810_C8);
ZZ_MARK_TARGET(0x8004F8F8,0x8004F900,ZZ_4F810_E8);
ZZ_MARK_TARGET(0x8004F900,0x8004F920,ZZ_4F810_F0);
ZZ_MARK_TARGET(0x8004F920,0x8004F928,ZZ_4F810_110);
ZZ_MARK_TARGET(0x8004F928,0x8004F930,ZZ_4F810_118);
ZZ_MARK_TARGET(0x8004F930,0x8004F938,ZZ_4F810_120);
ZZ_MARK_TARGET(0x8004F938,0x8004F96C,ZZ_4F810_128);
ZZ_MARK_TARGET(0x8004F96C,0x8004F98C,ZZ_4F810_15C);
ZZ_MARK_TARGET(0x8004F98C,0x8004F994,ZZ_4F810_17C);
ZZ_MARK_TARGET(0x8004F994,0x8004F9B4,ZZ_4F810_184);
ZZ_MARK_TARGET(0x8004F9B4,0x8004F9D0,ZZ_4F810_1A4);
