﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_Dialog

#include "Basic.hpp"

#include "WBP_ModernMenu_Dialog_classes.hpp"
#include "WBP_ModernMenu_Dialog_parameters.hpp"


namespace SDK
{

// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.BndEvt__WBP_LegacyMenu_Dialog_dialog_buttons_K2Node_ComponentBoundEvent_10_OnIconButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ELegacyDialogButton                     DialogButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::BndEvt__WBP_LegacyMenu_Dialog_dialog_buttons_K2Node_ComponentBoundEvent_10_OnIconButtonClicked__DelegateSignature(ELegacyDialogButton DialogButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "BndEvt__WBP_LegacyMenu_Dialog_dialog_buttons_K2Node_ComponentBoundEvent_10_OnIconButtonClicked__DelegateSignature");

	Params::WBP_ModernMenu_Dialog_C_BndEvt__WBP_LegacyMenu_Dialog_dialog_buttons_K2Node_ComponentBoundEvent_10_OnIconButtonClicked__DelegateSignature Parms{};

	Parms.DialogButton = DialogButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.BndEvt__WBP_LegacyMenu_Dialog_dialog_skip_button_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::BndEvt__WBP_LegacyMenu_Dialog_dialog_skip_button_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "BndEvt__WBP_LegacyMenu_Dialog_dialog_skip_button_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_ModernMenu_Dialog_C_BndEvt__WBP_LegacyMenu_Dialog_dialog_skip_button_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ModernMenu_Dialog_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "BP_OnHandleBackAction");

	Params::WBP_ModernMenu_Dialog_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.CreateDialogWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FResponsesData>&          ResponsesData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_Dialog_C::CreateDialogWidget(TArray<struct FResponsesData>& ResponsesData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "CreateDialogWidget");

	Params::WBP_ModernMenu_Dialog_C_CreateDialogWidget Parms{};

	Parms.ResponsesData = std::move(ResponsesData);

	UObject::ProcessEvent(Func, &Parms);

	ResponsesData = std::move(Parms.ResponsesData);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.ExecuteUbergraph_WBP_ModernMenu_Dialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::ExecuteUbergraph_WBP_ModernMenu_Dialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "ExecuteUbergraph_WBP_ModernMenu_Dialog");

	Params::WBP_ModernMenu_Dialog_C_ExecuteUbergraph_WBP_ModernMenu_Dialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.FocusFirstDialogElement
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::FocusFirstDialogElement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "FocusFirstDialogElement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.FocusLastDialogElement
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::FocusLastDialogElement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "FocusLastDialogElement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.MenuFadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::MenuFadeInOut(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "MenuFadeInOut");

	Params::WBP_ModernMenu_Dialog_C_MenuFadeInOut Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.OnDialogClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::OnDialogClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "OnDialogClicked");

	Params::WBP_ModernMenu_Dialog_C_OnDialogClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.OnFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "OnFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.OnInputMethodChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        NewInputType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::OnInputMethodChange(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "OnInputMethodChange");

	Params::WBP_ModernMenu_Dialog_C_OnInputMethodChange Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.SendClickTopic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::SendClickTopic(class UObject* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "SendClickTopic");

	Params::WBP_ModernMenu_Dialog_C_SendClickTopic Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.SetupFooter
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::SetupFooter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "SetupFooter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.SetVDialogueMenuViewModel
// (Final, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVDialogueMenuViewModel*          ViewModel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::SetVDialogueMenuViewModel(class UVDialogueMenuViewModel* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "SetVDialogueMenuViewModel");

	Params::WBP_ModernMenu_Dialog_C_SetVDialogueMenuViewModel Parms{};

	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.SetViewModelReference
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVViewModelBase*                  ViewModelRef                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::SetViewModelReference(class UVViewModelBase* ViewModelRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "SetViewModelReference");

	Params::WBP_ModernMenu_Dialog_C_SetViewModelReference Parms{};

	Parms.ViewModelRef = ViewModelRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.ShowResponses
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::ShowResponses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "ShowResponses");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.ShowSubtitile
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_Dialog_C::ShowSubtitile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "ShowSubtitile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Update Buttons Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLegacyDialogMenuButtonVisibility&NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModernMenu_Dialog_C::Update_Buttons_Visibility(const struct FLegacyDialogMenuButtonVisibility& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Update Buttons Visibility");

	Params::WBP_ModernMenu_Dialog_C_Update_Buttons_Visibility Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Update Responses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FResponsesData>&    NewParam                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_Dialog_C::Update_Responses(const TArray<struct FResponsesData>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Update Responses");

	Params::WBP_ModernMenu_Dialog_C_Update_Responses Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Update Speaker Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModernMenu_Dialog_C::Update_Speaker_Name(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Update Speaker Name");

	Params::WBP_ModernMenu_Dialog_C_Update_Speaker_Name Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Update Subtitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModernMenu_Dialog_C::Update_Subtitle(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Update Subtitle");

	Params::WBP_ModernMenu_Dialog_C_Update_Subtitle Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.Update Subtitle Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_Dialog_C::Update_Subtitle_Visibility(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "Update Subtitle Visibility");

	Params::WBP_ModernMenu_Dialog_C_Update_Subtitle_Visibility Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ModernMenu_Dialog_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_Dialog_C", "BP_GetDesiredFocusTarget");

	Params::WBP_ModernMenu_Dialog_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

