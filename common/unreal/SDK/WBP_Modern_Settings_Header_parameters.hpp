﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_Header

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.Binding
// 0x0018 (0x0018 - 0x0000)
struct WBP_Modern_Settings_Header_C_Binding final
{
public:
	TDelegate<void(class UVNavigableInputKeySelector* Target, bool NewState)> K2Node_CreateDelegate_OutputDelegate; // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVRebindGlobalSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_Binding) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_Binding");
static_assert(sizeof(WBP_Modern_Settings_Header_C_Binding) == 0x000018, "Wrong size on WBP_Modern_Settings_Header_C_Binding");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Binding, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_Binding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Binding, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_Binding::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.CreateButton
// 0x0840 (0x0840 - 0x0000)
struct WBP_Modern_Settings_Header_C_CreateButton final
{
public:
	class FText                                   Label;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Index_0;                                           // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           DefaultStyle;                                      // 0x0020(0x03F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FButtonStyle                           SelectedStyle;                                     // 0x0410(0x03F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_Modern_Settings_HeaderButton_C*    Local_CurrentButton;                               // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_Settings_HeaderButton_C*    CallFunc_Create_ReturnValue;                       // 0x0808(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811[0x3];                                      // 0x0811(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_Modern_Settings_HeaderButton_C* Button)> K2Node_CreateDelegate_OutputDelegate; // 0x0814(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_824[0x4];                                      // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0828(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0830(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_CreateButton) == 0x000010, "Wrong alignment on WBP_Modern_Settings_Header_C_CreateButton");
static_assert(sizeof(WBP_Modern_Settings_Header_C_CreateButton) == 0x000840, "Wrong size on WBP_Modern_Settings_Header_C_CreateButton");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, Label) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_CreateButton::Label' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, Index_0) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_CreateButton::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, DefaultStyle) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_CreateButton::DefaultStyle' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, SelectedStyle) == 0x000410, "Member 'WBP_Modern_Settings_Header_C_CreateButton::SelectedStyle' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, Local_CurrentButton) == 0x000800, "Member 'WBP_Modern_Settings_Header_C_CreateButton::Local_CurrentButton' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, CallFunc_Create_ReturnValue) == 0x000808, "Member 'WBP_Modern_Settings_Header_C_CreateButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000810, "Member 'WBP_Modern_Settings_Header_C_CreateButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, K2Node_CreateDelegate_OutputDelegate) == 0x000814, "Member 'WBP_Modern_Settings_Header_C_CreateButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000828, "Member 'WBP_Modern_Settings_Header_C_CreateButton::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_CreateButton, CallFunc_AddChild_ReturnValue) == 0x000830, "Member 'WBP_Modern_Settings_Header_C_CreateButton::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.DisableInteractionOnListenningForRebind
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind final
{
public:
	class UVNavigableInputKeySelector*            Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          NewState;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind");
static_assert(sizeof(WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind) == 0x000010, "Wrong size on WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind");
static_assert(offsetof(WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind, Target) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind::Target' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind, NewState) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_DisableInteractionOnListenningForRebind::NewState' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.ExecuteUbergraph_WBP_Modern_Settings_Header
// 0x0018 (0x0018 - 0x0000)
struct WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVNavigableInputKeySelector*            K2Node_CustomEvent_Target;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewState;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header");
static_assert(sizeof(WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header) == 0x000018, "Wrong size on WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header");
static_assert(offsetof(WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header, EntryPoint) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header, K2Node_CustomEvent_Target) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header, K2Node_CustomEvent_NewState) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_ExecuteUbergraph_WBP_Modern_Settings_Header::K2Node_CustomEvent_NewState' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.GetButtonAt
// 0x0028 (0x0028 - 0x0000)
struct WBP_Modern_Settings_Header_C_GetButtonAt final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_Settings_HeaderButton_C*    Button;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_Settings_HeaderButton_C*    K2Node_DynamicCast_AsWBP_Modern_Settings_Header_Button; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_GetButtonAt) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_GetButtonAt");
static_assert(sizeof(WBP_Modern_Settings_Header_C_GetButtonAt) == 0x000028, "Wrong size on WBP_Modern_Settings_Header_C_GetButtonAt");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonAt, Index_0) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_GetButtonAt::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonAt, Button) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_GetButtonAt::Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonAt, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_GetButtonAt::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonAt, K2Node_DynamicCast_AsWBP_Modern_Settings_Header_Button) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_GetButtonAt::K2Node_DynamicCast_AsWBP_Modern_Settings_Header_Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonAt, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_GetButtonAt::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.GetButtonIndex
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_Settings_Header_C_GetButtonIndex final
{
public:
	class UWBP_Modern_Settings_HeaderButton_C*    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_GetButtonIndex) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_GetButtonIndex");
