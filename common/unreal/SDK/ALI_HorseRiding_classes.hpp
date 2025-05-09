﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_HorseRiding

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_HorseRiding.ALI_HorseRiding_C
// 0x0000 (0x0000 - 0x0000)
class IALI_HorseRiding_C final
{
public:
	void HorseRidingLayer(struct FPoseLink* HorseRidingLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_HorseRiding_C">();
	}
	static class IALI_HorseRiding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_HorseRiding_C>();
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
static_assert(alignof(IALI_HorseRiding_C) == 0x000001, "Wrong alignment on IALI_HorseRiding_C");
static_assert(sizeof(IALI_HorseRiding_C) == 0x000001, "Wrong size on IALI_HorseRiding_C");

}

