﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterResurrect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AST_CharacterSingleActionState_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_CharacterResurrect.AST_CharacterResurrect_C
// 0x0010 (0x00D0 - 0x00C0)
class UAST_CharacterResurrect_C final : public UAST_CharacterSingleActionState_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AST_CharacterResurrect_C;           // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EMovementMode                                 PreviousMovementMode;                              // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviousControlleDesiredRotation;                  // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AST_CharacterResurrect(int32 EntryPoint);
	void OnEntered();
	void OnExited();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_CharacterResurrect_C">();
	}
	static class UAST_CharacterResurrect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_CharacterResurrect_C>();
	}
};
static_assert(alignof(UAST_CharacterResurrect_C) == 0x000008, "Wrong alignment on UAST_CharacterResurrect_C");
static_assert(sizeof(UAST_CharacterResurrect_C) == 0x0000D0, "Wrong size on UAST_CharacterResurrect_C");
static_assert(offsetof(UAST_CharacterResurrect_C, UberGraphFrame_AST_CharacterResurrect_C) == 0x0000C0, "Member 'UAST_CharacterResurrect_C::UberGraphFrame_AST_CharacterResurrect_C' has a wrong offset!");
static_assert(offsetof(UAST_CharacterResurrect_C, PreviousMovementMode) == 0x0000C8, "Member 'UAST_CharacterResurrect_C::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(UAST_CharacterResurrect_C, PreviousControlleDesiredRotation) == 0x0000C9, "Member 'UAST_CharacterResurrect_C::PreviousControlleDesiredRotation' has a wrong offset!");

}

