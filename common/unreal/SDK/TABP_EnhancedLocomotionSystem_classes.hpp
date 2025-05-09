﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_EnhancedLocomotionSystem

#include "Basic.hpp"

#include "TABP_EnhancedLocomotionSystem_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "AnimationWarpingRuntime_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TABP_EnhancedLocomotionSystem.TABP_EnhancedLocomotionSystem_C
// 0x1FF0 (0x2620 - 0x0630)
class UTABP_EnhancedLocomotionSystem_C final : public UVEnhancedLocomotionSystemCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct TABP_EnhancedLocomotionSystem::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x0638(0x0034)(HasGetValueTypeHash)
	uint8                                         Pad_66C[0x4];                                      // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0670(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0678(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0680(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x06A0(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_6;                    // 0x0758(0x0080)()
	struct FAnimNode_OrientationWarping           AnimGraphNode_OrientationWarping;                  // 0x07D8(0x0198)()
	struct FAnimNode_StrideWarping                AnimGraphNode_StrideWarping;                       // 0x0970(0x0248)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x0BB8(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x0BD8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x0C58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0C80(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0CA8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x0D70(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0DF0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0E18(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0E40(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0F08(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0F50(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0FD0(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x0FF8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1018(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1140(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1268(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1390(0x0128)()
	uint8                                         Pad_14B8[0x8];                                     // 0x14B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIKTemplate            AnimGraphNode_TwoBoneIKTemplate_1;                 // 0x14C0(0x0290)()
	struct FAnimNode_TwoBoneIKTemplate            AnimGraphNode_TwoBoneIKTemplate;                   // 0x1750(0x0290)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x19E0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1A00(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1A80(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1AA8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1AF0(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1B38(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1B58(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1B78(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1BA0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1BC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1BE8(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x1C10(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1C80(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x1CC8(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1D38(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x1D58(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1D68(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x1D88(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1E50(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1EC0(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1F08(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1F78(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1F98(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2060(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2088(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x20B0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x20D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2120(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2140(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2188(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x21A8(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x21D0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x21F0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x22B8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2338(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2360(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x23E0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x2428(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2470(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2498(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x24E0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2508(0x0028)()
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone;                      // 0x2530(0x00B0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x25E0(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x2600(0x0010)()
	bool                                          K2Node_PropertyAccess_27;                          // 0x2610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess_19;                          // 0x2611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EnhancedLocomotionLayer(const struct FPoseLink& InPose, struct FPoseLink* EnhancedLocomotionLayer_0);
	void ExecuteUbergraph_TABP_EnhancedLocomotionSystem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TABP_EnhancedLocomotionSystem_C">();
	}
	static class UTABP_EnhancedLocomotionSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTABP_EnhancedLocomotionSystem_C>();
	}
};
static_assert(alignof(UTABP_EnhancedLocomotionSystem_C) == 0x000010, "Wrong alignment on UTABP_EnhancedLocomotionSystem_C");
static_assert(sizeof(UTABP_EnhancedLocomotionSystem_C) == 0x002620, "Wrong size on UTABP_EnhancedLocomotionSystem_C");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, UberGraphFrame) == 0x000630, "Member 'UTABP_EnhancedLocomotionSystem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, __AnimBlueprintMutables) == 0x000638, "Member 'UTABP_EnhancedLocomotionSystem_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimBlueprintExtension_PropertyAccess) == 0x000670, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimBlueprintExtension_Base) == 0x000678, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_Root_1) == 0x000680, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LinkedInputPose) == 0x0006A0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_6) == 0x000758, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_6' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_OrientationWarping) == 0x0007D8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_OrientationWarping' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StrideWarping) == 0x000970, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StrideWarping' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x000BB8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_5) == 0x000BD8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_11) == 0x000C58, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_10) == 0x000C80, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ApplyAdditive_1) == 0x000CA8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_4) == 0x000D70, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_9) == 0x000DF0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_8) == 0x000E18, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ApplyAdditive) == 0x000E40, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_Slot) == 0x000F08, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_3) == 0x000F50, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_7) == 0x000FD0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LocalToComponentSpace_2) == 0x000FF8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ModifyBone_3) == 0x001018, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ModifyBone_2) == 0x001140, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ModifyBone_1) == 0x001268, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ModifyBone) == 0x001390, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TwoBoneIKTemplate_1) == 0x0014C0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TwoBoneIKTemplate_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TwoBoneIKTemplate) == 0x001750, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TwoBoneIKTemplate' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0019E0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_2) == 0x001A00, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_6) == 0x001A80, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_6) == 0x001AA8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_5) == 0x001AF0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001B38, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_ComponentToLocalSpace) == 0x001B58, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_5) == 0x001B78, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LocalToComponentSpace) == 0x001BA0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TransitionResult_4) == 0x001BC0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TransitionResult_3) == 0x001BE8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendSpacePlayer_3) == 0x001C10, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_4) == 0x001C80, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendSpacePlayer_2) == 0x001CC8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult_5) == 0x001D38, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LocalRefPose_1) == 0x001D58, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult_4) == 0x001D68, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateMachine_2) == 0x001D88, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001E50, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_3) == 0x001EC0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendSpacePlayer) == 0x001F08, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult_3) == 0x001F78, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateMachine_1) == 0x001F98, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TransitionResult_2) == 0x002060, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TransitionResult_1) == 0x002088, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_TransitionResult) == 0x0020B0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SequencePlayer_1) == 0x0020D8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult_2) == 0x002120, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SequencePlayer) == 0x002140, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult_1) == 0x002188, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_4) == 0x0021A8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateResult) == 0x0021D0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_StateMachine) == 0x0021F0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose_1) == 0x0022B8, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_3) == 0x002338, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_SaveCachedPose) == 0x002360, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_2) == 0x0023E0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool_1) == 0x002428, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_2) == 0x002470, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_BlendListByBool) == 0x002498, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose_1) == 0x0024E0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_UseCachedPose) == 0x002508, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_RotateRootBone) == 0x002530, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_RotateRootBone' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_Root) == 0x0025E0, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, AnimGraphNode_LocalRefPose) == 0x002600, "Member 'UTABP_EnhancedLocomotionSystem_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, K2Node_PropertyAccess_27) == 0x002610, "Member 'UTABP_EnhancedLocomotionSystem_C::K2Node_PropertyAccess_27' has a wrong offset!");
static_assert(offsetof(UTABP_EnhancedLocomotionSystem_C, K2Node_PropertyAccess_19) == 0x002611, "Member 'UTABP_EnhancedLocomotionSystem_C::K2Node_PropertyAccess_19' has a wrong offset!");

}

