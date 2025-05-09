﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryItemSpecificContentWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OriginalMenu_InventoryItemSpecificContentWeapon.WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C
// 0x0070 (0x0358 - 0x02E8)
class UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVItemDetailsViewModel*                 VItemDetailsViewModel;                             // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_LegacyMenu_Added_Effects_List_C*   inv_weapon_addedEffects;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  inv_weapon_charges;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernHud_StatusBar_C*             inv_weapon_charges_bar;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalMenu_InventoryEffectsTitle_C* inv_weapon_effectsTitle;                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  inv_weapon_uses;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ChargeText;                                        // 0x0320(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UsedText;                                          // 0x0338(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ScrollEffectsSpeed;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_OriginalMenu_InventoryItemSpecificContentWeapon(int32 EntryPoint);
	void InpActEvt_IA_UI_Specific_InventoryContainerMenu_ScrollEffects_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void UpdateBar();
	void UpdateCharge(int32 NewCharge);
	void UpdateChargeAndMaxChargeText();
	void UpdateMaxCharge(int32 NewMaxCharge);
	void UpdateUse(int32 NewUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OriginalMenu_InventoryItemSpecificContentWeapon_C">();
	}
	static class UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C>();
	}
};
static_assert(alignof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C) == 0x000008, "Wrong alignment on UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C");
static_assert(sizeof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C) == 0x000358, "Wrong size on UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, VItemDetailsViewModel) == 0x0002F0, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::VItemDetailsViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, inv_weapon_addedEffects) == 0x0002F8, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::inv_weapon_addedEffects' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, inv_weapon_charges) == 0x000300, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::inv_weapon_charges' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, inv_weapon_charges_bar) == 0x000308, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::inv_weapon_charges_bar' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, inv_weapon_effectsTitle) == 0x000310, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::inv_weapon_effectsTitle' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, inv_weapon_uses) == 0x000318, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::inv_weapon_uses' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, ChargeText) == 0x000320, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::ChargeText' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, UsedText) == 0x000338, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::UsedText' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C, ScrollEffectsSpeed) == 0x000350, "Member 'UWBP_OriginalMenu_InventoryItemSpecificContentWeapon_C::ScrollEffectsSpeed' has a wrong offset!");

}

