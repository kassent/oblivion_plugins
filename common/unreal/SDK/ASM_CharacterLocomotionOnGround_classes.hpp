﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASM_CharacterLocomotionOnGround

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "VActorStateMachine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ASM_CharacterLocomotionOnGround.ASM_CharacterLocomotionOnGround_C
// 0x0008 (0x00B0 - 0x00A8)
class UASM_CharacterLocomotionOnGround_C final : public UVStateMachine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ASM_CharacterLocomotionOnGround(int32 EntryPoint);
	void OnEntered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ASM_CharacterLocomotionOnGround_C">();
	}
	static class UASM_CharacterLocomotionOnGround_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASM_CharacterLocomotionOnGround_C>();
	}
};
static_assert(alignof(UASM_CharacterLocomotionOnGround_C) == 0x000008, "Wrong alignment on UASM_CharacterLocomotionOnGround_C");
static_assert(sizeof(UASM_CharacterLocomotionOnGround_C) == 0x0000B0, "Wrong size on UASM_CharacterLocomotionOnGround_C");
static_assert(offsetof(UASM_CharacterLocomotionOnGround_C, UberGraphFrame) == 0x0000A8, "Member 'UASM_CharacterLocomotionOnGround_C::UberGraphFrame' has a wrong offset!");

}

