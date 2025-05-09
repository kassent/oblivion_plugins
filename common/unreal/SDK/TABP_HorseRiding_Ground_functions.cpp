﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_HorseRiding_Ground

#include "Basic.hpp"

#include "TABP_HorseRiding_Ground_classes.hpp"
#include "TABP_HorseRiding_Ground_parameters.hpp"


namespace SDK
{

// Function TABP_HorseRiding_Ground.TABP_HorseRiding_Ground_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTABP_HorseRiding_Ground_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Ground_C", "AnimGraph");

	Params::TABP_HorseRiding_Ground_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TABP_HorseRiding_Ground.TABP_HorseRiding_Ground_C.ExecuteUbergraph_TABP_HorseRiding_Ground
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTABP_HorseRiding_Ground_C::ExecuteUbergraph_TABP_HorseRiding_Ground(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Ground_C", "ExecuteUbergraph_TABP_HorseRiding_Ground");

	Params::TABP_HorseRiding_Ground_C_ExecuteUbergraph_TABP_HorseRiding_Ground Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TABP_HorseRiding_Ground.TABP_HorseRiding_Ground_C.HorseRidingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink*                       HorseRidingLayer_0                                     (Parm, OutParm, NoDestructor)

void UTABP_HorseRiding_Ground_C::HorseRidingLayer(struct FPoseLink* HorseRidingLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_HorseRiding_Ground_C", "HorseRidingLayer");

	Params::TABP_HorseRiding_Ground_C_HorseRidingLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HorseRidingLayer_0 != nullptr)
		*HorseRidingLayer_0 = std::move(Parms.HorseRidingLayer_0);
}

}

