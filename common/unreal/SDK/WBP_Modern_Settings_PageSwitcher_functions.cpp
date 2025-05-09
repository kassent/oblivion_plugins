﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_PageSwitcher

#include "Basic.hpp"

#include "WBP_Modern_Settings_PageSwitcher_classes.hpp"
#include "WBP_Modern_Settings_PageSwitcher_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_Settings_PageSwitcher.WBP_Modern_Settings_PageSwitcher_C.ExecuteUbergraph_WBP_Modern_Settings_PageSwitcher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_Settings_PageSwitcher_C::ExecuteUbergraph_WBP_Modern_Settings_PageSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_PageSwitcher_C", "ExecuteUbergraph_WBP_Modern_Settings_PageSwitcher");

	Params::WBP_Modern_Settings_PageSwitcher_C_ExecuteUbergraph_WBP_Modern_Settings_PageSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_PageSwitcher.WBP_Modern_Settings_PageSwitcher_C.GetSelectedPageSelectedSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FModernSettingTableRow*          Data                                                   (Parm, OutParm)

void UWBP_Modern_Settings_PageSwitcher_C::GetSelectedPageSelectedSettings(struct FModernSettingTableRow* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_PageSwitcher_C", "GetSelectedPageSelectedSettings");

	Params::WBP_Modern_Settings_PageSwitcher_C_GetSelectedPageSelectedSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function WBP_Modern_Settings_PageSwitcher.WBP_Modern_Settings_PageSwitcher_C.OnSettingItemHoverred_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FModernSettingTableRow&    SettingData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_Settings_PageSwitcher_C::OnSettingItemHoverred_Internal(const struct FModernSettingTableRow& SettingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_PageSwitcher_C", "OnSettingItemHoverred_Internal");

	Params::WBP_Modern_Settings_PageSwitcher_C_OnSettingItemHoverred_Internal Parms{};

	Parms.SettingData = std::move(SettingData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_Settings_PageSwitcher.WBP_Modern_Settings_PageSwitcher_C.Populate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVModernSettingPageTable*         NewPagesTable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsInPlayerMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>*             Pages                                                  (Parm, OutParm, ContainsInstancedReference)

void UWBP_Modern_Settings_PageSwitcher_C::Populate(class UVModernSettingPageTable* NewPagesTable, bool bIsInPlayerMenu, TArray<class UUserWidget*>* Pages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_PageSwitcher_C", "Populate");

	Params::WBP_Modern_Settings_PageSwitcher_C_Populate Parms{};

	Parms.NewPagesTable = NewPagesTable;
	Parms.bIsInPlayerMenu = bIsInPlayerMenu;

	UObject::ProcessEvent(Func, &Parms);

	if (Pages != nullptr)
		*Pages = std::move(Parms.Pages);
}


// Function WBP_Modern_Settings_PageSwitcher.WBP_Modern_Settings_PageSwitcher_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Modern_Settings_PageSwitcher_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_Settings_PageSwitcher_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Modern_Settings_PageSwitcher_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

