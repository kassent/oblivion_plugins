﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterDead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_CharacterDead.AST_CharacterDead_C
// 0x0008 (0x00B0 - 0x00A8)
class UAST_CharacterDead_C final : public UVAltarActionState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AST_CharacterDead(int32 EntryPoint);
	void OnEnded_0C7A17AF4833E9D611128AA90521C863();
	void OnEntered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_CharacterDead_C">();
	}
	static class UAST_CharacterDead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_CharacterDead_C>();
	}
};
static_assert(alignof(UAST_CharacterDead_C) == 0x000008, "Wrong alignment on UAST_CharacterDead_C");
static_assert(sizeof(UAST_CharacterDead_C) == 0x0000B0, "Wrong size on UAST_CharacterDead_C");
static_assert(offsetof(UAST_CharacterDead_C, UberGraphFrame) == 0x0000A8, "Member 'UAST_CharacterDead_C::UberGraphFrame' has a wrong offset!");

}

