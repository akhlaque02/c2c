#ifdef ZZ_INCLUDE_CODE
ZZ_51300:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 10;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// WaitEvent
ZZ_MARK_TARGET(0x80051300,0x8005130C,ZZ_51300);
