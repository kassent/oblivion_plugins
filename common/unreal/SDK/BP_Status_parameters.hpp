﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Status.BP_Status_C.BndEvt__BP_StatusEffect_StatusEffect VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_Status.BP_Status_C.BndEvt__BP_StatusEffect_StatusEffect VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");
static_assert(sizeof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature) == 0x000008, "Wrong size on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");
static_assert(offsetof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature, Component) == 0x000000, "Member 'BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature::Component' has a wrong offset!");

// Function BP_Status.BP_Status_C.BndEvt__BP_StatusEffect_StatusEffect VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bReset;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature");
static_assert(sizeof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature) == 0x000010, "Wrong size on BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature");
static_assert(offsetof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature, Component) == 0x000000, "Member 'BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature::Component' has a wrong offset!");
static_assert(offsetof(BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature, bReset) == 0x000008, "Member 'BP_Status_C_BndEvt__BP_StatusEffect_StatusEffect_VFX_K2Node_ComponentBoundEvent_4_ActorComponentActivatedSignature__DelegateSignature::bReset' has a wrong offset!");

// Function BP_Status.BP_Status_C.Event PostProcess Activate
// 0x0001 (0x0001 - 0x0000)
struct BP_Status_C_Event_PostProcess_Activate final
{
public:
	bool                                          Is_Fading;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_Event_PostProcess_Activate) == 0x000001, "Wrong alignment on BP_Status_C_Event_PostProcess_Activate");
static_assert(sizeof(BP_Status_C_Event_PostProcess_Activate) == 0x000001, "Wrong size on BP_Status_C_Event_PostProcess_Activate");
static_assert(offsetof(BP_Status_C_Event_PostProcess_Activate, Is_Fading) == 0x000000, "Member 'BP_Status_C_Event_PostProcess_Activate::Is_Fading' has a wrong offset!");

// Function BP_Status.BP_Status_C.Event PostProcess Deactivate
// 0x0001 (0x0001 - 0x0000)
struct BP_Status_C_Event_PostProcess_Deactivate final
{
public:
	bool                                          Is_Fading;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_Event_PostProcess_Deactivate) == 0x000001, "Wrong alignment on BP_Status_C_Event_PostProcess_Deactivate");
static_assert(sizeof(BP_Status_C_Event_PostProcess_Deactivate) == 0x000001, "Wrong size on BP_Status_C_Event_PostProcess_Deactivate");
static_assert(offsetof(BP_Status_C_Event_PostProcess_Deactivate, Is_Fading) == 0x000000, "Member 'BP_Status_C_Event_PostProcess_Deactivate::Is_Fading' has a wrong offset!");

// Function BP_Status.BP_Status_C.ExecuteUbergraph_BP_Status
// 0x0088 (0x0088 - 0x0000)
struct BP_Status_C_ExecuteUbergraph_BP_Status final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        K2Node_ComponentBoundEvent_Component_1;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        K2Node_ComponentBoundEvent_Component;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bReset;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Is_Fading_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Is_Fading;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 K2Node_Event_SkeletalMeshComponent;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoesBeginInFirstPerson_1;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Value_1;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   K2Node_Event_VFXColors_1;                          // 0x0038(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_bDoesBeginAsTheOnlyVFX_1;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsEnchant_1;                         // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsMainEffect_1;                      // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsInInventory_1;                     // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   K2Node_Event_StaticMeshComponent;                  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDoesBeginInFirstPerson;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Value;                                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   K2Node_Event_VFXColors;                            // 0x0060(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_bDoesBeginAsTheOnlyVFX;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsEnchant;                           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsMainEffect;                        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsInInventory;                       // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Store_Form_Data_Event_Value_ImplicitCast; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Store_Form_Data_Event_Value_ImplicitCast_1; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_ExecuteUbergraph_BP_Status) == 0x000008, "Wrong alignment on BP_Status_C_ExecuteUbergraph_BP_Status");
static_assert(sizeof(BP_Status_C_ExecuteUbergraph_BP_Status) == 0x000088, "Wrong size on BP_Status_C_ExecuteUbergraph_BP_Status");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, EntryPoint) == 0x000000, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_ComponentBoundEvent_PSystem) == 0x000008, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_ComponentBoundEvent_Component_1) == 0x000010, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_ComponentBoundEvent_Component_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_ComponentBoundEvent_Component) == 0x000018, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_ComponentBoundEvent_Component' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_ComponentBoundEvent_bReset) == 0x000020, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_ComponentBoundEvent_bReset' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_CustomEvent_Is_Fading_1) == 0x000021, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_CustomEvent_Is_Fading_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_CustomEvent_Is_Fading) == 0x000022, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_CustomEvent_Is_Fading' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_SkeletalMeshComponent) == 0x000028, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bDoesBeginInFirstPerson_1) == 0x000030, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bDoesBeginInFirstPerson_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_Value_1) == 0x000034, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_Value_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_VFXColors_1) == 0x000038, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_VFXColors_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bDoesBeginAsTheOnlyVFX_1) == 0x000048, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bDoesBeginAsTheOnlyVFX_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsEnchant_1) == 0x000049, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsEnchant_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsMainEffect_1) == 0x00004A, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsMainEffect_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsInInventory_1) == 0x00004B, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsInInventory_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_StaticMeshComponent) == 0x000050, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bDoesBeginInFirstPerson) == 0x000058, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bDoesBeginInFirstPerson' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_Value) == 0x00005C, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_VFXColors) == 0x000060, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_VFXColors' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bDoesBeginAsTheOnlyVFX) == 0x000070, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bDoesBeginAsTheOnlyVFX' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsEnchant) == 0x000071, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsEnchant' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsMainEffect) == 0x000072, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsMainEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, K2Node_Event_bIsInInventory) == 0x000073, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::K2Node_Event_bIsInInventory' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, CallFunc_Store_Form_Data_Event_Value_ImplicitCast) == 0x000078, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::CallFunc_Store_Form_Data_Event_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_C_ExecuteUbergraph_BP_Status, CallFunc_Store_Form_Data_Event_Value_ImplicitCast_1) == 0x000080, "Member 'BP_Status_C_ExecuteUbergraph_BP_Status::CallFunc_Store_Form_Data_Event_Value_ImplicitCast_1' has a wrong offset!");

