﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterResurrect

#include "Basic.hpp"

#include "AST_CharacterResurrect_classes.hpp"
#include "AST_CharacterResurrect_parameters.hpp"


namespace SDK
{

// Function AST_CharacterResurrect.AST_CharacterResurrect_C.ExecuteUbergraph_AST_CharacterResurrect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterResurrect_C::ExecuteUbergraph_AST_CharacterResurrect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterResurrect_C", "ExecuteUbergraph_AST_CharacterResurrect");

	Params::AST_CharacterResurrect_C_ExecuteUbergraph_AST_CharacterResurrect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterResurrect.AST_CharacterResurrect_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterResurrect_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterResurrect_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterResurrect.AST_CharacterResurrect_C.OnExited
// (Event, Public, BlueprintEvent)

void UAST_CharacterResurrect_C::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterResurrect_C", "OnExited");

	UObject::ProcessEvent(Func, nullptr);
}

}

