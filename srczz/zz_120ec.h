#ifdef ZZ_INCLUDE_CODE
ZZ_120EC:
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadU8(AT - 19408); //+ 0xFFFFB430
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003021C,ZZ_30164_B8);
	ZZ_JUMPREGISTER(0x80015094,ZZ_14D6C_328);
	ZZ_JUMPREGISTER(0x8002EC1C,ZZ_2EB98_84);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800120EC,0x80012100,ZZ_120EC);
