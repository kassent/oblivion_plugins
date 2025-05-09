﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BackgroundWidget

#include "Basic.hpp"

#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BackgroundWidget.WBP_BackgroundWidget_C
// 0x0000 (0x0510 - 0x0510)
class UWBP_BackgroundWidget_C final : public UVBackgroundWidgetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BackgroundWidget_C">();
	}
	static class UWBP_BackgroundWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BackgroundWidget_C>();
	}
};
static_assert(alignof(UWBP_BackgroundWidget_C) == 0x000010, "Wrong alignment on UWBP_BackgroundWidget_C");
static_assert(sizeof(UWBP_BackgroundWidget_C) == 0x000510, "Wrong size on UWBP_BackgroundWidget_C");

}

