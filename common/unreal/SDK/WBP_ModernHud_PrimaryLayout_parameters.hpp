﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_PrimaryLayout

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.ExecuteUbergraph_WBP_ModernHud_PrimaryLayout
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHUDVisibility                                K2Node_Event_Flag;                                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible_1;                           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout) == 0x000004, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout) == 0x000008, "Wrong size on WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout, EntryPoint) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout, K2Node_Event_Flag) == 0x000005, "Member 'WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout::K2Node_Event_Flag' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout, K2Node_Event_bVisible_1) == 0x000006, "Member 'WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout::K2Node_Event_bVisible_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout, K2Node_Event_bVisible) == 0x000007, "Member 'WBP_ModernHud_PrimaryLayout_C_ExecuteUbergraph_WBP_ModernHud_PrimaryLayout::K2Node_Event_bVisible' has a wrong offset!");

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.InitializeHUD
// 0x0020 (0x0020 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_InitializeHUD final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUIStateSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalVisibility_ReturnValue;          // 0x0018(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD) == 0x000008, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_InitializeHUD");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD) == 0x000020, "Wrong size on WBP_ModernHud_PrimaryLayout_C_InitializeHUD");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, Temp_bool_Variable) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, Temp_real_Variable) == 0x000004, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, Temp_real_Variable_1) == 0x000008, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, CallFunc_GetGlobalVisibility_ReturnValue) == 0x000018, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::CallFunc_GetGlobalVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_InitializeHUD, K2Node_Select_Default) == 0x00001C, "Member 'WBP_ModernHud_PrimaryLayout_C_InitializeHUD::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.OnHUDGlobalVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged) == 0x000001, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged) == 0x000001, "Wrong size on WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged, bVisible) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_OnHUDGlobalVisibilityChanged::bVisible' has a wrong offset!");

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.OnHUDVisibilityChanged
// 0x0002 (0x0002 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged final
{
public:
	EHUDVisibility                                Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged) == 0x000001, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged) == 0x000002, "Wrong size on WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged, Flag) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged::Flag' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged, bVisible) == 0x000001, "Member 'WBP_ModernHud_PrimaryLayout_C_OnHUDVisibilityChanged::bVisible' has a wrong offset!");

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.UpdateHUDGlobalVisibility
// 0x0010 (0x0010 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility final
{
public:
	bool                                          bInVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility) == 0x000008, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility) == 0x000010, "Wrong size on WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, bInVisible) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::bInVisible' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDGlobalVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_ModernHud_PrimaryLayout.WBP_ModernHud_PrimaryLayout_C.UpdateHUDVisibility
// 0x0028 (0x0028 - 0x0000)
struct WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility final
{
public:
	EHUDVisibility                                Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHUDVisibility                                LocalHUDVisibility;                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAltarUISubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAltarUISubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility) == 0x000008, "Wrong alignment on WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility");
static_assert(sizeof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility) == 0x000028, "Wrong size on WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Flag) == 0x000000, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Flag' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, NewVisibility) == 0x000001, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::NewVisibility' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, LocalHUDVisibility) == 0x000002, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::LocalHUDVisibility' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable) == 0x000003, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_bool_Variable) == 0x000005, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable_2) == 0x000007, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_bool_Variable_1) == 0x000008, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable_4) == 0x00000A, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_byte_Variable_5) == 0x00000B, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, Temp_bool_Variable_2) == 0x00000C, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000018, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, K2Node_Select_Default) == 0x000020, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, K2Node_Select_Default_1) == 0x000021, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility, K2Node_Select_Default_2) == 0x000022, "Member 'WBP_ModernHud_PrimaryLayout_C_UpdateHUDVisibility::K2Node_Select_Default_2' has a wrong offset!");

}

