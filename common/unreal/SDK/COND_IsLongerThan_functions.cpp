﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COND_IsLongerThan

#include "Basic.hpp"

#include "COND_IsLongerThan_classes.hpp"
#include "COND_IsLongerThan_parameters.hpp"


namespace SDK
{

// Function COND_IsLongerThan.COND_IsLongerThan_C.CheckCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVStateBase*                      CurrentState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCOND_IsLongerThan_C::CheckCondition(class UVStateBase* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COND_IsLongerThan_C", "CheckCondition");

	Params::COND_IsLongerThan_C_CheckCondition Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

