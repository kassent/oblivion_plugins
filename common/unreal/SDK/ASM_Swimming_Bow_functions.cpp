﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASM_Swimming_Bow

#include "Basic.hpp"

#include "ASM_Swimming_Bow_classes.hpp"
#include "ASM_Swimming_Bow_parameters.hpp"


namespace SDK
{

// Function ASM_Swimming_Bow.ASM_Swimming_Bow_C.ExecuteUbergraph_ASM_Swimming_Bow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UASM_Swimming_Bow_C::ExecuteUbergraph_ASM_Swimming_Bow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASM_Swimming_Bow_C", "ExecuteUbergraph_ASM_Swimming_Bow");

	Params::ASM_Swimming_Bow_C_ExecuteUbergraph_ASM_Swimming_Bow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

