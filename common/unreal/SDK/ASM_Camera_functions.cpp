﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASM_Camera

#include "Basic.hpp"

#include "ASM_Camera_classes.hpp"
#include "ASM_Camera_parameters.hpp"


namespace SDK
{

// Function ASM_Camera.ASM_Camera_C.ExecuteUbergraph_ASM_Camera
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UASM_Camera_C::ExecuteUbergraph_ASM_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASM_Camera_C", "ExecuteUbergraph_ASM_Camera");

	Params::ASM_Camera_C_ExecuteUbergraph_ASM_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

