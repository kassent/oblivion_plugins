﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Behavior_RecoilPlayer

#include "Basic.hpp"

#include "Behavior_RecoilPlayer_classes.hpp"
#include "Behavior_RecoilPlayer_parameters.hpp"


namespace SDK
{

// Function Behavior_RecoilPlayer.Behavior_RecoilPlayer_C.ExecuteUbergraph_Behavior_RecoilPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBehavior_RecoilPlayer_C::ExecuteUbergraph_Behavior_RecoilPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Behavior_RecoilPlayer_C", "ExecuteUbergraph_Behavior_RecoilPlayer");

	Params::Behavior_RecoilPlayer_C_ExecuteUbergraph_Behavior_RecoilPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Behavior_RecoilPlayer.Behavior_RecoilPlayer_C.OnCanceled_2889AF72436F1E3E55F884ADFD79DC21
// (BlueprintCallable, BlueprintEvent)

void UBehavior_RecoilPlayer_C::OnCanceled_2889AF72436F1E3E55F884ADFD79DC21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Behavior_RecoilPlayer_C", "OnCanceled_2889AF72436F1E3E55F884ADFD79DC21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Behavior_RecoilPlayer.Behavior_RecoilPlayer_C.OnCompleted_2889AF72436F1E3E55F884ADFD79DC21
// (BlueprintCallable, BlueprintEvent)

void UBehavior_RecoilPlayer_C::OnCompleted_2889AF72436F1E3E55F884ADFD79DC21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Behavior_RecoilPlayer_C", "OnCompleted_2889AF72436F1E3E55F884ADFD79DC21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Behavior_RecoilPlayer.Behavior_RecoilPlayer_C.OnEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBehavior_RecoilPlayer_C::OnEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Behavior_RecoilPlayer_C", "OnEnd");

	Params::Behavior_RecoilPlayer_C_OnEnd Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Behavior_RecoilPlayer.Behavior_RecoilPlayer_C.OnInit
// (Event, Protected, BlueprintEvent)

void UBehavior_RecoilPlayer_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Behavior_RecoilPlayer_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}

}

