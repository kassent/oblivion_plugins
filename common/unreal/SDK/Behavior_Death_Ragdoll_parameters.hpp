﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Behavior_Death_Ragdoll

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Behavior_Death_Ragdoll.Behavior_Death_Ragdoll_C.ApplyKnockdownRequest
// 0x0080 (0x0080 - 0x0000)
struct Behavior_Death_Ragdoll_C_ApplyKnockdownRequest final
{
public:
	struct FVPawnKnockdownRequest                 KnockdownRequest;                                  // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedPawn*                           CallFunc_GetControlledPawn_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVPairedPawn*                           CallFunc_GetControlledPawn_ReturnValue_1;          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest) == 0x000008, "Wrong alignment on Behavior_Death_Ragdoll_C_ApplyKnockdownRequest");
static_assert(sizeof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest) == 0x000080, "Wrong size on Behavior_Death_Ragdoll_C_ApplyKnockdownRequest");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, KnockdownRequest) == 0x000000, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::KnockdownRequest' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000028, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000040, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000058, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_GetControlledPawn_ReturnValue) == 0x000060, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_GetControlledPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_GetControlledPawn_ReturnValue_1) == 0x000068, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_GetControlledPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast) == 0x000070, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ApplyKnockdownRequest, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000078, "Member 'Behavior_Death_Ragdoll_C_ApplyKnockdownRequest::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function Behavior_Death_Ragdoll.Behavior_Death_Ragdoll_C.ExecuteUbergraph_Behavior_Death_Ragdoll
// 0x0050 (0x0050 - 0x0000)
struct Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedPawn*                           CallFunc_GetControlledPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVPairedPawn*                           CallFunc_GetControlledPawn_ReturnValue_1;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedPawn*                           CallFunc_GetControlledPawn_ReturnValue_2;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVPawnKnockdownRequest                 CallFunc_ConsumeKnockdownRequest_LatestRequestData; // 0x0028(0x0028)(NoDestructor)
};
static_assert(alignof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll) == 0x000008, "Wrong alignment on Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll");
static_assert(sizeof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll) == 0x000050, "Wrong size on Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, EntryPoint) == 0x000000, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::EntryPoint' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, CallFunc_GetControlledPawn_ReturnValue) == 0x000008, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::CallFunc_GetControlledPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, CallFunc_GetControlledPawn_ReturnValue_1) == 0x000010, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::CallFunc_GetControlledPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, K2Node_Event_DeltaTime) == 0x000018, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, CallFunc_GetControlledPawn_ReturnValue_2) == 0x000020, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::CallFunc_GetControlledPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll, CallFunc_ConsumeKnockdownRequest_LatestRequestData) == 0x000028, "Member 'Behavior_Death_Ragdoll_C_ExecuteUbergraph_Behavior_Death_Ragdoll::CallFunc_ConsumeKnockdownRequest_LatestRequestData' has a wrong offset!");

// Function Behavior_Death_Ragdoll.Behavior_Death_Ragdoll_C.OnUpdate
// 0x0004 (0x0004 - 0x0000)
struct Behavior_Death_Ragdoll_C_OnUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Behavior_Death_Ragdoll_C_OnUpdate) == 0x000004, "Wrong alignment on Behavior_Death_Ragdoll_C_OnUpdate");
static_assert(sizeof(Behavior_Death_Ragdoll_C_OnUpdate) == 0x000004, "Wrong size on Behavior_Death_Ragdoll_C_OnUpdate");
static_assert(offsetof(Behavior_Death_Ragdoll_C_OnUpdate, DeltaTime) == 0x000000, "Member 'Behavior_Death_Ragdoll_C_OnUpdate::DeltaTime' has a wrong offset!");

}

