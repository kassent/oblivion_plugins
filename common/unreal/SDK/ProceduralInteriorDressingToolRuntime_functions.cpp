﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralInteriorDressingToolRuntime

#include "Basic.hpp"

#include "ProceduralInteriorDressingToolRuntime_classes.hpp"
#include "ProceduralInteriorDressingToolRuntime_parameters.hpp"


namespace SDK
{

// Function ProceduralInteriorDressingToolRuntime.BFL_ProceduralInteriorDressingToolRuntime.AddLandscapeGrassExclusionBox
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                           Owner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FBox&                      BoxToRemove                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBFL_ProceduralInteriorDressingToolRuntime::AddLandscapeGrassExclusionBox(class AActor* Owner, const struct FBox& BoxToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_ProceduralInteriorDressingToolRuntime", "AddLandscapeGrassExclusionBox");

	Params::BFL_ProceduralInteriorDressingToolRuntime_AddLandscapeGrassExclusionBox Parms{};

	Parms.Owner = Owner;
	Parms.BoxToRemove = std::move(BoxToRemove);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ProceduralInteriorDressingToolRuntime.BFL_ProceduralInteriorDressingToolRuntime.RemoveLandscapeGrassExclusionBox
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AActor*                           Owner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBFL_ProceduralInteriorDressingToolRuntime::RemoveLandscapeGrassExclusionBox(class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_ProceduralInteriorDressingToolRuntime", "RemoveLandscapeGrassExclusionBox");

	Params::BFL_ProceduralInteriorDressingToolRuntime_RemoveLandscapeGrassExclusionBox Parms{};

	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

