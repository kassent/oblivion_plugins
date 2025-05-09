﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_Sprinting

#include "Basic.hpp"

#include "AST_CameraBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_Sprinting.AST_Sprinting_C
// 0x0000 (0x0380 - 0x0380)
class UAST_Sprinting_C final : public UAST_CameraBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_Sprinting_C">();
	}
	static class UAST_Sprinting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_Sprinting_C>();
	}
};
static_assert(alignof(UAST_Sprinting_C) == 0x000008, "Wrong alignment on UAST_Sprinting_C");
static_assert(sizeof(UAST_Sprinting_C) == 0x000380, "Wrong size on UAST_Sprinting_C");

}

