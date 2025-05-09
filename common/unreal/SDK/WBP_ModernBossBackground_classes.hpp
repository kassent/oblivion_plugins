﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernBossBackground

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernBossBackground.WBP_ModernBossBackground_C
// 0x0030 (0x0318 - 0x02E8)
class UWBP_ModernBossBackground_C final : public UCommonUserWidget
{
public:
	class UImage*                                 Image_118;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Left;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftFill;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Middle;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Right;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightFill;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernBossBackground_C">();
	}
	static class UWBP_ModernBossBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernBossBackground_C>();
	}
};
static_assert(alignof(UWBP_ModernBossBackground_C) == 0x000008, "Wrong alignment on UWBP_ModernBossBackground_C");
static_assert(sizeof(UWBP_ModernBossBackground_C) == 0x000318, "Wrong size on UWBP_ModernBossBackground_C");
static_assert(offsetof(UWBP_ModernBossBackground_C, Image_118) == 0x0002E8, "Member 'UWBP_ModernBossBackground_C::Image_118' has a wrong offset!");
static_assert(offsetof(UWBP_ModernBossBackground_C, Left) == 0x0002F0, "Member 'UWBP_ModernBossBackground_C::Left' has a wrong offset!");
static_assert(offsetof(UWBP_ModernBossBackground_C, LeftFill) == 0x0002F8, "Member 'UWBP_ModernBossBackground_C::LeftFill' has a wrong offset!");
static_assert(offsetof(UWBP_ModernBossBackground_C, Middle) == 0x000300, "Member 'UWBP_ModernBossBackground_C::Middle' has a wrong offset!");
static_assert(offsetof(UWBP_ModernBossBackground_C, Right) == 0x000308, "Member 'UWBP_ModernBossBackground_C::Right' has a wrong offset!");
static_assert(offsetof(UWBP_ModernBossBackground_C, RightFill) == 0x000310, "Member 'UWBP_ModernBossBackground_C::RightFill' has a wrong offset!");

}

