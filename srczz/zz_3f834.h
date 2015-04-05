#ifdef ZZ_INCLUDE_CODE
ZZ_3F834:
	EMU_Write32(V1 + 100,RA); //+ 0x64
	T8 = EMU_ReadU32(V1 + 124); //+ 0x7C
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	A0 = EMU_ReadU32(V1 + 116); //+ 0x74
	if ((int32_t)T8 >= 0)
	{
		T8 = EMU_CheckedAdd(V1,176);
		ZZ_CLOCKCYCLES(6,0x8003F880);
		goto ZZ_3F834_4C;
	}
	T8 = EMU_CheckedAdd(V1,176);
	if ((int32_t)T9 >= 0)
	{
		T9 = EMU_CheckedAdd(V1,128);
		ZZ_CLOCKCYCLES(8,0x8003F864);
		goto ZZ_3F834_30;
	}
	T9 = EMU_CheckedAdd(V1,128);
	if ((int32_t)A0 < 0)
	{
		A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
		ZZ_CLOCKCYCLES(10,0x8003FC04);
		goto ZZ_3F834_3D0;
	}
	A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
	AT = EMU_ReadU32(V1 + 248); //+ 0xF8
	ZZ_CLOCKCYCLES(12,0x8003F8B0);
	goto ZZ_3F834_7C;
ZZ_3F834_30:
	if ((int32_t)A0 >= 0)
	{
		A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
		ZZ_CLOCKCYCLES(2,0x8003F874);
		goto ZZ_3F834_40;
	}
	A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
	AT = EMU_ReadU32(V1 + 248); //+ 0xF8
	ZZ_CLOCKCYCLES(4,0x8003F9B8);
	goto ZZ_3F834_184;
ZZ_3F834_40:
	A1 = EMU_ReadU32(V1 + 248); //+ 0xF8
	AT = EMU_ReadU32(V1 + 244); //+ 0xF4
	ZZ_CLOCKCYCLES(3,0x8003FAC0);
	goto ZZ_3F834_28C;
ZZ_3F834_4C:
	if ((int32_t)T9 >= 0)
	{
		T9 = EMU_CheckedAdd(V1,128);
		ZZ_CLOCKCYCLES(2,0x8003F8A4);
		goto ZZ_3F834_70;
	}
	T9 = EMU_CheckedAdd(V1,128);
	if ((int32_t)A0 >= 0)
	{
		A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
		ZZ_CLOCKCYCLES(4,0x8003F898);
		goto ZZ_3F834_64;
	}
	A1 = EMU_ReadU32(V1 + 244); //+ 0xF4
	AT = EMU_ReadU32(V1 + 248); //+ 0xF8
	ZZ_CLOCKCYCLES(6,0x8003FAC0);
	goto ZZ_3F834_28C;
ZZ_3F834_64:
	A1 = EMU_ReadU32(V1 + 248); //+ 0xF8
	AT = EMU_ReadU32(V1 + 244); //+ 0xF4
	ZZ_CLOCKCYCLES(3,0x8003F9B8);
	goto ZZ_3F834_184;
ZZ_3F834_70:
	if ((int32_t)A0 >= 0)
	{
		A1 = EMU_ReadU32(V1 + 248); //+ 0xF8
		ZZ_CLOCKCYCLES(2,0x8003FBEC);
		goto ZZ_3F834_3B8;
	}
	A1 = EMU_ReadU32(V1 + 248); //+ 0xF8
	AT = EMU_ReadU32(V1 + 244); //+ 0xF4
	ZZ_CLOCKCYCLES(3,0x8003F8B0);
ZZ_3F834_7C:
	RA = 0x8003F8B8; //ZZ_3F834_84
	EMU_Write32(V1 + 240,A1); //+ 0xF0
	ZZ_CLOCKCYCLES(2,0x8003FC20);
	goto ZZ_3FC20;
