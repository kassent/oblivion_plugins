﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_HeadPostProcess

#include "Basic.hpp"

#include "ABP_HeadPostProcess_classes.hpp"
#include "ABP_HeadPostProcess_parameters.hpp"


namespace SDK
{

// Function ABP_HeadPostProcess.ABP_HeadPostProcess_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_HeadPostProcess_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HeadPostProcess_C", "AnimGraph");

	Params::ABP_HeadPostProcess_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_HeadPostProcess.ABP_HeadPostProcess_C.BlinkingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       BlinkingLayer_0                                        (Parm, OutParm, NoDestructor)

void UABP_HeadPostProcess_C::BlinkingLayer(const struct FPoseLink& InPose, struct FPoseLink* BlinkingLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HeadPostProcess_C", "BlinkingLayer");

	Params::ABP_HeadPostProcess_C_BlinkingLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (BlinkingLayer_0 != nullptr)
		*BlinkingLayer_0 = std::move(Parms.BlinkingLayer_0);
}


// Function ABP_HeadPostProcess.ABP_HeadPostProcess_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UABP_HeadPostProcess_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HeadPostProcess_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_HeadPostProcess.ABP_HeadPostProcess_C.ExecuteUbergraph_ABP_HeadPostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_HeadPostProcess_C::ExecuteUbergraph_ABP_HeadPostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_HeadPostProcess_C", "ExecuteUbergraph_ABP_HeadPostProcess");

	Params::ABP_HeadPostProcess_C_ExecuteUbergraph_ABP_HeadPostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

