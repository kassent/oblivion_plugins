﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Generic_BDP_LowerBody

#include "Basic.hpp"

#include "BP_Generic_BDP_LowerBody_classes.hpp"
#include "BP_Generic_BDP_LowerBody_parameters.hpp"


namespace SDK
{

// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.ActivateCloth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::ActivateCloth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "ActivateCloth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.BindMappingSwitchEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::BindMappingSwitchEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "BindMappingSwitchEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.DeactivateCloth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::DeactivateCloth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "DeactivateCloth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.DeactiveClothPhysics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::DeactiveClothPhysics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "DeactiveClothPhysics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.DisableCloth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::DisableCloth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "DisableCloth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.EnableCloth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ResetCloth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::EnableCloth(bool ResetCloth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "EnableCloth");

	Params::BP_Generic_BDP_LowerBody_C_EnableCloth Parms{};

	Parms.ResetCloth = ResetCloth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.ExecuteUbergraph_BP_Generic_BDP_LowerBody
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::ExecuteUbergraph_BP_Generic_BDP_LowerBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "ExecuteUbergraph_BP_Generic_BDP_LowerBody");

	Params::BP_Generic_BDP_LowerBody_C_ExecuteUbergraph_BP_Generic_BDP_LowerBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnAttachedToPhenotype
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVCharacterPhenotypeData*         PhenotypeData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTESRace*                         CharacterRace_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ECharacterSex                           CharacterSex_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::OnAttachedToPhenotype(class UVCharacterPhenotypeData* PhenotypeData, class UTESRace* CharacterRace_0, ECharacterSex CharacterSex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnAttachedToPhenotype");

	Params::BP_Generic_BDP_LowerBody_C_OnAttachedToPhenotype Parms{};

	Parms.PhenotypeData = PhenotypeData;
	Parms.CharacterRace_0 = CharacterRace_0;
	Parms.CharacterSex_0 = CharacterSex_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnClothQualityChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::OnClothQualityChanged_Event(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnClothQualityChanged_Event");

	Params::BP_Generic_BDP_LowerBody_C_OnClothQualityChanged_Event Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnPhysicsSimulationStarted_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::OnPhysicsSimulationStarted_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnPhysicsSimulationStarted_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnPhysicsSimulationStopped
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::OnPhysicsSimulationStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnPhysicsSimulationStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnSwitchToGameMappings
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::OnSwitchToGameMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnSwitchToGameMappings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnSwitchToUIMappings
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::OnSwitchToUIMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnSwitchToUIMappings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OnViewDistanceQualityChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::OnViewDistanceQualityChanged_Event(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OnViewDistanceQualityChanged_Event");

	Params::BP_Generic_BDP_LowerBody_C_OnViewDistanceQualityChanged_Event Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.OverrideFemaleMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterSex                           CharacterSex_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::OverrideFemaleMaterials(ECharacterSex CharacterSex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "OverrideFemaleMaterials");

	Params::BP_Generic_BDP_LowerBody_C_OverrideFemaleMaterials Parms{};

	Parms.CharacterSex_0 = CharacterSex_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Generic_BDP_LowerBody_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "ReceiveTick");

	Params::BP_Generic_BDP_LowerBody_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.UpdateCloth
// (BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::UpdateCloth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "UpdateCloth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Generic_BDP_LowerBody.BP_Generic_BDP_LowerBody_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Generic_BDP_LowerBody_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_BDP_LowerBody_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

