﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VChest_1RotationInclude1Rotation

#include "Basic.hpp"

#include "BP_VChest_1RotationInclude1Rotation_classes.hpp"
#include "BP_VChest_1RotationInclude1Rotation_parameters.hpp"


namespace SDK
{

// Function BP_VChest_1RotationInclude1Rotation.BP_VChest_1RotationInclude1Rotation_C.ExecuteUbergraph_BP_VChest_1RotationInclude1Rotation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VChest_1RotationInclude1Rotation_C::ExecuteUbergraph_BP_VChest_1RotationInclude1Rotation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VChest_1RotationInclude1Rotation_C", "ExecuteUbergraph_BP_VChest_1RotationInclude1Rotation");

	Params::BP_VChest_1RotationInclude1Rotation_C_ExecuteUbergraph_BP_VChest_1RotationInclude1Rotation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VChest_1RotationInclude1Rotation.BP_VChest_1RotationInclude1Rotation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VChest_1RotationInclude1Rotation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VChest_1RotationInclude1Rotation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VChest_1RotationInclude1Rotation.BP_VChest_1RotationInclude1Rotation_C.Update Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HalfSecBefore                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HalfSecAfter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Threerd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VChest_1RotationInclude1Rotation_C::Update_Timeline(double HalfSecBefore, double HalfSecAfter, double Threerd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VChest_1RotationInclude1Rotation_C", "Update Timeline");

	Params::BP_VChest_1RotationInclude1Rotation_C_Update_Timeline Parms{};

	Parms.HalfSecBefore = HalfSecBefore;
	Parms.HalfSecAfter = HalfSecAfter;
	Parms.Threerd = Threerd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VChest_1RotationInclude1Rotation.BP_VChest_1RotationInclude1Rotation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VChest_1RotationInclude1Rotation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VChest_1RotationInclude1Rotation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

