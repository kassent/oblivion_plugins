﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects

#include "Basic.hpp"

#include "WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_classes.hpp"
#include "WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_parameters.hpp"


namespace SDK
{

// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.ExecuteUbergraph_WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::ExecuteUbergraph_WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "ExecuteUbergraph_WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects");

	Params::WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C_ExecuteUbergraph_WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.HideAllEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::HideAllEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "HideAllEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.MakeArraysIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::MakeArraysIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "MakeArraysIfNeeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.MakeEffectsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::MakeEffectsArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "MakeEffectsArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.MakeSeperatorsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::MakeSeperatorsArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "MakeSeperatorsArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.SetEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Original_ImageAndText_C*     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::SetEffect(class UWBP_Original_ImageAndText_C* Target, class UTexture2D* Icon, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "SetEffect");

	Params::WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C_SetEffect Parms{};

	Parms.Target = Target;
	Parms.Icon = Icon;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects.WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C.UpdateEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOriginalInventoryMenuIngredientEffects>&NewEffects                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C::UpdateEffects(TArray<struct FOriginalInventoryMenuIngredientEffects>& NewEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C", "UpdateEffects");

	Params::WBP_OriginalMenu_InventoryDetails_Tooltip_IngredientEffects_C_UpdateEffects Parms{};

	Parms.NewEffects = std::move(NewEffects);

	UObject::ProcessEvent(Func, &Parms);

	NewEffects = std::move(Parms.NewEffects);
}

}

