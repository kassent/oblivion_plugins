﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_SettingsMenu_ValidationPopup

#include "Basic.hpp"

#include "WBP_Modern_SettingsMenu_ValidationPopup_classes.hpp"
#include "WBP_Modern_SettingsMenu_ValidationPopup_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "PreConstruct");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.MenuFadeInOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 AnimationTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::MenuFadeInOut(bool InIsVisible, double* AnimationTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "MenuFadeInOut");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_MenuFadeInOut Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationTime != nullptr)
		*AnimationTime = Parms.AnimationTime;
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.InpActEvt_IA_UI_Specific_SettingMenu_Popup_Special_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::InpActEvt_IA_UI_Specific_SettingMenu_Popup_Special_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "InpActEvt_IA_UI_Specific_SettingMenu_Popup_Special_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_InpActEvt_IA_UI_Specific_SettingMenu_Popup_Special_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.InitPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewButton1Text                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewButton2Text                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      NewButton3Text                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::InitPopup(const class FText& NewTitle, const class FText& NewMessage, const class FText& NewButton1Text, const class FText& NewButton2Text, const class FText& NewButton3Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "InitPopup");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_InitPopup Parms{};

	Parms.NewTitle = std::move(NewTitle);
	Parms.NewMessage = std::move(NewMessage);
	Parms.NewButton1Text = std::move(NewButton1Text);
	Parms.NewButton2Text = std::move(NewButton2Text);
	Parms.NewButton3Text = std::move(NewButton3Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.ExecuteUbergraph_WBP_Modern_SettingsMenu_ValidationPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::ExecuteUbergraph_WBP_Modern_SettingsMenu_ValidationPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "ExecuteUbergraph_WBP_Modern_SettingsMenu_ValidationPopup");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_ExecuteUbergraph_WBP_Modern_SettingsMenu_ValidationPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BP_OnTirggeringActionCommited
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BP_OnTirggeringActionCommited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BP_OnTirggeringActionCommited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Modern_SettingsMenu_ValidationPopup_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BP_OnHandleBackAction");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_3_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_3_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_3_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_3_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_BndEvt__WBP_Modern_SettingsMenu_ValidationPopup_Button_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BindActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_SettingsMenu_ValidationPopup_C::BindActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BindActions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_SettingsMenu_ValidationPopup.WBP_Modern_SettingsMenu_ValidationPopup_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Modern_SettingsMenu_ValidationPopup_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_SettingsMenu_ValidationPopup_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Modern_SettingsMenu_ValidationPopup_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

