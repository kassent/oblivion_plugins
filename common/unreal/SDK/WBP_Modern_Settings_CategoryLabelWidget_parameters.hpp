﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_CategoryLabelWidget

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_Settings_CategoryLabelWidget.WBP_Modern_Settings_CategoryLabelWidget_C.SetCategory
// 0x0050 (0x0050 - 0x0000)
struct WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory final
{
public:
	struct FModernSettingCategoryTableRow         NewCategory;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModernSettingCategoryTableRow         CallFunc_GetSettingCategoryRow_ReturnValue;        // 0x0028(0x0028)(ConstParm)
};
static_assert(alignof(WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory) == 0x000008, "Wrong alignment on WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory");
static_assert(sizeof(WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory) == 0x000050, "Wrong size on WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory, NewCategory) == 0x000000, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory::NewCategory' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory, CallFunc_GetSettingCategoryRow_ReturnValue) == 0x000028, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_SetCategory::CallFunc_GetSettingCategoryRow_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Settings_CategoryLabelWidget.WBP_Modern_Settings_CategoryLabelWidget_C.OnSettingCategoryChanged
// 0x0028 (0x0028 - 0x0000)
struct WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged final
{
public:
	struct FModernSettingCategoryTableRow         NewSettingCategoryRow;                             // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged) == 0x000008, "Wrong alignment on WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged");
static_assert(sizeof(WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged) == 0x000028, "Wrong size on WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged, NewSettingCategoryRow) == 0x000000, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_OnSettingCategoryChanged::NewSettingCategoryRow' has a wrong offset!");

// Function WBP_Modern_Settings_CategoryLabelWidget.WBP_Modern_Settings_CategoryLabelWidget_C.ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget
// 0x0030 (0x0030 - 0x0000)
struct WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModernSettingCategoryTableRow         K2Node_Event_NewSettingCategoryRow;                // 0x0008(0x0028)(ConstParm)
};
static_assert(alignof(WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget) == 0x000008, "Wrong alignment on WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget");
static_assert(sizeof(WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget) == 0x000030, "Wrong size on WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget, EntryPoint) == 0x000000, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget, K2Node_Event_NewSettingCategoryRow) == 0x000008, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_ExecuteUbergraph_WBP_Modern_Settings_CategoryLabelWidget::K2Node_Event_NewSettingCategoryRow' has a wrong offset!");

// Function WBP_Modern_Settings_CategoryLabelWidget.WBP_Modern_Settings_CategoryLabelWidget_C.IsNavigable
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable) == 0x000001, "Wrong alignment on WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable");
static_assert(sizeof(WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable) == 0x000001, "Wrong size on WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable");
static_assert(offsetof(WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable, ReturnValue) == 0x000000, "Member 'WBP_Modern_Settings_CategoryLabelWidget_C_IsNavigable::ReturnValue' has a wrong offset!");

}

