﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernPrefab_Focusbox

#include "Basic.hpp"

#include "WBP_ModernPrefab_Focusbox_classes.hpp"
#include "WBP_ModernPrefab_Focusbox_parameters.hpp"


namespace SDK
{

// Function WBP_ModernPrefab_Focusbox.WBP_ModernPrefab_Focusbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernPrefab_Focusbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernPrefab_Focusbox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernPrefab_Focusbox.WBP_ModernPrefab_Focusbox_C.ExecuteUbergraph_WBP_ModernPrefab_Focusbox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernPrefab_Focusbox_C::ExecuteUbergraph_WBP_ModernPrefab_Focusbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernPrefab_Focusbox_C", "ExecuteUbergraph_WBP_ModernPrefab_Focusbox");

	Params::WBP_ModernPrefab_Focusbox_C_ExecuteUbergraph_WBP_ModernPrefab_Focusbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernPrefab_Focusbox.WBP_ModernPrefab_Focusbox_C.SetIsEquiped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEquiped                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernPrefab_Focusbox_C::SetIsEquiped(bool InIsEquiped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernPrefab_Focusbox_C", "SetIsEquiped");

	Params::WBP_ModernPrefab_Focusbox_C_SetIsEquiped Parms{};

	Parms.InIsEquiped = InIsEquiped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernPrefab_Focusbox.WBP_ModernPrefab_Focusbox_C.SetIsFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFocused                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernPrefab_Focusbox_C::SetIsFocused(bool InIsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernPrefab_Focusbox_C", "SetIsFocused");

	Params::WBP_ModernPrefab_Focusbox_C_SetIsFocused Parms{};

	Parms.InIsFocused = InIsFocused;

	UObject::ProcessEvent(Func, &Parms);
}

}

