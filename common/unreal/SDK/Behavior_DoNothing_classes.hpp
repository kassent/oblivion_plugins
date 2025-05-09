﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Behavior_DoNothing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Behavior_DoNothing.Behavior_DoNothing_C
// 0x0008 (0x0058 - 0x0050)
class UBehavior_DoNothing_C final : public UVActorBehaviorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Behavior_DoNothing(int32 EntryPoint);
	void OnInit();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Behavior_DoNothing_C">();
	}
	static class UBehavior_DoNothing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehavior_DoNothing_C>();
	}
};
static_assert(alignof(UBehavior_DoNothing_C) == 0x000008, "Wrong alignment on UBehavior_DoNothing_C");
static_assert(sizeof(UBehavior_DoNothing_C) == 0x000058, "Wrong size on UBehavior_DoNothing_C");
static_assert(offsetof(UBehavior_DoNothing_C, UberGraphFrame) == 0x000050, "Member 'UBehavior_DoNothing_C::UberGraphFrame' has a wrong offset!");

}

