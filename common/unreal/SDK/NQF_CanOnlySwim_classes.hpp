﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NQF_CanOnlySwim

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NQF_CanOnlySwim.NQF_CanOnlySwim_C
// 0x0000 (0x0048 - 0x0048)
class UNQF_CanOnlySwim_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NQF_CanOnlySwim_C">();
	}
	static class UNQF_CanOnlySwim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNQF_CanOnlySwim_C>();
	}
};
static_assert(alignof(UNQF_CanOnlySwim_C) == 0x000008, "Wrong alignment on UNQF_CanOnlySwim_C");
static_assert(sizeof(UNQF_CanOnlySwim_C) == 0x000048, "Wrong size on UNQF_CanOnlySwim_C");

}

