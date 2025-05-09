﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterActionRecoil

#include "Basic.hpp"

#include "AST_CharacterActionRecoil_classes.hpp"
#include "AST_CharacterActionRecoil_parameters.hpp"


namespace SDK
{

// Function AST_CharacterActionRecoil.AST_CharacterActionRecoil_C.ExecuteUbergraph_AST_CharacterActionRecoil
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterActionRecoil_C::ExecuteUbergraph_AST_CharacterActionRecoil(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionRecoil_C", "ExecuteUbergraph_AST_CharacterActionRecoil");

	Params::AST_CharacterActionRecoil_C_ExecuteUbergraph_AST_CharacterActionRecoil Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterActionRecoil.AST_CharacterActionRecoil_C.GetAnimTagsOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag*                    OutGameplayTag                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterActionRecoil_C::GetAnimTagsOverride(struct FGameplayTag* OutGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionRecoil_C", "GetAnimTagsOverride");

	Params::AST_CharacterActionRecoil_C_GetAnimTagsOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutGameplayTag != nullptr)
		*OutGameplayTag = std::move(Parms.OutGameplayTag);
}


// Function AST_CharacterActionRecoil.AST_CharacterActionRecoil_C.OnEnded_C3FD5D7347D11FF7D1382398F7769C00
// (BlueprintCallable, BlueprintEvent)

void UAST_CharacterActionRecoil_C::OnEnded_C3FD5D7347D11FF7D1382398F7769C00()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionRecoil_C", "OnEnded_C3FD5D7347D11FF7D1382398F7769C00");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterActionRecoil.AST_CharacterActionRecoil_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterActionRecoil_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionRecoil_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterActionRecoil.AST_CharacterActionRecoil_C.OnExited
// (Event, Public, BlueprintEvent)

void UAST_CharacterActionRecoil_C::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionRecoil_C", "OnExited");

	UObject::ProcessEvent(Func, nullptr);
}

}

