﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_StatsPlayerInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo
// 0x0040 (0x0040 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo) == 0x000040, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, EntryPoint) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, K2Node_CustomEvent_bNewInputType) == 0x000014, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000015, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000028, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000038, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_ExecuteUbergraph_WBP_ModernMenu_StatsPlayerInfo::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.SetIconBrush
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush final
{
public:
	struct FSlateBrush                            NewBrush;                                          // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush) == 0x000010, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush) == 0x0000D0, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush, NewBrush) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetIconBrush::NewBrush' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.SetLabel
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_SetLabel final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_SetLabel) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_SetLabel");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_SetLabel) == 0x000018, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_SetLabel");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLabel, Text) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLabel::Text' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.SetLevelUpIconVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility) == 0x000001, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility) == 0x000005, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility, IsVisible_0) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility::IsVisible_0' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetLevelUpIconVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.SetValue
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_SetValue final
{
public:
	class FText                                   NewValue;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_SetValue) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_SetValue");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_SetValue) == 0x000018, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_SetValue");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_SetValue, NewValue) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_SetValue::NewValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPlayerInfo.WBP_ModernMenu_StatsPlayerInfo_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_ModernMenu_StatsPlayerInfo_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

