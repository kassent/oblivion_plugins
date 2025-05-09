﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Behavior_AttackBehaviorBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Behavior_AttackBehaviorBase.Behavior_AttackBehaviorBase_C
// 0x00F0 (0x0140 - 0x0050)
class UBehavior_AttackBehaviorBase_C : public UVActorBehaviorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  CancelInputTags;                                   // 0x0058(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InHitWindow;                                       // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasHitPawn;                                        // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAnimNotify_ActionMeleeHitWindow*      HitWindowNotify;                                   // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          MultiTarget;                                       // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPowerAttack;                                     // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AVPairedPawn*>                     HitWindowHitPawns;                                 // 0x0090(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TSet<class UPrimitiveComponent*>              HitWindowHitPrimitives;                            // 0x00E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        ClutterPushForce;                                  // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVAltarPlayerController*                Player_controller;                                 // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AttemptCancellation();
	void BeginHitWindow(class UObject* HitWindowEventSource);
	void DrawDebugHitbox();
	void EndHitWindow();
	void ExecuteUbergraph_Behavior_AttackBehaviorBase(int32 EntryPoint);
	void FindAndTrackTarget(const class UVAnimNotify_ActionCameraTracking* CameraTracking_Notify, double Tracking_Duration);
	void HandleAttackActionEvent(const struct FGameplayTag& Event_Tag, class UAnimNotifyActionEventInfo* Anim_Notify_Action_Event);
	void OnEnd(bool bInterrupted);
	void OnInit();
	void OnUpdate(float DeltaTime);
	void RunHitDetection();
	void ShouldCancelToOtherAction(bool* ShouldCancel);
	void SignalAttackContinuation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Behavior_AttackBehaviorBase_C">();
	}
	static class UBehavior_AttackBehaviorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehavior_AttackBehaviorBase_C>();
	}
};
static_assert(alignof(UBehavior_AttackBehaviorBase_C) == 0x000008, "Wrong alignment on UBehavior_AttackBehaviorBase_C");
static_assert(sizeof(UBehavior_AttackBehaviorBase_C) == 0x000140, "Wrong size on UBehavior_AttackBehaviorBase_C");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, UberGraphFrame) == 0x000050, "Member 'UBehavior_AttackBehaviorBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, CancelInputTags) == 0x000058, "Member 'UBehavior_AttackBehaviorBase_C::CancelInputTags' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, InHitWindow) == 0x000078, "Member 'UBehavior_AttackBehaviorBase_C::InHitWindow' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, HasHitPawn) == 0x000079, "Member 'UBehavior_AttackBehaviorBase_C::HasHitPawn' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, HitWindowNotify) == 0x000080, "Member 'UBehavior_AttackBehaviorBase_C::HitWindowNotify' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, MultiTarget) == 0x000088, "Member 'UBehavior_AttackBehaviorBase_C::MultiTarget' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, IsPowerAttack) == 0x000089, "Member 'UBehavior_AttackBehaviorBase_C::IsPowerAttack' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, HitWindowHitPawns) == 0x000090, "Member 'UBehavior_AttackBehaviorBase_C::HitWindowHitPawns' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, HitWindowHitPrimitives) == 0x0000E0, "Member 'UBehavior_AttackBehaviorBase_C::HitWindowHitPrimitives' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, ClutterPushForce) == 0x000130, "Member 'UBehavior_AttackBehaviorBase_C::ClutterPushForce' has a wrong offset!");
static_assert(offsetof(UBehavior_AttackBehaviorBase_C, Player_controller) == 0x000138, "Member 'UBehavior_AttackBehaviorBase_C::Player_controller' has a wrong offset!");

}

