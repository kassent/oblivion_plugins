﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyHud_InfoIcon

#include "Basic.hpp"

#include "WBP_LegacyHud_InfoIcon_classes.hpp"
#include "WBP_LegacyHud_InfoIcon_parameters.hpp"


namespace SDK
{

// Function WBP_LegacyHud_InfoIcon.WBP_LegacyHud_InfoIcon_C.ExecuteUbergraph_WBP_LegacyHud_InfoIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LegacyHud_InfoIcon_C::ExecuteUbergraph_WBP_LegacyHud_InfoIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LegacyHud_InfoIcon_C", "ExecuteUbergraph_WBP_LegacyHud_InfoIcon");

	Params::WBP_LegacyHud_InfoIcon_C_ExecuteUbergraph_WBP_LegacyHud_InfoIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LegacyHud_InfoIcon.WBP_LegacyHud_InfoIcon_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)

void UWBP_LegacyHud_InfoIcon_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LegacyHud_InfoIcon_C", "OnSynchronizeProperties");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LegacyHud_InfoIcon.WBP_LegacyHud_InfoIcon_C.SetTextColour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Colour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LegacyHud_InfoIcon_C::SetTextColour(const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LegacyHud_InfoIcon_C", "SetTextColour");

	Params::WBP_LegacyHud_InfoIcon_C_SetTextColour Parms{};

	Parms.Colour = std::move(Colour);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LegacyHud_InfoIcon.WBP_LegacyHud_InfoIcon_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LegacyHud_InfoIcon_C::SetValue(const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LegacyHud_InfoIcon_C", "SetValue");

	Params::WBP_LegacyHud_InfoIcon_C_SetValue Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}

}

