﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Menu_Player_Footer

#include "Basic.hpp"

#include "WBP_Modern_Menu_Player_Footer_classes.hpp"
#include "WBP_Modern_Menu_Player_Footer_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.AddInputHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     New_IA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldHideWithKeyboard                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldHideWithGamepad                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      OverrideName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_Menu_Player_Footer_C::AddInputHint(class UInputAction* New_IA, bool bShouldHideWithKeyboard, bool bShouldHideWithGamepad, const class FText& OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "AddInputHint");

	Params::WBP_Modern_Menu_Player_Footer_C_AddInputHint Parms{};

	Parms.New_IA = New_IA;
	Parms.bShouldHideWithKeyboard = bShouldHideWithKeyboard;
	Parms.bShouldHideWithGamepad = bShouldHideWithGamepad;
	Parms.OverrideName = std::move(OverrideName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.AddInputHintWithIMC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     New_IA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputMappingContext*             NewIMC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldHideWithKeyboard                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldHideWithGamepad                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      OverrideName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_Menu_Player_Footer_C::AddInputHintWithIMC(class UInputAction* New_IA, class UInputMappingContext* NewIMC, bool bShouldHideWithKeyboard, bool bShouldHideWithGamepad, const class FText& OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "AddInputHintWithIMC");

	Params::WBP_Modern_Menu_Player_Footer_C_AddInputHintWithIMC Parms{};

	Parms.New_IA = New_IA;
	Parms.NewIMC = NewIMC;
	Parms.bShouldHideWithKeyboard = bShouldHideWithKeyboard;
	Parms.bShouldHideWithGamepad = bShouldHideWithGamepad;
	Parms.OverrideName = std::move(OverrideName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.Clear Footer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_Menu_Player_Footer_C::Clear_Footer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "Clear Footer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Modern_Menu_Player_Footer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.ExecuteUbergraph_WBP_Modern_Menu_Player_Footer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::ExecuteUbergraph_WBP_Modern_Menu_Player_Footer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "ExecuteUbergraph_WBP_Modern_Menu_Player_Footer");

	Params::WBP_Modern_Menu_Player_Footer_C_ExecuteUbergraph_WBP_Modern_Menu_Player_Footer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.Get Bound Action Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInputAction*                     Input_Action                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Modern_Menu_Player_BoundAction_C**Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::Get_Bound_Action_Widget(class UInputAction* Input_Action, class UWBP_Modern_Menu_Player_BoundAction_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "Get Bound Action Widget");

	Params::WBP_Modern_Menu_Player_Footer_C_Get_Bound_Action_Widget Parms{};

	Parms.Input_Action = Input_Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.On Input Method Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        NewInputType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::On_Input_Method_Changed(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "On Input Method Changed");

	Params::WBP_Modern_Menu_Player_Footer_C_On_Input_Method_Changed Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.On Toggle Input Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::On_Toggle_Input_Visibility(bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "On Toggle Input Visibility");

	Params::WBP_Modern_Menu_Player_Footer_C_On_Toggle_Input_Visibility Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.OnHoldInputCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     InputAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::OnHoldInputCancel(class UInputAction* InputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "OnHoldInputCancel");

	Params::WBP_Modern_Menu_Player_Footer_C_OnHoldInputCancel Parms{};

	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.OnHoldInputStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     InputAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::OnHoldInputStart(class UInputAction* InputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "OnHoldInputStart");

	Params::WBP_Modern_Menu_Player_Footer_C_OnHoldInputStart Parms{};

	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.PluginCompliance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPluginCompliance                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Menu_Player_Footer_C::PluginCompliance(bool bPluginCompliance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "PluginCompliance");

	Params::WBP_Modern_Menu_Player_Footer_C_PluginCompliance Parms{};

	Parms.bPluginCompliance = bPluginCompliance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.UpdateInputActionDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFooterInputActionDescription&NewInputActionDescription                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Modern_Menu_Player_Footer_C::UpdateInputActionDescription(const struct FFooterInputActionDescription& NewInputActionDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "UpdateInputActionDescription");

	Params::WBP_Modern_Menu_Player_Footer_C_UpdateInputActionDescription Parms{};

	Parms.NewInputActionDescription = std::move(NewInputActionDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Menu_Player_Footer.WBP_Modern_Menu_Player_Footer_C.UpdateInputActionVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFooterInputActionVisibility&NewInputActionVisibility                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_Modern_Menu_Player_Footer_C::UpdateInputActionVisibility(const struct FFooterInputActionVisibility& NewInputActionVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Menu_Player_Footer_C", "UpdateInputActionVisibility");

	Params::WBP_Modern_Menu_Player_Footer_C_UpdateInputActionVisibility Parms{};

	Parms.NewInputActionVisibility = std::move(NewInputActionVisibility);

	UObject::ProcessEvent(Func, &Parms);
}

}

