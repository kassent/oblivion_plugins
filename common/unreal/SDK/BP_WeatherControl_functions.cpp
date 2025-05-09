﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeatherControl

#include "Basic.hpp"

#include "BP_WeatherControl_classes.hpp"
#include "BP_WeatherControl_parameters.hpp"


namespace SDK
{

// Function BP_WeatherControl.BP_WeatherControl_C.Deactivate PostProcess Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENiagara_WeatherState                   Weather                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Weather_Intensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::Deactivate_PostProcess_Material(ENiagara_WeatherState Weather, double Weather_Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Deactivate PostProcess Material");

	Params::BP_WeatherControl_C_Deactivate_PostProcess_Material Parms{};

	Parms.Weather = Weather;
	Parms.Weather_Intensity = Weather_Intensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Deactivate Weather Niagara System
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Weather_Value                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*                System                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::Deactivate_Weather_Niagara_System(double Weather_Value, class UNiagaraComponent* System, bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Deactivate Weather Niagara System");

	Params::BP_WeatherControl_C_Deactivate_Weather_Niagara_System Parms{};

	Parms.Weather_Value = Weather_Value;
	Parms.System = System;
	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Check If Weather Value Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Check_If_Weather_Value_Changed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Check If Weather Value Changed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.ExecuteUbergraph_BP_WeatherControl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::ExecuteUbergraph_BP_WeatherControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "ExecuteUbergraph_BP_WeatherControl");

	Params::BP_WeatherControl_C_ExecuteUbergraph_BP_WeatherControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.ForceUpdateWeather
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::ForceUpdateWeather()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "ForceUpdateWeather");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.OnBeginOverlapWater
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_WeatherControl_C::OnBeginOverlapWater(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "OnBeginOverlapWater");

	Params::BP_WeatherControl_C_OnBeginOverlapWater Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.OnEndOverlapWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::OnEndOverlapWater(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "OnEndOverlapWater");

	Params::BP_WeatherControl_C_OnEndOverlapWater Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeatherControl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FBasicParticleData>&Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*                   NiagaraSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   SimulationPositionOffset                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "ReceiveParticleData");

	Params::BP_WeatherControl_C_ReceiveParticleData Parms{};

	Parms.Data = std::move(Data);
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = std::move(SimulationPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherControl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "ReceiveTick");

	Params::BP_WeatherControl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Tick End
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Tick_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Tick End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_WeatherControl_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_WeatherControl_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Update Oblivion
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Update_Oblivion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Update Oblivion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Update Rain
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Update_Rain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Update Rain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Update Snow
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Update_Snow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Update Snow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Update Spore
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Update_Spore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Update Spore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.Update Thunderstorm
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::Update_Thunderstorm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "Update Thunderstorm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeatherControl_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.WindVariation__FinishedFunc
// (BlueprintEvent)

void ABP_WeatherControl_C::WindVariation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "WindVariation__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherControl.BP_WeatherControl_C.WindVariation__UpdateFunc
// (BlueprintEvent)

void ABP_WeatherControl_C::WindVariation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherControl_C", "WindVariation__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

