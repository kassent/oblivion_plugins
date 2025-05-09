﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_CombatBlocking

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_CombatBlocking.ALI_CombatBlocking_C
// 0x0000 (0x0000 - 0x0000)
class IALI_CombatBlocking_C final
{
public:
	void BlockingLayer(struct FPoseLink* BlockingLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_CombatBlocking_C">();
	}
	static class IALI_CombatBlocking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_CombatBlocking_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IALI_CombatBlocking_C) == 0x000001, "Wrong alignment on IALI_CombatBlocking_C");
static_assert(sizeof(IALI_CombatBlocking_C) == 0x000001, "Wrong size on IALI_CombatBlocking_C");

}

