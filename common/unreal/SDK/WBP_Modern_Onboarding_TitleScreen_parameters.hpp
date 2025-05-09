﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Onboarding_TitleScreen

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen
// 0x0088 (0x0088 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsFocussed_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsFocussed_ReturnValue_1;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen) == 0x000008, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen) == 0x000088, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, EntryPoint) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_object_Variable) == 0x000038, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_real_Variable) == 0x000048, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_real_Variable_1) == 0x000050, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_real_Variable_0) == 0x000058, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, Temp_bool_Variable) == 0x000068, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, CallFunc_GetIsFocussed_ReturnValue) == 0x000080, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::CallFunc_GetIsFocussed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen, CallFunc_GetIsFocussed_ReturnValue_1) == 0x000081, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ExecuteUbergraph_WBP_Modern_Onboarding_TitleScreen::CallFunc_GetIsFocussed_ReturnValue_1' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0 final
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_Modern_Onboarding_TitleScreen_C_InpActEvt_IA_UI_Specific_OnboardingTitleScreen_Any_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.CanEnter
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_CanEnter final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_CanEnter) == 0x000001, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_CanEnter");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_CanEnter) == 0x000001, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_CanEnter");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_CanEnter, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_CanEnter::ReturnValue' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.CanExit
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_CanExit final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_CanExit) == 0x000001, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_CanExit");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_CanExit) == 0x000001, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_CanExit");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_CanExit, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_CanExit::ReturnValue' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.DoesNeedEnterAnimation
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation) == 0x000001, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation) == 0x000001, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_DoesNeedEnterAnimation::ReturnValue' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.DoesNeedExitAnimation
// 0x0002 (0x0002 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation) == 0x000001, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation) == 0x000002, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_Modern_Onboarding_TitleScreen_C_DoesNeedExitAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_Modern_Onboarding_TitleScreen.WBP_Modern_Onboarding_TitleScreen_C.ShouldBeSkiped
// 0x0001 (0x0001 - 0x0000)
struct WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped) == 0x000001, "Wrong alignment on WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped");
static_assert(sizeof(WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped) == 0x000001, "Wrong size on WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped");
static_assert(offsetof(WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped, ReturnValue) == 0x000000, "Member 'WBP_Modern_Onboarding_TitleScreen_C_ShouldBeSkiped::ReturnValue' has a wrong offset!");

}

