﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ASM_CharacterLocomotion

#include "Basic.hpp"

#include "ASM_CharacterLocomotion_classes.hpp"
#include "ASM_CharacterLocomotion_parameters.hpp"


namespace SDK
{

// Function ASM_CharacterLocomotion.ASM_CharacterLocomotion_C.ExecuteUbergraph_ASM_CharacterLocomotion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UASM_CharacterLocomotion_C::ExecuteUbergraph_ASM_CharacterLocomotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASM_CharacterLocomotion_C", "ExecuteUbergraph_ASM_CharacterLocomotion");

	Params::ASM_CharacterLocomotion_C_ExecuteUbergraph_ASM_CharacterLocomotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

