﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_Resurrection

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TABP_Resurrection.TABP_Resurrection_C
// 0x0130 (0x0690 - 0x0560)
class UTABP_Resurrection_C final : public UVResurrectionAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0568(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0570(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0578(0x0020)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x0598(0x0090)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0628(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0648(0x0010)()
	struct FPoseSnapshot                          K2Node_PropertyAccess;                             // 0x0658(0x0038)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_TABP_Resurrection(int32 EntryPoint);
	void ResurrectionLayer(struct FPoseLink* ResurrectionLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TABP_Resurrection_C">();
	}
	static class UTABP_Resurrection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTABP_Resurrection_C>();
	}
};
static_assert(alignof(UTABP_Resurrection_C) == 0x000010, "Wrong alignment on UTABP_Resurrection_C");
static_assert(sizeof(UTABP_Resurrection_C) == 0x000690, "Wrong size on UTABP_Resurrection_C");
static_assert(offsetof(UTABP_Resurrection_C, UberGraphFrame) == 0x000560, "Member 'UTABP_Resurrection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimBlueprintExtension_PropertyAccess) == 0x000568, "Member 'UTABP_Resurrection_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimBlueprintExtension_Base) == 0x000570, "Member 'UTABP_Resurrection_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimGraphNode_Root_1) == 0x000578, "Member 'UTABP_Resurrection_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimGraphNode_PoseSnapshot) == 0x000598, "Member 'UTABP_Resurrection_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimGraphNode_Root) == 0x000628, "Member 'UTABP_Resurrection_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, AnimGraphNode_LocalRefPose) == 0x000648, "Member 'UTABP_Resurrection_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UTABP_Resurrection_C, K2Node_PropertyAccess) == 0x000658, "Member 'UTABP_Resurrection_C::K2Node_PropertyAccess' has a wrong offset!");

}

