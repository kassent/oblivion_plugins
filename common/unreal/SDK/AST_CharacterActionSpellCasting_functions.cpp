﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterActionSpellCasting

#include "Basic.hpp"

#include "AST_CharacterActionSpellCasting_classes.hpp"
#include "AST_CharacterActionSpellCasting_parameters.hpp"


namespace SDK
{

// Function AST_CharacterActionSpellCasting.AST_CharacterActionSpellCasting_C.ExecuteUbergraph_AST_CharacterActionSpellCasting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterActionSpellCasting_C::ExecuteUbergraph_AST_CharacterActionSpellCasting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionSpellCasting_C", "ExecuteUbergraph_AST_CharacterActionSpellCasting");

	Params::AST_CharacterActionSpellCasting_C_ExecuteUbergraph_AST_CharacterActionSpellCasting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterActionSpellCasting.AST_CharacterActionSpellCasting_C.GetCastActionTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag*                    Action_Tag                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterActionSpellCasting_C::GetCastActionTag(struct FGameplayTag* Action_Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionSpellCasting_C", "GetCastActionTag");

	Params::AST_CharacterActionSpellCasting_C_GetCastActionTag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Action_Tag != nullptr)
		*Action_Tag = std::move(Parms.Action_Tag);
}


// Function AST_CharacterActionSpellCasting.AST_CharacterActionSpellCasting_C.OnEnded_0F9BB2F4438CE1CD9D17D5988193D374
// (BlueprintCallable, BlueprintEvent)

void UAST_CharacterActionSpellCasting_C::OnEnded_0F9BB2F4438CE1CD9D17D5988193D374()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionSpellCasting_C", "OnEnded_0F9BB2F4438CE1CD9D17D5988193D374");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterActionSpellCasting.AST_CharacterActionSpellCasting_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterActionSpellCasting_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterActionSpellCasting_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}

}

