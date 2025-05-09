﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterSingleActionState

#include "Basic.hpp"

#include "VActorStateMachine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function AST_CharacterSingleActionState.AST_CharacterSingleActionState_C.ExecuteUbergraph_AST_CharacterSingleActionState
// 0x0088 (0x0088 - 0x0000)
struct AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVStateParameters*                      CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UASP_CharacterAnimation_C*              K2Node_DynamicCast_AsASP_Character_Animation;      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetAnimTagsOverride_OutGameplayTag;       // 0x0064(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPawnAnimatedAction*                   CallFunc_PlayDefaultAnimatedAction_Action;         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStateMachinePlayAnimatedAction*        CallFunc_PlayDefaultAnimatedAction_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState) == 0x000008, "Wrong alignment on AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState");
static_assert(sizeof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState) == 0x000088, "Wrong size on AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, EntryPoint) == 0x000000, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::EntryPoint' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, Temp_bool_True_if_break_was_hit_Variable) == 0x000024, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, Temp_int_Array_Index_Variable) == 0x000028, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_Not_PreBool_ReturnValue) == 0x00002C, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_Array_Get_Item) == 0x000048, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, K2Node_DynamicCast_AsASP_Character_Animation) == 0x000050, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::K2Node_DynamicCast_AsASP_Character_Animation' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_GetAnimTagsOverride_OutGameplayTag) == 0x000064, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_GetAnimTagsOverride_OutGameplayTag' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_PlayDefaultAnimatedAction_Action) == 0x000070, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_PlayDefaultAnimatedAction_Action' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_PlayDefaultAnimatedAction_ReturnValue) == 0x000078, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_PlayDefaultAnimatedAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_BooleanAND_ReturnValue_1) == 0x000081, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState, CallFunc_IsValid_ReturnValue_1) == 0x000082, "Member 'AST_CharacterSingleActionState_C_ExecuteUbergraph_AST_CharacterSingleActionState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AST_CharacterSingleActionState.AST_CharacterSingleActionState_C.GetAnimTagsOverride
// 0x0008 (0x0008 - 0x0000)
struct AST_CharacterSingleActionState_C_GetAnimTagsOverride final
{
public:
	struct FGameplayTag                           OutGameplayTag;                                    // 0x0000(0x0008)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterSingleActionState_C_GetAnimTagsOverride) == 0x000004, "Wrong alignment on AST_CharacterSingleActionState_C_GetAnimTagsOverride");
static_assert(sizeof(AST_CharacterSingleActionState_C_GetAnimTagsOverride) == 0x000008, "Wrong size on AST_CharacterSingleActionState_C_GetAnimTagsOverride");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetAnimTagsOverride, OutGameplayTag) == 0x000000, "Member 'AST_CharacterSingleActionState_C_GetAnimTagsOverride::OutGameplayTag' has a wrong offset!");

// Function AST_CharacterSingleActionState.AST_CharacterSingleActionState_C.GetStateDuration
// 0x0030 (0x0030 - 0x0000)
struct AST_CharacterSingleActionState_C_GetStateDuration final
{
public:
	double                                        StateDuration;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVStateMachineComponent*                CallFunc_GetOwningStateMachineComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPairedPawnStateMachineComponent*      K2Node_DynamicCast_AsVPaired_Pawn_State_Machine_Component; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetActionStateDuration_ReturnValue;       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_StateDuration_ImplicitCast;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterSingleActionState_C_GetStateDuration) == 0x000008, "Wrong alignment on AST_CharacterSingleActionState_C_GetStateDuration");
static_assert(sizeof(AST_CharacterSingleActionState_C_GetStateDuration) == 0x000030, "Wrong size on AST_CharacterSingleActionState_C_GetStateDuration");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, StateDuration) == 0x000000, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::StateDuration' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, CallFunc_GetOwningStateMachineComponent_ReturnValue) == 0x000008, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::CallFunc_GetOwningStateMachineComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, K2Node_DynamicCast_AsVPaired_Pawn_State_Machine_Component) == 0x000018, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::K2Node_DynamicCast_AsVPaired_Pawn_State_Machine_Component' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, CallFunc_GetActionStateDuration_ReturnValue) == 0x000024, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::CallFunc_GetActionStateDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_GetStateDuration, K2Node_FunctionResult_StateDuration_ImplicitCast) == 0x000028, "Member 'AST_CharacterSingleActionState_C_GetStateDuration::K2Node_FunctionResult_StateDuration_ImplicitCast' has a wrong offset!");

// Function AST_CharacterSingleActionState.AST_CharacterSingleActionState_C.SetDurationOfIsLongerThenCondition
// 0x0068 (0x0068 - 0x0000)
struct AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition final
{
public:
	class UVState*                                State;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          OnAllNextStates;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StateIndex;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CondIndex;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duratiion;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVNextState                            CallFunc_Array_Get_Item;                           // 0x0028(0x0030)(ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition) == 0x000008, "Wrong alignment on AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition");
static_assert(sizeof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition) == 0x000068, "Wrong size on AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, State) == 0x000000, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::State' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, OnAllNextStates) == 0x000008, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::OnAllNextStates' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, StateIndex) == 0x00000C, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::StateIndex' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, CondIndex) == 0x000010, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::CondIndex' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, Duratiion) == 0x000018, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::Duratiion' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, Temp_int_Array_Index_Variable) == 0x000020, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, CallFunc_Array_Get_Item) == 0x000028, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenCondition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function AST_CharacterSingleActionState.AST_CharacterSingleActionState_C.SetDurationOfIsLongerThenConditionForState
// 0x0058 (0x0058 - 0x0000)
struct AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState final
{
public:
	struct FVNextState                            NextState;                                         // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                         CondIndex;                                         // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duration;                                          // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCOND_IsLongerThan_C*                   K2Node_DynamicCast_AsCOND_Is_Longer_Than;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState) == 0x000008, "Wrong alignment on AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState");
static_assert(sizeof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState) == 0x000058, "Wrong size on AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, NextState) == 0x000000, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::NextState' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, CondIndex) == 0x000030, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::CondIndex' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, Duration) == 0x000038, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::Duration' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, K2Node_DynamicCast_AsCOND_Is_Longer_Than) == 0x000048, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::K2Node_DynamicCast_AsCOND_Is_Longer_Than' has a wrong offset!");
static_assert(offsetof(AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AST_CharacterSingleActionState_C_SetDurationOfIsLongerThenConditionForState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

