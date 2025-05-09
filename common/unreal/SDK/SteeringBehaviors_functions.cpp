﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteeringBehaviors

#include "Basic.hpp"

#include "SteeringBehaviors_classes.hpp"
#include "SteeringBehaviors_parameters.hpp"


namespace SDK
{

// Function SteeringBehaviors.MoveRequestDestinationSpatialIndexSubsystem.GetCurrentMoveRequestId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class AAIController*              AIController                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIRequestID                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIRequestID UMoveRequestDestinationSpatialIndexSubsystem::GetCurrentMoveRequestId(const class AAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MoveRequestDestinationSpatialIndexSubsystem", "GetCurrentMoveRequestId");

	Params::MoveRequestDestinationSpatialIndexSubsystem_GetCurrentMoveRequestId Parms{};

	Parms.AIController = AIController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.MoveRequestDestinationSpatialIndexSubsystem.OnControllerEndPlay
// (Final, Native, Private)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EEndPlayReason                    EndPlayReason                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoveRequestDestinationSpatialIndexSubsystem::OnControllerEndPlay(const class AActor* Actor, const EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoveRequestDestinationSpatialIndexSubsystem", "OnControllerEndPlay");

	Params::MoveRequestDestinationSpatialIndexSubsystem_OnControllerEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.MoveRequestDestinationSpatialIndexSubsystem.RegisterMoveRequestDestination
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class AAIController*              AIController                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FAIRequestID&              MoveRequestId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMoveRequestDestinationSpatialIndexSubsystem::RegisterMoveRequestDestination(const class AAIController* AIController, const struct FAIRequestID& MoveRequestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoveRequestDestinationSpatialIndexSubsystem", "RegisterMoveRequestDestination");

	Params::MoveRequestDestinationSpatialIndexSubsystem_RegisterMoveRequestDestination Parms{};

	Parms.AIController = AIController;
	Parms.MoveRequestId = std::move(MoveRequestId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.MoveRequestDestinationSpatialIndexSubsystem.GetMoveRequestDestinationsInRadius
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FVector&                   SphereCenter                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const double                            SphereRadius                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMoveRequestDestinationData>&MoveRequestDestinations                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoveRequestDestinationSpatialIndexSubsystem::GetMoveRequestDestinationsInRadius(const struct FVector& SphereCenter, const double SphereRadius, TArray<struct FMoveRequestDestinationData>& MoveRequestDestinations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoveRequestDestinationSpatialIndexSubsystem", "GetMoveRequestDestinationsInRadius");

	Params::MoveRequestDestinationSpatialIndexSubsystem_GetMoveRequestDestinationsInRadius Parms{};

	Parms.SphereCenter = std::move(SphereCenter);
	Parms.SphereRadius = SphereRadius;
	Parms.MoveRequestDestinations = std::move(MoveRequestDestinations);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	MoveRequestDestinations = std::move(Parms.MoveRequestDestinations);
}


// Function SteeringBehaviors.SteeringBehavior.GetSteeringBehaviorsComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USteeringBehaviorsComponent*      ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteeringBehaviorsComponent* USteeringBehavior::GetSteeringBehaviorsComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehavior", "GetSteeringBehaviorsComponent");

	Params::SteeringBehavior_GetSteeringBehaviorsComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.AddPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APawn*                      Pawn                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::AddPawn(const class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "AddPawn");

	Params::PawnSpatialIndexSubsystem_AddPawn Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.OnActorEndPlay
// (Final, Native, Private)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EEndPlayReason                    EndPlayReason                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::OnActorEndPlay(const class AActor* Actor, const EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "OnActorEndPlay");

	Params::PawnSpatialIndexSubsystem_OnActorEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// const class AActor*                     ActorSpawned                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::OnActorSpawned(const class AActor* ActorSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "OnActorSpawned");

	Params::PawnSpatialIndexSubsystem_OnActorSpawned Parms{};

	Parms.ActorSpawned = ActorSpawned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.RemovePawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APawn*                      Pawn                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::RemovePawn(const class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "RemovePawn");

	Params::PawnSpatialIndexSubsystem_RemovePawn Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.UpdatePawnLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APawn*                      Pawn                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::UpdatePawnLocation(const class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "UpdatePawnLocation");

	Params::PawnSpatialIndexSubsystem_UpdatePawnLocation Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.PawnSpatialIndexSubsystem.BlueprintGetPawnsInRadius
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FVector&                   SphereCenter                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const double                            SphereRadius                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APawn*>&                   OutPawns                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPawnSpatialIndexSubsystem::BlueprintGetPawnsInRadius(const struct FVector& SphereCenter, const double SphereRadius, TArray<class APawn*>& OutPawns) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnSpatialIndexSubsystem", "BlueprintGetPawnsInRadius");

	Params::PawnSpatialIndexSubsystem_BlueprintGetPawnsInRadius Parms{};

	Parms.SphereCenter = std::move(SphereCenter);
	Parms.SphereRadius = SphereRadius;
	Parms.OutPawns = std::move(OutPawns);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	OutPawns = std::move(Parms.OutPawns);
}


// Function SteeringBehaviors.SteeringBehaviorsBlueprintFunctionLibrary.BuildParallelPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const TArray<struct FVector>&           Path                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// const double                            Offset2D                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const double                            LayerHeight                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> USteeringBehaviorsBlueprintFunctionLibrary::BuildParallelPath(const TArray<struct FVector>& Path, const double Offset2D, const double LayerHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SteeringBehaviorsBlueprintFunctionLibrary", "BuildParallelPath");

	Params::SteeringBehaviorsBlueprintFunctionLibrary_BuildParallelPath Parms{};

	Parms.Path = std::move(Path);
	Parms.Offset2D = Offset2D;
	Parms.LayerHeight = LayerHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsBlueprintFunctionLibrary.DrawDebugPolyline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TArray<struct FVector>&           Polyline                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FLinearColor&              PolylineColor                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             Duration                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             Thickness                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsBlueprintFunctionLibrary::DrawDebugPolyline(const class UObject* WorldContextObject, const TArray<struct FVector>& Polyline, const struct FLinearColor& PolylineColor, const float Duration, const float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SteeringBehaviorsBlueprintFunctionLibrary", "DrawDebugPolyline");

	Params::SteeringBehaviorsBlueprintFunctionLibrary_DrawDebugPolyline Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Polyline = std::move(Polyline);
	Parms.PolylineColor = std::move(PolylineColor);
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsBlueprintFunctionLibrary.GetParallelPathMaxOffset2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const TArray<struct FVector>&           Path                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// const bool                              bLeftSide                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double USteeringBehaviorsBlueprintFunctionLibrary::GetParallelPathMaxOffset2D(const TArray<struct FVector>& Path, const bool bLeftSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SteeringBehaviorsBlueprintFunctionLibrary", "GetParallelPathMaxOffset2D");

	Params::SteeringBehaviorsBlueprintFunctionLibrary_GetParallelPathMaxOffset2D Parms{};

	Parms.Path = std::move(Path);
	Parms.bLeftSide = bLeftSide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.AddSteeringBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class USteeringBehavior*          SteeringBehavior                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::AddSteeringBehavior(const class USteeringBehavior* SteeringBehavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "AddSteeringBehavior");

	Params::SteeringBehaviorsComponent_AddSteeringBehavior Parms{};

	Parms.SteeringBehavior = SteeringBehavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.AddSteeringBehaviorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const TSubclassOf<class USteeringBehavior>SteeringBehaviorClass                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteeringBehavior*                ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteeringBehavior* USteeringBehaviorsComponent::AddSteeringBehaviorByClass(const TSubclassOf<class USteeringBehavior> SteeringBehaviorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "AddSteeringBehaviorByClass");

	Params::SteeringBehaviorsComponent_AddSteeringBehaviorByClass Parms{};

	Parms.SteeringBehaviorClass = SteeringBehaviorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.OnAvoidanceIgnoredActorEndPlay
// (Final, Native, Private)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EEndPlayReason                    EndPlayReason                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::OnAvoidanceIgnoredActorEndPlay(const class AActor* Actor, const EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "OnAvoidanceIgnoredActorEndPlay");

	Params::SteeringBehaviorsComponent_OnAvoidanceIgnoredActorEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.OnPossessedPawnChanged
// (Final, Native, Private)
// Parameters:
// const class APawn*                      OldPawn                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class APawn*                      NewPawn                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::OnPossessedPawnChanged(const class APawn* OldPawn, const class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "OnPossessedPawnChanged");

	Params::SteeringBehaviorsComponent_OnPossessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.RemoveSteeringBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class USteeringBehavior*          SteeringBehavior                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::RemoveSteeringBehavior(const class USteeringBehavior* SteeringBehavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "RemoveSteeringBehavior");

	Params::SteeringBehaviorsComponent_RemoveSteeringBehavior Parms{};

	Parms.SteeringBehavior = SteeringBehavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.RemoveSteeringBehaviorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const TSubclassOf<class USteeringBehavior>SteeringBehaviorClass                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteeringBehaviorsComponent::RemoveSteeringBehaviorByClass(const TSubclassOf<class USteeringBehavior> SteeringBehaviorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "RemoveSteeringBehaviorByClass");

	Params::SteeringBehaviorsComponent_RemoveSteeringBehaviorByClass Parms{};

	Parms.SteeringBehaviorClass = SteeringBehaviorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.SetAvoidanceIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bAvoidanceIgnored                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::SetAvoidanceIgnoredActor(const class AActor* Actor, const bool bAvoidanceIgnored)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "SetAvoidanceIgnoredActor");

	Params::SteeringBehaviorsComponent_SetAvoidanceIgnoredActor Parms{};

	Parms.Actor = Actor;
	Parms.bAvoidanceIgnored = bAvoidanceIgnored;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.SetDynamicAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const bool                              bEnabled                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::SetDynamicAvoidanceEnabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "SetDynamicAvoidanceEnabled");

