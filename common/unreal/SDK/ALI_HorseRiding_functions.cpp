﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_HorseRiding

#include "Basic.hpp"

#include "ALI_HorseRiding_classes.hpp"
#include "ALI_HorseRiding_parameters.hpp"


namespace SDK
{

// Function ALI_HorseRiding.ALI_HorseRiding_C.HorseRidingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       HorseRidingLayer_0                                     (Parm, OutParm, NoDestructor)

void IALI_HorseRiding_C::HorseRidingLayer(struct FPoseLink* HorseRidingLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ALI_HorseRiding_C", "HorseRidingLayer");

	Params::ALI_HorseRiding_C_HorseRidingLayer Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (HorseRidingLayer_0 != nullptr)
		*HorseRidingLayer_0 = std::move(Parms.HorseRidingLayer_0);
}

}

