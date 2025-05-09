﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_HorseRiding_Swimming

#include "Basic.hpp"

#include "TABP_HorseRiding_Swimming_classes.hpp"
#include "TABP_HorseRiding_Swimming_parameters.hpp"


namespace SDK
{

// Function TABP_HorseRiding_Swimming.TABP_HorseRiding_Swimming_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTABP_HorseRiding_Swimming_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Swimming_C", "AnimGraph");

	Params::TABP_HorseRiding_Swimming_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TABP_HorseRiding_Swimming.TABP_HorseRiding_Swimming_C.ExecuteUbergraph_TABP_HorseRiding_Swimming
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTABP_HorseRiding_Swimming_C::ExecuteUbergraph_TABP_HorseRiding_Swimming(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Swimming_C", "ExecuteUbergraph_TABP_HorseRiding_Swimming");

	Params::TABP_HorseRiding_Swimming_C_ExecuteUbergraph_TABP_HorseRiding_Swimming Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TABP_HorseRiding_Swimming.TABP_HorseRiding_Swimming_C.HorseRidingSwimLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       HorseRidingSwimLayer_0                                 (Parm, OutParm, NoDestructor)

void UTABP_HorseRiding_Swimming_C::HorseRidingSwimLayer(const struct FPoseLink& InPose, struct FPoseLink* HorseRidingSwimLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Swimming_C", "HorseRidingSwimLayer");

	Params::TABP_HorseRiding_Swimming_C_HorseRidingSwimLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (HorseRidingSwimLayer_0 != nullptr)
		*HorseRidingSwimLayer_0 = std::move(Parms.HorseRidingSwimLayer_0);
}

}

