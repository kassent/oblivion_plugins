﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_SettingsMenu_TimedRevertPopup

#include "Basic.hpp"

#include "WBP_Modern_SettingsMenu_TimedRevertPopup_classes.hpp"
#include "WBP_Modern_SettingsMenu_TimedRevertPopup_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "Tick");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "PreConstruct");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.MenuFadeInOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 AnimationTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::MenuFadeInOut(bool InIsVisible, double* AnimationTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "MenuFadeInOut");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_MenuFadeInOut Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationTime != nullptr)
		*AnimationTime = Parms.AnimationTime;
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.ManageCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::ManageCountDown(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "ManageCountDown");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_ManageCountDown Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.InitPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewButton1Text                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewButton2Text                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NewTimer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::InitPopup(const class FText& NewTitle, const class FText& NewMessage, const class FText& NewButton1Text, const class FText& NewButton2Text, int32 NewTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "InitPopup");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_InitPopup Parms{};

	Parms.NewTitle = std::move(NewTitle);
	Parms.NewMessage = std::move(NewMessage);
	Parms.NewButton1Text = std::move(NewButton1Text);
	Parms.NewButton2Text = std::move(NewButton2Text);
	Parms.NewTimer = NewTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.ExecuteUbergraph_WBP_Modern_SettingsMenu_TimedRevertPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::ExecuteUbergraph_WBP_Modern_SettingsMenu_TimedRevertPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "ExecuteUbergraph_WBP_Modern_SettingsMenu_TimedRevertPopup");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_ExecuteUbergraph_WBP_Modern_SettingsMenu_TimedRevertPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BP_OnTirggeringActionCommited
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BP_OnTirggeringActionCommited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BP_OnTirggeringActionCommited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BP_OnHandleBackAction");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_TimedRevertPopup.WBP_Modern_SettingsMenu_TimedRevertPopup_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Modern_SettingsMenu_TimedRevertPopup_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_TimedRevertPopup_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Modern_SettingsMenu_TimedRevertPopup_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

