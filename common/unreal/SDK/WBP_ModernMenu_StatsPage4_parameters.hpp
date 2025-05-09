﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_StatsPage4

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernMenu_StatsPage4.WBP_ModernMenu_StatsPage4_C.BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature final
{
public:
	class UObject*                                HoveredItem;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature");
static_assert(sizeof(WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature, HoveredItem) == 0x000000, "Member 'WBP_ModernMenu_StatsPage4_C_BndEvt__WBP_ModernMenu_StatsPage4_stat_p4_factions_listview_K2Node_ComponentBoundEvent_0_OnItemHovered__DelegateSignature::HoveredItem' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage4.WBP_ModernMenu_StatsPage4_C.ExecuteUbergraph_WBP_ModernMenu_StatsPage4
// 0x0030 (0x0030 - 0x0000)
struct WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVUINavigationGlobalSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVEnhancedInputNavigable> CallFunc_NavigateToWidget_Widget_CastInput;     // 0x0010(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                K2Node_ComponentBoundEvent_HoveredItem;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4");
static_assert(sizeof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4) == 0x000030, "Wrong size on WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4, EntryPoint) == 0x000000, "Member 'WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4, CallFunc_NavigateToWidget_Widget_CastInput) == 0x000010, "Member 'WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4::CallFunc_NavigateToWidget_Widget_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4, K2Node_ComponentBoundEvent_HoveredItem) == 0x000020, "Member 'WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4::K2Node_ComponentBoundEvent_HoveredItem' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_ModernMenu_StatsPage4_C_ExecuteUbergraph_WBP_ModernMenu_StatsPage4::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage4.WBP_ModernMenu_StatsPage4_C.UpdateFactions
// 0x0080 (0x0080 - 0x0000)
struct WBP_ModernMenu_StatsPage4_C_UpdateFactions final
{
public:
	TArray<struct FLegacyStatsMenuFactionProperties> NewFactions;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWBP_LegacyMenu_StatsFactionEntry_C*    NewLocalVar;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVLegacyStatsMenuFaction*               Local_CurrentFactionWidget;                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLegacyStatsMenuFactionProperties      Local_CurrentFaction;                              // 0x0020(0x0058)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage4_C_UpdateFactions) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage4_C_UpdateFactions");
static_assert(sizeof(WBP_ModernMenu_StatsPage4_C_UpdateFactions) == 0x000080, "Wrong size on WBP_ModernMenu_StatsPage4_C_UpdateFactions");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_UpdateFactions, NewFactions) == 0x000000, "Member 'WBP_ModernMenu_StatsPage4_C_UpdateFactions::NewFactions' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_UpdateFactions, NewLocalVar) == 0x000010, "Member 'WBP_ModernMenu_StatsPage4_C_UpdateFactions::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_UpdateFactions, Local_CurrentFactionWidget) == 0x000018, "Member 'WBP_ModernMenu_StatsPage4_C_UpdateFactions::Local_CurrentFactionWidget' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_UpdateFactions, Local_CurrentFaction) == 0x000020, "Member 'WBP_ModernMenu_StatsPage4_C_UpdateFactions::Local_CurrentFaction' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_UpdateFactions, CallFunc_IsActivated_ReturnValue) == 0x000078, "Member 'WBP_ModernMenu_StatsPage4_C_UpdateFactions::CallFunc_IsActivated_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsPage4.WBP_ModernMenu_StatsPage4_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_ModernMenu_StatsPage4_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

