﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IDPitStairWell01A

#include "Basic.hpp"

#include "Altar_classes.hpp"


namespace SDK
{

// VModdableBlueprintGeneratedClass BP_IDPitStairWell01A.BP_IDPitStairWell01A_C
// 0x0018 (0x0360 - 0x0348)
class ABP_IDPitStairWell01A_C final : public AVStatic
{
public:
	class UStaticMeshComponent*                   SM_idpitstairwell01a_COL;                          // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULocalMapComponent*                     LocalMap;                                          // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshComponent1;                                    // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IDPitStairWell01A_C">();
	}
	static class ABP_IDPitStairWell01A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IDPitStairWell01A_C>();
	}
};
static_assert(alignof(ABP_IDPitStairWell01A_C) == 0x000008, "Wrong alignment on ABP_IDPitStairWell01A_C");
static_assert(sizeof(ABP_IDPitStairWell01A_C) == 0x000360, "Wrong size on ABP_IDPitStairWell01A_C");
static_assert(offsetof(ABP_IDPitStairWell01A_C, SM_idpitstairwell01a_COL) == 0x000348, "Member 'ABP_IDPitStairWell01A_C::SM_idpitstairwell01a_COL' has a wrong offset!");
static_assert(offsetof(ABP_IDPitStairWell01A_C, LocalMap) == 0x000350, "Member 'ABP_IDPitStairWell01A_C::LocalMap' has a wrong offset!");
static_assert(offsetof(ABP_IDPitStairWell01A_C, MeshComponent1) == 0x000358, "Member 'ABP_IDPitStairWell01A_C::MeshComponent1' has a wrong offset!");

}

