﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BrightnessCalibration

#include "Basic.hpp"

#include "WBP_BrightnessCalibration_classes.hpp"
#include "WBP_BrightnessCalibration_parameters.hpp"


namespace SDK
{

// Function WBP_BrightnessCalibration.WBP_BrightnessCalibration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BrightnessCalibration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BrightnessCalibration_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BrightnessCalibration.WBP_BrightnessCalibration_C.ExecuteUbergraph_WBP_BrightnessCalibration
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BrightnessCalibration_C::ExecuteUbergraph_WBP_BrightnessCalibration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BrightnessCalibration_C", "ExecuteUbergraph_WBP_BrightnessCalibration");

	Params::WBP_BrightnessCalibration_C_ExecuteUbergraph_WBP_BrightnessCalibration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BrightnessCalibration.WBP_BrightnessCalibration_C.SetupCallibrationImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BrightnessCalibration_C::SetupCallibrationImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BrightnessCalibration_C", "SetupCallibrationImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BrightnessCalibration.WBP_BrightnessCalibration_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BrightnessCalibration_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BrightnessCalibration_C", "Tick");

	Params::WBP_BrightnessCalibration_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BrightnessCalibration.WBP_BrightnessCalibration_C.UpdateCallibrationImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BrightnessCalibration_C::UpdateCallibrationImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BrightnessCalibration_C", "UpdateCallibrationImage");

	UObject::ProcessEvent(Func, nullptr);
}

}

