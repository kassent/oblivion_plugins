﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Generic_BDP_Hands

#include "Basic.hpp"

#include "BP_Generic_BDP_Hands_classes.hpp"
#include "BP_Generic_BDP_Hands_parameters.hpp"


namespace SDK
{

// Function BP_Generic_BDP_Hands.BP_Generic_BDP_Hands_C.ExecuteUbergraph_BP_Generic_BDP_Hands
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_Hands_C::ExecuteUbergraph_BP_Generic_BDP_Hands(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_Hands_C", "ExecuteUbergraph_BP_Generic_BDP_Hands");

	Params::BP_Generic_BDP_Hands_C_ExecuteUbergraph_BP_Generic_BDP_Hands Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_Hands.BP_Generic_BDP_Hands_C.OnAttachedInFirstPerson
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_Hands_C::OnAttachedInFirstPerson()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_Hands_C", "OnAttachedInFirstPerson");

	UObject::ProcessEvent(Func, nullptr);
}

}

