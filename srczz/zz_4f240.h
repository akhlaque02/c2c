#ifdef ZZ_INCLUDE_CODE
ZZ_4F240:
	EMU_Write32(A0,GTE_GetRegister(GTE_DREG_SZ1));
	EMU_Write32(A1,GTE_GetRegister(GTE_DREG_SZ2));
	EMU_Write32(A2,GTE_GetRegister(GTE_DREG_SZ3));
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8001F088,ZZ_1EFA8_E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F240,ZZ_4F240);
ZZ_MARK(0x8004F244);
ZZ_MARK(0x8004F248);
ZZ_MARK(0x8004F24C);
ZZ_MARK(0x8004F250);
