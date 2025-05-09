﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_Dodge

#include "Basic.hpp"

#include "TABP_Dodge_classes.hpp"
#include "TABP_Dodge_parameters.hpp"


namespace SDK
{

// Function TABP_Dodge.TABP_Dodge_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTABP_Dodge_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_Dodge_C", "AnimGraph");

	Params::TABP_Dodge_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TABP_Dodge.TABP_Dodge_C.DodgeLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink*                       DodgeLayer_0                                           (Parm, OutParm, NoDestructor)

void UTABP_Dodge_C::DodgeLayer(struct FPoseLink* DodgeLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_Dodge_C", "DodgeLayer");

	Params::TABP_Dodge_C_DodgeLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DodgeLayer_0 != nullptr)
		*DodgeLayer_0 = std::move(Parms.DodgeLayer_0);
}


// Function TABP_Dodge.TABP_Dodge_C.ExecuteUbergraph_TABP_Dodge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTABP_Dodge_C::ExecuteUbergraph_TABP_Dodge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_Dodge_C", "ExecuteUbergraph_TABP_Dodge");

	Params::TABP_Dodge_C_ExecuteUbergraph_TABP_Dodge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

