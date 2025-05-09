﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_Reticle

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernHud_Reticle.WBP_ModernHud_Reticle_C
// 0x0040 (0x05F8 - 0x05B8)
class UWBP_ModernHud_Reticle_C final : public UVModernHudReticle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVHUDReticleViewModel*                  VHUDReticleViewModel;                              // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernHud_CrosshairSneakEye_C*     WBP_ModernHud_CrosshairV2;                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           StealingColor;                                     // 0x05D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAimingCrosshairDrawing;                         // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SneakLevel;                                        // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E2[0x2];                                      // 0x05E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           NormalColor;                                       // 0x05E4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ModernHud_Reticle(int32 EntryPoint);
	void InitCrosshair();
	void On_Toggle_HUD_Visibility(bool bInIsVisible);
	void OnAimingCrosshairTriggered(bool IsDrawing);
	void OnHit(const struct FPairedOblivionHitEvent& NewHit);
	void SetActivateTexture(ELegacyHudReticleIcon Icon);
	void SetIsStealingColour(bool IsStealing);
	void UpdateCrosshairTexture(const class AVWeapon* WeaponActor);
	void UpdateIsStealing(bool NewParam);
	void UpdateReticleIcon(ELegacyHudReticleIcon NewParam);
	void UpdateSneakingProperties(bool NewParam);
	void UpdateSneakLevel(double InSneakLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernHud_Reticle_C">();
	}
	static class UWBP_ModernHud_Reticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernHud_Reticle_C>();
	}
};
static_assert(alignof(UWBP_ModernHud_Reticle_C) == 0x000008, "Wrong alignment on UWBP_ModernHud_Reticle_C");
static_assert(sizeof(UWBP_ModernHud_Reticle_C) == 0x0005F8, "Wrong size on UWBP_ModernHud_Reticle_C");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_ModernHud_Reticle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, VHUDReticleViewModel) == 0x0005C0, "Member 'UWBP_ModernHud_Reticle_C::VHUDReticleViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, WBP_ModernHud_CrosshairV2) == 0x0005C8, "Member 'UWBP_ModernHud_Reticle_C::WBP_ModernHud_CrosshairV2' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, StealingColor) == 0x0005D0, "Member 'UWBP_ModernHud_Reticle_C::StealingColor' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, bIsAimingCrosshairDrawing) == 0x0005E0, "Member 'UWBP_ModernHud_Reticle_C::bIsAimingCrosshairDrawing' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, SneakLevel) == 0x0005E1, "Member 'UWBP_ModernHud_Reticle_C::SneakLevel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Reticle_C, NormalColor) == 0x0005E4, "Member 'UWBP_ModernHud_Reticle_C::NormalColor' has a wrong offset!");

}

