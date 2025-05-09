﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_GetUp

#include "Basic.hpp"

#include "TABP_GetUp_classes.hpp"
#include "TABP_GetUp_parameters.hpp"


namespace SDK
{

// Function TABP_GetUp.TABP_GetUp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTABP_GetUp_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_GetUp_C", "AnimGraph");

	Params::TABP_GetUp_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TABP_GetUp.TABP_GetUp_C.ExecuteUbergraph_TABP_GetUp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTABP_GetUp_C::ExecuteUbergraph_TABP_GetUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_GetUp_C", "ExecuteUbergraph_TABP_GetUp");

	Params::TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TABP_GetUp.TABP_GetUp_C.GetUpLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       GetUpLayer_0                                           (Parm, OutParm, NoDestructor)

void UTABP_GetUp_C::GetUpLayer(const struct FPoseLink& InPose, struct FPoseLink* GetUpLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_GetUp_C", "GetUpLayer");

	Params::TABP_GetUp_C_GetUpLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (GetUpLayer_0 != nullptr)
		*GetUpLayer_0 = std::move(Parms.GetUpLayer_0);
}

}

