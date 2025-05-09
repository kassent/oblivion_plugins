﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterActionDrawWeapon

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.ExecuteUbergraph_AST_CharacterActionDrawWeapon
// 0x0098 (0x0098 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPawnAnimatedAction*                   CallFunc_PlayAnimatedAction_Action;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStateMachinePlayAnimatedAction*        CallFunc_PlayAnimatedAction_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWeaponDrawn_ReturnValue;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPawnAnimatedAction*                   CallFunc_PlayAnimatedAction_Action_1;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStateMachinePlayAnimatedAction*        CallFunc_PlayAnimatedAction_ReturnValue_1;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTESObjectWEAP*                         CallFunc_GetEquippedWeaponForm_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVWeapon*                               CallFunc_GetEquippedWeaponActor_ReturnValue;       // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon) == 0x000008, "Wrong alignment on AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon) == 0x000098, "Wrong size on AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, EntryPoint) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_PlayAnimatedAction_Action) == 0x000028, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_PlayAnimatedAction_Action' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_PlayAnimatedAction_ReturnValue) == 0x000030, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_PlayAnimatedAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, K2Node_CreateDelegate_OutputDelegate_3) == 0x00004C, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_IsWeaponDrawn_ReturnValue) == 0x00005C, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_IsWeaponDrawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00005D, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_PlayAnimatedAction_Action_1) == 0x000060, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_PlayAnimatedAction_Action_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_PlayAnimatedAction_ReturnValue_1) == 0x000068, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_PlayAnimatedAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, K2Node_Event_DeltaTime) == 0x000074, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000078, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_GetEquippedWeaponForm_ReturnValue) == 0x000080, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_GetEquippedWeaponForm_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_GetEquippedWeaponActor_ReturnValue) == 0x000088, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_GetEquippedWeaponActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000090, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000091, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_BooleanOR_ReturnValue) == 0x000092, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_BooleanAND_ReturnValue) == 0x000093, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon, CallFunc_BooleanAND_ReturnValue_1) == 0x000094, "Member 'AST_CharacterActionDrawWeapon_C_ExecuteUbergraph_AST_CharacterActionDrawWeapon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.GetStateDuration
// 0x0030 (0x0030 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_GetStateDuration final
{
public:
	double                                        StateDuration;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTESObjectWEAP*                         CallFunc_GetEquippedWeaponForm_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_GetStateDuration) == 0x000008, "Wrong alignment on AST_CharacterActionDrawWeapon_C_GetStateDuration");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_GetStateDuration) == 0x000030, "Wrong size on AST_CharacterActionDrawWeapon_C_GetStateDuration");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, StateDuration) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::StateDuration' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, CallFunc_GetEquippedWeaponForm_ReturnValue) == 0x000008, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::CallFunc_GetEquippedWeaponForm_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_GetStateDuration, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'AST_CharacterActionDrawWeapon_C_GetStateDuration::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.OnDrawSheathAnimatedActionEvent
// 0x0018 (0x0018 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent final
{
public:
	struct FGameplayTag                           Event_Tag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UAnimNotifyActionEventInfo*             Anim_Notify_Action_Event_Info;                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent) == 0x000008, "Wrong alignment on AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent) == 0x000018, "Wrong size on AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent, Event_Tag) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent::Event_Tag' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent, Anim_Notify_Action_Event_Info) == 0x000008, "Member 'AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent::Anim_Notify_Action_Event_Info' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000010, "Member 'AST_CharacterActionDrawWeapon_C_OnDrawSheathAnimatedActionEvent::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.OnStateUpdate
// 0x0004 (0x0004 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_OnStateUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_OnStateUpdate) == 0x000004, "Wrong alignment on AST_CharacterActionDrawWeapon_C_OnStateUpdate");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_OnStateUpdate) == 0x000004, "Wrong size on AST_CharacterActionDrawWeapon_C_OnStateUpdate");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_OnStateUpdate, DeltaTime) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_OnStateUpdate::DeltaTime' has a wrong offset!");

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.RefreshPawnAnimationMoveset
// 0x0018 (0x0018 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset final
{
public:
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVMainCharacterAnimInstance*            K2Node_DynamicCast_AsVMain_Character_Anim_Instance; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset) == 0x000008, "Wrong alignment on AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset) == 0x000018, "Wrong size on AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset, CallFunc_GetAnimInstance_ReturnValue) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset, K2Node_DynamicCast_AsVMain_Character_Anim_Instance) == 0x000008, "Member 'AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset::K2Node_DynamicCast_AsVMain_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AST_CharacterActionDrawWeapon_C_RefreshPawnAnimationMoveset::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AST_CharacterActionDrawWeapon.AST_CharacterActionDrawWeapon_C.RegisterToActionEvents
// 0x0018 (0x0018 - 0x0000)
struct AST_CharacterActionDrawWeapon_C_RegisterToActionEvents final
{
public:
	class UVPawnAnimatedAction*                   Animated_Action;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& EventTag, const class UAnimNotifyActionEventInfo* EventSource)> K2Node_CreateDelegate_OutputDelegate; // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterActionDrawWeapon_C_RegisterToActionEvents) == 0x000008, "Wrong alignment on AST_CharacterActionDrawWeapon_C_RegisterToActionEvents");
static_assert(sizeof(AST_CharacterActionDrawWeapon_C_RegisterToActionEvents) == 0x000018, "Wrong size on AST_CharacterActionDrawWeapon_C_RegisterToActionEvents");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_RegisterToActionEvents, Animated_Action) == 0x000000, "Member 'AST_CharacterActionDrawWeapon_C_RegisterToActionEvents::Animated_Action' has a wrong offset!");
static_assert(offsetof(AST_CharacterActionDrawWeapon_C_RegisterToActionEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AST_CharacterActionDrawWeapon_C_RegisterToActionEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

