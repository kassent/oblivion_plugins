﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterLocomotionSwimRunning

#include "Basic.hpp"

#include "AST_CharacterLocomotionSwimRunning_classes.hpp"
#include "AST_CharacterLocomotionSwimRunning_parameters.hpp"


namespace SDK
{

// Function AST_CharacterLocomotionSwimRunning.AST_CharacterLocomotionSwimRunning_C.ExecuteUbergraph_AST_CharacterLocomotionSwimRunning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterLocomotionSwimRunning_C::ExecuteUbergraph_AST_CharacterLocomotionSwimRunning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionSwimRunning_C", "ExecuteUbergraph_AST_CharacterLocomotionSwimRunning");

	Params::AST_CharacterLocomotionSwimRunning_C_ExecuteUbergraph_AST_CharacterLocomotionSwimRunning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterLocomotionSwimRunning.AST_CharacterLocomotionSwimRunning_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionSwimRunning_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionSwimRunning_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterLocomotionSwimRunning.AST_CharacterLocomotionSwimRunning_C.OnExited
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionSwimRunning_C::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionSwimRunning_C", "OnExited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterLocomotionSwimRunning.AST_CharacterLocomotionSwimRunning_C.OnStateUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterLocomotionSwimRunning_C::OnStateUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionSwimRunning_C", "OnStateUpdate");

	Params::AST_CharacterLocomotionSwimRunning_C_OnStateUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterLocomotionSwimRunning.AST_CharacterLocomotionSwimRunning_C.PostInit
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionSwimRunning_C::PostInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionSwimRunning_C", "PostInit");

	UObject::ProcessEvent(Func, nullptr);
}

}