ZZ_3F834_84:
	RA = 0x8003F8C0; //ZZ_3F834_8C
	A0 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(2,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_8C:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x8003F8CC; //ZZ_3F834_98
	A0 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(3,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_98:
	GTE_SetRegister(GTE_DREG_VXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_VZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_VXY2,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetRegister(GTE_DREG_VZ2,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	GTE_RotateTranslateProjectTriple();
	EMU_Write32(V1 + 192,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 228)); //+ 0xE4
	if (!A2)
	{
		T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
		ZZ_CLOCKCYCLES(18,0x8003F92C);
		goto ZZ_3F834_F8;
	}
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(24,0x8003F92C);
ZZ_3F834_F8:
	RA = 0x8003F934; //ZZ_3F834_100
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(2,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_100:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 196)); //+ 0xC4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
		ZZ_CLOCKCYCLES(7,0x8003F960);
		goto ZZ_3F834_12C;
	}
	T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T8 = EMU_ReadS16(V1 + 172); //+ 0xAC
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(11,0x8003F960);
ZZ_3F834_12C:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003F970; //ZZ_3F834_13C
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_13C:
	EMU_Write32(V1 + 240,AT); //+ 0xF0
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 212)); //+ 0xD4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(8,0x8003F9A0);
		goto ZZ_3F834_16C;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 140); //+ 0x8C
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(12,0x8003F9A0);
ZZ_3F834_16C:
	T6 = EMU_ReadU32(V1 + 136); //+ 0x88
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003F9B0; //ZZ_3F834_17C
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_17C:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x8003FBC4);
	goto ZZ_3F834_390;
ZZ_3F834_184:
	RA = 0x8003F9C0; //ZZ_3F834_18C
	EMU_Write32(V1 + 240,A1); //+ 0xF0
	ZZ_CLOCKCYCLES(2,0x8003FC20);
	goto ZZ_3FC20;
ZZ_3F834_18C:
	RA = 0x8003F9C8; //ZZ_3F834_194
	A0 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(2,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_194:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x8003F9D4; //ZZ_3F834_1A0
	T9 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(3,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_1A0:
	GTE_SetRegister(GTE_DREG_VXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_VZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_VXY2,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetRegister(GTE_DREG_VZ2,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T6 = EMU_ReadU32(V1 + 136); //+ 0x88
	GTE_RotateTranslateProjectTriple();
	EMU_Write32(V1 + 192,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 212)); //+ 0xD4
	if (!A2)
	{
		T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
		ZZ_CLOCKCYCLES(18,0x8003FA34);
		goto ZZ_3F834_200;
	}
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 = EMU_ReadS16(V1 + 172); //+ 0xAC
	T9 = EMU_ReadS16(V1 + 140); //+ 0x8C
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(24,0x8003FA34);
ZZ_3F834_200:
	RA = 0x8003FA3C; //ZZ_3F834_208
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_208:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 228)); //+ 0xE4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(7,0x8003FA68);
		goto ZZ_3F834_234;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(11,0x8003FA68);
ZZ_3F834_234:
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003FA78; //ZZ_3F834_244
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_244:
	EMU_Write32(V1 + 240,AT); //+ 0xF0
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 196)); //+ 0xC4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 152); //+ 0x98
		ZZ_CLOCKCYCLES(8,0x8003FAA8);
		goto ZZ_3F834_274;
	}
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(12,0x8003FAA8);
ZZ_3F834_274:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003FAB8; //ZZ_3F834_284
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_284:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x8003FBC4);
	goto ZZ_3F834_390;
ZZ_3F834_28C:
	RA = 0x8003FAC8; //ZZ_3F834_294
	EMU_Write32(V1 + 240,A1); //+ 0xF0
	ZZ_CLOCKCYCLES(2,0x8003FC20);
	goto ZZ_3FC20;
ZZ_3F834_294:
	RA = 0x8003FAD0; //ZZ_3F834_29C
	A0 = EMU_CheckedAdd(V1,160);
	ZZ_CLOCKCYCLES(2,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_29C:
	T8 = EMU_CheckedAdd(V1,192);
	RA = 0x8003FADC; //ZZ_3F834_2A8
	T9 = EMU_CheckedAdd(V1,144);
	ZZ_CLOCKCYCLES(3,0x8003FC84);
	goto ZZ_3FC84;
ZZ_3F834_2A8:
	GTE_SetRegister(GTE_DREG_VXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_VZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_VXY2,EMU_ReadU32(V1 + 176)); //+ 0xB0
	GTE_SetRegister(GTE_DREG_VZ2,EMU_ReadU32(V1 + 180)); //+ 0xB4
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	T6 = EMU_ReadU32(V1 + 152); //+ 0x98
	GTE_RotateTranslateProjectTriple();
	EMU_Write32(V1 + 192,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0xC0
	EMU_Write32(V1 + 196,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0xC4
	EMU_Write32(V1 + 176,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xB0
	EMU_Write32(V1 + 180,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xB4
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 212)); //+ 0xD4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 220)); //+ 0xDC
	if (!A2)
	{
		T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
		ZZ_CLOCKCYCLES(18,0x8003FB3C);
		goto ZZ_3F834_308;
	}
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	T8 = EMU_ReadS16(V1 + 140); //+ 0x8C
	T9 = EMU_ReadS16(V1 + 156); //+ 0x9C
	A0 = EMU_ReadS16(V1 + 188); //+ 0xBC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	EMU_Write16(V1 + 264,A0); //+ 0x108
	ZZ_CLOCKCYCLES(24,0x8003FB3C);
ZZ_3F834_308:
	RA = 0x8003FB44; //ZZ_3F834_310
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_310:
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 196)); //+ 0xC4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 152); //+ 0x98
		ZZ_CLOCKCYCLES(7,0x8003FB70);
		goto ZZ_3F834_33C;
	}
	T5 = EMU_ReadU32(V1 + 152); //+ 0x98
	T8 = EMU_ReadS16(V1 + 156); //+ 0x9C
	T9 = EMU_ReadS16(V1 + 204); //+ 0xCC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(11,0x8003FB70);
