﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Volumetric

#include "Basic.hpp"

#include "BP_Volumetric_classes.hpp"
#include "BP_Volumetric_parameters.hpp"


namespace SDK
{

// Function BP_Volumetric.BP_Volumetric_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Volumetric_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Volumetric_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

