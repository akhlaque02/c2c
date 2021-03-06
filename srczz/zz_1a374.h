#ifdef ZZ_INCLUDE_CODE
ZZ_1A374:
	V1 = EMU_ReadU32(GP + 572); //+ 0x23C
	SP -= 56;
	EMU_Write32(SP + 40,S6); //+ 0x28
	S6 = A0;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	V0 = 0x10000;
	V0 |= 0x9000;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80070000;
	EMU_Write32(AT - 12152,R0); //+ 0xFFFFD088
	AT = 0x80070000;
	EMU_Write32(AT - 12144,R0); //+ 0xFFFFD090
	AT = 0x80070000;
	EMU_Write32(AT - 12148,V0); //+ 0xFFFFD08C
	S2 = V1 - 1;
	if ((int32_t)S2 < 0)
	{
		S3 = A1;
		ZZ_CLOCKCYCLES(23,0x8001A5AC);
		goto ZZ_1A374_238;
	}
	S3 = A1;
	S5 = 0x80070000;
	S5 -= 19364;
	S4 = 0x80060000;
	S4 += 12996;
	S7 = S4 - 12;
	V0 = S2 << 1;
	V0 += S2;
	V0 <<= 2;
	S0 = V0 + S4;
	ZZ_CLOCKCYCLES(32,0x8001A3F4);
ZZ_1A374_80:
	V0 = -1;
	if (S3 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001A410);
		goto ZZ_1A374_9C;
	}
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	if (S3 != V0)
	{
		ZZ_CLOCKCYCLES(7,0x8001A5A0);
		goto ZZ_1A374_22C;
	}
	ZZ_CLOCKCYCLES(7,0x8001A410);
ZZ_1A374_9C:
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = 0x13B;
	if (V1 == V0)
	{
		V0 = 0x13C;
		ZZ_CLOCKCYCLES(4,0x8001A4B8);
		goto ZZ_1A374_144;
	}
	V0 = 0x13C;
	if (V1 != V0)
	{
		V0 = 0xFF0000;
		ZZ_CLOCKCYCLES(6,0x8001A5A0);
		goto ZZ_1A374_22C;
	}
	V0 = 0xFF0000;
	A0 = EMU_ReadU32(S0);
	V0 |= 0xFF00;
	S1 = A0 & V0;
	V0 = S1 >> 6;
	V0 += S5;
	V0 = EMU_ReadU32(V0);
	V0 &= 0x1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(16,0x8001A494);
		goto ZZ_1A374_120;
	}
	A0 &= 0xFF;
	V0 = A0 < 8;
	if (!V0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(20,0x8001A494);
		goto ZZ_1A374_120;
	}
	A1 = 0x1;
	V0 = EMU_ReadU32(S6 + 16); //+ 0x10
	A0 <<= 2;
	A0 += 404;
	A2 = R0;
	RA = 0x8001A478; //ZZ_1A374_104
	A0 += V0;
	ZZ_CLOCKCYCLES(26,0x80014364);
	goto ZZ_14364;
ZZ_1A374_104:
	A1 = EMU_ReadU8(S0 + 3); //+ 0x3
	RA = 0x8001A484; //ZZ_1A374_110
	A0 = V0;
	ZZ_CLOCKCYCLES(3,0x800191D4);
	goto ZZ_191D4;
ZZ_1A374_110:
	EMU_Write32(S0 + 4,V0); //+ 0x4
	V0 = (int32_t)V0 < -254;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001A53C);
		goto ZZ_1A374_1C8;
	}
	ZZ_CLOCKCYCLES(4,0x8001A494);
ZZ_1A374_120:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001A4B0);
		goto ZZ_1A374_13C;
	}
	RA = 0x8001A4AC; //ZZ_1A374_138
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x8001A0D8);
	goto ZZ_1A0D8;
ZZ_1A374_138:
	EMU_Write32(S0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8001A4B0);
ZZ_1A374_13C:
	EMU_Write32(S0 + 8,R0); //+ 0x8
	ZZ_CLOCKCYCLES(2,0x8001A5A0);
	goto ZZ_1A374_22C;
ZZ_1A374_144:
	V1 = EMU_ReadU32(S0);
	V0 = 0xFF0000;
	V0 |= 0xFF00;
	S1 = V1 & V0;
	V0 = S1 >> 6;
	V0 += S5;
	V0 = EMU_ReadU32(V0);
	V0 &= 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001A53C);
		goto ZZ_1A374_1C8;
	}
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x8001A504);
		goto ZZ_1A374_190;
	}
	RA = 0x8001A4FC; //ZZ_1A374_188
	A0 = S1;
	ZZ_CLOCKCYCLES(17,0x8001A0D8);
	goto ZZ_1A0D8;
