#ifdef ZZ_INCLUDE_CODE
ZZ_45B10:
	A0 = EMU_ReadU32(V1 + 300); //+ 0x12C
	T9 ^= A0;
	if ((int32_t)T9 < 0)
	{
		ZZ_CLOCKCYCLES(5,0x80045B2C);
		goto ZZ_45B10_1C;
	}
	ZZ_JUMPREGISTER_BEGIN(S3);
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED INDIRECT JUMP (S3,80045B24)
	// PC IS 80045B24
	ZZ_JUMPREGISTER_END();
ZZ_45B10_1C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80045B08,ZZ_454B0_658);
	ZZ_JUMPREGISTER(0x80045A44,ZZ_454B0_594);
	ZZ_JUMPREGISTER(0x80045930,ZZ_454B0_480);
	ZZ_JUMPREGISTER(0x8004581C,ZZ_454B0_36C);
	ZZ_JUMPREGISTER(0x80045A88,ZZ_454B0_5D8);
	ZZ_JUMPREGISTER(0x80045974,ZZ_454B0_4C4);
	ZZ_JUMPREGISTER(0x80045860,ZZ_454B0_3B0);
	ZZ_JUMPREGISTER(0x80045ACC,ZZ_454B0_61C);
	ZZ_JUMPREGISTER(0x800459B8,ZZ_454B0_508);
	ZZ_JUMPREGISTER(0x800458A4,ZZ_454B0_3F4);
	ZZ_JUMPREGISTER_END();
ZZ_45B10_124:
	T8 = EMU_ReadU32(A2 + 60); //+ 0x3C
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 144,T8); //+ 0x90
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80045B08,ZZ_454B0_658);
	ZZ_JUMPREGISTER(0x80045A44,ZZ_454B0_594);
	ZZ_JUMPREGISTER(0x80045930,ZZ_454B0_480);
	ZZ_JUMPREGISTER(0x8004581C,ZZ_454B0_36C);
	ZZ_JUMPREGISTER(0x80045A88,ZZ_454B0_5D8);
	ZZ_JUMPREGISTER(0x80045974,ZZ_454B0_4C4);
	ZZ_JUMPREGISTER(0x80045860,ZZ_454B0_3B0);
	ZZ_JUMPREGISTER(0x80045ACC,ZZ_454B0_61C);
	ZZ_JUMPREGISTER(0x800459B8,ZZ_454B0_508);
	ZZ_JUMPREGISTER(0x800458A4,ZZ_454B0_3F4);
	ZZ_JUMPREGISTER_END();
ZZ_45B10_130:
	GTE_SetRegister(GTE_DREG_IR0,EMU_ReadU32(V1 + 144)); //+ 0x90
	GTE_SetRegister(GTE_DREG_RGBC,T5);
	AT <<= 13;
	if ((int32_t)AT < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(5,0x80045CCC);
		goto ZZ_45B10_1BC;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	GTE_Execute(7864336);
	A3 <<= 13;
	if ((int32_t)A3 >= 0)
	{
		T9 = 4080;
		ZZ_CLOCKCYCLES(14,0x80045D00);
		goto ZZ_45B10_1F0;
	}
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(17,0x80045C84);
ZZ_45B10_174:
	T5 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T6);
	GTE_Execute(7864336);
	T0 <<= 13;
	if ((int32_t)T0 < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(8,0x80045D2C);
		goto ZZ_45B10_21C;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045CB0);
ZZ_45B10_1A0:
	T6 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T7);
	GTE_Execute(7864336);
	T7 = GTE_GetRegister(GTE_DREG_RGB2);
	T9 = 4080;
	ZZ_CLOCKCYCLES(8,0x800427E0);
	goto ZZ_420F4_6EC;
	ZZ_CLOCKCYCLES(7,0x80045CCC);
ZZ_45B10_1BC:
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	GTE_Execute(7864336);
	A3 <<= 13;
	if ((int32_t)A3 < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(10,0x80045C84);
		goto ZZ_45B10_174;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(13,0x80045D00);
ZZ_45B10_1F0:
	T5 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T6);
	GTE_Execute(7864336);
	T0 <<= 13;
	if ((int32_t)T0 >= 0)
	{
		T9 = 4080;
		ZZ_CLOCKCYCLES(8,0x80045CB0);
		goto ZZ_45B10_1A0;
	}
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045D2C);
ZZ_45B10_21C:
	T6 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T7);
	GTE_Execute(7864336);
	T7 = GTE_GetRegister(GTE_DREG_RGB2);
	ZZ_CLOCKCYCLES(8,0x800427E0);
	goto ZZ_420F4_6EC;