static_assert(sizeof(WBP_Modern_Settings_Header_C_GetButtonIndex) == 0x000010, "Wrong size on WBP_Modern_Settings_Header_C_GetButtonIndex");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonIndex, Button) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_GetButtonIndex::Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonIndex, Index_0) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_GetButtonIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_GetButtonIndex, CallFunc_GetChildIndex_ReturnValue) == 0x00000C, "Member 'WBP_Modern_Settings_Header_C_GetButtonIndex::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.IsValidIndex
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_Settings_Header_C_IsValidIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_IsValidIndex) == 0x000004, "Wrong alignment on WBP_Modern_Settings_Header_C_IsValidIndex");
static_assert(sizeof(WBP_Modern_Settings_Header_C_IsValidIndex) == 0x000010, "Wrong size on WBP_Modern_Settings_Header_C_IsValidIndex");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, Index_0) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, IsValid) == 0x000004, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000D, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_IsValidIndex, CallFunc_BooleanAND_ReturnValue) == 0x00000E, "Member 'WBP_Modern_Settings_Header_C_IsValidIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.OnHeaderButtonPressed
// 0x0028 (0x0028 - 0x0000)
struct WBP_Modern_Settings_Header_C_OnHeaderButtonPressed final
{
public:
	class UWBP_Modern_Settings_HeaderButton_C*    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Local_NextIndex;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetButtonIndex_Index;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_Settings_HeaderButton_C*    CallFunc_GetButtonAt_Button;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_OnHeaderButtonPressed");
static_assert(sizeof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed) == 0x000028, "Wrong size on WBP_Modern_Settings_Header_C_OnHeaderButtonPressed");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, Button) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, Local_NextIndex) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::Local_NextIndex' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, CallFunc_GetButtonIndex_Index) == 0x00000C, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::CallFunc_GetButtonIndex_Index' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, CallFunc_GetButtonAt_Button) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::CallFunc_GetButtonAt_Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_OnHeaderButtonPressed, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_OnHeaderButtonPressed::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.Populate
// 0x0048 (0x0048 - 0x0000)
struct WBP_Modern_Settings_Header_C_Populate final
{
public:
	TArray<class FText>                           NewButtonsLabel;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         NewCurrentIndex;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_Populate) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_Populate");
static_assert(sizeof(WBP_Modern_Settings_Header_C_Populate) == 0x000048, "Wrong size on WBP_Modern_Settings_Header_C_Populate");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, NewButtonsLabel) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_Populate::NewButtonsLabel' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, NewCurrentIndex) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_Populate::NewCurrentIndex' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_Modern_Settings_Header_C_Populate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_Populate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Modern_Settings_Header_C_Populate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_Populate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_Modern_Settings_Header_C_Populate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Populate, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_Modern_Settings_Header_C_Populate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.SetButtonIndex
// 0x0040 (0x0040 - 0x0000)
struct WBP_Modern_Settings_Header_C_SetButtonIndex final
{
public:
	int32                                         NewCurrentIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_Settings_HeaderButton_C*    Local_NewSelectedButton;                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_Settings_HeaderButton_C*    Local_OldSelectedButton;                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_Settings_HeaderButton_C*    CallFunc_GetButtonAt_Button;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_Settings_HeaderButton_C*    CallFunc_GetButtonAt_Button_1;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidIndex_IsValid;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_SetButtonIndex) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_SetButtonIndex");
static_assert(sizeof(WBP_Modern_Settings_Header_C_SetButtonIndex) == 0x000040, "Wrong size on WBP_Modern_Settings_Header_C_SetButtonIndex");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, NewCurrentIndex) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::NewCurrentIndex' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, Local_NewSelectedButton) == 0x000008, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::Local_NewSelectedButton' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, Local_OldSelectedButton) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::Local_OldSelectedButton' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, CallFunc_GetButtonAt_Button) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::CallFunc_GetButtonAt_Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, CallFunc_GetButtonAt_Button_1) == 0x000030, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::CallFunc_GetButtonAt_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_SetButtonIndex, CallFunc_IsValidIndex_IsValid) == 0x000038, "Member 'WBP_Modern_Settings_Header_C_SetButtonIndex::CallFunc_IsValidIndex_IsValid' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.TryDeleteButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_Modern_Settings_Header_C_TryDeleteButton final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidIndex_IsValid;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_TryDeleteButton) == 0x000004, "Wrong alignment on WBP_Modern_Settings_Header_C_TryDeleteButton");
static_assert(sizeof(WBP_Modern_Settings_Header_C_TryDeleteButton) == 0x000008, "Wrong size on WBP_Modern_Settings_Header_C_TryDeleteButton");
static_assert(offsetof(WBP_Modern_Settings_Header_C_TryDeleteButton, Index_0) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_TryDeleteButton::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_TryDeleteButton, CallFunc_RemoveChildAt_ReturnValue) == 0x000004, "Member 'WBP_Modern_Settings_Header_C_TryDeleteButton::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_TryDeleteButton, CallFunc_IsValidIndex_IsValid) == 0x000005, "Member 'WBP_Modern_Settings_Header_C_TryDeleteButton::CallFunc_IsValidIndex_IsValid' has a wrong offset!");

// Function WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C.Unbinding
// 0x0028 (0x0028 - 0x0000)
struct WBP_Modern_Settings_Header_C_Unbinding final
{
public:
	TDelegate<void(class UVNavigableInputKeySelector* Target, bool NewState)> K2Node_CreateDelegate_OutputDelegate; // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVRebindGlobalSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVRebindGlobalSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_Header_C_Unbinding) == 0x000008, "Wrong alignment on WBP_Modern_Settings_Header_C_Unbinding");
static_assert(sizeof(WBP_Modern_Settings_Header_C_Unbinding) == 0x000028, "Wrong size on WBP_Modern_Settings_Header_C_Unbinding");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Unbinding, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Modern_Settings_Header_C_Unbinding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Unbinding, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_Modern_Settings_Header_C_Unbinding::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Unbinding, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000018, "Member 'WBP_Modern_Settings_Header_C_Unbinding::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_Header_C_Unbinding, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_Modern_Settings_Header_C_Unbinding::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

