﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_StatsPage2

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.ExecuteUbergraph_WBP_ModernMenu_StatsPage2
// 0x0090 (0x0090 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELegacyStatsMenuPage2Items                    K2Node_CustomEvent_Item;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLegacyStatsMenuSecondaryAttribute     K2Node_CustomEvent_Value;                          // 0x0008(0x0008)(NoDestructor)
	class UWBP_ModernMenu_StatsSecondaryAttribute_C* CallFunc_GetAttributeWidget_Return_Value;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<ELegacyStatsMenuPage2Items, struct FLegacyStatsMenuSecondaryAttribute> CallFunc_GetSecondaryAttributes_ReturnValue; // 0x0018(0x0050)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0078(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2) == 0x000090, "Wrong size on WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, EntryPoint) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, K2Node_CustomEvent_Item) == 0x000004, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, K2Node_CustomEvent_Value) == 0x000008, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_GetAttributeWidget_Return_Value) == 0x000010, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_GetAttributeWidget_Return_Value' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_GetSecondaryAttributes_ReturnValue) == 0x000018, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_GetSecondaryAttributes_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000070, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000078, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'WBP_ModernMenu_StatsPage2_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.Set Details State
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_Set_Details_State final
{
public:
	bool                                          InIsDisplayed;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_Set_Details_State) == 0x000001, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_Set_Details_State");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_Set_Details_State) == 0x000005, "Wrong size on WBP_ModernMenu_StatsPage2_C_Set_Details_State");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Set_Details_State, InIsDisplayed) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_Set_Details_State::InIsDisplayed' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Set_Details_State, Temp_bool_Variable) == 0x000001, "Member 'WBP_ModernMenu_StatsPage2_C_Set_Details_State::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Set_Details_State, Temp_byte_Variable) == 0x000002, "Member 'WBP_ModernMenu_StatsPage2_C_Set_Details_State::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Set_Details_State, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_ModernMenu_StatsPage2_C_Set_Details_State::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Set_Details_State, K2Node_Select_Default) == 0x000004, "Member 'WBP_ModernMenu_StatsPage2_C_Set_Details_State::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.Update Attributes
// 0x0088 (0x0088 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_Update_Attributes final
{
public:
	TMap<ELegacyStatsMenuPage2Items, struct FLegacyStatsMenuSecondaryAttribute> NewAttributes;       // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ELegacyStatsMenuPage2Items                    Local_CurrentItemType;                             // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ELegacyStatsMenuPage2Items>            CallFunc_Map_Keys_Keys;                            // 0x0060(0x0010)(ReferenceParm)
	struct FLegacyStatsMenuSecondaryAttribute     CallFunc_Map_Find_Value;                           // 0x0070(0x0008)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELegacyStatsMenuPage2Items                    CallFunc_Array_Get_Item;                           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_Update_Attributes) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_Update_Attributes");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_Update_Attributes) == 0x000088, "Wrong size on WBP_ModernMenu_StatsPage2_C_Update_Attributes");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, NewAttributes) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::NewAttributes' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, Local_CurrentItemType) == 0x000050, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::Local_CurrentItemType' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, Temp_int_Array_Index_Variable) == 0x000054, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Map_Keys_Keys) == 0x000060, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Map_Find_Value) == 0x000070, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Array_Get_Item) == 0x000079, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_Update_Attributes, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'WBP_ModernMenu_StatsPage2_C_Update_Attributes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.UpdateAttribute
// 0x000C (0x000C - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_UpdateAttribute final
{
public:
	ELegacyStatsMenuPage2Items                    Item;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLegacyStatsMenuSecondaryAttribute     Value;                                             // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_UpdateAttribute) == 0x000004, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_UpdateAttribute");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_UpdateAttribute) == 0x00000C, "Wrong size on WBP_ModernMenu_StatsPage2_C_UpdateAttribute");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_UpdateAttribute, Item) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_UpdateAttribute::Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_UpdateAttribute, Value) == 0x000004, "Member 'WBP_ModernMenu_StatsPage2_C_UpdateAttribute::Value' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.UpdateDetailsContent
// 0x0058 (0x0058 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent final
{
public:
	struct FLegacyStatsMenuPopupContent           Content;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLegacyStatsMenuPopupContent           K2Node_MakeStruct_LegacyStatsMenuPopupContent;     // 0x0028(0x0028)()
	bool                                          CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent) == 0x000058, "Wrong size on WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent, Content) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent::Content' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent, K2Node_MakeStruct_LegacyStatsMenuPopupContent) == 0x000028, "Member 'WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent::K2Node_MakeStruct_LegacyStatsMenuPopupContent' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent, CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue) == 0x000050, "Member 'WBP_ModernMenu_StatsPage2_C_UpdateDetailsContent::CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage2.WBP_ModernMenu_StatsPage2_C.GetAttributeWidget
// 0x0020 (0x0020 - 0x0000)
struct WBP_ModernMenu_StatsPage2_C_GetAttributeWidget final
{
public:
	ELegacyStatsMenuPage2Items                    Item;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModernMenu_StatsSecondaryAttribute_C* Return_Value;                                   // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ELegacyStatsMenuPage2Items                    Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModernMenu_StatsSecondaryAttribute_C* K2Node_Select_Default;                          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage2_C_GetAttributeWidget");
static_assert(sizeof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget) == 0x000020, "Wrong size on WBP_ModernMenu_StatsPage2_C_GetAttributeWidget");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget, Item) == 0x000000, "Member 'WBP_ModernMenu_StatsPage2_C_GetAttributeWidget::Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget, Return_Value) == 0x000008, "Member 'WBP_ModernMenu_StatsPage2_C_GetAttributeWidget::Return_Value' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget, Temp_byte_Variable) == 0x000010, "Member 'WBP_ModernMenu_StatsPage2_C_GetAttributeWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage2_C_GetAttributeWidget, K2Node_Select_Default) == 0x000018, "Member 'WBP_ModernMenu_StatsPage2_C_GetAttributeWidget::K2Node_Select_Default' has a wrong offset!");

}

