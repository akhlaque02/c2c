#ifdef ZZ_INCLUDE_CODE
ZZ_54CCC:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 <<= 16;
	A1 <<= 16;
	A0 = (int32_t)A0 >> 16;
	RA = 0x80054CE8; //ZZ_54CCC_1C
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(7,0x80054C08);
	goto ZZ_54C08;
ZZ_54CCC_1C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80034888,ZZ_347D4_B4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80054CCC,0x80054CE8,ZZ_54CCC);
ZZ_MARK_TARGET(0x80054CE8,0x80054CF8,ZZ_54CCC_1C);
