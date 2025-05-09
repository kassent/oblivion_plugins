﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_QuestDetailPanel

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_BndEvt__WBP_Modern_QuestDetailPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.ExecuteUbergraph_WBP_Modern_QuestDetailPanel
// 0x0200 (0x0200 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLegacyMapMenuQuestProperties          K2Node_CustomEvent_NewQuestProperty;               // 0x0010(0x0098)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;          // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;    // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAltarUISubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_TryGetBrushFromKey_OutBrush;              // 0x0100(0x00D0)()
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_3;    // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel) == 0x000010, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel) == 0x000200, "Wrong size on WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, EntryPoint) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_CustomEvent_NewQuestProperty) == 0x000010, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_CustomEvent_NewQuestProperty' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_Event_IsDesignTime) == 0x0000A8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_ComponentBoundEvent_Button) == 0x0000B0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x0000D8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue_2) == 0x0000E8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000F0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_TryGetBrushFromKey_OutBrush) == 0x000100, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_TryGetBrushFromKey_OutBrush' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_DynamicCast_AsTexture) == 0x0001D0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0001E0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue_3) == 0x0001E8, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel, CallFunc_IsValid_ReturnValue_1) == 0x0001F0, "Member 'WBP_Modern_QuestDetailPanel_C_ExecuteUbergraph_WBP_Modern_QuestDetailPanel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.OnInputMethodChange
// 0x0028 (0x0028 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_OnInputMethodChange final
{
public:
	ECommonInputType                              NewInputType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_2;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_3;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange) == 0x000008, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_OnInputMethodChange");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange) == 0x000028, "Wrong size on WBP_Modern_QuestDetailPanel_C_OnInputMethodChange");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, NewInputType) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::NewInputType' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, Temp_byte_Variable) == 0x000001, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, Temp_real_Variable) == 0x000004, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, Temp_real_Variable_1) == 0x000008, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, Temp_real_Variable_2) == 0x00000C, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, Temp_real_Variable_3) == 0x000010, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, K2Node_Select_Default) == 0x000014, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, CallFunc_TextIsEmpty_ReturnValue) == 0x000021, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000022, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_OnInputMethodChange, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'WBP_Modern_QuestDetailPanel_C_OnInputMethodChange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_PreConstruct");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_PreConstruct) == 0x000001, "Wrong size on WBP_Modern_QuestDetailPanel_C_PreConstruct");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.ScrollFlavorText
// 0x0050 (0x0050 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_ScrollFlavorText final
{
public:
	double                                        ScrollDelta;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Local_NewOffset;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText) == 0x000008, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_ScrollFlavorText");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText) == 0x000050, "Wrong size on WBP_Modern_QuestDetailPanel_C_ScrollFlavorText");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, ScrollDelta) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::ScrollDelta' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, Local_NewOffset) == 0x000008, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::Local_NewOffset' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_GetScrollOffset_ReturnValue) == 0x000010, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000014, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000019, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_ScrollFlavorText, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x000048, "Member 'WBP_Modern_QuestDetailPanel_C_ScrollFlavorText::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.UpdateIcon
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_UpdateIcon final
{
public:
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0000(0x00D0)()
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_UpdateIcon) == 0x000010, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_UpdateIcon");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_UpdateIcon) == 0x0000D0, "Wrong size on WBP_Modern_QuestDetailPanel_C_UpdateIcon");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateIcon, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateIcon::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.UpdateName
// 0x0005 (0x0005 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_UpdateName final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_UpdateName) == 0x000001, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_UpdateName");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_UpdateName) == 0x000005, "Wrong size on WBP_Modern_QuestDetailPanel_C_UpdateName");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateName, Temp_bool_Variable) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateName, Temp_byte_Variable) == 0x000001, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateName, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateName::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateName, CallFunc_TextIsEmpty_ReturnValue) == 0x000003, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateName::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateName, K2Node_Select_Default) == 0x000004, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateName::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Modern_QuestDetailPanel.WBP_Modern_QuestDetailPanel_C.UpdateProperties
// 0x0098 (0x0098 - 0x0000)
struct WBP_Modern_QuestDetailPanel_C_UpdateProperties final
{
public:
	struct FLegacyMapMenuQuestProperties          NewQuestProperty;                                  // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Modern_QuestDetailPanel_C_UpdateProperties) == 0x000008, "Wrong alignment on WBP_Modern_QuestDetailPanel_C_UpdateProperties");
static_assert(sizeof(WBP_Modern_QuestDetailPanel_C_UpdateProperties) == 0x000098, "Wrong size on WBP_Modern_QuestDetailPanel_C_UpdateProperties");
static_assert(offsetof(WBP_Modern_QuestDetailPanel_C_UpdateProperties, NewQuestProperty) == 0x000000, "Member 'WBP_Modern_QuestDetailPanel_C_UpdateProperties::NewQuestProperty' has a wrong offset!");

}