// Function BP_Status.BP_Status_C.OnStartPlaySkeletal
// 0x0028 (0x0028 - 0x0000)
struct BP_Status_C_OnStartPlaySkeletal final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoesBeginInFirstPerson;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   VFXColors;                                         // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bDoesBeginAsTheOnlyVFX;                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnchant;                                        // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMainEffect;                                     // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInInventory;                                    // 0x0023(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_OnStartPlaySkeletal) == 0x000008, "Wrong alignment on BP_Status_C_OnStartPlaySkeletal");
static_assert(sizeof(BP_Status_C_OnStartPlaySkeletal) == 0x000028, "Wrong size on BP_Status_C_OnStartPlaySkeletal");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, SkeletalMeshComponent) == 0x000000, "Member 'BP_Status_C_OnStartPlaySkeletal::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, bDoesBeginInFirstPerson) == 0x000008, "Member 'BP_Status_C_OnStartPlaySkeletal::bDoesBeginInFirstPerson' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, Value) == 0x00000C, "Member 'BP_Status_C_OnStartPlaySkeletal::Value' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, VFXColors) == 0x000010, "Member 'BP_Status_C_OnStartPlaySkeletal::VFXColors' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, bDoesBeginAsTheOnlyVFX) == 0x000020, "Member 'BP_Status_C_OnStartPlaySkeletal::bDoesBeginAsTheOnlyVFX' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, bIsEnchant) == 0x000021, "Member 'BP_Status_C_OnStartPlaySkeletal::bIsEnchant' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, bIsMainEffect) == 0x000022, "Member 'BP_Status_C_OnStartPlaySkeletal::bIsMainEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlaySkeletal, bIsInInventory) == 0x000023, "Member 'BP_Status_C_OnStartPlaySkeletal::bIsInInventory' has a wrong offset!");

// Function BP_Status.BP_Status_C.OnStartPlayStatic
// 0x0028 (0x0028 - 0x0000)
struct BP_Status_C_OnStartPlayStatic final
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoesBeginInFirstPerson;                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   VFXColors;                                         // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bDoesBeginAsTheOnlyVFX;                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnchant;                                        // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMainEffect;                                     // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInInventory;                                    // 0x0023(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_OnStartPlayStatic) == 0x000008, "Wrong alignment on BP_Status_C_OnStartPlayStatic");
static_assert(sizeof(BP_Status_C_OnStartPlayStatic) == 0x000028, "Wrong size on BP_Status_C_OnStartPlayStatic");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, StaticMeshComponent) == 0x000000, "Member 'BP_Status_C_OnStartPlayStatic::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, bDoesBeginInFirstPerson) == 0x000008, "Member 'BP_Status_C_OnStartPlayStatic::bDoesBeginInFirstPerson' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, Value) == 0x00000C, "Member 'BP_Status_C_OnStartPlayStatic::Value' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, VFXColors) == 0x000010, "Member 'BP_Status_C_OnStartPlayStatic::VFXColors' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, bDoesBeginAsTheOnlyVFX) == 0x000020, "Member 'BP_Status_C_OnStartPlayStatic::bDoesBeginAsTheOnlyVFX' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, bIsEnchant) == 0x000021, "Member 'BP_Status_C_OnStartPlayStatic::bIsEnchant' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, bIsMainEffect) == 0x000022, "Member 'BP_Status_C_OnStartPlayStatic::bIsMainEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_C_OnStartPlayStatic, bIsInInventory) == 0x000023, "Member 'BP_Status_C_OnStartPlayStatic::bIsInInventory' has a wrong offset!");

