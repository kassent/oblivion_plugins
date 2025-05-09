﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASP_CharacterLocomotionGain

#include "Basic.hpp"

#include "ASP_CharacterLocomotionGain_classes.hpp"
#include "ASP_CharacterLocomotionGain_parameters.hpp"


namespace SDK
{

// Function ASP_CharacterLocomotionGain.ASP_CharacterLocomotionGain_C.Apply
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVStateBase*                      CurrentState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UASP_CharacterLocomotionGain_C::Apply(class UVStateBase* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASP_CharacterLocomotionGain_C", "Apply");

	Params::ASP_CharacterLocomotionGain_C_Apply Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ASP_CharacterLocomotionGain.ASP_CharacterLocomotionGain_C.ExecuteUbergraph_ASP_CharacterLocomotionGain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UASP_CharacterLocomotionGain_C::ExecuteUbergraph_ASP_CharacterLocomotionGain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASP_CharacterLocomotionGain_C", "ExecuteUbergraph_ASP_CharacterLocomotionGain");

	Params::ASP_CharacterLocomotionGain_C_ExecuteUbergraph_ASP_CharacterLocomotionGain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

