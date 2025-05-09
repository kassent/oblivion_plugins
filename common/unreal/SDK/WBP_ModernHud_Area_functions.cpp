﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_Area

#include "Basic.hpp"

#include "WBP_ModernHud_Area_classes.hpp"
#include "WBP_ModernHud_Area_parameters.hpp"


namespace SDK
{

// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernHud_Area_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.DiscoveredRetainer_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimatableRetainerBox*           DiscoveredRetainer_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::DiscoveredRetainer_Event(class UAnimatableRetainerBox* DiscoveredRetainer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "DiscoveredRetainer_Event");

	Params::WBP_ModernHud_Area_C_DiscoveredRetainer_Event Parms{};

	Parms.DiscoveredRetainer_0 = DiscoveredRetainer_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.DisplayArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      AreaName_0                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModernHud_Area_C::DisplayArea(const class FText& AreaName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "DisplayArea");

	Params::WBP_ModernHud_Area_C_DisplayArea Parms{};

	Parms.AreaName_0 = std::move(AreaName_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.ExecuteUbergraph_WBP_ModernHud_Area
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::ExecuteUbergraph_WBP_ModernHud_Area(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "ExecuteUbergraph_WBP_ModernHud_Area");

	Params::WBP_ModernHud_Area_C_ExecuteUbergraph_WBP_ModernHud_Area Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.SequenceEvent__ENTRYPOINTWBP_ModernHud_Area
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimatableRetainerBox*           DiscoveredRetainer_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::SequenceEvent__ENTRYPOINTWBP_ModernHud_Area(class UAnimatableRetainerBox* DiscoveredRetainer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "SequenceEvent__ENTRYPOINTWBP_ModernHud_Area");

	Params::WBP_ModernHud_Area_C_SequenceEvent__ENTRYPOINTWBP_ModernHud_Area Parms{};

	Parms.DiscoveredRetainer_0 = DiscoveredRetainer_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.TriggerAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AreaDiscovered                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::TriggerAnimation(bool AreaDiscovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "TriggerAnimation");

	Params::WBP_ModernHud_Area_C_TriggerAnimation Parms{};

	Parms.AreaDiscovered = AreaDiscovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.Update Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Area_Discovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::Update_Visibility(bool Visible, bool Area_Discovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "Update Visibility");

	Params::WBP_ModernHud_Area_C_Update_Visibility Parms{};

	Parms.Visible = Visible;
	Parms.Area_Discovered = Area_Discovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_Area.WBP_ModernHud_Area_C.UpdateTrespassing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTrespassing_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_Area_C::UpdateTrespassing(bool IsTrespassing_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_Area_C", "UpdateTrespassing");

	Params::WBP_ModernHud_Area_C_UpdateTrespassing Parms{};

	Parms.IsTrespassing_0 = IsTrespassing_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

