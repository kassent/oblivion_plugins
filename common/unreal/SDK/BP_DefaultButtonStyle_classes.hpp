﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultButtonStyle.BP_DefaultButtonStyle_C
// 0x0000 (0x07B0 - 0x07B0)
class UBP_DefaultButtonStyle_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultButtonStyle_C">();
	}
	static class UBP_DefaultButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DefaultButtonStyle_C>();
	}
};
static_assert(alignof(UBP_DefaultButtonStyle_C) == 0x000010, "Wrong alignment on UBP_DefaultButtonStyle_C");
static_assert(sizeof(UBP_DefaultButtonStyle_C) == 0x0007B0, "Wrong size on UBP_DefaultButtonStyle_C");

}

