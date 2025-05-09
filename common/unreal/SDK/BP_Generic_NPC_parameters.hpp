﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Generic_NPC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Generic_NPC.BP_Generic_NPC_C.Activate_NS_Swim
// 0x0010 (0x0010 - 0x0000)
struct BP_Generic_NPC_C_Activate_NS_Swim final
{
public:
	bool                                          Activate;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Generic_NPC_C_Activate_NS_Swim) == 0x000008, "Wrong alignment on BP_Generic_NPC_C_Activate_NS_Swim");
static_assert(sizeof(BP_Generic_NPC_C_Activate_NS_Swim) == 0x000010, "Wrong size on BP_Generic_NPC_C_Activate_NS_Swim");
static_assert(offsetof(BP_Generic_NPC_C_Activate_NS_Swim, Activate) == 0x000000, "Member 'BP_Generic_NPC_C_Activate_NS_Swim::Activate' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_Activate_NS_Swim, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x000008, "Member 'BP_Generic_NPC_C_Activate_NS_Swim::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");

// Function BP_Generic_NPC.BP_Generic_NPC_C.ExecuteUbergraph_BP_Generic_NPC
// 0x0088 (0x0088 - 0x0000)
struct BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_AddComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_AddComponentByClass_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSwimming_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSurfaceWater_Result;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSurfaceWater_Result_1;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC) == 0x000008, "Wrong alignment on BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC");
static_assert(sizeof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC) == 0x000088, "Wrong size on BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, EntryPoint) == 0x000000, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_IsClosed_Variable_1) == 0x000006, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_AddComponentByClass_ReturnValue) == 0x000008, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_IsClosed_Variable_2) == 0x000010, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_Has_Been_Initd_Variable_2) == 0x000011, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_AddComponentByClass_ReturnValue_1) == 0x000018, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_AddComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_GetIsSwimming_ReturnValue) == 0x000024, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_GetIsSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_Has_Been_Initd_Variable_3) == 0x000025, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_BreakVector_X) == 0x000040, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_BreakVector_Y) == 0x000048, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_IsSurfaceWater_Result) == 0x000079, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_IsSurfaceWater_Result' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_IsSurfaceWater_Result_1) == 0x00007A, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_IsSurfaceWater_Result_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, Temp_bool_IsClosed_Variable_3) == 0x00007B, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00007D, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_IsValid_ReturnValue_1) == 0x00007E, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x00007F, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'BP_Generic_NPC_C_ExecuteUbergraph_BP_Generic_NPC::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_Generic_NPC.BP_Generic_NPC_C.IsSurfaceWater
// 0x0020 (0x0020 - 0x0000)
struct BP_Generic_NPC_C_IsSurfaceWater final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetWaterMaterial_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_GetPhysicalMaterial_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Generic_NPC_C_IsSurfaceWater) == 0x000008, "Wrong alignment on BP_Generic_NPC_C_IsSurfaceWater");
static_assert(sizeof(BP_Generic_NPC_C_IsSurfaceWater) == 0x000020, "Wrong size on BP_Generic_NPC_C_IsSurfaceWater");
static_assert(offsetof(BP_Generic_NPC_C_IsSurfaceWater, Result) == 0x000000, "Member 'BP_Generic_NPC_C_IsSurfaceWater::Result' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_IsSurfaceWater, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_Generic_NPC_C_IsSurfaceWater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_IsSurfaceWater, CallFunc_GetWaterMaterial_ReturnValue) == 0x000008, "Member 'BP_Generic_NPC_C_IsSurfaceWater::CallFunc_GetWaterMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_IsSurfaceWater, CallFunc_GetPhysicalMaterial_ReturnValue) == 0x000010, "Member 'BP_Generic_NPC_C_IsSurfaceWater::CallFunc_GetPhysicalMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_IsSurfaceWater, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_Generic_NPC_C_IsSurfaceWater::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_Generic_NPC.BP_Generic_NPC_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Generic_NPC_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Generic_NPC_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Generic_NPC_C_ReceiveTick");
static_assert(sizeof(BP_Generic_NPC_C_ReceiveTick) == 0x000004, "Wrong size on BP_Generic_NPC_C_ReceiveTick");
static_assert(offsetof(BP_Generic_NPC_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Generic_NPC_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Generic_NPC.BP_Generic_NPC_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct BP_Generic_NPC_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Generic_NPC_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Generic_NPC_C_UserConstructionScript");
static_assert(sizeof(BP_Generic_NPC_C_UserConstructionScript) == 0x000048, "Wrong size on BP_Generic_NPC_C_UserConstructionScript");
static_assert(offsetof(BP_Generic_NPC_C_UserConstructionScript, CallFunc_GetComponentBounds_Origin) == 0x000000, "Member 'BP_Generic_NPC_C_UserConstructionScript::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_UserConstructionScript, CallFunc_GetComponentBounds_BoxExtent) == 0x000018, "Member 'BP_Generic_NPC_C_UserConstructionScript::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_UserConstructionScript, CallFunc_GetComponentBounds_SphereRadius) == 0x000030, "Member 'BP_Generic_NPC_C_UserConstructionScript::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Generic_NPC_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Generic_NPC_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_Generic_NPC_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

