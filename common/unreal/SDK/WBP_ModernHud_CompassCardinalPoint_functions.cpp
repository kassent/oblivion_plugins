﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_CompassCardinalPoint

#include "Basic.hpp"

#include "WBP_ModernHud_CompassCardinalPoint_classes.hpp"
#include "WBP_ModernHud_CompassCardinalPoint_parameters.hpp"


namespace SDK
{

// Function WBP_ModernHud_CompassCardinalPoint.WBP_ModernHud_CompassCardinalPoint_C.ExecuteUbergraph_WBP_ModernHud_CompassCardinalPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_CompassCardinalPoint_C::ExecuteUbergraph_WBP_ModernHud_CompassCardinalPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_CompassCardinalPoint_C", "ExecuteUbergraph_WBP_ModernHud_CompassCardinalPoint");

	Params::WBP_ModernHud_CompassCardinalPoint_C_ExecuteUbergraph_WBP_ModernHud_CompassCardinalPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_CompassCardinalPoint.WBP_ModernHud_CompassCardinalPoint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_CompassCardinalPoint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_CompassCardinalPoint_C", "PreConstruct");

	Params::WBP_ModernHud_CompassCardinalPoint_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

