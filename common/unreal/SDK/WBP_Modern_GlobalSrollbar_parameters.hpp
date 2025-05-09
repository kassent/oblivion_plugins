﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_GlobalSrollbar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C.ExecuteUbergraph_WBP_Modern_GlobalSrollbar
// 0x0068 (0x0068 - 0x0000)
struct WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_InputMethod;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;          // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar) == 0x000008, "Wrong alignment on WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar");
static_assert(sizeof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar) == 0x000068, "Wrong size on WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, EntryPoint) == 0x000000, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, K2Node_CustomEvent_InputMethod) == 0x000018, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::K2Node_CustomEvent_InputMethod' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1) == 0x000038, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000050, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_GetPlayerController_ReturnValue_2) == 0x000058, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_Modern_GlobalSrollbar_C_ExecuteUbergraph_WBP_Modern_GlobalSrollbar::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputMethod;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged");
static_assert(sizeof(WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged, InputMethod) == 0x000000, "Member 'WBP_Modern_GlobalSrollbar_C_OnInputMethodChanged::InputMethod' has a wrong offset!");

// Function WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C.SetNewMarkerPosition
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition final
{
public:
	double                                        Slider_Value;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnalogSlider*                          CallFunc_GetSlider_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnalogSlider*                          CallFunc_GetSlider_ReturnValue_1;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetHandle_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetHandle_ReturnValue_1;                  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition) == 0x000008, "Wrong alignment on WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition");
static_assert(sizeof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition) == 0x0000A0, "Wrong size on WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, Slider_Value) == 0x000000, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::Slider_Value' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetSlider_ReturnValue) == 0x000008, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetSlider_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetSlider_ReturnValue_1) == 0x000010, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetSlider_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetHandle_ReturnValue) == 0x000020, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetSize_ReturnValue) == 0x000028, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000038, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_BreakVector2D_X) == 0x000040, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetHandle_ReturnValue_1) == 0x000050, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000058, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000060, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_GetPosition_ReturnValue) == 0x000068, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_BreakVector2D_X_1) == 0x000078, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_BreakVector2D_Y_1) == 0x000080, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition, CallFunc_SetValue_InValue_ImplicitCast) == 0x000098, "Member 'WBP_Modern_GlobalSrollbar_C_SetNewMarkerPosition::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");

// Function WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C.UpdateTopDecorator
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator final
{
public:
	struct FSlateBrush                            CallFunc_Map_Find_Value;                           // 0x0000(0x00D0)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator) == 0x000010, "Wrong alignment on WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator");
static_assert(sizeof(WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator) == 0x0000E0, "Wrong size on WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator, CallFunc_Map_Find_Value) == 0x000000, "Member 'WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator, CallFunc_Map_Find_ReturnValue) == 0x0000D0, "Member 'WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D1, "Member 'WBP_Modern_GlobalSrollbar_C_UpdateTopDecorator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C.GetSliderLengthFromGeometry
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry final
{
public:
	struct FGeometry                              Geometry;                                          // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	double                                        ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetHandle_ReturnValue;                    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry) == 0x000008, "Wrong alignment on WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry");
static_assert(sizeof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry) == 0x0000B8, "Wrong size on WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, Geometry) == 0x000000, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::Geometry' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, ReturnValue) == 0x000038, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_GetHandle_ReturnValue) == 0x000040, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_GetSize_ReturnValue) == 0x000050, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_BreakVector2D_X) == 0x000060, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_GetLocalSize_ReturnValue) == 0x000070, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_BreakVector2D_Y_1) == 0x000088, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000A0, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000A8, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000B0, "Member 'WBP_Modern_GlobalSrollbar_C_GetSliderLengthFromGeometry::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");

}

