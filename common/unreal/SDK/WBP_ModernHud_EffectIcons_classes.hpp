﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_EffectIcons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernHud_EffectIcons.WBP_ModernHud_EffectIcons_C
// 0x0020 (0x0308 - 0x02E8)
class UWBP_ModernHud_EffectIcons_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonListView*                        ActiveSpellListView;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Icons;                                             // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_ModernHud_EffectIcons(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update_Active_Effect_Icons(const TArray<class UTexture2D*>& InIcons);
	void Update_Active_Effects_Time_Left(const TArray<double>& InProgresses);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernHud_EffectIcons_C">();
	}
	static class UWBP_ModernHud_EffectIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernHud_EffectIcons_C>();
	}
};
static_assert(alignof(UWBP_ModernHud_EffectIcons_C) == 0x000008, "Wrong alignment on UWBP_ModernHud_EffectIcons_C");
static_assert(sizeof(UWBP_ModernHud_EffectIcons_C) == 0x000308, "Wrong size on UWBP_ModernHud_EffectIcons_C");
static_assert(offsetof(UWBP_ModernHud_EffectIcons_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ModernHud_EffectIcons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_EffectIcons_C, ActiveSpellListView) == 0x0002F0, "Member 'UWBP_ModernHud_EffectIcons_C::ActiveSpellListView' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_EffectIcons_C, Icons) == 0x0002F8, "Member 'UWBP_ModernHud_EffectIcons_C::Icons' has a wrong offset!");

}

