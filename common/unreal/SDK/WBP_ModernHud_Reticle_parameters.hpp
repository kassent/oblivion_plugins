﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_Reticle

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.ExecuteUbergraph_WBP_ModernHud_Reticle
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAltarUISubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPairedOblivionHitEvent& HitEvent)> K2Node_CreateDelegate_OutputDelegate; // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsDrawing)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewParam_2;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsDrawing)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDrawing;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewParam_1;                     // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ELegacyHudReticleIcon                         K2Node_CustomEvent_NewParam;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedCharacter*                      K2Node_DynamicCast_AsVPaired_Character;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class AVWeapon* WeaponActor)> K2Node_CreateDelegate_OutputDelegate_3;       // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVPairedCharacter*                      K2Node_DynamicCast_AsVPaired_Character_1;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class AVWeapon*                         K2Node_CustomEvent_WeaponActor;                    // 0x0090(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class AVWeapon* WeaponActor)> K2Node_CreateDelegate_OutputDelegate_4;       // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckForBehaviorTypeUpdate_ReturnValue;   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModernReticleWeaponBehavior                  CallFunc_GetReticleWeaponBehavior_ReturnValue;     // 0x00AA(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB[0x1];                                       // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsHidden)>               K2Node_CreateDelegate_OutputDelegate_5;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_InSneakLevel;                   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModernReticleWeaponBehavior                  CallFunc_GetReticleWeaponBehavior_ReturnValue_1;   // 0x00C8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPairedOblivionHitEvent& HitEvent)> K2Node_CreateDelegate_OutputDelegate_6; // 0x00CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle) == 0x000008, "Wrong alignment on WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle");
static_assert(sizeof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle) == 0x0000E0, "Wrong size on WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, EntryPoint) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_NewParam_2) == 0x000030, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_NewParam_2' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_IsDrawing) == 0x000044, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_IsDrawing' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_NewParam_1) == 0x000045, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_NewParam_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_GetPlayerPawn_ReturnValue) == 0x000048, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_NewParam) == 0x000050, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_DynamicCast_AsVPaired_Character) == 0x000058, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_DynamicCast_AsVPaired_Character' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000068, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_DynamicCast_AsVPaired_Character_1) == 0x000080, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_DynamicCast_AsVPaired_Character_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_WeaponActor) == 0x000090, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_WeaponActor' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_4) == 0x000098, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_CheckForBehaviorTypeUpdate_ReturnValue) == 0x0000A9, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_CheckForBehaviorTypeUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_GetReticleWeaponBehavior_ReturnValue) == 0x0000AA, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_GetReticleWeaponBehavior_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000AC, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CustomEvent_InSneakLevel) == 0x0000C0, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CustomEvent_InSneakLevel' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, CallFunc_GetReticleWeaponBehavior_ReturnValue_1) == 0x0000C8, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::CallFunc_GetReticleWeaponBehavior_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000CC, "Member 'WBP_ModernHud_Reticle_C_ExecuteUbergraph_WBP_ModernHud_Reticle::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.InitCrosshair
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_InitCrosshair final
{
public:
	bool                                          CallFunc_GetSneakingProperties_ReturnValue;        // 0x0000(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_InitCrosshair) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_InitCrosshair");
static_assert(sizeof(WBP_ModernHud_Reticle_C_InitCrosshair) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_InitCrosshair");
static_assert(offsetof(WBP_ModernHud_Reticle_C_InitCrosshair, CallFunc_GetSneakingProperties_ReturnValue) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_InitCrosshair::CallFunc_GetSneakingProperties_ReturnValue' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.On Toggle HUD Visibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility");
static_assert(sizeof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility) == 0x000005, "Wrong size on WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility");
static_assert(offsetof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility, bInIsVisible) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility::bInIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_ModernHud_Reticle_C_On_Toggle_HUD_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.OnAimingCrosshairTriggered
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered final
{
public:
	bool                                          IsDrawing;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered");
static_assert(sizeof(WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered, IsDrawing) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_OnAimingCrosshairTriggered::IsDrawing' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.OnHit
// 0x0060 (0x0060 - 0x0000)
struct WBP_ModernHud_Reticle_C_OnHit final
{
public:
	struct FPairedOblivionHitEvent                NewHit;                                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_OnHit) == 0x000008, "Wrong alignment on WBP_ModernHud_Reticle_C_OnHit");
static_assert(sizeof(WBP_ModernHud_Reticle_C_OnHit) == 0x000060, "Wrong size on WBP_ModernHud_Reticle_C_OnHit");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, NewHit) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_OnHit::NewHit' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00003A, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003B, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_Conv_BoolToDouble_ReturnValue) == 0x000040, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_Conv_BoolToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_NotEqual_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_NotEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000050, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_Reticle_C_OnHit, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000058, "Member 'WBP_ModernHud_Reticle_C_OnHit::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.SetActivateTexture
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_SetActivateTexture final
{
public:
	ELegacyHudReticleIcon                         Icon;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_SetActivateTexture) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_SetActivateTexture");
static_assert(sizeof(WBP_ModernHud_Reticle_C_SetActivateTexture) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_SetActivateTexture");
static_assert(offsetof(WBP_ModernHud_Reticle_C_SetActivateTexture, Icon) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_SetActivateTexture::Icon' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.SetIsStealingColour
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_SetIsStealingColour final
{
public:
	bool                                          IsStealing;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_SetIsStealingColour) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_SetIsStealingColour");
static_assert(sizeof(WBP_ModernHud_Reticle_C_SetIsStealingColour) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_SetIsStealingColour");
static_assert(offsetof(WBP_ModernHud_Reticle_C_SetIsStealingColour, IsStealing) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_SetIsStealingColour::IsStealing' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.UpdateCrosshairTexture
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernHud_Reticle_C_UpdateCrosshairTexture final
{
public:
	const class AVWeapon*                         WeaponActor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_UpdateCrosshairTexture) == 0x000008, "Wrong alignment on WBP_ModernHud_Reticle_C_UpdateCrosshairTexture");
static_assert(sizeof(WBP_ModernHud_Reticle_C_UpdateCrosshairTexture) == 0x000008, "Wrong size on WBP_ModernHud_Reticle_C_UpdateCrosshairTexture");
static_assert(offsetof(WBP_ModernHud_Reticle_C_UpdateCrosshairTexture, WeaponActor) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_UpdateCrosshairTexture::WeaponActor' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.UpdateIsStealing
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_UpdateIsStealing final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_UpdateIsStealing) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_UpdateIsStealing");
static_assert(sizeof(WBP_ModernHud_Reticle_C_UpdateIsStealing) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_UpdateIsStealing");
static_assert(offsetof(WBP_ModernHud_Reticle_C_UpdateIsStealing, NewParam) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_UpdateIsStealing::NewParam' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.UpdateReticleIcon
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_UpdateReticleIcon final
{
public:
	ELegacyHudReticleIcon                         NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_UpdateReticleIcon) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_UpdateReticleIcon");
static_assert(sizeof(WBP_ModernHud_Reticle_C_UpdateReticleIcon) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_UpdateReticleIcon");
static_assert(offsetof(WBP_ModernHud_Reticle_C_UpdateReticleIcon, NewParam) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_UpdateReticleIcon::NewParam' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.UpdateSneakingProperties
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_Reticle_C_UpdateSneakingProperties final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_UpdateSneakingProperties) == 0x000001, "Wrong alignment on WBP_ModernHud_Reticle_C_UpdateSneakingProperties");
static_assert(sizeof(WBP_ModernHud_Reticle_C_UpdateSneakingProperties) == 0x000001, "Wrong size on WBP_ModernHud_Reticle_C_UpdateSneakingProperties");
static_assert(offsetof(WBP_ModernHud_Reticle_C_UpdateSneakingProperties, NewParam) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_UpdateSneakingProperties::NewParam' has a wrong offset!");

// Function WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C.UpdateSneakLevel
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernHud_Reticle_C_UpdateSneakLevel final
{
public:
	double                                        InSneakLevel;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_Reticle_C_UpdateSneakLevel) == 0x000008, "Wrong alignment on WBP_ModernHud_Reticle_C_UpdateSneakLevel");
static_assert(sizeof(WBP_ModernHud_Reticle_C_UpdateSneakLevel) == 0x000008, "Wrong size on WBP_ModernHud_Reticle_C_UpdateSneakLevel");
static_assert(offsetof(WBP_ModernHud_Reticle_C_UpdateSneakLevel, InSneakLevel) == 0x000000, "Member 'WBP_ModernHud_Reticle_C_UpdateSneakLevel::InSneakLevel' has a wrong offset!");

}

