﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Graphics_TogglerButton

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_Graphics_TogglerButton.WBP_Graphics_TogglerButton_C.ExecuteUbergraph_WBP_Graphics_TogglerButton
// 0x0098 (0x0098 - 0x0000)
struct WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLabel_ReturnValue;                     // 0x0008(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLabel_ReturnValue_1;                   // 0x0030(0x0018)(ConstParm)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue_1;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOriginalVideoOption>           CallFunc_GetOptions_ReturnValue;                   // 0x0068(0x0010)(ConstParm, ReferenceParm)
	class UWBP_GraphicsPanel_C*                   K2Node_DynamicCast_AsWBP_Graphics_Panel;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAltarGameUserSetting*                  CallFunc_GetInstance_ReturnValue;                  // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanLaunchURL_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton) == 0x000008, "Wrong alignment on WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton");
static_assert(sizeof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton) == 0x000098, "Wrong size on WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, EntryPoint) == 0x000000, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_GetLabel_ReturnValue) == 0x000008, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_GetLabel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_GetLabel_ReturnValue_1) == 0x000030, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_GetLabel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_Contains_ReturnValue) == 0x000048, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000050, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_Contains_ReturnValue_1) == 0x000060, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_GetOptions_ReturnValue) == 0x000068, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_GetOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, K2Node_DynamicCast_AsWBP_Graphics_Panel) == 0x000078, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::K2Node_DynamicCast_AsWBP_Graphics_Panel' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_GetInstance_ReturnValue) == 0x000088, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_GetInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton, CallFunc_CanLaunchURL_ReturnValue) == 0x000090, "Member 'WBP_Graphics_TogglerButton_C_ExecuteUbergraph_WBP_Graphics_TogglerButton::CallFunc_CanLaunchURL_ReturnValue' has a wrong offset!");

// Function WBP_Graphics_TogglerButton.WBP_Graphics_TogglerButton_C.Refresh
// 0x0028 (0x0028 - 0x0000)
struct WBP_Graphics_TogglerButton_C_Refresh final
{
public:
	TArray<struct FOriginalVideoOption>           CallFunc_GetOptions_ReturnValue;                   // 0x0000(0x0010)(ConstParm, ReferenceParm)
	class FText                                   CallFunc_GetLabel_ReturnValue;                     // 0x0010(0x0018)(ConstParm)
};
static_assert(alignof(WBP_Graphics_TogglerButton_C_Refresh) == 0x000008, "Wrong alignment on WBP_Graphics_TogglerButton_C_Refresh");
static_assert(sizeof(WBP_Graphics_TogglerButton_C_Refresh) == 0x000028, "Wrong size on WBP_Graphics_TogglerButton_C_Refresh");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_Refresh, CallFunc_GetOptions_ReturnValue) == 0x000000, "Member 'WBP_Graphics_TogglerButton_C_Refresh::CallFunc_GetOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_Refresh, CallFunc_GetLabel_ReturnValue) == 0x000010, "Member 'WBP_Graphics_TogglerButton_C_Refresh::CallFunc_GetLabel_ReturnValue' has a wrong offset!");

// Function WBP_Graphics_TogglerButton.WBP_Graphics_TogglerButton_C.SetUpscalingOptions
// 0x0002 (0x0002 - 0x0000)
struct WBP_Graphics_TogglerButton_C_SetUpscalingOptions final
{
public:
	EGPUType                                      CallFunc_GetGPUBrand_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Graphics_TogglerButton_C_SetUpscalingOptions) == 0x000001, "Wrong alignment on WBP_Graphics_TogglerButton_C_SetUpscalingOptions");
static_assert(sizeof(WBP_Graphics_TogglerButton_C_SetUpscalingOptions) == 0x000002, "Wrong size on WBP_Graphics_TogglerButton_C_SetUpscalingOptions");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_SetUpscalingOptions, CallFunc_GetGPUBrand_ReturnValue) == 0x000000, "Member 'WBP_Graphics_TogglerButton_C_SetUpscalingOptions::CallFunc_GetGPUBrand_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Graphics_TogglerButton_C_SetUpscalingOptions, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_Graphics_TogglerButton_C_SetUpscalingOptions::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

