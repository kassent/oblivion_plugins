﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryEntry

#include "Basic.hpp"

#include "WBP_OriginalMenu_InventoryEntry_classes.hpp"
#include "WBP_OriginalMenu_InventoryEntry_parameters.hpp"


namespace SDK
{

// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.AnimateToView
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryEntry_C::AnimateToView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "AnimateToView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "BP_OnItemSelectionChanged");

	Params::WBP_OriginalMenu_InventoryEntry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.Display All Stats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryEntry_C::Display_All_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "Display All Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.ExecuteUbergraph_WBP_OriginalMenu_InventoryEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::ExecuteUbergraph_WBP_OriginalMenu_InventoryEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "ExecuteUbergraph_WBP_OriginalMenu_InventoryEntry");

	Params::WBP_OriginalMenu_InventoryEntry_C_ExecuteUbergraph_WBP_OriginalMenu_InventoryEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.HideAllStats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryEntry_C::HideAllStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "HideAllStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "OnListItemObjectSet");

	Params::WBP_OriginalMenu_InventoryEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "PreConstruct");

	Params::WBP_OriginalMenu_InventoryEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.Property Value to Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ValueLimit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText*                            Text                                                   (Parm, OutParm)

void UWBP_OriginalMenu_InventoryEntry_C::Property_Value_to_Text(double Value, double ValueLimit, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "Property Value to Text");

	Params::WBP_OriginalMenu_InventoryEntry_C_Property_Value_to_Text Parms{};

	Parms.Value = Value;
	Parms.ValueLimit = ValueLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.SetHiddenStatsSpacerSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumberOfHiddenStats                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::SetHiddenStatsSpacerSize(int32 NumberOfHiddenStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "SetHiddenStatsSpacerSize");

	Params::WBP_OriginalMenu_InventoryEntry_C_SetHiddenStatsSpacerSize Parms{};

	Parms.NumberOfHiddenStats = NumberOfHiddenStats;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.SetItemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::SetItemIcon(int32 Count, class UTexture2D* Icon, int32 Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "SetItemIcon");

	Params::WBP_OriginalMenu_InventoryEntry_C_SetItemIcon Parms{};

	Parms.Count = Count;
	Parms.Icon = Icon;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.SetItemStatsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELegacyInventoryMenuPage                Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::SetItemStatsVisibility(ELegacyInventoryMenuPage Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "SetItemStatsVisibility");

	Params::WBP_OriginalMenu_InventoryEntry_C_SetItemStatsVisibility Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.ShouldHideArmorRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldHide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::ShouldHideArmorRating(bool ShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "ShouldHideArmorRating");

	Params::WBP_OriginalMenu_InventoryEntry_C_ShouldHideArmorRating Parms{};

	Parms.ShouldHide = ShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.ShouldHideItemHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldHide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::ShouldHideItemHealth(bool ShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "ShouldHideItemHealth");

	Params::WBP_OriginalMenu_InventoryEntry_C_ShouldHideItemHealth Parms{};

	Parms.ShouldHide = ShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.ShouldHideWeaponDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldHide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::ShouldHideWeaponDamage(bool ShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "ShouldHideWeaponDamage");

	Params::WBP_OriginalMenu_InventoryEntry_C_ShouldHideWeaponDamage Parms{};

	Parms.ShouldHide = ShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.ThisIsForPluginCompliance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Test                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryEntry_C::ThisIsForPluginCompliance(bool Test)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "ThisIsForPluginCompliance");

	Params::WBP_OriginalMenu_InventoryEntry_C_ThisIsForPluginCompliance Parms{};

	Parms.Test = Test;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryEntry.WBP_OriginalMenu_InventoryEntry_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryEntry_C::UpdateItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryEntry_C", "UpdateItem");

	UObject::ProcessEvent(Func, nullptr);
}

}

