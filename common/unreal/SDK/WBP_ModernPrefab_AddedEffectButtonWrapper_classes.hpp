﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernPrefab_AddedEffectButtonWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernPrefab_AddedEffectButtonWrapper.WBP_ModernPrefab_AddedEffectButtonWrapper_C
// 0x0010 (0x04D8 - 0x04C8)
class UWBP_ModernPrefab_AddedEffectButtonWrapper_C final : public UVAltarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LegacyMenu_AddedEffects_C*         WBP_LegacyMenu_AddedEffects;                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ModernPrefab_AddedEffectButtonWrapper(int32 EntryPoint);
	void GetHoldedButton(class UWBP_LegacyMenu_AddedEffects_C** WBP_LegacyMenu_AddedEffects_0);
	void OnFocus();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernPrefab_AddedEffectButtonWrapper_C">();
	}
	static class UWBP_ModernPrefab_AddedEffectButtonWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernPrefab_AddedEffectButtonWrapper_C>();
	}
};
static_assert(alignof(UWBP_ModernPrefab_AddedEffectButtonWrapper_C) == 0x000008, "Wrong alignment on UWBP_ModernPrefab_AddedEffectButtonWrapper_C");
static_assert(sizeof(UWBP_ModernPrefab_AddedEffectButtonWrapper_C) == 0x0004D8, "Wrong size on UWBP_ModernPrefab_AddedEffectButtonWrapper_C");
static_assert(offsetof(UWBP_ModernPrefab_AddedEffectButtonWrapper_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_ModernPrefab_AddedEffectButtonWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_AddedEffectButtonWrapper_C, WBP_LegacyMenu_AddedEffects) == 0x0004D0, "Member 'UWBP_ModernPrefab_AddedEffectButtonWrapper_C::WBP_LegacyMenu_AddedEffects' has a wrong offset!");

}