	Params::SteeringBehaviorsComponent_SetDynamicAvoidanceEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.SetStaticAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const bool                              bEnabled                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::SetStaticAvoidanceEnabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "SetStaticAvoidanceEnabled");

	Params::SteeringBehaviorsComponent_SetStaticAvoidanceEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.SetSteeringBehaviorSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const int32                             NewSteeringBehaviorSize                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehaviorsComponent::SetSteeringBehaviorSize(const int32 NewSteeringBehaviorSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "SetSteeringBehaviorSize");

	Params::SteeringBehaviorsComponent_SetSteeringBehaviorSize Parms{};

	Parms.NewSteeringBehaviorSize = NewSteeringBehaviorSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.FindSteeringBehaviorByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const TSubclassOf<class USteeringBehavior>SteeringBehaviorClass                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteeringBehavior*                ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteeringBehavior* USteeringBehaviorsComponent::FindSteeringBehaviorByClass(const TSubclassOf<class USteeringBehavior> SteeringBehaviorClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "FindSteeringBehaviorByClass");

	Params::SteeringBehaviorsComponent_FindSteeringBehaviorByClass Parms{};

	Parms.SteeringBehaviorClass = SteeringBehaviorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.GetMoveFocus
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USteeringBehaviorsComponent::GetMoveFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "GetMoveFocus");

	Params::SteeringBehaviorsComponent_GetMoveFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.GetRequestedVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USteeringBehaviorsComponent::GetRequestedVelocity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "GetRequestedVelocity");

	Params::SteeringBehaviorsComponent_GetRequestedVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.IsActorIgnoredForAvoidance
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bAgentDeltaHeightIgnored                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bIncludeTemporaryIgnoredActors                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteeringBehaviorsComponent::IsActorIgnoredForAvoidance(const class AActor* Actor, const bool bAgentDeltaHeightIgnored, const bool bIncludeTemporaryIgnoredActors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "IsActorIgnoredForAvoidance");

	Params::SteeringBehaviorsComponent_IsActorIgnoredForAvoidance Parms{};

	Parms.Actor = Actor;
	Parms.bAgentDeltaHeightIgnored = bAgentDeltaHeightIgnored;
	Parms.bIncludeTemporaryIgnoredActors = bIncludeTemporaryIgnoredActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.IsDynamicAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteeringBehaviorsComponent::IsDynamicAvoidanceEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "IsDynamicAvoidanceEnabled");

	Params::SteeringBehaviorsComponent_IsDynamicAvoidanceEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehaviorsComponent.IsStaticAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteeringBehaviorsComponent::IsStaticAvoidanceEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehaviorsComponent", "IsStaticAvoidanceEnabled");

	Params::SteeringBehaviorsComponent_IsStaticAvoidanceEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehavior_Direction.SetDirection
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   NewDirection                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehavior_Direction::SetDirection(const struct FVector& NewDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehavior_Direction", "SetDirection");

	Params::SteeringBehavior_Direction_SetDirection Parms{};

	Parms.NewDirection = std::move(NewDirection);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehavior_Direction.GetDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector USteeringBehavior_Direction::GetDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehavior_Direction", "GetDirection");

	Params::SteeringBehavior_Direction_GetDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteeringBehaviors.SteeringBehavior_MoveRequestDestinationAvoidance.OnIgnoredActorEndPlay
// (Final, Native, Private)
// Parameters:
// const class AActor*                     Actor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EEndPlayReason                    EndPlayReason                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehavior_MoveRequestDestinationAvoidance::OnIgnoredActorEndPlay(const class AActor* Actor, const EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehavior_MoveRequestDestinationAvoidance", "OnIgnoredActorEndPlay");

	Params::SteeringBehavior_MoveRequestDestinationAvoidance_OnIgnoredActorEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteeringBehaviors.SteeringBehavior_MoveRequestDestinationAvoidance.SetPawnIgnored
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class APawn*                      Pawn                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bIgnored                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteeringBehavior_MoveRequestDestinationAvoidance::SetPawnIgnored(const class APawn* Pawn, const bool bIgnored)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteeringBehavior_MoveRequestDestinationAvoidance", "SetPawnIgnored");

	Params::SteeringBehavior_MoveRequestDestinationAvoidance_SetPawnIgnored Parms{};

	Parms.Pawn = Pawn;
	Parms.bIgnored = bIgnored;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

