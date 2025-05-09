﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryItemSpecificContentWeapon

#include "Basic.hpp"

#include "WBP_OriginalMenu_InventoryItemSpecificContentWeapon_classes.hpp"
#include "WBP_OriginalMenu_InventoryItemSpecificContentWeapon_parameters.hpp"


namespace SDK
{

// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.ExecuteUbergraph_WBP_OriginalMenu_InventoryItemSpecificContentWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::ExecuteUbergraph_WBP_OriginalMenu_InventoryItemSpecificContentWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "ExecuteUbergraph_WBP_OriginalMenu_InventoryItemSpecificContentWeapon");

	Params::WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C_ExecuteUbergraph_WBP_OriginalMenu_InventoryItemSpecificContentWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.InpActEvt_IA_UI_Specific_InventoryContainerMenu_ScrollEffects_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::InpActEvt_IA_UI_Specific_InventoryContainerMenu_ScrollEffects_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "InpActEvt_IA_UI_Specific_InventoryContainerMenu_ScrollEffects_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C_InpActEvt_IA_UI_Specific_InventoryContainerMenu_ScrollEffects_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.UpdateBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UpdateBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "UpdateBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.UpdateCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewCharge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UpdateCharge(int32 NewCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "UpdateCharge");

	Params::WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C_UpdateCharge Parms{};

	Parms.NewCharge = NewCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.UpdateChargeAndMaxChargeText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UpdateChargeAndMaxChargeText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "UpdateChargeAndMaxChargeText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.UpdateMaxCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewMaxCharge                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UpdateMaxCharge(int32 NewMaxCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "UpdateMaxCharge");

	Params::WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C_UpdateMaxCharge Parms{};

	Parms.NewMaxCharge = NewMaxCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C.UpdateUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UpdateUse(int32 NewUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C", "UpdateUse");

	Params::WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C_UpdateUse Parms{};

	Parms.NewUse = NewUse;

	UObject::ProcessEvent(Func, &Parms);
}

}

