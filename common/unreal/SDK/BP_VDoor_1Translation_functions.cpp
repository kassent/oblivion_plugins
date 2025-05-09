﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VDoor_1Translation

#include "Basic.hpp"

#include "BP_VDoor_1Translation_classes.hpp"
#include "BP_VDoor_1Translation_parameters.hpp"


namespace SDK
{

// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.ExecuteUbergraph_BP_VDoor_1Translation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VDoor_1Translation_C::ExecuteUbergraph_BP_VDoor_1Translation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VDoor_1Translation_C", "ExecuteUbergraph_BP_VDoor_1Translation");

	Params::BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VDoor_1Translation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VDoor_1Translation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.Update Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Two_sec                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Two_sec_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VDoor_1Translation_C::Update_Timeline(double Two_sec, double Two_sec_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VDoor_1Translation_C", "Update Timeline");

	Params::BP_VDoor_1Translation_C_Update_Timeline Parms{};

	Parms.Two_sec = Two_sec;
	Parms.Two_sec_0 = Two_sec_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VDoor_1Translation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VDoor_1Translation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

