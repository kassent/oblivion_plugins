﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NQF_FollowPlayerCharacter

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NQF_FollowPlayerCharacter.NQF_FollowPlayerCharacter_C
// 0x0000 (0x0048 - 0x0048)
class UNQF_FollowPlayerCharacter_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NQF_FollowPlayerCharacter_C">();
	}
	static class UNQF_FollowPlayerCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNQF_FollowPlayerCharacter_C>();
	}
};
static_assert(alignof(UNQF_FollowPlayerCharacter_C) == 0x000008, "Wrong alignment on UNQF_FollowPlayerCharacter_C");
static_assert(sizeof(UNQF_FollowPlayerCharacter_C) == 0x000048, "Wrong size on UNQF_FollowPlayerCharacter_C");

}

