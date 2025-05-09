﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralInteriorDressingToolRuntime

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ProceduralInteriorDressingToolRuntime.BFL_ProceduralInteriorDressingToolRuntime
// 0x0000 (0x0028 - 0x0028)
class UBFL_ProceduralInteriorDressingToolRuntime final : public UBlueprintFunctionLibrary
{
public:
	static void AddLandscapeGrassExclusionBox(class AActor* Owner, const struct FBox& BoxToRemove);
	static void RemoveLandscapeGrassExclusionBox(class AActor* Owner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BFL_ProceduralInteriorDressingToolRuntime">();
	}
	static class UBFL_ProceduralInteriorDressingToolRuntime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_ProceduralInteriorDressingToolRuntime>();
	}
};
static_assert(alignof(UBFL_ProceduralInteriorDressingToolRuntime) == 0x000008, "Wrong alignment on UBFL_ProceduralInteriorDressingToolRuntime");
static_assert(sizeof(UBFL_ProceduralInteriorDressingToolRuntime) == 0x000028, "Wrong size on UBFL_ProceduralInteriorDressingToolRuntime");

// Class ProceduralInteriorDressingToolRuntime.ProceduralInstanceActor
// 0x0008 (0x02A0 - 0x0298)
class AProceduralInstanceActor final : public APartitionActor
{
public:
	class USceneComponent*                        RootSceneComponent;                                // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralInstanceActor">();
	}
	static class AProceduralInstanceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralInstanceActor>();
	}
};
static_assert(alignof(AProceduralInstanceActor) == 0x000008, "Wrong alignment on AProceduralInstanceActor");
static_assert(sizeof(AProceduralInstanceActor) == 0x0002A0, "Wrong size on AProceduralInstanceActor");
static_assert(offsetof(AProceduralInstanceActor, RootSceneComponent) == 0x000298, "Member 'AProceduralInstanceActor::RootSceneComponent' has a wrong offset!");

}

