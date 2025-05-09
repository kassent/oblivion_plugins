﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GraphicsPanel

#include "Basic.hpp"

#include "WBP_GraphicsPanel_classes.hpp"
#include "WBP_GraphicsPanel_parameters.hpp"


namespace SDK
{

// Function WBP_GraphicsPanel.WBP_GraphicsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GraphicsPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GraphicsPanel.WBP_GraphicsPanel_C.ExecuteUbergraph_WBP_GraphicsPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsPanel_C::ExecuteUbergraph_WBP_GraphicsPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsPanel_C", "ExecuteUbergraph_WBP_GraphicsPanel");

	Params::WBP_GraphicsPanel_C_ExecuteUbergraph_WBP_GraphicsPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GraphicsPanel.WBP_GraphicsPanel_C.InitialiseWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVOriginalVideoSettingWidget*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FOriginalVideoOption>&    Options                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FFloatInterval&            ExtremalValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsPanel_C::InitialiseWidget(class UVOriginalVideoSettingWidget* Widget, const class FText& Label, TArray<struct FOriginalVideoOption>& Options, const struct FFloatInterval& ExtremalValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsPanel_C", "InitialiseWidget");

	Params::WBP_GraphicsPanel_C_InitialiseWidget Parms{};

	Parms.Widget = Widget;
	Parms.Label = std::move(Label);
	Parms.Options = std::move(Options);
	Parms.ExtremalValue = std::move(ExtremalValue);

	UObject::ProcessEvent(Func, &Parms);

	Options = std::move(Parms.Options);
}


// Function WBP_GraphicsPanel.WBP_GraphicsPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsPanel_C", "PreConstruct");

	Params::WBP_GraphicsPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

