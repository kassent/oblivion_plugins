﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_Health

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernHud_Health.WBP_ModernHud_Health_C
// 0x0018 (0x0300 - 0x02E8)
class UWBP_ModernHud_Health_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVHUDMainViewModel*                     VHUDMainViewModel;                                 // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernHud_StatusBar_C*             HealthBar;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void EventOnIsHealthBarBlinkingUpdated(bool NewValue);
	void ExecuteUbergraph_WBP_ModernHud_Health(int32 EntryPoint);
	void UpdateHealth(double NewProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernHud_Health_C">();
	}
	static class UWBP_ModernHud_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernHud_Health_C>();
	}
};
static_assert(alignof(UWBP_ModernHud_Health_C) == 0x000008, "Wrong alignment on UWBP_ModernHud_Health_C");
static_assert(sizeof(UWBP_ModernHud_Health_C) == 0x000300, "Wrong size on UWBP_ModernHud_Health_C");
static_assert(offsetof(UWBP_ModernHud_Health_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ModernHud_Health_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Health_C, VHUDMainViewModel) == 0x0002F0, "Member 'UWBP_ModernHud_Health_C::VHUDMainViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_Health_C, HealthBar) == 0x0002F8, "Member 'UWBP_ModernHud_Health_C::HealthBar' has a wrong offset!");

}

