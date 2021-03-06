#ifdef ZZ_INCLUDE_CODE
ZZ_3DE2C:
	SP -= 68;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 40,S6); //+ 0x28
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 48,T8); //+ 0x30
	EMU_Write32(SP + 52,T9); //+ 0x34
	EMU_Write32(SP + 56,GP); //+ 0x38
	EMU_Write32(SP + 60,FP); //+ 0x3C
	EMU_Write32(SP + 64,RA); //+ 0x40
	V1 = 0x1F800000;
	EMU_Write32(V1,SP);
	EMU_Write32(V1 + 12,A0); //+ 0xC
	FP = A1;
	EMU_Write32(V1 + 96,A2); //+ 0x60
	T8 = EMU_ReadU32(A1 + 8); //+ 0x8
	T9 = EMU_ReadU32(A2 + 160); //+ 0xA0
	EMU_Write32(V1 + 20,T8); //+ 0x14
	EMU_Write32(V1 + 4,T9); //+ 0x4
	T8 = EMU_ReadU32(A2 + 160); //+ 0xA0
	T9 = EMU_ReadU32(A2 + 164); //+ 0xA4
	EMU_Write32(V1 + 8,T8); //+ 0x8
	EMU_Write32(V1 + 16,T9); //+ 0x10
	T8 = EMU_ReadU32(A2 + 12); //+ 0xC
	T9 = EMU_ReadU32(A2);
	T0 = EMU_ReadU32(T8);
	T1 = EMU_ReadU32(T8 + 4); //+ 0x4
	T2 = EMU_ReadU32(T8 + 8); //+ 0x8
	T3 = EMU_ReadU32(T8 + 12); //+ 0xC
	T4 = EMU_ReadU32(T8 + 16); //+ 0x10
	T5 = EMU_ReadU32(T8 + 20); //+ 0x14
	T6 = EMU_ReadU32(T8 + 24); //+ 0x18
	T7 = EMU_ReadU32(T8 + 28); //+ 0x1C
	EMU_Write32(V1 + 24,T9); //+ 0x18
	EMU_Write32(V1 + 32,T0); //+ 0x20
	EMU_Write32(V1 + 36,T1); //+ 0x24
	EMU_Write32(V1 + 40,T2); //+ 0x28
	EMU_Write32(V1 + 44,T3); //+ 0x2C
	EMU_Write32(V1 + 48,T4); //+ 0x30
	EMU_Write32(V1 + 52,T5); //+ 0x34
	EMU_Write32(V1 + 56,T6); //+ 0x38
	EMU_Write32(V1 + 60,T7); //+ 0x3C
	ZZ_CLOCKCYCLES(47,0x8003DF4C);
	goto ZZ_3DE2C_120;
ZZ_3DE2C_BC:
	T8 = EMU_ReadU32(SP + 20); //+ 0x14
	S6 = EMU_ReadU32(SP + 4); //+ 0x4
	T0 = EMU_ReadU32(T8);
	T1 = EMU_ReadU32(T8 + 4); //+ 0x4
	T2 = EMU_ReadU32(T8 + 8); //+ 0x8
	T3 = EMU_ReadU32(T8 + 12); //+ 0xC
	RA = 0x8003DF08; //ZZ_3DE2C_DC
	T4 = EMU_ReadU32(T8 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8004330C);
	goto ZZ_4330C;
ZZ_3DE2C_DC:
	T8 = EMU_ReadU32(SP + 24); //+ 0x18
	S7 = EMU_ReadU32(SP + 12); //+ 0xC
	EMU_Write32(V1 + 28,T8); //+ 0x1C
	T8 = EMU_ReadU32(SP);
	GP = EMU_ReadU32(SP + 16); //+ 0x10
	EMU_Write32(V1 + 12,T8); //+ 0xC
	T9 = EMU_ReadU32(GP + 280); //+ 0x118
	T8 = 1904;
	T9 += T8;
	ZZ_JUMPREGISTER_BEGIN(S6);
	RA = 0x8003DF34; //ZZ_3DE2C_108
	EMU_Write32(V1 + 240,T9); //+ 0xF0
	ZZ_CLOCKCYCLES_JR(11);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S6,8003DF2C)
	ZZ_JUMPREGISTER_END();
ZZ_3DE2C_108:
	T8 = EMU_ReadU32(SP + 8); //+ 0x8
	A2 = EMU_ReadU32(V1 + 96); //+ 0x60
	ZZ_JUMPREGISTER_BEGIN(T8);
	RA = 0x8003DF44; //ZZ_3DE2C_118
	ZZ_CLOCKCYCLES_JR(4);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T8,8003DF3C)
	ZZ_JUMPREGISTER_END();
ZZ_3DE2C_118:
	ZZ_JUMPREGISTER_BEGIN(S7);
	RA = 0x8003DF4C; //ZZ_3DE2C_120
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S7,8003DF44)
	ZZ_JUMPREGISTER_END();
ZZ_3DE2C_120:
	SP = EMU_ReadU32(V1 + 12); //+ 0xC
	if (SP)
	{
		ZZ_CLOCKCYCLES(4,0x8003DEE8);
		goto ZZ_3DE2C_BC;
	}
	T9 = EMU_ReadU32(V1 + 20); //+ 0x14
	SP = EMU_ReadU32(V1);
	EMU_Write32(FP + 8,T9); //+ 0x8
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	FP = EMU_ReadU32(SP + 60); //+ 0x3C
	GP = EMU_ReadU32(SP + 56); //+ 0x38
	T9 = EMU_ReadU32(SP + 52); //+ 0x34
	T8 = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 68;
	ZZ_CLOCKCYCLES_JR(22);
	ZZ_JUMPREGISTER_END();
ZZ_3DE2C_178:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003DE2C,0x8003DEE8,ZZ_3DE2C);
ZZ_MARK_TARGET(0x8003DEE8,0x8003DF08,ZZ_3DE2C_BC);
ZZ_MARK_TARGET(0x8003DF08,0x8003DF34,ZZ_3DE2C_DC);
ZZ_MARK_TARGET(0x8003DF34,0x8003DF44,ZZ_3DE2C_108);
ZZ_MARK_TARGET(0x8003DF44,0x8003DF4C,ZZ_3DE2C_118);
ZZ_MARK_TARGET(0x8003DF4C,0x8003DFA4,ZZ_3DE2C_120);
ZZ_MARK_TARGET(0x8003DFA4,0x8003DFAC,ZZ_3DE2C_178);
