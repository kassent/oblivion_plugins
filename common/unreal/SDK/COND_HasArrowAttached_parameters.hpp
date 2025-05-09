﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COND_HasArrowAttached

#include "Basic.hpp"


namespace SDK::Params
{

// Function COND_HasArrowAttached.COND_HasArrowAttached_C.CheckCondition
// 0x0010 (0x0010 - 0x0000)
struct COND_HasArrowAttached_C_CheckCondition final
{
public:
	class UVStateBase*                            CurrentState;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuiverAttached_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(COND_HasArrowAttached_C_CheckCondition) == 0x000008, "Wrong alignment on COND_HasArrowAttached_C_CheckCondition");
static_assert(sizeof(COND_HasArrowAttached_C_CheckCondition) == 0x000010, "Wrong size on COND_HasArrowAttached_C_CheckCondition");
static_assert(offsetof(COND_HasArrowAttached_C_CheckCondition, CurrentState) == 0x000000, "Member 'COND_HasArrowAttached_C_CheckCondition::CurrentState' has a wrong offset!");
static_assert(offsetof(COND_HasArrowAttached_C_CheckCondition, ReturnValue) == 0x000008, "Member 'COND_HasArrowAttached_C_CheckCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(COND_HasArrowAttached_C_CheckCondition, CallFunc_IsQuiverAttached_ReturnValue) == 0x000009, "Member 'COND_HasArrowAttached_C_CheckCondition::CallFunc_IsQuiverAttached_ReturnValue' has a wrong offset!");

}

