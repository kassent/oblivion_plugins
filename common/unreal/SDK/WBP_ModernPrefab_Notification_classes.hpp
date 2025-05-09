﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernPrefab_Notification

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernPrefab_Notification.WBP_ModernPrefab_Notification_C
// 0x0078 (0x0360 - 0x02E8)
class UWBP_ModernPrefab_Notification_C final : public UVAltarNotificationBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVHUDSubtitleViewModel*                 VHUDSubtitleViewModel;                             // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NotificationAnimation;                             // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  hudsubtitle_notice;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               IconBackground;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               notif_bcg;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               notif_icon;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnimatableRetainerBox*                 NotificationEffect;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NotifIcon_Overlay;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShouldDisplayIcon;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              EnableNotification;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          BackgroundVisibility;                              // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A[0x6];                                      // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              DisableNotification;                               // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void CustomEvent();
	void Disable_Notification();
	void Enable_Notification();
	void ExecuteUbergraph_WBP_ModernPrefab_Notification(int32 EntryPoint);
	void OnNotificationSetActive(class UVAltarNotificationBaseWidget* NotificationWidget);
	void PreConstruct(bool IsDesignTime);
	void Set_Icon_Background_Visibility(bool IsVisible_0);
	void Update_Notification_Visibility(bool InVisibility);
	void UpdateNotification(const struct FLegacyNotificationProperties& New_Notification);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernPrefab_Notification_C">();
	}
	static class UWBP_ModernPrefab_Notification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernPrefab_Notification_C>();
	}
};
static_assert(alignof(UWBP_ModernPrefab_Notification_C) == 0x000008, "Wrong alignment on UWBP_ModernPrefab_Notification_C");
static_assert(sizeof(UWBP_ModernPrefab_Notification_C) == 0x000360, "Wrong size on UWBP_ModernPrefab_Notification_C");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ModernPrefab_Notification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, VHUDSubtitleViewModel) == 0x0002F0, "Member 'UWBP_ModernPrefab_Notification_C::VHUDSubtitleViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, NotificationAnimation) == 0x0002F8, "Member 'UWBP_ModernPrefab_Notification_C::NotificationAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, hudsubtitle_notice) == 0x000300, "Member 'UWBP_ModernPrefab_Notification_C::hudsubtitle_notice' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, IconBackground) == 0x000308, "Member 'UWBP_ModernPrefab_Notification_C::IconBackground' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, notif_bcg) == 0x000310, "Member 'UWBP_ModernPrefab_Notification_C::notif_bcg' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, notif_icon) == 0x000318, "Member 'UWBP_ModernPrefab_Notification_C::notif_icon' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, NotificationEffect) == 0x000320, "Member 'UWBP_ModernPrefab_Notification_C::NotificationEffect' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, NotifIcon_Overlay) == 0x000328, "Member 'UWBP_ModernPrefab_Notification_C::NotifIcon_Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, ShouldDisplayIcon) == 0x000330, "Member 'UWBP_ModernPrefab_Notification_C::ShouldDisplayIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, EnableNotification) == 0x000338, "Member 'UWBP_ModernPrefab_Notification_C::EnableNotification' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, BackgroundVisibility) == 0x000348, "Member 'UWBP_ModernPrefab_Notification_C::BackgroundVisibility' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, IsEnable) == 0x000349, "Member 'UWBP_ModernPrefab_Notification_C::IsEnable' has a wrong offset!");
static_assert(offsetof(UWBP_ModernPrefab_Notification_C, DisableNotification) == 0x000350, "Member 'UWBP_ModernPrefab_Notification_C::DisableNotification' has a wrong offset!");

}

