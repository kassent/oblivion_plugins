﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_MapIconFilter

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.ExecuteUbergraph_WBP_Modern_MapIconFilter
// 0x0E70 (0x0E70 - 0x0000)
struct WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputMethodActive_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_NewFilter;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModern_AltarMapIconDesignTableRow     K2Node_Event_FilterDesign;                         // 0x0030(0x0DB0)(ConstParm)
	bool                                          K2Node_Event_bIsControlFilter;                     // 0x0DE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE1[0x7];                                      // 0x0DE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_Filter_2;                             // 0x0DE8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsEnable;                            // 0x0DF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF1[0x7];                                      // 0x0DF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_Filter_1;                             // 0x0DF8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                      K2Node_Event_NewWidgetToFilter;                    // 0x0E00(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NumberOfFilteredObjects_1;            // 0x0E08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E0C[0x4];                                      // 0x0E0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_FilterIcon_C*               K2Node_DynamicCast_AsWBP_Modern_Filter_Icon;       // 0x0E10(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0E18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E19[0x7];                                      // 0x0E19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_FilteredWidget;                       // 0x0E20(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCanBeDisplay;                        // 0x0E28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E29[0x7];                                      // 0x0E29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      K2Node_Event_Filter;                               // 0x0E30(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                      K2Node_Event_RemovedWidget;                        // 0x0E38(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NumberOfFilteredObjects;              // 0x0E40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E44[0x4];                                      // 0x0E44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_FilterIcon_C*               K2Node_DynamicCast_AsWBP_Modern_Filter_Icon_1;     // 0x0E48(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0E50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E51[0x7];                                      // 0x0E51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0E58(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0E60(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter) == 0x000010, "Wrong alignment on WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter) == 0x000E70, "Wrong size on WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, EntryPoint) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, CallFunc_IsInputMethodActive_ReturnValue) == 0x000018, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::CallFunc_IsInputMethodActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_NewFilter) == 0x000020, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_NewFilter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_FilterDesign) == 0x000030, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_FilterDesign' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_bIsControlFilter) == 0x000DE0, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_bIsControlFilter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_Filter_2) == 0x000DE8, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_Filter_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_bIsEnable) == 0x000DF0, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_bIsEnable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_Filter_1) == 0x000DF8, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_Filter_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_NewWidgetToFilter) == 0x000E00, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_NewWidgetToFilter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_NumberOfFilteredObjects_1) == 0x000E08, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_NumberOfFilteredObjects_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_DynamicCast_AsWBP_Modern_Filter_Icon) == 0x000E10, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_DynamicCast_AsWBP_Modern_Filter_Icon' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_DynamicCast_bSuccess) == 0x000E18, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_FilteredWidget) == 0x000E20, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_FilteredWidget' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_bCanBeDisplay) == 0x000E28, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_bCanBeDisplay' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_Filter) == 0x000E30, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_Filter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_RemovedWidget) == 0x000E38, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_RemovedWidget' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_Event_NumberOfFilteredObjects) == 0x000E40, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_Event_NumberOfFilteredObjects' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_DynamicCast_AsWBP_Modern_Filter_Icon_1) == 0x000E48, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_DynamicCast_AsWBP_Modern_Filter_Icon_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, K2Node_DynamicCast_bSuccess_1) == 0x000E50, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000E58, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000E60, "Member 'WBP_Modern_MapIconFilter_C_ExecuteUbergraph_WBP_Modern_MapIconFilter::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.InitializeFilterIcon
