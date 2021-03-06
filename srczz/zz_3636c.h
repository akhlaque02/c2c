#ifdef ZZ_INCLUDE_CODE
ZZ_3636C:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	EMU_Write32(V0 + 8,R0); //+ 0x8
	RA = 0x80036384; //ZZ_3636C_18
	EMU_Write32(V0 + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(6,0x800363C8);
	goto ZZ_363C8;
ZZ_3636C_18:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = R0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80036680,ZZ_36668_18);
	ZZ_JUMPREGISTER(0x80034BA0,ZZ_34B44_5C);
	ZZ_JUMPREGISTER(0x80034D20,ZZ_34BCC_154);
	ZZ_JUMPREGISTER(0x80034B34,ZZ_34A0C_128);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003636C,0x80036384,ZZ_3636C);
ZZ_MARK_TARGET(0x80036384,0x80036394,ZZ_3636C_18);
