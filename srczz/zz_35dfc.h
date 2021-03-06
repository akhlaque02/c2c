#ifdef ZZ_INCLUDE_CODE
ZZ_35DFC:
	SP -= 24;
	A0 = 0x3E7;
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x80035E10; //ZZ_35DFC_14
	EMU_Write32(SP + 16,S0); //+ 0x10
	ZZ_CLOCKCYCLES(5,0x80031884);
	goto ZZ_31884;
ZZ_35DFC_14:
	A0 = EMU_ReadU32(GP + 548); //+ 0x224
	RA = 0x80035E1C; //ZZ_35DFC_20
	S0 = 0x1;
	ZZ_CLOCKCYCLES(3,0x80049F84);
	goto ZZ_49F84;
ZZ_35DFC_20:
	if (V0 == S0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80035E6C);
		goto ZZ_35DFC_70;
	}
	V0 = R0;
	A0 = EMU_ReadU32(GP + 552); //+ 0x228
	RA = 0x80035E30; //ZZ_35DFC_34
	ZZ_CLOCKCYCLES(5,0x80049F84);
	goto ZZ_49F84;
ZZ_35DFC_34:
	if (V0 == S0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80035E6C);
		goto ZZ_35DFC_70;
	}
	V0 = 0x1;
	A0 = EMU_ReadU32(GP + 556); //+ 0x22C
	RA = 0x80035E44; //ZZ_35DFC_48
	ZZ_CLOCKCYCLES(5,0x80049F84);
	goto ZZ_49F84;
ZZ_35DFC_48:
	if (V0 == S0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(2,0x80035E6C);
		goto ZZ_35DFC_70;
	}
	V0 = 0x2;
	A0 = EMU_ReadU32(GP + 560); //+ 0x230
	RA = 0x80035E58; //ZZ_35DFC_5C
	ZZ_CLOCKCYCLES(5,0x80049F84);
	goto ZZ_49F84;
ZZ_35DFC_5C:
	if (V0 != S0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(2,0x80035E6C);
		goto ZZ_35DFC_70;
	}
	V0 = -1;
	RA = 0x80035E68; //ZZ_35DFC_6C
	A0 = 0x10;
	ZZ_CLOCKCYCLES(4,0x800363C8);
	goto ZZ_363C8;
ZZ_35DFC_6C:
	V0 = 0x3;
	ZZ_CLOCKCYCLES(1,0x80035E6C);
ZZ_35DFC_70:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80034A4C,ZZ_34A0C_40);
	ZZ_JUMPREGISTER(0x80034C18,ZZ_34BCC_4C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80035DFC,0x80035E10,ZZ_35DFC);
ZZ_MARK_TARGET(0x80035E10,0x80035E1C,ZZ_35DFC_14);
ZZ_MARK_TARGET(0x80035E1C,0x80035E30,ZZ_35DFC_20);
ZZ_MARK_TARGET(0x80035E30,0x80035E44,ZZ_35DFC_34);
ZZ_MARK_TARGET(0x80035E44,0x80035E58,ZZ_35DFC_48);
ZZ_MARK_TARGET(0x80035E58,0x80035E68,ZZ_35DFC_5C);
ZZ_MARK_TARGET(0x80035E68,0x80035E6C,ZZ_35DFC_6C);
ZZ_MARK_TARGET(0x80035E6C,0x80035E80,ZZ_35DFC_70);