ZZ_45B10_23C:
	GTE_SetRegister(GTE_DREG_IR0,EMU_ReadU32(V1 + 144)); //+ 0x90
	GTE_SetRegister(GTE_DREG_RGBC,T5);
	AT <<= 13;
	if ((int32_t)AT < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(5,0x80045E04);
		goto ZZ_45B10_2F4;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	GTE_Execute(7864336);
	A3 <<= 13;
	if ((int32_t)A3 >= 0)
	{
		T9 = 4080;
		ZZ_CLOCKCYCLES(14,0x80045E38);
		goto ZZ_45B10_328;
	}
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(17,0x80045D90);
ZZ_45B10_280:
	T5 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T6);
	GTE_Execute(7864336);
	T0 <<= 13;
	if ((int32_t)T0 < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(8,0x80045E64);
		goto ZZ_45B10_354;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045DBC);
ZZ_45B10_2AC:
	T6 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T7);
	GTE_Execute(7864336);
	A0 <<= 13;
	if ((int32_t)A0 >= 0)
	{
		T9 = 4080;
		ZZ_CLOCKCYCLES(8,0x80045E90);
		goto ZZ_45B10_380;
	}
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045DE8);
ZZ_45B10_2D8:
	T7 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,A1);
	GTE_Execute(7864336);
	A1 = GTE_GetRegister(GTE_DREG_RGB2);
	T9 = 4080;
	ZZ_CLOCKCYCLES(8,0x80042AB0);
	goto ZZ_420F4_9BC;
	ZZ_CLOCKCYCLES(7,0x80045E04);
ZZ_45B10_2F4:
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	GTE_Execute(7864336);
	A3 <<= 13;
	if ((int32_t)A3 < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(10,0x80045D90);
		goto ZZ_45B10_280;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(13,0x80045E38);
ZZ_45B10_328:
	T5 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T6);
	GTE_Execute(7864336);
	T0 <<= 13;
	if ((int32_t)T0 >= 0)
	{
		T9 = 4080;
		ZZ_CLOCKCYCLES(8,0x80045DBC);
		goto ZZ_45B10_2AC;
	}
	T9 = 4080;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045E64);
ZZ_45B10_354:
	T6 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,T7);
	GTE_Execute(7864336);
	A0 <<= 13;
	if ((int32_t)A0 < 0)
	{
		T9 = 512;
		ZZ_CLOCKCYCLES(8,0x80045DE8);
		goto ZZ_45B10_2D8;
	}
	T9 = 512;
	GTE_SetRegister(GTE_CREG_RFC,T9);
	GTE_SetRegister(GTE_CREG_GFC,T9);
	GTE_SetRegister(GTE_CREG_BFC,T9);
	ZZ_CLOCKCYCLES(11,0x80045E90);
ZZ_45B10_380:
	T7 = GTE_GetRegister(GTE_DREG_RGB2);
	GTE_SetRegister(GTE_DREG_RGBC,A1);
	GTE_Execute(7864336);
	A1 = GTE_GetRegister(GTE_DREG_RGB2);
	ZZ_CLOCKCYCLES(8,0x80042AB0);
	goto ZZ_420F4_9BC;
ZZ_45B10_3A0:
	GTE_SetRegister(GTE_CREG_RFC,R0);
	GTE_SetRegister(GTE_CREG_GFC,R0);
	GTE_SetRegister(GTE_CREG_BFC,R0);
	GTE_SetRegister(GTE_DREG_IR0,R0);
	T8 = EMU_ReadS16(A2 + 140); //+ 0x8C
	T9 = EMU_ReadU32(A2 + 144); //+ 0x90
	A0 = EMU_ReadU32(A2 + 148); //+ 0x94
	A1 = EMU_ReadU32(A2 + 152); //+ 0x98
	EMU_Write32(V1 + 368,A0); //+ 0x170
	A0 = EMU_ReadU32(A2 + 176); //+ 0xB0
	EMU_Write32(V1 + 460,A1); //+ 0x1CC
	EMU_Write32(V1 + 468,A0); //+ 0x1D4
	T8 = EMU_CheckedAdd(T8,512);
	T9 = EMU_CheckedAdd(T9,512);
	EMU_Write32(V1 + 148,T8); //+ 0x94
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 152,T9); //+ 0x98
	ZZ_CLOCKCYCLES_JR(17);
	ZZ_JUMPREGISTER(0x80045B08,ZZ_454B0_658);
	ZZ_JUMPREGISTER(0x80045A44,ZZ_454B0_594);
	ZZ_JUMPREGISTER(0x80045930,ZZ_454B0_480);
	ZZ_JUMPREGISTER(0x8004581C,ZZ_454B0_36C);
	ZZ_JUMPREGISTER(0x80045A88,ZZ_454B0_5D8);
	ZZ_JUMPREGISTER(0x80045974,ZZ_454B0_4C4);
	ZZ_JUMPREGISTER(0x80045860,ZZ_454B0_3B0);
	ZZ_JUMPREGISTER(0x80045ACC,ZZ_454B0_61C);
	ZZ_JUMPREGISTER(0x800459B8,ZZ_454B0_508);
	ZZ_JUMPREGISTER(0x800458A4,ZZ_454B0_3F4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80045B10,ZZ_45B10);