ZZ_3F834_33C:
	T6 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003FB80; //ZZ_3F834_34C
	T9 = EMU_ReadU32(V1 + 120); //+ 0x78
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_34C:
	EMU_Write32(V1 + 240,AT); //+ 0xF0
	A2 = EMU_ReadU32(V1 + 112); //+ 0x70
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 192)); //+ 0xC0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 196)); //+ 0xC4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 228)); //+ 0xE4
	if (!A2)
	{
		T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
		ZZ_CLOCKCYCLES(8,0x8003FBB0);
		goto ZZ_3F834_37C;
	}
	T5 = EMU_ReadU32(V1 + 200); //+ 0xC8
	T8 = EMU_ReadS16(V1 + 204); //+ 0xCC
	T9 = EMU_ReadS16(V1 + 172); //+ 0xAC
	EMU_Write16(V1 + 256,T8); //+ 0x100
	EMU_Write16(V1 + 260,T9); //+ 0x104
	ZZ_CLOCKCYCLES(12,0x8003FBB0);
ZZ_3F834_37C:
	T6 = EMU_ReadU32(V1 + 168); //+ 0xA8
	T7 = EMU_ReadU32(V1 + 184); //+ 0xB8
	RA = 0x8003FBC0; //ZZ_3F834_38C
	T9 = EMU_ReadU32(V1 + 124); //+ 0x7C
	ZZ_CLOCKCYCLES(4,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_38C:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(1,0x8003FBC4);
ZZ_3F834_390:
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 208)); //+ 0xD0
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 212)); //+ 0xD4
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetRegister(GTE_DREG_SXY2,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ3,EMU_ReadU32(V1 + 228)); //+ 0xE4
	ZZ_CLOCKCYCLES(6,0x8003FBDC);
ZZ_3F834_3A8:
	T6 = EMU_ReadU32(V1 + 152); //+ 0x98
	T7 = EMU_ReadU32(V1 + 168); //+ 0xA8
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	ZZ_CLOCKCYCLES(4,0x8003FC18);
	goto ZZ_3F834_3E4;
ZZ_3F834_3B8:
	RA = 0x8003FBF4; //ZZ_3F834_3C0
	EMU_Write32(V1 + 240,A1); //+ 0xF0
	ZZ_CLOCKCYCLES(2,0x8003FC20);
	goto ZZ_3FC20;
ZZ_3F834_3C0:
	RA = 0x8003FBFC; //ZZ_3F834_3C8
	T9 = EMU_ReadU32(V1 + 116); //+ 0x74
	ZZ_CLOCKCYCLES(2,0x8003FDBC);
	goto ZZ_3FDBC;
ZZ_3F834_3C8:
	T5 = EMU_ReadU32(V1 + 136); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x8003FBDC);
	goto ZZ_3F834_3A8;
ZZ_3F834_3D0:
	T8 = A2 + S1;
	EMU_Write32(V1 + 240,A1); //+ 0xF0
	EMU_Write32(V1 + 112,T8); //+ 0x70
	ZZ_JUMPREGISTER_BEGIN(S3);
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	ZZ_CLOCKCYCLES_JR(5);
	// UNIMPLEMENTED INDIRECT JUMP (S3,8003FC10)
	// PC IS 8003FC10
	ZZ_JUMPREGISTER_END();
