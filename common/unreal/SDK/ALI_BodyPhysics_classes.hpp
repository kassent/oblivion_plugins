﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_BodyPhysics

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ALI_BodyPhysics.ALI_BodyPhysics_C
// 0x0000 (0x0000 - 0x0000)
class IALI_BodyPhysics_C final
{
public:
	void BodyPhysics(const struct FPoseLink& InPose, struct FPoseLink* BodyPhysics_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALI_BodyPhysics_C">();
	}
	static class IALI_BodyPhysics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IALI_BodyPhysics_C>();
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
static_assert(alignof(IALI_BodyPhysics_C) == 0x000001, "Wrong alignment on IALI_BodyPhysics_C");
static_assert(sizeof(IALI_BodyPhysics_C) == 0x000001, "Wrong size on IALI_BodyPhysics_C");

}

