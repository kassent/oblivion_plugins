﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASP_CharacterLocomotionGain

#include "Basic.hpp"


namespace SDK::Params
{

// Function ASP_CharacterLocomotionGain.ASP_CharacterLocomotionGain_C.Apply
// 0x0008 (0x0008 - 0x0000)
struct ASP_CharacterLocomotionGain_C_Apply final
{
public:
	class UVStateBase*                            CurrentState;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ASP_CharacterLocomotionGain_C_Apply) == 0x000008, "Wrong alignment on ASP_CharacterLocomotionGain_C_Apply");
static_assert(sizeof(ASP_CharacterLocomotionGain_C_Apply) == 0x000008, "Wrong size on ASP_CharacterLocomotionGain_C_Apply");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_Apply, CurrentState) == 0x000000, "Member 'ASP_CharacterLocomotionGain_C_Apply::CurrentState' has a wrong offset!");

// Function ASP_CharacterLocomotionGain.ASP_CharacterLocomotionGain_C.ExecuteUbergraph_ASP_CharacterLocomotionGain
// 0x0028 (0x0028 - 0x0000)
struct ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVStateBase*                            K2Node_Event_CurrentState;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVPairedPawn*                           K2Node_DynamicCast_AsVPaired_Pawn;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_AirControlBoostMultiplier_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain) == 0x000008, "Wrong alignment on ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain");
static_assert(sizeof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain) == 0x000028, "Wrong size on ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, EntryPoint) == 0x000000, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::EntryPoint' has a wrong offset!");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, K2Node_Event_CurrentState) == 0x000008, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::K2Node_Event_CurrentState' has a wrong offset!");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, K2Node_DynamicCast_AsVPaired_Pawn) == 0x000018, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::K2Node_DynamicCast_AsVPaired_Pawn' has a wrong offset!");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain, K2Node_VariableSet_AirControlBoostMultiplier_ImplicitCast) == 0x000024, "Member 'ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain::K2Node_VariableSet_AirControlBoostMultiplier_ImplicitCast' has a wrong offset!");

}

