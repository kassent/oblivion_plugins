﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VActorStateMachine

#include "Basic.hpp"


namespace SDK
{

// Enum VActorStateMachine.FVConditionOperatorType
// NumValues: 0x0003
enum class EFVConditionOperatorType : uint8
{
	COND_OP_AND                              = 0,
	COND_OP_OR                               = 1,
	COND_OP_MAX                              = 2,
};

// Enum VActorStateMachine.FVExtendedConditionType
// NumValues: 0x0004
enum class EFVExtendedConditionType : uint8
{
	EXT_COND_AND                             = 0,
	EXT_COND_OR                              = 1,
	EXT_COND_REPLACE                         = 2,
	EXT_COND_MAX                             = 3,
};

// ScriptStruct VActorStateMachine.VStateConditionData
// 0x0010 (0x0010 - 0x0000)
struct FVStateConditionData final
{
public:
	bool                                          IsNot;                                             // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVStateCondition*                       Condition;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVStateConditionData) == 0x000008, "Wrong alignment on FVStateConditionData");
static_assert(sizeof(FVStateConditionData) == 0x000010, "Wrong size on FVStateConditionData");
static_assert(offsetof(FVStateConditionData, IsNot) == 0x000000, "Member 'FVStateConditionData::IsNot' has a wrong offset!");
static_assert(offsetof(FVStateConditionData, Condition) == 0x000008, "Member 'FVStateConditionData::Condition' has a wrong offset!");

// ScriptStruct VActorStateMachine.VStateConditionDataAggregate
// 0x0018 (0x0018 - 0x0000)
struct FVStateConditionDataAggregate final
{
public:
	EFVConditionOperatorType                      AggregateType;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVStateConditionData>           ConditionList;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVStateConditionDataAggregate) == 0x000008, "Wrong alignment on FVStateConditionDataAggregate");
static_assert(sizeof(FVStateConditionDataAggregate) == 0x000018, "Wrong size on FVStateConditionDataAggregate");
static_assert(offsetof(FVStateConditionDataAggregate, AggregateType) == 0x000000, "Member 'FVStateConditionDataAggregate::AggregateType' has a wrong offset!");
static_assert(offsetof(FVStateConditionDataAggregate, ConditionList) == 0x000008, "Member 'FVStateConditionDataAggregate::ConditionList' has a wrong offset!");

// ScriptStruct VActorStateMachine.VNextState
// 0x0030 (0x0030 - 0x0000)
struct FVNextState final
{
public:
	TSubclassOf<class UVStateBase>                TargetState;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFVExtendedConditionType                      ExtendedConditionType;                             // 0x0008(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVStateConditionDataAggregate          ExtendedConditionAggregate;                        // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UVStateBase*                            TargetStateInstance;                               // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVNextState) == 0x000008, "Wrong alignment on FVNextState");
static_assert(sizeof(FVNextState) == 0x000030, "Wrong size on FVNextState");
static_assert(offsetof(FVNextState, TargetState) == 0x000000, "Member 'FVNextState::TargetState' has a wrong offset!");
static_assert(offsetof(FVNextState, ExtendedConditionType) == 0x000008, "Member 'FVNextState::ExtendedConditionType' has a wrong offset!");
static_assert(offsetof(FVNextState, ExtendedConditionAggregate) == 0x000010, "Member 'FVNextState::ExtendedConditionAggregate' has a wrong offset!");
static_assert(offsetof(FVNextState, TargetStateInstance) == 0x000028, "Member 'FVNextState::TargetStateInstance' has a wrong offset!");

}