// Function BP_Status.BP_Status_C.Send Event Data to Niagara
// 0x0001 (0x0001 - 0x0000)
struct BP_Status_C_Send_Event_Data_to_Niagara final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_Send_Event_Data_to_Niagara) == 0x000001, "Wrong alignment on BP_Status_C_Send_Event_Data_to_Niagara");
static_assert(sizeof(BP_Status_C_Send_Event_Data_to_Niagara) == 0x000001, "Wrong size on BP_Status_C_Send_Event_Data_to_Niagara");
static_assert(offsetof(BP_Status_C_Send_Event_Data_to_Niagara, Condition) == 0x000000, "Member 'BP_Status_C_Send_Event_Data_to_Niagara::Condition' has a wrong offset!");

// Function BP_Status.BP_Status_C.Store Form Data
// 0x0090 (0x0090 - 0x0000)
struct BP_Status_C_Store_Form_Data final
{
public:
	bool                                          Event_Is_Skeletal_Event;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 Event_Skeletal_Mesh_Component;                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Event_Static_Mesh_Component;                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Event_Is_Begin_in_First_Person;                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Event_Value;                                       // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   Event_Colors;                                      // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Event_Beggin_as_Only_VFX;                          // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Event_Is_Enchant;                                  // 0x0039(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Event_Is_Main_VFX;                                 // 0x003A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedPawn*                           K2Node_DynamicCast_AsVPaired_Pawn;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item_1;                         // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item_2;                         // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Player_Actor_Is_Player;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AVOblivionPlayerCharacter*              CallFunc_Is_Player_Actor_AsVOblivion_Player_Character; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_C_Store_Form_Data) == 0x000008, "Wrong alignment on BP_Status_C_Store_Form_Data");
static_assert(sizeof(BP_Status_C_Store_Form_Data) == 0x000090, "Wrong size on BP_Status_C_Store_Form_Data");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Is_Skeletal_Event) == 0x000000, "Member 'BP_Status_C_Store_Form_Data::Event_Is_Skeletal_Event' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Skeletal_Mesh_Component) == 0x000008, "Member 'BP_Status_C_Store_Form_Data::Event_Skeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Static_Mesh_Component) == 0x000010, "Member 'BP_Status_C_Store_Form_Data::Event_Static_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Is_Begin_in_First_Person) == 0x000018, "Member 'BP_Status_C_Store_Form_Data::Event_Is_Begin_in_First_Person' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Value) == 0x000020, "Member 'BP_Status_C_Store_Form_Data::Event_Value' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Colors) == 0x000028, "Member 'BP_Status_C_Store_Form_Data::Event_Colors' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Beggin_as_Only_VFX) == 0x000038, "Member 'BP_Status_C_Store_Form_Data::Event_Beggin_as_Only_VFX' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Is_Enchant) == 0x000039, "Member 'BP_Status_C_Store_Form_Data::Event_Is_Enchant' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, Event_Is_Main_VFX) == 0x00003A, "Member 'BP_Status_C_Store_Form_Data::Event_Is_Main_VFX' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, K2Node_DynamicCast_AsVPaired_Pawn) == 0x000040, "Member 'BP_Status_C_Store_Form_Data::K2Node_DynamicCast_AsVPaired_Pawn' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Status_C_Store_Form_Data::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_Status_C_Store_Form_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_Array_Get_Item) == 0x00004C, "Member 'BP_Status_C_Store_Form_Data::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_Array_Get_Item_1) == 0x00005C, "Member 'BP_Status_C_Store_Form_Data::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_Array_Get_Item_2) == 0x00006C, "Member 'BP_Status_C_Store_Form_Data::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_Is_Player_Actor_Is_Player) == 0x00007C, "Member 'BP_Status_C_Store_Form_Data::CallFunc_Is_Player_Actor_Is_Player' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_Is_Player_Actor_AsVOblivion_Player_Character) == 0x000080, "Member 'BP_Status_C_Store_Form_Data::CallFunc_Is_Player_Actor_AsVOblivion_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_C_Store_Form_Data, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'BP_Status_C_Store_Form_Data::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

}

