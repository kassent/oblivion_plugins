﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterParalyze

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "VActorStateMachine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_CharacterParalyze.AST_CharacterParalyze_C
// 0x0038 (0x00C0 - 0x0088)
class UAST_CharacterParalyze_C final : public UVState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AVPairedPawn*                           PairedPawn;                                        // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 PreviousMovementMode;                              // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviousControlleDesiredRotation;                  // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartingMaxDampingMultiplier;                      // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DampingReductionDuration;                          // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayBeforeDampingReduction;                       // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StillParalyzed;                                    // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AST_CharacterParalyze(int32 EntryPoint);
	void OnEntered();
	void OnExited();
	void OnStateUpdate(float DeltaTime);
	void PostInit();
	void SlowPhysicDampingOverTime(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_CharacterParalyze_C">();
	}
	static class UAST_CharacterParalyze_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_CharacterParalyze_C>();
	}
};
static_assert(alignof(UAST_CharacterParalyze_C) == 0x000008, "Wrong alignment on UAST_CharacterParalyze_C");
static_assert(sizeof(UAST_CharacterParalyze_C) == 0x0000C0, "Wrong size on UAST_CharacterParalyze_C");
static_assert(offsetof(UAST_CharacterParalyze_C, UberGraphFrame) == 0x000088, "Member 'UAST_CharacterParalyze_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, PairedPawn) == 0x000090, "Member 'UAST_CharacterParalyze_C::PairedPawn' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, PreviousMovementMode) == 0x000098, "Member 'UAST_CharacterParalyze_C::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, PreviousControlleDesiredRotation) == 0x000099, "Member 'UAST_CharacterParalyze_C::PreviousControlleDesiredRotation' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, StartingMaxDampingMultiplier) == 0x0000A0, "Member 'UAST_CharacterParalyze_C::StartingMaxDampingMultiplier' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, DampingReductionDuration) == 0x0000A8, "Member 'UAST_CharacterParalyze_C::DampingReductionDuration' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, DelayBeforeDampingReduction) == 0x0000B0, "Member 'UAST_CharacterParalyze_C::DelayBeforeDampingReduction' has a wrong offset!");
static_assert(offsetof(UAST_CharacterParalyze_C, StillParalyzed) == 0x0000B8, "Member 'UAST_CharacterParalyze_C::StillParalyzed' has a wrong offset!");

}

