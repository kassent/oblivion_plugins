﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputPairingIndicator

#include "Basic.hpp"

#include "WBP_InputPairingIndicator_classes.hpp"
#include "WBP_InputPairingIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_InputPairingIndicator.WBP_InputPairingIndicator_C.SetInputPairingActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputPairingIndicator_C::SetInputPairingActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InputPairingIndicator_C", "SetInputPairingActive");

	Params::WBP_InputPairingIndicator_C_SetInputPairingActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

}

