﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COND_HasBowEquiped

#include "Basic.hpp"


namespace SDK::Params
{

// Function COND_HasBowEquiped.COND_HasBowEquiped_C.CheckCondition
// 0x0020 (0x0020 - 0x0000)
struct COND_HasBowEquiped_C_CheckCondition final
{
public:
	class UVStateBase*                            CurrentState;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTESObjectWEAP*                         CallFunc_GetEquippedWeaponForm_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(COND_HasBowEquiped_C_CheckCondition) == 0x000008, "Wrong alignment on COND_HasBowEquiped_C_CheckCondition");
static_assert(sizeof(COND_HasBowEquiped_C_CheckCondition) == 0x000020, "Wrong size on COND_HasBowEquiped_C_CheckCondition");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, CurrentState) == 0x000000, "Member 'COND_HasBowEquiped_C_CheckCondition::CurrentState' has a wrong offset!");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, ReturnValue) == 0x000008, "Member 'COND_HasBowEquiped_C_CheckCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'COND_HasBowEquiped_C_CheckCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, CallFunc_GetEquippedWeaponForm_ReturnValue) == 0x000010, "Member 'COND_HasBowEquiped_C_CheckCondition::CallFunc_GetEquippedWeaponForm_ReturnValue' has a wrong offset!");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'COND_HasBowEquiped_C_CheckCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(COND_HasBowEquiped_C_CheckCondition, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'COND_HasBowEquiped_C_CheckCondition::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