ZZ_1A374_188:
	if (!V0)
	{
		EMU_Write32(S0 + 4,V0); //+ 0x4
		ZZ_CLOCKCYCLES(2,0x8001A53C);
		goto ZZ_1A374_1C8;
	}
	EMU_Write32(S0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(2,0x8001A504);
ZZ_1A374_190:
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = EMU_ReadU32(A0 + 172); //+ 0xAC
	V1 = 0x1000000;
	V0 &= V1;
	if (V0)
	{
		V1 = 0x40000;
		ZZ_CLOCKCYCLES(7,0x8001A53C);
		goto ZZ_1A374_1C8;
	}
	V1 = 0x40000;
	V0 = EMU_ReadU32(A0 + 256); //+ 0x100
	V0 &= V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001A53C);
		goto ZZ_1A374_1C8;
	}
	RA = 0x8001A53C; //ZZ_1A374_1C8
	A1 = 0x1;
	ZZ_CLOCKCYCLES(14,0x80019CF4);
	goto ZZ_19CF4;
ZZ_1A374_1C8:
	V0 = EMU_ReadU32(GP + 572); //+ 0x23C
	A2 = S2 + 1;
	V0 = (int32_t)A2 < (int32_t)V0;
	if (!V0)
	{
		V0 = A2 << 1;
		ZZ_CLOCKCYCLES(5,0x8001A590);
		goto ZZ_1A374_21C;
	}
	V0 = A2 << 1;
	V0 += A2;
	V0 <<= 2;
	T0 = V0 + S7;
	A3 = V0 + S4;
	ZZ_CLOCKCYCLES(9,0x8001A560);
ZZ_1A374_1EC:
	V0 = EMU_ReadU32(A3);
	V1 = EMU_ReadU32(A3 + 4); //+ 0x4
	A0 = EMU_ReadU32(A3 + 8); //+ 0x8
	EMU_Write32(T0,V0);
	EMU_Write32(T0 + 4,V1); //+ 0x4
	EMU_Write32(T0 + 8,A0); //+ 0x8
	V0 = EMU_ReadU32(GP + 572); //+ 0x23C
	T0 += 12;
	A2 += 1;
	V0 = (int32_t)A2 < (int32_t)V0;
	if (V0)
	{
		A3 += 12;
		ZZ_CLOCKCYCLES(12,0x8001A560);
		goto ZZ_1A374_1EC;
	}
	A3 += 12;
	ZZ_CLOCKCYCLES(12,0x8001A590);
ZZ_1A374_21C:
	V0 = EMU_ReadU32(GP + 572); //+ 0x23C
	V0 -= 1;
	EMU_Write32(GP + 572,V0); //+ 0x23C
	ZZ_CLOCKCYCLES(4,0x8001A5A0);
ZZ_1A374_22C:
	S2 -= 1;
	if ((int32_t)S2 >= 0)
	{
		S0 -= 12;
		ZZ_CLOCKCYCLES(3,0x8001A3F4);
		goto ZZ_1A374_80;
	}
	S0 -= 12;
	ZZ_CLOCKCYCLES(3,0x8001A5AC);
ZZ_1A374_238:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x8002FB20,ZZ_2F9D4_14C);
	ZZ_JUMPREGISTER(0x800207D4,ZZ_20304_4D0);
	ZZ_JUMPREGISTER(0x80020A84,ZZ_20304_780);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001A374,0x8001A3F4,ZZ_1A374);
ZZ_MARK_TARGET(0x8001A3F4,0x8001A410,ZZ_1A374_80);
ZZ_MARK_TARGET(0x8001A410,0x8001A478,ZZ_1A374_9C);
ZZ_MARK_TARGET(0x8001A478,0x8001A484,ZZ_1A374_104);
ZZ_MARK_TARGET(0x8001A484,0x8001A494,ZZ_1A374_110);
ZZ_MARK_TARGET(0x8001A494,0x8001A4AC,ZZ_1A374_120);
ZZ_MARK_TARGET(0x8001A4AC,0x8001A4B0,ZZ_1A374_138);
ZZ_MARK_TARGET(0x8001A4B0,0x8001A4B8,ZZ_1A374_13C);
ZZ_MARK_TARGET(0x8001A4B8,0x8001A4FC,ZZ_1A374_144);
ZZ_MARK_TARGET(0x8001A4FC,0x8001A504,ZZ_1A374_188);
ZZ_MARK_TARGET(0x8001A504,0x8001A53C,ZZ_1A374_190);
ZZ_MARK_TARGET(0x8001A53C,0x8001A560,ZZ_1A374_1C8);
ZZ_MARK_TARGET(0x8001A560,0x8001A590,ZZ_1A374_1EC);
ZZ_MARK_TARGET(0x8001A590,0x8001A5A0,ZZ_1A374_21C);
ZZ_MARK_TARGET(0x8001A5A0,0x8001A5AC,ZZ_1A374_22C);
ZZ_MARK_TARGET(0x8001A5AC,0x8001A5DC,ZZ_1A374_238);