// 0x0DE0 (0x0DE0 - 0x0000)
struct WBP_Modern_MapIconFilter_C_InitializeFilterIcon final
{
public:
	class UCommonUserWidget*                      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModern_AltarMapIconDesignTableRow     Design;                                            // 0x0010(0x0DB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsControl;                                         // 0x0DC0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC1[0x7];                                      // 0x0DC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_FilterIcon_C*               K2Node_DynamicCast_AsWBP_Modern_Filter_Icon;       // 0x0DC8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0DD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon) == 0x000010, "Wrong alignment on WBP_Modern_MapIconFilter_C_InitializeFilterIcon");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon) == 0x000DE0, "Wrong size on WBP_Modern_MapIconFilter_C_InitializeFilterIcon");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon, Icon) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_InitializeFilterIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon, Design) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_InitializeFilterIcon::Design' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon, IsControl) == 0x000DC0, "Member 'WBP_Modern_MapIconFilter_C_InitializeFilterIcon::IsControl' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon, K2Node_DynamicCast_AsWBP_Modern_Filter_Icon) == 0x000DC8, "Member 'WBP_Modern_MapIconFilter_C_InitializeFilterIcon::K2Node_DynamicCast_AsWBP_Modern_Filter_Icon' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_InitializeFilterIcon, K2Node_DynamicCast_bSuccess) == 0x000DD0, "Member 'WBP_Modern_MapIconFilter_C_InitializeFilterIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.OnFilterIconCreated
// 0x0DD0 (0x0DD0 - 0x0000)
struct WBP_Modern_MapIconFilter_C_OnFilterIconCreated final
{
public:
	class UCommonUserWidget*                      NewFilter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModern_AltarMapIconDesignTableRow     FilterDesign;                                      // 0x0010(0x0DB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsControlFilter;                                  // 0x0DC0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_OnFilterIconCreated) == 0x000010, "Wrong alignment on WBP_Modern_MapIconFilter_C_OnFilterIconCreated");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_OnFilterIconCreated) == 0x000DD0, "Wrong size on WBP_Modern_MapIconFilter_C_OnFilterIconCreated");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnFilterIconCreated, NewFilter) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_OnFilterIconCreated::NewFilter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnFilterIconCreated, FilterDesign) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_OnFilterIconCreated::FilterDesign' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnFilterIconCreated, bIsControlFilter) == 0x000DC0, "Member 'WBP_Modern_MapIconFilter_C_OnFilterIconCreated::bIsControlFilter' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.OnWidgetRegisterToFilter
// 0x0018 (0x0018 - 0x0000)
struct WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter final
{
public:
	class UCommonUserWidget*                      Filter;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                      NewWidgetToFilter;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfFilteredObjects;                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter) == 0x000018, "Wrong size on WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter, Filter) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter::Filter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter, NewWidgetToFilter) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter::NewWidgetToFilter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter, NumberOfFilteredObjects) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetRegisterToFilter::NumberOfFilteredObjects' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.OnWidgetUnregisterToFilter
// 0x0018 (0x0018 - 0x0000)
struct WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter final
{
public:
	class UCommonUserWidget*                      Filter;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                      RemovedWidget;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfFilteredObjects;                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter) == 0x000018, "Wrong size on WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter, Filter) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter::Filter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter, RemovedWidget) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter::RemovedWidget' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter, NumberOfFilteredObjects) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_OnWidgetUnregisterToFilter::NumberOfFilteredObjects' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.RequestUpdateFilteredWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget final
{
public:
	class UCommonUserWidget*                      FilteredWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanBeDisplay;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget) == 0x000010, "Wrong size on WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget, FilteredWidget) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget::FilteredWidget' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget, bCanBeDisplay) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_RequestUpdateFilteredWidget::bCanBeDisplay' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.RequestUpdateFilterWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget final
{
public:
	class UCommonUserWidget*                      Filter;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnable;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget) == 0x000010, "Wrong size on WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget, Filter) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget::Filter' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget, bIsEnable) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_RequestUpdateFilterWidget::bIsEnable' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.UpdateFilteredWidgetVisibility
// 0x0010 (0x0010 - 0x0000)
struct WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility final
{
public:
	class UCommonUserWidget*                      Filtered;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBeDisplay;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility) == 0x000010, "Wrong size on WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility, Filtered) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility::Filtered' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility, CanBeDisplay) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilteredWidgetVisibility::CanBeDisplay' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.UpdateFilterIcon
// 0x0020 (0x0020 - 0x0000)
struct WBP_Modern_MapIconFilter_C_UpdateFilterIcon final
{
public:
	class UCommonUserWidget*                      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsIconEnable;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Modern_FilterIcon_C*               K2Node_DynamicCast_AsWBP_Modern_Filter_Icon;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_UpdateFilterIcon");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon) == 0x000020, "Wrong size on WBP_Modern_MapIconFilter_C_UpdateFilterIcon");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon, Icon) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilterIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon, IsIconEnable) == 0x000008, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilterIcon::IsIconEnable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon, K2Node_DynamicCast_AsWBP_Modern_Filter_Icon) == 0x000010, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilterIcon::K2Node_DynamicCast_AsWBP_Modern_Filter_Icon' has a wrong offset!");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_UpdateFilterIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Modern_MapIconFilter_C_UpdateFilterIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Modern_MapIconFilter.WBP_Modern_MapIconFilter_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Modern_MapIconFilter_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