ZZ_3F834_3E4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8003E2C0,ZZ_3DFAC_314);
	ZZ_JUMPREGISTER(0x8003F370,ZZ_3EFAC_3C4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003F834,ZZ_3F834);
ZZ_MARK(0x8003F838);
ZZ_MARK(0x8003F83C);
ZZ_MARK(0x8003F840);
ZZ_MARK(0x8003F844);
ZZ_MARK(0x8003F848);
ZZ_MARK(0x8003F84C);
ZZ_MARK(0x8003F850);
ZZ_MARK(0x8003F854);
ZZ_MARK(0x8003F858);
ZZ_MARK(0x8003F85C);
ZZ_MARK(0x8003F860);
ZZ_MARK_TARGET(0x8003F864,ZZ_3F834_30);
ZZ_MARK(0x8003F868);
ZZ_MARK(0x8003F86C);
ZZ_MARK(0x8003F870);
ZZ_MARK_TARGET(0x8003F874,ZZ_3F834_40);
ZZ_MARK(0x8003F878);
ZZ_MARK(0x8003F87C);
ZZ_MARK_TARGET(0x8003F880,ZZ_3F834_4C);
ZZ_MARK(0x8003F884);
ZZ_MARK(0x8003F888);
ZZ_MARK(0x8003F88C);
ZZ_MARK(0x8003F890);
ZZ_MARK(0x8003F894);
ZZ_MARK_TARGET(0x8003F898,ZZ_3F834_64);
ZZ_MARK(0x8003F89C);
ZZ_MARK(0x8003F8A0);
ZZ_MARK_TARGET(0x8003F8A4,ZZ_3F834_70);
ZZ_MARK(0x8003F8A8);
ZZ_MARK(0x8003F8AC);
ZZ_MARK_TARGET(0x8003F8B0,ZZ_3F834_7C);
ZZ_MARK(0x8003F8B4);
ZZ_MARK_TARGET(0x8003F8B8,ZZ_3F834_84);
ZZ_MARK(0x8003F8BC);
ZZ_MARK_TARGET(0x8003F8C0,ZZ_3F834_8C);
ZZ_MARK(0x8003F8C4);
ZZ_MARK(0x8003F8C8);
ZZ_MARK_TARGET(0x8003F8CC,ZZ_3F834_98);
ZZ_MARK(0x8003F8D0);
ZZ_MARK(0x8003F8D4);
ZZ_MARK(0x8003F8D8);
ZZ_MARK(0x8003F8DC);
ZZ_MARK(0x8003F8E0);
ZZ_MARK(0x8003F8E4);
ZZ_MARK(0x8003F8E8);
ZZ_MARK(0x8003F8EC);
ZZ_MARK(0x8003F8F0);
ZZ_MARK(0x8003F8F4);
ZZ_MARK(0x8003F8F8);
ZZ_MARK(0x8003F8FC);
ZZ_MARK(0x8003F900);
ZZ_MARK(0x8003F904);
ZZ_MARK(0x8003F908);
ZZ_MARK(0x8003F90C);
ZZ_MARK(0x8003F910);
ZZ_MARK(0x8003F914);
ZZ_MARK(0x8003F918);
ZZ_MARK(0x8003F91C);
ZZ_MARK(0x8003F920);
ZZ_MARK(0x8003F924);
ZZ_MARK(0x8003F928);
ZZ_MARK_TARGET(0x8003F92C,ZZ_3F834_F8);
ZZ_MARK(0x8003F930);
ZZ_MARK_TARGET(0x8003F934,ZZ_3F834_100);
ZZ_MARK(0x8003F938);
ZZ_MARK(0x8003F93C);
ZZ_MARK(0x8003F940);
ZZ_MARK(0x8003F944);
ZZ_MARK(0x8003F948);
ZZ_MARK(0x8003F94C);
ZZ_MARK(0x8003F950);
ZZ_MARK(0x8003F954);
ZZ_MARK(0x8003F958);
ZZ_MARK(0x8003F95C);
ZZ_MARK_TARGET(0x8003F960,ZZ_3F834_12C);
ZZ_MARK(0x8003F964);
ZZ_MARK(0x8003F968);
ZZ_MARK(0x8003F96C);
ZZ_MARK_TARGET(0x8003F970,ZZ_3F834_13C);
ZZ_MARK(0x8003F974);
ZZ_MARK(0x8003F978);
ZZ_MARK(0x8003F97C);
ZZ_MARK(0x8003F980);
ZZ_MARK(0x8003F984);
ZZ_MARK(0x8003F988);
ZZ_MARK(0x8003F98C);
ZZ_MARK(0x8003F990);
ZZ_MARK(0x8003F994);
ZZ_MARK(0x8003F998);
ZZ_MARK(0x8003F99C);
ZZ_MARK_TARGET(0x8003F9A0,ZZ_3F834_16C);
ZZ_MARK(0x8003F9A4);
ZZ_MARK(0x8003F9A8);
ZZ_MARK(0x8003F9AC);
ZZ_MARK_TARGET(0x8003F9B0,ZZ_3F834_17C);
ZZ_MARK(0x8003F9B4);
ZZ_MARK_TARGET(0x8003F9B8,ZZ_3F834_184);
ZZ_MARK(0x8003F9BC);
ZZ_MARK_TARGET(0x8003F9C0,ZZ_3F834_18C);
ZZ_MARK(0x8003F9C4);
ZZ_MARK_TARGET(0x8003F9C8,ZZ_3F834_194);
ZZ_MARK(0x8003F9CC);
ZZ_MARK(0x8003F9D0);
ZZ_MARK_TARGET(0x8003F9D4,ZZ_3F834_1A0);
ZZ_MARK(0x8003F9D8);
ZZ_MARK(0x8003F9DC);
ZZ_MARK(0x8003F9E0);
ZZ_MARK(0x8003F9E4);
ZZ_MARK(0x8003F9E8);
ZZ_MARK(0x8003F9EC);
ZZ_MARK(0x8003F9F0);
ZZ_MARK(0x8003F9F4);
ZZ_MARK(0x8003F9F8);
ZZ_MARK(0x8003F9FC);
ZZ_MARK(0x8003FA00);
ZZ_MARK(0x8003FA04);
ZZ_MARK(0x8003FA08);
ZZ_MARK(0x8003FA0C);
ZZ_MARK(0x8003FA10);
ZZ_MARK(0x8003FA14);
ZZ_MARK(0x8003FA18);
ZZ_MARK(0x8003FA1C);
ZZ_MARK(0x8003FA20);
ZZ_MARK(0x8003FA24);
ZZ_MARK(0x8003FA28);
ZZ_MARK(0x8003FA2C);
ZZ_MARK(0x8003FA30);
ZZ_MARK_TARGET(0x8003FA34,ZZ_3F834_200);
ZZ_MARK(0x8003FA38);
ZZ_MARK_TARGET(0x8003FA3C,ZZ_3F834_208);
ZZ_MARK(0x8003FA40);
ZZ_MARK(0x8003FA44);
ZZ_MARK(0x8003FA48);
ZZ_MARK(0x8003FA4C);
ZZ_MARK(0x8003FA50);
ZZ_MARK(0x8003FA54);
ZZ_MARK(0x8003FA58);
ZZ_MARK(0x8003FA5C);
ZZ_MARK(0x8003FA60);
ZZ_MARK(0x8003FA64);
ZZ_MARK_TARGET(0x8003FA68,ZZ_3F834_234);
ZZ_MARK(0x8003FA6C);
ZZ_MARK(0x8003FA70);
ZZ_MARK(0x8003FA74);
ZZ_MARK_TARGET(0x8003FA78,ZZ_3F834_244);
ZZ_MARK(0x8003FA7C);
ZZ_MARK(0x8003FA80);
ZZ_MARK(0x8003FA84);
ZZ_MARK(0x8003FA88);
ZZ_MARK(0x8003FA8C);
ZZ_MARK(0x8003FA90);
ZZ_MARK(0x8003FA94);
ZZ_MARK(0x8003FA98);
ZZ_MARK(0x8003FA9C);
ZZ_MARK(0x8003FAA0);
ZZ_MARK(0x8003FAA4);
ZZ_MARK_TARGET(0x8003FAA8,ZZ_3F834_274);
ZZ_MARK(0x8003FAAC);
ZZ_MARK(0x8003FAB0);
ZZ_MARK(0x8003FAB4);
ZZ_MARK_TARGET(0x8003FAB8,ZZ_3F834_284);
ZZ_MARK(0x8003FABC);
ZZ_MARK_TARGET(0x8003FAC0,ZZ_3F834_28C);
ZZ_MARK(0x8003FAC4);
ZZ_MARK_TARGET(0x8003FAC8,ZZ_3F834_294);
ZZ_MARK(0x8003FACC);
ZZ_MARK_TARGET(0x8003FAD0,ZZ_3F834_29C);
ZZ_MARK(0x8003FAD4);
ZZ_MARK(0x8003FAD8);
ZZ_MARK_TARGET(0x8003FADC,ZZ_3F834_2A8);
ZZ_MARK(0x8003FAE0);
ZZ_MARK(0x8003FAE4);
ZZ_MARK(0x8003FAE8);
ZZ_MARK(0x8003FAEC);
ZZ_MARK(0x8003FAF0);
ZZ_MARK(0x8003FAF4);
ZZ_MARK(0x8003FAF8);
ZZ_MARK(0x8003FAFC);
ZZ_MARK(0x8003FB00);
ZZ_MARK(0x8003FB04);
ZZ_MARK(0x8003FB08);
ZZ_MARK(0x8003FB0C);
ZZ_MARK(0x8003FB10);
ZZ_MARK(0x8003FB14);
ZZ_MARK(0x8003FB18);
ZZ_MARK(0x8003FB1C);
ZZ_MARK(0x8003FB20);
ZZ_MARK(0x8003FB24);
ZZ_MARK(0x8003FB28);
ZZ_MARK(0x8003FB2C);
ZZ_MARK(0x8003FB30);
ZZ_MARK(0x8003FB34);
ZZ_MARK(0x8003FB38);
ZZ_MARK_TARGET(0x8003FB3C,ZZ_3F834_308);
ZZ_MARK(0x8003FB40);
ZZ_MARK_TARGET(0x8003FB44,ZZ_3F834_310);
ZZ_MARK(0x8003FB48);
ZZ_MARK(0x8003FB4C);
ZZ_MARK(0x8003FB50);
ZZ_MARK(0x8003FB54);
ZZ_MARK(0x8003FB58);
ZZ_MARK(0x8003FB5C);
ZZ_MARK(0x8003FB60);
ZZ_MARK(0x8003FB64);
ZZ_MARK(0x8003FB68);
ZZ_MARK(0x8003FB6C);
ZZ_MARK_TARGET(0x8003FB70,ZZ_3F834_33C);
ZZ_MARK(0x8003FB74);
ZZ_MARK(0x8003FB78);
ZZ_MARK(0x8003FB7C);
ZZ_MARK_TARGET(0x8003FB80,ZZ_3F834_34C);
ZZ_MARK(0x8003FB84);
ZZ_MARK(0x8003FB88);
ZZ_MARK(0x8003FB8C);
ZZ_MARK(0x8003FB90);
ZZ_MARK(0x8003FB94);
ZZ_MARK(0x8003FB98);
ZZ_MARK(0x8003FB9C);
ZZ_MARK(0x8003FBA0);
ZZ_MARK(0x8003FBA4);
ZZ_MARK(0x8003FBA8);
ZZ_MARK(0x8003FBAC);
ZZ_MARK_TARGET(0x8003FBB0,ZZ_3F834_37C);
ZZ_MARK(0x8003FBB4);
ZZ_MARK(0x8003FBB8);
ZZ_MARK(0x8003FBBC);
ZZ_MARK_TARGET(0x8003FBC0,ZZ_3F834_38C);
ZZ_MARK_TARGET(0x8003FBC4,ZZ_3F834_390);
ZZ_MARK(0x8003FBC8);
ZZ_MARK(0x8003FBCC);
ZZ_MARK(0x8003FBD0);
ZZ_MARK(0x8003FBD4);
ZZ_MARK(0x8003FBD8);
ZZ_MARK_TARGET(0x8003FBDC,ZZ_3F834_3A8);
ZZ_MARK(0x8003FBE0);
ZZ_MARK(0x8003FBE4);
ZZ_MARK(0x8003FBE8);
ZZ_MARK_TARGET(0x8003FBEC,ZZ_3F834_3B8);
ZZ_MARK(0x8003FBF0);
ZZ_MARK_TARGET(0x8003FBF4,ZZ_3F834_3C0);
ZZ_MARK(0x8003FBF8);
ZZ_MARK_TARGET(0x8003FBFC,ZZ_3F834_3C8);
ZZ_MARK(0x8003FC00);
ZZ_MARK_TARGET(0x8003FC04,ZZ_3F834_3D0);
ZZ_MARK(0x8003FC08);
ZZ_MARK(0x8003FC0C);
ZZ_MARK(0x8003FC10);
ZZ_MARK(0x8003FC14);
ZZ_MARK_TARGET(0x8003FC18,ZZ_3F834_3E4);
ZZ_MARK(0x8003FC1C);
