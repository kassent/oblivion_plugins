﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_QuickKeys

#include "Basic.hpp"

#include "WBP_ModernMenu_QuickKeys_classes.hpp"
#include "WBP_ModernMenu_QuickKeys_parameters.hpp"


namespace SDK
{

// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.AddMappingContext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::AddMappingContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "AddMappingContext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_0_MouseEventDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FGeometry&                 InGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_QuickKeys_C::BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_0_MouseEventDelegate__DelegateSignature(class UUserWidget* Target, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_0_MouseEventDelegate__DelegateSignature");

	Params::WBP_ModernMenu_QuickKeys_C_BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_0_MouseEventDelegate__DelegateSignature Parms{};

	Parms.Target = Target;
	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_1_MouseEventDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FGeometry&                 InGeometry                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_QuickKeys_C::BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_1_MouseEventDelegate__DelegateSignature(class UUserWidget* Target, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_1_MouseEventDelegate__DelegateSignature");

	Params::WBP_ModernMenu_QuickKeys_C_BndEvt__WBP_ModernMenu_QuickKeys_quickKeys_material_K2Node_ComponentBoundEvent_1_MouseEventDelegate__DelegateSignature Parms{};

	Parms.Target = Target;
	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.ExecuteUbergraph_WBP_ModernMenu_QuickKeys
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::ExecuteUbergraph_WBP_ModernMenu_QuickKeys(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "ExecuteUbergraph_WBP_ModernMenu_QuickKeys");

	Params::WBP_ModernMenu_QuickKeys_C_ExecuteUbergraph_WBP_ModernMenu_QuickKeys Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.Focus Key By Quick Key
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const int32                             NewId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::Focus_Key_By_Quick_Key(const int32 NewId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "Focus Key By Quick Key");

	Params::WBP_ModernMenu_QuickKeys_C_Focus_Key_By_Quick_Key Parms{};

	Parms.NewId = NewId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.InpActEvt_IA_UI_Specific_QuickKeys_RightStick_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::InpActEvt_IA_UI_Specific_QuickKeys_RightStick_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "InpActEvt_IA_UI_Specific_QuickKeys_RightStick_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_ModernMenu_QuickKeys_C_InpActEvt_IA_UI_Specific_QuickKeys_RightStick_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.OnVisibilityChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::OnVisibilityChangedEvent(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "OnVisibilityChangedEvent");

	Params::WBP_ModernMenu_QuickKeys_C_OnVisibilityChangedEvent Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.PlayCloseAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::PlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "PlayCloseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.PlayOpenAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "PlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.PlayScaleUpAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewKeyID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::PlayScaleUpAnimation(int32 NewKeyID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "PlayScaleUpAnimation");

	Params::WBP_ModernMenu_QuickKeys_C_PlayScaleUpAnimation Parms{};

	Parms.NewKeyID = NewKeyID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.RefreshIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::RefreshIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "RefreshIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.RemoveMappingContext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::RemoveMappingContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "RemoveMappingContext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SendCloseHandler
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::SendCloseHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SendCloseHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SendOpenHandler
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::SendOpenHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SendOpenHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SetIcons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class UTexture2D*>&        IconsArray                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_QuickKeys_C::SetIcons(const TArray<class UTexture2D*>& IconsArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SetIcons");

	Params::WBP_ModernMenu_QuickKeys_C_SetIcons Parms{};

	Parms.IconsArray = std::move(IconsArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SetMousePositionInTheMiddle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_QuickKeys_C::SetMousePositionInTheMiddle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SetMousePositionInTheMiddle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SetQuickKeyByIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::SetQuickKeyByIndex(int32 Index_0, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SetQuickKeyByIndex");

	Params::WBP_ModernMenu_QuickKeys_C_SetQuickKeyByIndex Parms{};

	Parms.Index_0 = Index_0;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.SetVisibilityByIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::SetVisibilityByIndex(int32 Index_0, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "SetVisibilityByIndex");

	Params::WBP_ModernMenu_QuickKeys_C_SetVisibilityByIndex Parms{};

	Parms.Index_0 = Index_0;
	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.Update Key Index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Keys                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::Update_Key_Index(int32 Keys)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "Update Key Index");

	Params::WBP_ModernMenu_QuickKeys_C_Update_Key_Index Parms{};

	Parms.Keys = Keys;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.Update Quick Key text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModernMenu_QuickKeys_C::Update_Quick_Key_text(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "Update Quick Key text");

	Params::WBP_ModernMenu_QuickKeys_C_Update_Quick_Key_text Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.UpdateFocusedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::UpdateFocusedKey(int32 NewId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "UpdateFocusedKey");

	Params::WBP_ModernMenu_QuickKeys_C_UpdateFocusedKey Parms{};

	Parms.NewId = NewId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_QuickKeys.WBP_ModernMenu_QuickKeys_C.UpdateKeySelectorAngle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_QuickKeys_C::UpdateKeySelectorAngle(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_QuickKeys_C", "UpdateKeySelectorAngle");

	Params::WBP_ModernMenu_QuickKeys_C_UpdateKeySelectorAngle Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