ZZ_MARK(0x80045B14);
ZZ_MARK(0x80045B18);
ZZ_MARK(0x80045B1C);
ZZ_MARK(0x80045B20);
ZZ_MARK(0x80045B24);
ZZ_MARK(0x80045B28);
ZZ_MARK_TARGET(0x80045B2C,ZZ_45B10_1C);
ZZ_MARK(0x80045B30);
ZZ_MARK_TARGET(0x80045C34,ZZ_45B10_124);
ZZ_MARK(0x80045C38);
ZZ_MARK(0x80045C3C);
ZZ_MARK_TARGET(0x80045C40,ZZ_45B10_130);
ZZ_MARK(0x80045C44);
ZZ_MARK(0x80045C48);
ZZ_MARK(0x80045C4C);
ZZ_MARK(0x80045C50);
ZZ_MARK(0x80045C54);
ZZ_MARK(0x80045C58);
ZZ_MARK(0x80045C5C);
ZZ_MARK(0x80045C60);
ZZ_MARK(0x80045C64);
ZZ_MARK(0x80045C68);
ZZ_MARK(0x80045C6C);
ZZ_MARK(0x80045C70);
ZZ_MARK(0x80045C74);
ZZ_MARK(0x80045C78);
ZZ_MARK(0x80045C7C);
ZZ_MARK(0x80045C80);
ZZ_MARK_TARGET(0x80045C84,ZZ_45B10_174);
ZZ_MARK(0x80045C88);
ZZ_MARK(0x80045C8C);
ZZ_MARK(0x80045C90);
ZZ_MARK(0x80045C94);
ZZ_MARK(0x80045C98);
ZZ_MARK(0x80045C9C);
ZZ_MARK(0x80045CA0);
ZZ_MARK(0x80045CA4);
ZZ_MARK(0x80045CA8);
ZZ_MARK(0x80045CAC);
ZZ_MARK_TARGET(0x80045CB0,ZZ_45B10_1A0);
ZZ_MARK(0x80045CB4);
ZZ_MARK(0x80045CB8);
ZZ_MARK(0x80045CBC);
ZZ_MARK(0x80045CC0);
ZZ_MARK(0x80045CC4);
ZZ_MARK(0x80045CC8);
ZZ_MARK_TARGET(0x80045CCC,ZZ_45B10_1BC);
ZZ_MARK(0x80045CD0);
ZZ_MARK(0x80045CD4);
ZZ_MARK(0x80045CD8);
ZZ_MARK(0x80045CDC);
ZZ_MARK(0x80045CE0);
ZZ_MARK(0x80045CE4);
ZZ_MARK(0x80045CE8);
ZZ_MARK(0x80045CEC);
ZZ_MARK(0x80045CF0);
ZZ_MARK(0x80045CF4);
ZZ_MARK(0x80045CF8);
ZZ_MARK(0x80045CFC);
ZZ_MARK_TARGET(0x80045D00,ZZ_45B10_1F0);
ZZ_MARK(0x80045D04);
ZZ_MARK(0x80045D08);
ZZ_MARK(0x80045D0C);
ZZ_MARK(0x80045D10);
ZZ_MARK(0x80045D14);
ZZ_MARK(0x80045D18);
ZZ_MARK(0x80045D1C);
ZZ_MARK(0x80045D20);
ZZ_MARK(0x80045D24);
ZZ_MARK(0x80045D28);
ZZ_MARK_TARGET(0x80045D2C,ZZ_45B10_21C);
ZZ_MARK(0x80045D30);
ZZ_MARK(0x80045D34);
ZZ_MARK(0x80045D38);
ZZ_MARK(0x80045D3C);
ZZ_MARK(0x80045D40);
ZZ_MARK(0x80045D44);
ZZ_MARK(0x80045D48);
ZZ_MARK_TARGET(0x80045D4C,ZZ_45B10_23C);
ZZ_MARK(0x80045D50);
ZZ_MARK(0x80045D54);
ZZ_MARK(0x80045D58);
ZZ_MARK(0x80045D5C);
ZZ_MARK(0x80045D60);
ZZ_MARK(0x80045D64);
ZZ_MARK(0x80045D68);
ZZ_MARK(0x80045D6C);
ZZ_MARK(0x80045D70);
ZZ_MARK(0x80045D74);
ZZ_MARK(0x80045D78);
ZZ_MARK(0x80045D7C);
ZZ_MARK(0x80045D80);
ZZ_MARK(0x80045D84);
ZZ_MARK(0x80045D88);
ZZ_MARK(0x80045D8C);
ZZ_MARK_TARGET(0x80045D90,ZZ_45B10_280);
ZZ_MARK(0x80045D94);
ZZ_MARK(0x80045D98);
ZZ_MARK(0x80045D9C);
ZZ_MARK(0x80045DA0);
ZZ_MARK(0x80045DA4);
ZZ_MARK(0x80045DA8);
ZZ_MARK(0x80045DAC);
ZZ_MARK(0x80045DB0);
ZZ_MARK(0x80045DB4);
ZZ_MARK(0x80045DB8);
ZZ_MARK_TARGET(0x80045DBC,ZZ_45B10_2AC);
ZZ_MARK(0x80045DC0);
ZZ_MARK(0x80045DC4);
ZZ_MARK(0x80045DC8);
ZZ_MARK(0x80045DCC);
ZZ_MARK(0x80045DD0);
ZZ_MARK(0x80045DD4);
ZZ_MARK(0x80045DD8);
ZZ_MARK(0x80045DDC);
ZZ_MARK(0x80045DE0);
ZZ_MARK(0x80045DE4);
ZZ_MARK_TARGET(0x80045DE8,ZZ_45B10_2D8);
ZZ_MARK(0x80045DEC);
ZZ_MARK(0x80045DF0);
ZZ_MARK(0x80045DF4);
ZZ_MARK(0x80045DF8);
ZZ_MARK(0x80045DFC);
ZZ_MARK(0x80045E00);
ZZ_MARK_TARGET(0x80045E04,ZZ_45B10_2F4);
ZZ_MARK(0x80045E08);
ZZ_MARK(0x80045E0C);
ZZ_MARK(0x80045E10);
ZZ_MARK(0x80045E14);
ZZ_MARK(0x80045E18);
ZZ_MARK(0x80045E1C);
ZZ_MARK(0x80045E20);
ZZ_MARK(0x80045E24);
ZZ_MARK(0x80045E28);
ZZ_MARK(0x80045E2C);
ZZ_MARK(0x80045E30);
ZZ_MARK(0x80045E34);
ZZ_MARK_TARGET(0x80045E38,ZZ_45B10_328);
ZZ_MARK(0x80045E3C);
ZZ_MARK(0x80045E40);
ZZ_MARK(0x80045E44);
ZZ_MARK(0x80045E48);
ZZ_MARK(0x80045E4C);
ZZ_MARK(0x80045E50);
ZZ_MARK(0x80045E54);
ZZ_MARK(0x80045E58);
ZZ_MARK(0x80045E5C);
ZZ_MARK(0x80045E60);
ZZ_MARK_TARGET(0x80045E64,ZZ_45B10_354);
ZZ_MARK(0x80045E68);
ZZ_MARK(0x80045E6C);
ZZ_MARK(0x80045E70);
ZZ_MARK(0x80045E74);
ZZ_MARK(0x80045E78);
ZZ_MARK(0x80045E7C);
ZZ_MARK(0x80045E80);
ZZ_MARK(0x80045E84);
ZZ_MARK(0x80045E88);
ZZ_MARK(0x80045E8C);
ZZ_MARK_TARGET(0x80045E90,ZZ_45B10_380);
ZZ_MARK(0x80045E94);
ZZ_MARK(0x80045E98);
ZZ_MARK(0x80045E9C);
ZZ_MARK(0x80045EA0);
ZZ_MARK(0x80045EA4);
ZZ_MARK(0x80045EA8);
ZZ_MARK(0x80045EAC);
ZZ_MARK_TARGET(0x80045EB0,ZZ_45B10_3A0);
ZZ_MARK(0x80045EB4);
ZZ_MARK(0x80045EB8);
ZZ_MARK(0x80045EBC);
ZZ_MARK(0x80045EC0);
ZZ_MARK(0x80045EC4);
ZZ_MARK(0x80045EC8);
ZZ_MARK(0x80045ECC);
ZZ_MARK(0x80045ED0);
ZZ_MARK(0x80045ED4);
ZZ_MARK(0x80045ED8);
ZZ_MARK(0x80045EDC);
ZZ_MARK(0x80045EE0);
ZZ_MARK(0x80045EE4);
ZZ_MARK(0x80045EE8);
ZZ_MARK(0x80045EEC);
ZZ_MARK(0x80045EF0);
