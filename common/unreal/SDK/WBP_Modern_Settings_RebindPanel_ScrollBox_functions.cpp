﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_RebindPanel_ScrollBox

#include "Basic.hpp"

#include "WBP_Modern_Settings_RebindPanel_ScrollBox_classes.hpp"
#include "WBP_Modern_Settings_RebindPanel_ScrollBox_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Binding
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Binding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Binding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.BP_Update Lock State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewLockState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::BP_Update_Lock_State(bool NewLockState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "BP_Update Lock State");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_BP_Update_Lock_State Parms{};

	Parms.NewLockState = NewLockState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.BroadcastNavigationIndexChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewNavigationIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::BroadcastNavigationIndexChanged(int32 NewNavigationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "BroadcastNavigationIndexChanged");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_BroadcastNavigationIndexChanged Parms{};

	Parms.NewNavigationIndex = NewNavigationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.ExecuteUbergraph_WBP_Modern_Settings_RebindPanel_ScrollBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::ExecuteUbergraph_WBP_Modern_Settings_RebindPanel_ScrollBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "ExecuteUbergraph_WBP_Modern_Settings_RebindPanel_ScrollBox");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_ExecuteUbergraph_WBP_Modern_Settings_RebindPanel_ScrollBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.IsKeyboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Keyboard                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::IsKeyboard(bool* Keyboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "IsKeyboard");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_IsKeyboard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Keyboard != nullptr)
		*Keyboard = Parms.Keyboard;
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "OnInputMethodChanged");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.OnWidgetListenStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVNavigableInputKeySelector*      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    NewListenState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::OnWidgetListenStateChanged(class UVNavigableInputKeySelector* Target, bool NewListenState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "OnWidgetListenStateChanged");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_OnWidgetListenStateChanged Parms{};

	Parms.Target = Target;
	Parms.NewListenState = NewListenState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Populate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVModernSettingRebindData*        NewDataTable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Populate(class UVModernSettingRebindData* NewDataTable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Populate");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_Populate Parms{};

	Parms.NewDataTable = NewDataTable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "PreConstruct");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.ResetBindingsToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::ResetBindingsToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "ResetBindingsToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.SetScrollbarInputHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::SetScrollbarInputHint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "SetScrollbarInputHint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.Unbinding
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Settings_RebindPanel_ScrollBox_C::Unbinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "Unbinding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Settings_RebindPanel_ScrollBox.WBP_Modern_Settings_RebindPanel_ScrollBox_C.DoesAllowNavigation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Modern_Settings_RebindPanel_ScrollBox_C::DoesAllowNavigation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_RebindPanel_ScrollBox_C", "DoesAllowNavigation");

	Params::WBP_Modern_Settings_RebindPanel_ScrollBox_C_DoesAllowNavigation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

