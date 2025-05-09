﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_Inventory_Filter

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter
// 0x09F0 (0x09F0 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_NewFilter;                            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FOriginal_InventoryFilterTableRow      K2Node_Event_FilterDesign;                         // 0x0010(0x09A0)(ConstParm)
	class UCommonUserWidget*                      K2Node_Event_Filter;                               // 0x09B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsDisplayed;                         // 0x09B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsEnable;                            // 0x09B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BA[0x6];                                      // 0x09BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x09C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsReversed)>             K2Node_CreateDelegate_OutputDelegate;              // 0x09C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x09D8(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter) == 0x000010, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter) == 0x0009F0, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, EntryPoint) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_Event_NewFilter) == 0x000008, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_Event_NewFilter' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_Event_FilterDesign) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_Event_FilterDesign' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_Event_Filter) == 0x0009B0, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_Event_Filter' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_Event_bIsDisplayed) == 0x0009B8, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_Event_bIsDisplayed' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_Event_bIsEnable) == 0x0009B9, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_Event_bIsEnable' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0009C0, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, K2Node_CreateDelegate_OutputDelegate) == 0x0009C8, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter, CallFunc_NavigateToWidget_Widget_CastInput) == 0x0009D8, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ExecuteUbergraph_WBP_OriginalMenu_Inventory_Filter::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.Initialize Filter Icon
// 0x09D0 (0x09D0 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon final
{
public:
	class UCommonUserWidget*                      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOriginal_InventoryFilterTableRow      Design;                                            // 0x0010(0x09A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_OriginalMenu_Inventory_FilterIcon_C* Local_FilterIcon;                                // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_OriginalMenu_Inventory_FilterIcon_Wrapper_C* K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper; // 0x09B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x09C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon) == 0x000010, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon) == 0x0009D0, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon, Icon) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon, Design) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon::Design' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon, Local_FilterIcon) == 0x0009B0, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon::Local_FilterIcon' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon, K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper) == 0x0009B8, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon::K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon, K2Node_DynamicCast_bSuccess) == 0x0009C0, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Initialize_Filter_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.OnFilterIconCreated
// 0x09B0 (0x09B0 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated final
{
public:
	class UCommonUserWidget*                      NewFilter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOriginal_InventoryFilterTableRow      FilterDesign;                                      // 0x0010(0x09A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated) == 0x000010, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated) == 0x0009B0, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated, NewFilter) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated::NewFilter' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated, FilterDesign) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_OnFilterIconCreated::FilterDesign' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.RequestUpdateFilterWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget final
{
public:
	class UCommonUserWidget*                      Filter;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDisplayed;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnable;                                         // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget) == 0x000010, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget, Filter) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget::Filter' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget, bIsDisplayed) == 0x000008, "Member 'WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget::bIsDisplayed' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget, bIsEnable) == 0x000009, "Member 'WBP_OriginalMenu_Inventory_Filter_C_RequestUpdateFilterWidget::bIsEnable' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.ResetFilter
// 0x0020 (0x0020 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_ResetFilter final
{
public:
	EOriginalInventoryMenuSortType                ActiveFilter;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Local_SortTypeID;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_OriginalMenu_Inventory_FilterScrollbox_C* K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Scrollbox; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_ResetFilter");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter) == 0x000020, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_ResetFilter");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, ActiveFilter) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::ActiveFilter' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, Local_SortTypeID) == 0x000004, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::Local_SortTypeID' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, CallFunc_Array_Find_ReturnValue) == 0x00000C, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Scrollbox) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Scrollbox' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_ResetFilter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_OriginalMenu_Inventory_Filter_C_ResetFilter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.Set Alphabetical Icon Visibility
// 0x0058 (0x0058 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility final
{
public:
	ESlateVisibility                              NewVisibility;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_OriginalMenu_Inventory_FilterIcon_Wrapper_C* K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ReturnValue_2;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility) == 0x000058, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, NewVisibility) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::NewVisibility' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetScrollBox_ReturnValue) == 0x000008, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetScrollBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetScrollBox_ReturnValue_1) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetScrollBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper) == 0x000030, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetScrollBox_ReturnValue_2) == 0x000040, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetScrollBox_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_GetChildAt_ReturnValue_1) == 0x000048, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_OriginalMenu_Inventory_Filter_C_Set_Alphabetical_Icon_Visibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.SortIsReversedUpdated
// 0x0001 (0x0001 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated final
{
public:
	bool                                          bIsReversed;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated) == 0x000001, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated) == 0x000001, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated, bIsReversed) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_SortIsReversedUpdated::bIsReversed' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.UpdateFilter
// 0x0010 (0x0010 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter final
{
public:
	TArray<EOriginalInventoryMenuSortType>        EnabledFilters;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter) == 0x000010, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter, EnabledFilters) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilter::EnabledFilters' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.UpdateFilterIcon
// 0x0050 (0x0050 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon final
{
public:
	class UCommonUserWidget*                      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsDisplayed;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEnabled;                                       // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_OriginalMenu_Inventory_FilterIcon_C* Local_FilterIcon;                                // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsFocused_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_OriginalMenu_Inventory_FilterIcon_Wrapper_C* K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon) == 0x000050, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, Icon) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, InIsDisplayed) == 0x000008, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::InIsDisplayed' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, InIsEnabled) == 0x000009, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::InIsEnabled' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, Local_FilterIcon) == 0x000010, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::Local_FilterIcon' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, Temp_bool_Variable) == 0x000018, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, Temp_byte_Variable) == 0x000019, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, Temp_byte_Variable_1) == 0x00001A, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000020, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000028, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, CallFunc_GetIsFocused_ReturnValue) == 0x000038, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::CallFunc_GetIsFocused_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, K2Node_Select_Default) == 0x00003B, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper) == 0x000040, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::K2Node_DynamicCast_AsWBP_Original_Menu_Inventory_Filter_Icon_Wrapper' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_OriginalMenu_Inventory_Filter_C_UpdateFilterIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_OriginalMenu_Inventory_Filter.WBP_OriginalMenu_Inventory_Filter_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_OriginalMenu_Inventory_Filter_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

