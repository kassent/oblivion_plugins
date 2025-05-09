﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterLocomotionOnGroundSprinting

#include "Basic.hpp"

#include "AST_CharacterLocomotionOnGroundSprinting_classes.hpp"
#include "AST_CharacterLocomotionOnGroundSprinting_parameters.hpp"


namespace SDK
{

// Function AST_CharacterLocomotionOnGroundSprinting.AST_CharacterLocomotionOnGroundSprinting_C.ExecuteUbergraph_AST_CharacterLocomotionOnGroundSprinting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterLocomotionOnGroundSprinting_C::ExecuteUbergraph_AST_CharacterLocomotionOnGroundSprinting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionOnGroundSprinting_C", "ExecuteUbergraph_AST_CharacterLocomotionOnGroundSprinting");

	Params::AST_CharacterLocomotionOnGroundSprinting_C_ExecuteUbergraph_AST_CharacterLocomotionOnGroundSprinting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterLocomotionOnGroundSprinting.AST_CharacterLocomotionOnGroundSprinting_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionOnGroundSprinting_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionOnGroundSprinting_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterLocomotionOnGroundSprinting.AST_CharacterLocomotionOnGroundSprinting_C.OnExited
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionOnGroundSprinting_C::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionOnGroundSprinting_C", "OnExited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterLocomotionOnGroundSprinting.AST_CharacterLocomotionOnGroundSprinting_C.PostInit
// (Event, Public, BlueprintEvent)

void UAST_CharacterLocomotionOnGroundSprinting_C::PostInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterLocomotionOnGroundSprinting_C", "PostInit");

	UObject::ProcessEvent(Func, nullptr);
}

}

