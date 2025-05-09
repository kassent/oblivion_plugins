﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_HorizontalSlider

#include "Basic.hpp"

#include "WBP_Modern_HorizontalSlider_classes.hpp"
#include "WBP_Modern_HorizontalSlider_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.ExecuteUbergraph_WBP_Modern_HorizontalSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_HorizontalSlider_C::ExecuteUbergraph_WBP_Modern_HorizontalSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "ExecuteUbergraph_WBP_Modern_HorizontalSlider");

	Params::WBP_Modern_HorizontalSlider_C_ExecuteUbergraph_WBP_Modern_HorizontalSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.OnFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "OnFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.OnUnfocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_HorizontalSlider_C::OnUnfocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "OnUnfocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_HorizontalSlider.WBP_Modern_HorizontalSlider_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Modern_HorizontalSlider_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_HorizontalSlider_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Modern_HorizontalSlider_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

