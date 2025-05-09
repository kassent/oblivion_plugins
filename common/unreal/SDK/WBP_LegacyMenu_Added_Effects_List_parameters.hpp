﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyMenu_Added_Effects_List

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.CreateEffectItemList
// 0x0118 (0x0118 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList final
{
public:
	TArray<struct FModernEffectItemData>          NewItems;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWBP_LegacyMenu_AddedEffects_C*         Local_AddedEffectWidget;                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FModernEffectItemData                  Local_EffectItem;                                  // 0x0018(0x0060)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_LegacyMenu_AddedEffects_C*         CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FModernEffectItemData& NewParam)> K2Node_CreateDelegate_OutputDelegate; // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModernEffectItemData                  CallFunc_Array_Get_Item;                           // 0x00A8(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList) == 0x000118, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, NewItems) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::NewItems' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, Local_AddedEffectWidget) == 0x000010, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::Local_AddedEffectWidget' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, Local_EffectItem) == 0x000018, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::Local_EffectItem' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, Temp_int_Array_Index_Variable) == 0x000078, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Create_ReturnValue) == 0x000088, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000094, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList, CallFunc_AddChild_ReturnValue) == 0x000110, "Member 'WBP_LegacyMenu_Added_Effects_List_C_CreateEffectItemList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.DoScroll
// 0x0008 (0x0008 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_DoScroll final
{
public:
	double                                        ScrollDelta;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_DoScroll) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_DoScroll");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_DoScroll) == 0x000008, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_DoScroll");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_DoScroll, ScrollDelta) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_DoScroll::ScrollDelta' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List
// 0x0098 (0x0098 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FModernEffectItemData>          K2Node_CustomEvent_NewItems;                       // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FModernEffectItemData                  K2Node_CustomEvent_EffectItemProperty;             // 0x0018(0x0060)()
	double                                        K2Node_CustomEvent_ScrollDelta;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0088(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List) == 0x000098, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, EntryPoint) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, K2Node_CustomEvent_NewItems) == 0x000008, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::K2Node_CustomEvent_NewItems' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, K2Node_CustomEvent_EffectItemProperty) == 0x000018, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::K2Node_CustomEvent_EffectItemProperty' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, K2Node_CustomEvent_ScrollDelta) == 0x000078, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::K2Node_CustomEvent_ScrollDelta' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000080, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000088, "Member 'WBP_LegacyMenu_Added_Effects_List_C_ExecuteUbergraph_WBP_LegacyMenu_Added_Effects_List::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.OnItemListClick
// 0x0060 (0x0060 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick final
{
public:
	struct FModernEffectItemData                  EffectItemProperty;                                // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick) == 0x000060, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick, EffectItemProperty) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_OnItemListClick::EffectItemProperty' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.UpdateListView
// 0x0010 (0x0010 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_UpdateListView final
{
public:
	TArray<struct FModernEffectItemData>          NewItems;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_UpdateListView) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_UpdateListView");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_UpdateListView) == 0x000010, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_UpdateListView");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_UpdateListView, NewItems) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_UpdateListView::NewItems' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

// Function WBP_LegacyMenu_Added_Effects_List.WBP_LegacyMenu_Added_Effects_List_C.IsNavigatable
// 0x000C (0x000C - 0x0000)
struct WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSize_ReturnValue;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable) == 0x000004, "Wrong alignment on WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable");
static_assert(sizeof(WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable) == 0x00000C, "Wrong size on WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable, ReturnValue) == 0x000000, "Member 'WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable, CallFunc_GetSize_ReturnValue) == 0x000004, "Member 'WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_LegacyMenu_Added_Effects_List_C_IsNavigatable::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

