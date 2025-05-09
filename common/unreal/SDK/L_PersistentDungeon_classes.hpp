﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: L_PersistentDungeon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass L_PersistentDungeon.L_PersistentDungeon_C
// 0x0008 (0x02A8 - 0x02A0)
class AL_PersistentDungeon_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_L_PersistentDungeon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"L_PersistentDungeon_C">();
	}
	static class AL_PersistentDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AL_PersistentDungeon_C>();
	}
};
static_assert(alignof(AL_PersistentDungeon_C) == 0x000008, "Wrong alignment on AL_PersistentDungeon_C");
static_assert(sizeof(AL_PersistentDungeon_C) == 0x0002A8, "Wrong size on AL_PersistentDungeon_C");
static_assert(offsetof(AL_PersistentDungeon_C, UberGraphFrame) == 0x0002A0, "Member 'AL_PersistentDungeon_C::UberGraphFrame' has a wrong offset!");

}

