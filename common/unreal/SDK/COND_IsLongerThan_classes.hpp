﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COND_IsLongerThan

#include "Basic.hpp"

#include "COND_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass COND_IsLongerThan.COND_IsLongerThan_C
// 0x0008 (0x0048 - 0x0040)
class UCOND_IsLongerThan_C final : public UCOND_Parent_C
{
public:
	double                                        Duration;                                          // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CheckCondition(class UVStateBase* CurrentState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"COND_IsLongerThan_C">();
	}
	static class UCOND_IsLongerThan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCOND_IsLongerThan_C>();
	}
};
static_assert(alignof(UCOND_IsLongerThan_C) == 0x000008, "Wrong alignment on UCOND_IsLongerThan_C");
static_assert(sizeof(UCOND_IsLongerThan_C) == 0x000048, "Wrong size on UCOND_IsLongerThan_C");
static_assert(offsetof(UCOND_IsLongerThan_C, Duration) == 0x000040, "Member 'UCOND_IsLongerThan_C::Duration' has a wrong offset!");

}

