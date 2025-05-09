﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterVampireFeed

#include "Basic.hpp"

#include "AST_CharacterVampireFeed_classes.hpp"
#include "AST_CharacterVampireFeed_parameters.hpp"


namespace SDK
{

// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.ExecuteUbergraph_AST_CharacterVampireFeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAST_CharacterVampireFeed_C::ExecuteUbergraph_AST_CharacterVampireFeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "ExecuteUbergraph_AST_CharacterVampireFeed");

	Params::AST_CharacterVampireFeed_C_ExecuteUbergraph_AST_CharacterVampireFeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.OnCanceled_FD70707943857F386BCB3E92ED2574B6
// (BlueprintCallable, BlueprintEvent)

void UAST_CharacterVampireFeed_C::OnCanceled_FD70707943857F386BCB3E92ED2574B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "OnCanceled_FD70707943857F386BCB3E92ED2574B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.OnCompleted_FD70707943857F386BCB3E92ED2574B6
// (BlueprintCallable, BlueprintEvent)

void UAST_CharacterVampireFeed_C::OnCompleted_FD70707943857F386BCB3E92ED2574B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "OnCompleted_FD70707943857F386BCB3E92ED2574B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.OnEntered
// (Event, Public, BlueprintEvent)

void UAST_CharacterVampireFeed_C::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "OnEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.OnExited
// (Event, Public, BlueprintEvent)

void UAST_CharacterVampireFeed_C::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "OnExited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AST_CharacterVampireFeed.AST_CharacterVampireFeed_C.SetupFeedDockingData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAST_CharacterVampireFeed_C::SetupFeedDockingData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AST_CharacterVampireFeed_C", "SetupFeedDockingData");

	UObject::ProcessEvent(Func, nullptr);
}

}

