﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterActionBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_CharacterActionBlock.AST_CharacterActionBlock_C
// 0x0018 (0x00C0 - 0x00A8)
class UAST_CharacterActionBlock_C final : public UVAltarActionState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FInputDevicePropertyHandle             TriggerVibrationHandle;                            // 0x00B0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPawnAnimatedAction*                   Action;                                            // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AST_CharacterActionBlock(int32 EntryPoint);
	void OnCanceled_72846CF14F9044E82AA460A6824F38AA();
	void OnCompleted_72846CF14F9044E82AA460A6824F38AA();
	void OnEntered();
	void OnExited();
	void OnStateUpdate(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_CharacterActionBlock_C">();
	}
	static class UAST_CharacterActionBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_CharacterActionBlock_C>();
	}
};
static_assert(alignof(UAST_CharacterActionBlock_C) == 0x000008, "Wrong alignment on UAST_CharacterActionBlock_C");
static_assert(sizeof(UAST_CharacterActionBlock_C) == 0x0000C0, "Wrong size on UAST_CharacterActionBlock_C");
static_assert(offsetof(UAST_CharacterActionBlock_C, UberGraphFrame) == 0x0000A8, "Member 'UAST_CharacterActionBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAST_CharacterActionBlock_C, TriggerVibrationHandle) == 0x0000B0, "Member 'UAST_CharacterActionBlock_C::TriggerVibrationHandle' has a wrong offset!");
static_assert(offsetof(UAST_CharacterActionBlock_C, Action) == 0x0000B8, "Member 'UAST_CharacterActionBlock_C::Action' has a wrong offset!");

}

