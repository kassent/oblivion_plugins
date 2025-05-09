﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_SewerManHoleCover01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_VDoor_1Rotation_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Door_SewerManHoleCover01.BP_Door_SewerManHoleCover01_C
// 0x0038 (0x04D0 - 0x0498)
class ABP_Door_SewerManHoleCover01_C : public ABP_VDoor_1Rotation_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Door_SewerManHoleCover01_C;      // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Original_Location;                                 // 0x04A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target_Location;                                   // 0x04B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Door_SewerManHoleCover01(int32 EntryPoint);
	void Update_Timeline(double Two_sec, double Two_sec_0);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Door_SewerManHoleCover01_C">();
	}
	static class ABP_Door_SewerManHoleCover01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Door_SewerManHoleCover01_C>();
	}
};
static_assert(alignof(ABP_Door_SewerManHoleCover01_C) == 0x000008, "Wrong alignment on ABP_Door_SewerManHoleCover01_C");
static_assert(sizeof(ABP_Door_SewerManHoleCover01_C) == 0x0004D0, "Wrong size on ABP_Door_SewerManHoleCover01_C");
static_assert(offsetof(ABP_Door_SewerManHoleCover01_C, UberGraphFrame_BP_Door_SewerManHoleCover01_C) == 0x000498, "Member 'ABP_Door_SewerManHoleCover01_C::UberGraphFrame_BP_Door_SewerManHoleCover01_C' has a wrong offset!");
static_assert(offsetof(ABP_Door_SewerManHoleCover01_C, Original_Location) == 0x0004A0, "Member 'ABP_Door_SewerManHoleCover01_C::Original_Location' has a wrong offset!");
static_assert(offsetof(ABP_Door_SewerManHoleCover01_C, Target_Location) == 0x0004B8, "Member 'ABP_Door_SewerManHoleCover01_C::Target_Location' has a wrong offset!");

}

