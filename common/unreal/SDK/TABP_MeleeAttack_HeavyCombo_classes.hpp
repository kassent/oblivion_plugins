﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_MeleeAttack_HeavyCombo

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "TABP_MeleeAttack_HeavyCombo_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TABP_MeleeAttack_HeavyCombo.TABP_MeleeAttack_HeavyCombo_C
// 0x0410 (0x0820 - 0x0410)
class UTABP_MeleeAttack_HeavyCombo_C final : public UVMeleeAttackComboAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct TABP_MeleeAttack_HeavyCombo::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x0418(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0428(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0430(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0438(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0458(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0480(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x04A8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x04D0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04F8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0518(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0560(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0580(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x05C8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x05E8(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x06B0(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0768(0x0080)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x07E8(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0808(0x0010)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AttackingLayer(const struct FPoseLink& InPose, struct FPoseLink* AttackingLayer_0);
	void ExecuteUbergraph_TABP_MeleeAttack_HeavyCombo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TABP_MeleeAttack_HeavyCombo_C">();
	}
	static class UTABP_MeleeAttack_HeavyCombo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTABP_MeleeAttack_HeavyCombo_C>();
	}
};
static_assert(alignof(UTABP_MeleeAttack_HeavyCombo_C) == 0x000010, "Wrong alignment on UTABP_MeleeAttack_HeavyCombo_C");
static_assert(sizeof(UTABP_MeleeAttack_HeavyCombo_C) == 0x000820, "Wrong size on UTABP_MeleeAttack_HeavyCombo_C");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, UberGraphFrame) == 0x000410, "Member 'UTABP_MeleeAttack_HeavyCombo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, __AnimBlueprintMutables) == 0x000418, "Member 'UTABP_MeleeAttack_HeavyCombo_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimBlueprintExtension_PropertyAccess) == 0x000428, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimBlueprintExtension_Base) == 0x000430, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_Root_1) == 0x000438, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_TransitionResult_2) == 0x000458, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_TransitionResult_1) == 0x000480, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_TransitionResult) == 0x0004A8, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_UseCachedPose) == 0x0004D0, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_StateResult_2) == 0x0004F8, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_SequencePlayer_1) == 0x000518, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_StateResult_1) == 0x000560, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_SequencePlayer) == 0x000580, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_StateResult) == 0x0005C8, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_StateMachine) == 0x0005E8, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_LinkedInputPose) == 0x0006B0, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_SaveCachedPose) == 0x000768, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_Root) == 0x0007E8, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTABP_MeleeAttack_HeavyCombo_C, AnimGraphNode_LocalRefPose) == 0x000808, "Member 'UTABP_MeleeAttack_HeavyCombo_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

