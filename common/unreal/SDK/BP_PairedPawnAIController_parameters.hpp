﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PairedPawnAIController

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PairedPawnAIController.BP_PairedPawnAIController_C.ExecuteUbergraph_BP_PairedPawnAIController
// 0x0020 (0x0020 - 0x0000)
struct BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PairedPawnDebugInfo_C*             K2Node_DynamicCast_AsWBP_Paired_Pawn_Debug_Info;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController) == 0x000008, "Wrong alignment on BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController");
static_assert(sizeof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController) == 0x000020, "Wrong size on BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, EntryPoint) == 0x000000, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, CallFunc_GetWidget_ReturnValue) == 0x000008, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, K2Node_DynamicCast_AsWBP_Paired_Pawn_Debug_Info) == 0x000010, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::K2Node_DynamicCast_AsWBP_Paired_Pawn_Debug_Info' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'BP_PairedPawnAIController_C_ExecuteUbergraph_BP_PairedPawnAIController::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PairedPawnAIController.BP_PairedPawnAIController_C.GetProcedureInfos
// 0x0018 (0x0018 - 0x0000)
struct BP_PairedPawnAIController_C_GetProcedureInfos final
{
public:
	class UWBP_PairedPawnProcedureDebugInfo_C*    ProcedureDebugWidget;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           ProcedureInfos;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PairedPawnAIController_C_GetProcedureInfos) == 0x000008, "Wrong alignment on BP_PairedPawnAIController_C_GetProcedureInfos");
static_assert(sizeof(BP_PairedPawnAIController_C_GetProcedureInfos) == 0x000018, "Wrong size on BP_PairedPawnAIController_C_GetProcedureInfos");
static_assert(offsetof(BP_PairedPawnAIController_C_GetProcedureInfos, ProcedureDebugWidget) == 0x000000, "Member 'BP_PairedPawnAIController_C_GetProcedureInfos::ProcedureDebugWidget' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_GetProcedureInfos, ProcedureInfos) == 0x000008, "Member 'BP_PairedPawnAIController_C_GetProcedureInfos::ProcedureInfos' has a wrong offset!");
static_assert(offsetof(BP_PairedPawnAIController_C_GetProcedureInfos, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_PairedPawnAIController_C_GetProcedureInfos::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

