﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_StatsPage1_Details

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "Altar_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_StatsPage1_Details.WBP_ModernMenu_StatsPage1_Details_C
// 0x00B0 (0x0578 - 0x04C8)
class UWBP_ModernMenu_StatsPage1_Details_C final : public UVAltarWidget
{
public:
	class UWidgetAnimation*                       TooltipFadeinOut;                                  // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               DetailsPanel;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarRichTextBlock_C*              stat_detailsp1_description;                        // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernHud_EffectIcons_C*           stat_detailsp1_effecticons;                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               stat_detailsp1_icon;                               // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               stat_detailsp1_levelup_overlay;                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  stat_detailsp1_levelup_text;                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  stat_detailsp1_title;                              // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimatableRetainerBox*                 TooltipEffect;                                     // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               WBP_OriginalImageTile;                             // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDisplayed;                                       // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ELegacyStatsMenuPage1Items, struct FSlateBrush> IconMapPage1;                               // 0x0520(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ELegacyStatsMenuPage1Items                    CurrentItemType;                                   // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimateTooltip(bool In_Is_Visible, bool Instant);
	void FinishAnimation();
	void Set_Visibility(bool InIsDisplayed, bool InIsActive);
	void SetContent(const struct FLegacyStatsMenuPopupContent& Content);
	void SetModernContent(ELegacyStatsMenuPage1Items ItemType, const class FText& TitleText, bool LevelUpOverlayIsVisible);
	void UpdateActiveEffectsIcon(TArray<class UTexture2D*>& EffectsIcon);
	void UpdateActiveEffectsTimeLeft(TArray<double>& EffectsTimeLeft);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_StatsPage1_Details_C">();
	}
	static class UWBP_ModernMenu_StatsPage1_Details_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_StatsPage1_Details_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_StatsPage1_Details_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_StatsPage1_Details_C");
static_assert(sizeof(UWBP_ModernMenu_StatsPage1_Details_C) == 0x000578, "Wrong size on UWBP_ModernMenu_StatsPage1_Details_C");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, TooltipFadeinOut) == 0x0004C8, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::TooltipFadeinOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, DetailsPanel) == 0x0004D0, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::DetailsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_description) == 0x0004D8, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_description' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_effecticons) == 0x0004E0, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_effecticons' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_icon) == 0x0004E8, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_icon' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_levelup_overlay) == 0x0004F0, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_levelup_overlay' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_levelup_text) == 0x0004F8, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_levelup_text' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, stat_detailsp1_title) == 0x000500, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::stat_detailsp1_title' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, TooltipEffect) == 0x000508, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::TooltipEffect' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, WBP_OriginalImageTile) == 0x000510, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::WBP_OriginalImageTile' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, IsDisplayed) == 0x000518, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::IsDisplayed' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, IconMapPage1) == 0x000520, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::IconMapPage1' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_StatsPage1_Details_C, CurrentItemType) == 0x000570, "Member 'UWBP_ModernMenu_StatsPage1_Details_C::CurrentItemType' has a wrong offset!");

}

