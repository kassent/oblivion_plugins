﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_Recoil_Multiple

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TABP_Recoil_Multiple.TABP_Recoil_Multiple_C
// 0x0120 (0x04E0 - 0x03C0)
class UTABP_Recoil_Multiple_C final : public UVRecoilMultipleCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03C8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03D0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03D8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03F8(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04B0(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x04D0(0x0010)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_TABP_Recoil_Multiple(int32 EntryPoint);
	void RecoilLayer(const struct FPoseLink& InPose, struct FPoseLink* RecoilLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TABP_Recoil_Multiple_C">();
	}
	static class UTABP_Recoil_Multiple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTABP_Recoil_Multiple_C>();
	}
};
static_assert(alignof(UTABP_Recoil_Multiple_C) == 0x000010, "Wrong alignment on UTABP_Recoil_Multiple_C");
static_assert(sizeof(UTABP_Recoil_Multiple_C) == 0x0004E0, "Wrong size on UTABP_Recoil_Multiple_C");
static_assert(offsetof(UTABP_Recoil_Multiple_C, UberGraphFrame) == 0x0003C0, "Member 'UTABP_Recoil_Multiple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimBlueprintExtension_PropertyAccess) == 0x0003C8, "Member 'UTABP_Recoil_Multiple_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimBlueprintExtension_Base) == 0x0003D0, "Member 'UTABP_Recoil_Multiple_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimGraphNode_Root_1) == 0x0003D8, "Member 'UTABP_Recoil_Multiple_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimGraphNode_LinkedInputPose) == 0x0003F8, "Member 'UTABP_Recoil_Multiple_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimGraphNode_Root) == 0x0004B0, "Member 'UTABP_Recoil_Multiple_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTABP_Recoil_Multiple_C, AnimGraphNode_LocalRefPose) == 0x0004D0, "Member 'UTABP_Recoil_Multiple_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

