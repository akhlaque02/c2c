#ifdef ZZ_INCLUDE_CODE
ZZ_4A900:
	T2 = 192;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 10;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xC0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// ChangeClearRCNT
ZZ_MARK_TARGET(0x8004A900,0x8004A90C,ZZ_4A900);
