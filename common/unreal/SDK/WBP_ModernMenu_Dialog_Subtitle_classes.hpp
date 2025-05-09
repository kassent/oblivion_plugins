﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_Dialog_Subtitle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_Dialog_Subtitle.WBP_ModernMenu_Dialog_Subtitle_C
// 0x0018 (0x0300 - 0x02E8)
class UWBP_ModernMenu_Dialog_Subtitle_C final : public UCommonUserWidget
{
public:
	class UWidgetAnimation*                       SubtitleFadeInOut;                                 // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  dialog_name;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  dialog_subtitle;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_Dialog_Subtitle_C">();
	}
	static class UWBP_ModernMenu_Dialog_Subtitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_Dialog_Subtitle_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_Dialog_Subtitle_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_Dialog_Subtitle_C");
static_assert(sizeof(UWBP_ModernMenu_Dialog_Subtitle_C) == 0x000300, "Wrong size on UWBP_ModernMenu_Dialog_Subtitle_C");
static_assert(offsetof(UWBP_ModernMenu_Dialog_Subtitle_C, SubtitleFadeInOut) == 0x0002E8, "Member 'UWBP_ModernMenu_Dialog_Subtitle_C::SubtitleFadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_Subtitle_C, dialog_name) == 0x0002F0, "Member 'UWBP_ModernMenu_Dialog_Subtitle_C::dialog_name' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_Subtitle_C, dialog_subtitle) == 0x0002F8, "Member 'UWBP_ModernMenu_Dialog_Subtitle_C::dialog_subtitle' has a wrong offset!");

}

