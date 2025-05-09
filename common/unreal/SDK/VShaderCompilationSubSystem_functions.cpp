﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VShaderCompilationSubSystem

#include "Basic.hpp"

#include "VShaderCompilationSubSystem_classes.hpp"
#include "VShaderCompilationSubSystem_parameters.hpp"


namespace SDK
{

// Function VShaderCompilationSubSystem.VShaderCompilationSubSystem.GetNumPrecompilesRemaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVShaderCompilationSubSystem::GetNumPrecompilesRemaining()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VShaderCompilationSubSystem", "GetNumPrecompilesRemaining");

	Params::VShaderCompilationSubSystem_GetNumPrecompilesRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VShaderCompilationSubSystem.VShaderCompilationSubSystem.ReCompileGlobalComputeShaders
// (Final, Native, Public, BlueprintCallable)

void UVShaderCompilationSubSystem::ReCompileGlobalComputeShaders()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VShaderCompilationSubSystem", "ReCompileGlobalComputeShaders");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

