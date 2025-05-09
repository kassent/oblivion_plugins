﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_AddedEffects

#include "Basic.hpp"

#include "WBP_ModernMenu_AddedEffects_classes.hpp"
#include "WBP_ModernMenu_AddedEffects_parameters.hpp"


namespace SDK
{

// Function WBP_ModernMenu_AddedEffects.WBP_ModernMenu_AddedEffects_C.ExecuteUbergraph_WBP_ModernMenu_AddedEffects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_AddedEffects_C::ExecuteUbergraph_WBP_ModernMenu_AddedEffects(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_AddedEffects_C", "ExecuteUbergraph_WBP_ModernMenu_AddedEffects");

	Params::WBP_ModernMenu_AddedEffects_C_ExecuteUbergraph_WBP_ModernMenu_AddedEffects Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_AddedEffects.WBP_ModernMenu_AddedEffects_C.OnListItemObjectSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernMenu_AddedEffects_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_AddedEffects_C", "OnListItemObjectSet");

	Params::WBP_ModernMenu_AddedEffects_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_AddedEffects.WBP_ModernMenu_AddedEffects_C.SetProperties
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FModernEffectItemData&     NewProperties                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ModernMenu_AddedEffects_C::SetProperties(const struct FModernEffectItemData& NewProperties)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_AddedEffects_C", "SetProperties");

	Params::WBP_ModernMenu_AddedEffects_C_SetProperties Parms{};

	Parms.NewProperties = std::move(NewProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernMenu_AddedEffects.WBP_ModernMenu_AddedEffects_C.SetPropertiesText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_AddedEffects_C::SetPropertiesText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_AddedEffects_C", "SetPropertiesText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernMenu_AddedEffects.WBP_ModernMenu_AddedEffects_C.SetPropertiesVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernMenu_AddedEffects_C::SetPropertiesVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernMenu_AddedEffects_C", "SetPropertiesVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

