﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_MagicIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ModernHud_MagicIcon.WBP_ModernHud_MagicIcon_C.SetCanCast
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModernHud_MagicIcon_C_SetCanCast final
{
public:
	bool                                          bInCanCast;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_MagicIcon_C_SetCanCast) == 0x000008, "Wrong alignment on WBP_ModernHud_MagicIcon_C_SetCanCast");
static_assert(sizeof(WBP_ModernHud_MagicIcon_C_SetCanCast) == 0x000018, "Wrong size on WBP_ModernHud_MagicIcon_C_SetCanCast");
static_assert(offsetof(WBP_ModernHud_MagicIcon_C_SetCanCast, bInCanCast) == 0x000000, "Member 'WBP_ModernHud_MagicIcon_C_SetCanCast::bInCanCast' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_MagicIcon_C_SetCanCast, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'WBP_ModernHud_MagicIcon_C_SetCanCast::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_MagicIcon_C_SetCanCast, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WBP_ModernHud_MagicIcon_C_SetCanCast::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_ModernHud_MagicIcon.WBP_ModernHud_MagicIcon_C.SetMagicTexture
// 0x0010 (0x0010 - 0x0000)
struct WBP_ModernHud_MagicIcon_C_SetMagicTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_MagicIcon_C_SetMagicTexture) == 0x000008, "Wrong alignment on WBP_ModernHud_MagicIcon_C_SetMagicTexture");
static_assert(sizeof(WBP_ModernHud_MagicIcon_C_SetMagicTexture) == 0x000010, "Wrong size on WBP_ModernHud_MagicIcon_C_SetMagicTexture");
static_assert(offsetof(WBP_ModernHud_MagicIcon_C_SetMagicTexture, InTexture) == 0x000000, "Member 'WBP_ModernHud_MagicIcon_C_SetMagicTexture::InTexture' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_MagicIcon_C_SetMagicTexture, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_ModernHud_MagicIcon_C_SetMagicTexture::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

