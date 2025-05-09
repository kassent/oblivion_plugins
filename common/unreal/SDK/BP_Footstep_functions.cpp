﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Footstep

#include "Basic.hpp"

#include "BP_Footstep_classes.hpp"
#include "BP_Footstep_parameters.hpp"


namespace SDK
{

// Function BP_Footstep.BP_Footstep_C.BndEvt__BP_Footstep_NiagaraFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Footstep_C::BndEvt__BP_Footstep_NiagaraFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "BndEvt__BP_Footstep_NiagaraFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_Footstep_C_BndEvt__BP_Footstep_NiagaraFX_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Footstep.BP_Footstep_C.Child Behavior: After Setup
// (BlueprintCallable, BlueprintEvent)

void ABP_Footstep_C::Child_Behavior__After_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "Child Behavior: After Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Footstep.BP_Footstep_C.Child Behavior: Before Setup
// (BlueprintCallable, BlueprintEvent)

void ABP_Footstep_C::Child_Behavior__Before_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "Child Behavior: Before Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Footstep.BP_Footstep_C.ExecuteUbergraph_BP_Footstep
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Footstep_C::ExecuteUbergraph_BP_Footstep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "ExecuteUbergraph_BP_Footstep");

	Params::BP_Footstep_C_ExecuteUbergraph_BP_Footstep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Footstep.BP_Footstep_C.OnStartPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVLocomotionType                        LocomotionType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDoesBeginInFirstPerson                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Footstep_C::OnStartPlay(EVLocomotionType LocomotionType, bool bDoesBeginInFirstPerson, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "OnStartPlay");

	Params::BP_Footstep_C_OnStartPlay Parms{};

	Parms.LocomotionType = LocomotionType;
	Parms.bDoesBeginInFirstPerson = bDoesBeginInFirstPerson;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Footstep.BP_Footstep_C.Setup Niagara Variables
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Footstep_C::Setup_Niagara_Variables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "Setup Niagara Variables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Footstep.BP_Footstep_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Footstep_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Footstep_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

