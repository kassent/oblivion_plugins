﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterLocomotionOnGroundLanding

#include "Basic.hpp"


namespace SDK::Params
{

// Function AST_CharacterLocomotionOnGroundLanding.AST_CharacterLocomotionOnGroundLanding_C.ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding
// 0x0030 (0x0030 - 0x0000)
struct AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVStateMachineComponent*                CallFunc_GetOwningStateMachineComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVPairedPawn*                           K2Node_DynamicCast_AsVPaired_Pawn;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding) == 0x000008, "Wrong alignment on AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding");
static_assert(sizeof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding) == 0x000030, "Wrong size on AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, EntryPoint) == 0x000000, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::EntryPoint' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, CallFunc_GetOwningStateMachineComponent_ReturnValue) == 0x000008, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::CallFunc_GetOwningStateMachineComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, K2Node_Event_DeltaTime) == 0x000010, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, K2Node_DynamicCast_AsVPaired_Pawn) == 0x000020, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::K2Node_DynamicCast_AsVPaired_Pawn' has a wrong offset!");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AST_CharacterLocomotionOnGroundLanding_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundLanding::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AST_CharacterLocomotionOnGroundLanding.AST_CharacterLocomotionOnGroundLanding_C.OnStateUpdate
// 0x0004 (0x0004 - 0x0000)
struct AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate) == 0x000004, "Wrong alignment on AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate");
static_assert(sizeof(AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate) == 0x000004, "Wrong size on AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate");
static_assert(offsetof(AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate, DeltaTime) == 0x000000, "Member 'AST_CharacterLocomotionOnGroundLanding_C_OnStateUpdate::DeltaTime' has a wrong offset!");

}

