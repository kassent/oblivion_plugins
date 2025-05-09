﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PhysicsControllable

#include "Basic.hpp"

#include "WBP_PhysicsControllable_classes.hpp"
#include "WBP_PhysicsControllable_parameters.hpp"


namespace SDK
{

// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.DisplayBoolValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       LinkedText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::DisplayBoolValue(bool Value, class UTextBlock* Text, class UTextBlock* LinkedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "DisplayBoolValue");

	Params::WBP_PhysicsControllable_C_DisplayBoolValue Parms{};

	Parms.Value = Value;
	Parms.Text = Text;
	Parms.LinkedText = LinkedText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.DisplayEnumValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EnumeratorName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CharacterCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::DisplayEnumValue(class FName EnumeratorName, class UTextBlock* Text, int32 CharacterCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "DisplayEnumValue");

	Params::WBP_PhysicsControllable_C_DisplayEnumValue Parms{};

	Parms.EnumeratorName = EnumeratorName;
	Parms.Text = Text;
	Parms.CharacterCount = CharacterCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.DoUpdateDisplayData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVPhysicsControllableDebugData&ControllableData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PhysicsControllable_C::DoUpdateDisplayData(const struct FVPhysicsControllableDebugData& ControllableData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "DoUpdateDisplayData");

	Params::WBP_PhysicsControllable_C_DoUpdateDisplayData Parms{};

	Parms.ControllableData = std::move(ControllableData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.ExecuteUbergraph_WBP_PhysicsControllable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::ExecuteUbergraph_WBP_PhysicsControllable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "ExecuteUbergraph_WBP_PhysicsControllable");

	Params::WBP_PhysicsControllable_C_ExecuteUbergraph_WBP_PhysicsControllable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplayAuthorityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVPhysicsSettingsAuthority              ControlSettingsAuthority                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsSettingsAuthority              CollisionProfileAuthority                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsSettingsAuthority              WeightsAuthority                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsSettingsAuthority              DampingValuesAuthority                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsSettingsAuthority              NavigationSettingsAuthority                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplayAuthorityData(EVPhysicsSettingsAuthority ControlSettingsAuthority, EVPhysicsSettingsAuthority CollisionProfileAuthority, EVPhysicsSettingsAuthority WeightsAuthority, EVPhysicsSettingsAuthority DampingValuesAuthority, EVPhysicsSettingsAuthority NavigationSettingsAuthority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplayAuthorityData");

	Params::WBP_PhysicsControllable_C_UpdateDisplayAuthorityData Parms{};

	Parms.ControlSettingsAuthority = ControlSettingsAuthority;
	Parms.CollisionProfileAuthority = CollisionProfileAuthority;
	Parms.WeightsAuthority = WeightsAuthority;
	Parms.DampingValuesAuthority = DampingValuesAuthority;
	Parms.NavigationSettingsAuthority = NavigationSettingsAuthority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplayedData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FVPhysicsControllableDebugData&ControllableDebugData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   DataIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplayedData(const struct FVPhysicsControllableDebugData& ControllableDebugData, int32 DataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplayedData");

	Params::WBP_PhysicsControllable_C_UpdateDisplayedData Parms{};

	Parms.ControllableDebugData = std::move(ControllableDebugData);
	Parms.DataIndex = DataIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplayIdentityData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReferenceID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InstanceId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplayIdentityData(class FName Label, class FName Class_0, class FName ReferenceID, class FName InstanceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplayIdentityData");

	Params::WBP_PhysicsControllable_C_UpdateDisplayIdentityData Parms{};

	Parms.Label = Label;
	Parms.Class_0 = Class_0;
	Parms.ReferenceID = ReferenceID;
	Parms.InstanceId = InstanceId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplayLocationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FTransform&                Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplayLocationData(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplayLocationData");

	Params::WBP_PhysicsControllable_C_UpdateDisplayLocationData Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplaySettingsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGrabbable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTelekinesisTargetable                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAnchored                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRestoringAttachmentAfterSimulation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsSimulationBehaviour            SimulationBehaviour                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVPhysicsLoadingBehaviour               LoadingBehaviour                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoesRepositionOnLoad                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoesReattachOnLoad                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoesGeneratePontoonsAtRuntime                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  PontoonSizeScale                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BuoyancyCoefficient                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoesPlayCollisionSounds                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVDefaultSurfaceType                    DefaultSurfaceType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplaySettingsData(bool IsGrabbable, bool IsTelekinesisTargetable, bool IsAnchored, bool IsRestoringAttachmentAfterSimulation, EVPhysicsSimulationBehaviour SimulationBehaviour, EVPhysicsLoadingBehaviour LoadingBehaviour, bool DoesRepositionOnLoad, bool DoesReattachOnLoad, bool DoesGeneratePontoonsAtRuntime, double PontoonSizeScale, double BuoyancyCoefficient, bool DoesPlayCollisionSounds, EVDefaultSurfaceType DefaultSurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplaySettingsData");

	Params::WBP_PhysicsControllable_C_UpdateDisplaySettingsData Parms{};

	Parms.IsGrabbable = IsGrabbable;
	Parms.IsTelekinesisTargetable = IsTelekinesisTargetable;
	Parms.IsAnchored = IsAnchored;
	Parms.IsRestoringAttachmentAfterSimulation = IsRestoringAttachmentAfterSimulation;
	Parms.SimulationBehaviour = SimulationBehaviour;
	Parms.LoadingBehaviour = LoadingBehaviour;
	Parms.DoesRepositionOnLoad = DoesRepositionOnLoad;
	Parms.DoesReattachOnLoad = DoesReattachOnLoad;
	Parms.DoesGeneratePontoonsAtRuntime = DoesGeneratePontoonsAtRuntime;
	Parms.PontoonSizeScale = PontoonSizeScale;
	Parms.BuoyancyCoefficient = BuoyancyCoefficient;
	Parms.DoesPlayCollisionSounds = DoesPlayCollisionSounds;
	Parms.DefaultSurfaceType = DefaultSurfaceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateDisplayStatusData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPaired                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSimulating                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVConstrainingMode                      ConstrainingMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSleeping                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUsingBuoyancy                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGrabbed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhysicsControllable_C::UpdateDisplayStatusData(bool IsPaired, bool IsEnabled, bool IsSimulating, EVConstrainingMode ConstrainingMode, bool IsSleeping, bool IsUsingBuoyancy, bool IsGrabbed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateDisplayStatusData");

	Params::WBP_PhysicsControllable_C_UpdateDisplayStatusData Parms{};

	Parms.IsPaired = IsPaired;
	Parms.IsEnabled = IsEnabled;
	Parms.IsSimulating = IsSimulating;
	Parms.ConstrainingMode = ConstrainingMode;
	Parms.IsSleeping = IsSleeping;
	Parms.IsUsingBuoyancy = IsUsingBuoyancy;
	Parms.IsGrabbed = IsGrabbed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PhysicsControllable.WBP_PhysicsControllable_C.UpdateEntries
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class UVControllableEntry*>&ControllableEntries                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PhysicsControllable_C::UpdateEntries(const TArray<class UVControllableEntry*>& ControllableEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PhysicsControllable_C", "UpdateEntries");

	Params::WBP_PhysicsControllable_C_UpdateEntries Parms{};

	Parms.ControllableEntries = std::move(ControllableEntries);

	UObject::ProcessEvent(Func, &Parms);
}

}

