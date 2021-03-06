#ifdef ZZ_INCLUDE_CODE
ZZ_39EA0:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	A0 = S1 >> 12;
	A1 = A0 & 0xFFF;
	A2 = A1;
	V1 = A0 & 0xE00;
	V0 = 0xE00;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	if (V1 != V0)
	{
		EMU_Write32(SP + 24,S2); //+ 0x18
		ZZ_CLOCKCYCLES(13,0x80039F08);
		goto ZZ_39EA0_68;
	}
	EMU_Write32(SP + 24,S2); //+ 0x18
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = A0 & 0x1FF;
		ZZ_CLOCKCYCLES(16,0x80039EF8);
		goto ZZ_39EA0_58;
	}
	V0 = A0 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	S2 = V0;
	EMU_Write32(S0 + 188,S2); //+ 0xBC
	ZZ_CLOCKCYCLES(22,0x80039F18);
	goto ZZ_39EA0_78;
ZZ_39EA0_58:
	V0 <<= 2;
	V0 += 64;
	S2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80039F18);
	goto ZZ_39EA0_78;
ZZ_39EA0_68:
	A0 = S0;
	RA = 0x80039F14; //ZZ_39EA0_74
	A1 = A2;
	ZZ_CLOCKCYCLES(3,0x80036FA4);
	goto ZZ_36FA4;
ZZ_39EA0_74:
	S2 = V0;
	ZZ_CLOCKCYCLES(1,0x80039F18);
ZZ_39EA0_78:
	A0 = S1 & 0xFFF;
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(5,0x80039F60);
		goto ZZ_39EA0_C0;
	}
	A1 = A0;
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(8,0x80039F50);
		goto ZZ_39EA0_B0;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	A2 = V0;
	EMU_Write32(S0 + 188,A2); //+ 0xBC
	ZZ_CLOCKCYCLES(14,0x80039F6C);
	goto ZZ_39EA0_CC;
ZZ_39EA0_B0:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80039F6C);
	goto ZZ_39EA0_CC;
ZZ_39EA0_C0:
	RA = 0x80039F68; //ZZ_39EA0_C8
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_39EA0_C8:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x80039F6C);
ZZ_39EA0_CC:
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	A0 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 = V1 - 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	A1 = EMU_ReadU32(V1 - 4); //+ 0xFFFFFFFC
	T0 = EMU_ReadU32(A0 + 36); //+ 0x24
	V0 = V1 - 8;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	A0 = EMU_ReadU32(V1 - 8); //+ 0xFFFFFFF8
	A2 = EMU_ReadU32(A2);
	A3 = EMU_ReadU32(S2);
	A1 >>= 8;
	A1 <<= 2;
	RA = 0x80039FA8; //ZZ_39EA0_108
	A1 += T0;
	ZZ_CLOCKCYCLES(15,0x80027874);
	goto ZZ_27874;
ZZ_39EA0_108:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003A26C,ZZ_3A234_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80039EA0,0x80039EF8,ZZ_39EA0);
ZZ_MARK_TARGET(0x80039EF8,0x80039F08,ZZ_39EA0_58);
ZZ_MARK_TARGET(0x80039F08,0x80039F14,ZZ_39EA0_68);
ZZ_MARK_TARGET(0x80039F14,0x80039F18,ZZ_39EA0_74);
ZZ_MARK_TARGET(0x80039F18,0x80039F50,ZZ_39EA0_78);
ZZ_MARK_TARGET(0x80039F50,0x80039F60,ZZ_39EA0_B0);
ZZ_MARK_TARGET(0x80039F60,0x80039F68,ZZ_39EA0_C0);
ZZ_MARK_TARGET(0x80039F68,0x80039F6C,ZZ_39EA0_C8);
ZZ_MARK_TARGET(0x80039F6C,0x80039FA8,ZZ_39EA0_CC);
ZZ_MARK_TARGET(0x80039FA8,0x80039FC4,ZZ_39EA0_108);
