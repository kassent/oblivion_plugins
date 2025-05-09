﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_DialogEntry

#include "Basic.hpp"

#include "WBP_ModernMenu_DialogEntry_classes.hpp"
#include "WBP_ModernMenu_DialogEntry_parameters.hpp"


namespace SDK
{

// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.ExecuteUbergraph_WBP_ModernMenu_DialogEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_DialogEntry_C::ExecuteUbergraph_WBP_ModernMenu_DialogEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "ExecuteUbergraph_WBP_ModernMenu_DialogEntry");

	Params::WBP_ModernMenu_DialogEntry_C_ExecuteUbergraph_WBP_ModernMenu_DialogEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.OnFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_DialogEntry_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "OnFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.OnFocusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_DialogEntry_C::OnFocusEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "OnFocusEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.OnInitButtonWidgets
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_DialogEntry_C::OnInitButtonWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "OnInitButtonWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.OnUnfocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_DialogEntry_C::OnUnfocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "OnUnfocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.OnUnfocusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_DialogEntry_C::OnUnfocusEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "OnUnfocusEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_DialogEntry.WBP_ModernMenu_DialogEntry_C.SetTextIsNotNewColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNewTopic_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_DialogEntry_C::SetTextIsNotNewColor(bool IsNewTopic_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_DialogEntry_C", "SetTextIsNotNewColor");

	Params::WBP_ModernMenu_DialogEntry_C_SetTextIsNotNewColor Parms{};

	Parms.IsNewTopic_0 = IsNewTopic_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

