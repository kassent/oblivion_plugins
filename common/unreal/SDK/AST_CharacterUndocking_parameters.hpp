﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_CharacterUndocking

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function AST_CharacterUndocking.AST_CharacterUndocking_C.ExecuteUbergraph_AST_CharacterUndocking
// 0x0058 (0x0058 - 0x0000)
struct AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedCharacter*                      K2Node_DynamicCast_AsVPaired_Character;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetAnimTagsOverride_OutGameplayTag;       // 0x0034(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVPawnAnimatedAction*                   CallFunc_PlayAnimatedAction_Action;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStateMachinePlayAnimatedAction*        CallFunc_PlayAnimatedAction_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking) == 0x000008, "Wrong alignment on AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking");
static_assert(sizeof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking) == 0x000058, "Wrong size on AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, EntryPoint) == 0x000000, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::EntryPoint' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, K2Node_DynamicCast_AsVPaired_Character) == 0x000028, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::K2Node_DynamicCast_AsVPaired_Character' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, CallFunc_GetAnimTagsOverride_OutGameplayTag) == 0x000034, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::CallFunc_GetAnimTagsOverride_OutGameplayTag' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, CallFunc_PlayAnimatedAction_Action) == 0x000040, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::CallFunc_PlayAnimatedAction_Action' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, CallFunc_PlayAnimatedAction_ReturnValue) == 0x000048, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::CallFunc_PlayAnimatedAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'AST_CharacterUndocking_C_ExecuteUbergraph_AST_CharacterUndocking::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AST_CharacterUndocking.AST_CharacterUndocking_C.GetAnimTagsOverride
// 0x0038 (0x0038 - 0x0000)
struct AST_CharacterUndocking_C_GetAnimTagsOverride final
{
public:
	struct FGameplayTag                           OutGameplayTag;                                    // 0x0000(0x0008)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AVPairedCreature*                       CallFunc_GetHorse_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Select_Default;                             // 0x002C(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AST_CharacterUndocking_C_GetAnimTagsOverride) == 0x000008, "Wrong alignment on AST_CharacterUndocking_C_GetAnimTagsOverride");
static_assert(sizeof(AST_CharacterUndocking_C_GetAnimTagsOverride) == 0x000038, "Wrong size on AST_CharacterUndocking_C_GetAnimTagsOverride");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, OutGameplayTag) == 0x000000, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::OutGameplayTag' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, Temp_bool_Variable) == 0x000008, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, Temp_struct_Variable) == 0x00000C, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, Temp_struct_Variable_1) == 0x000014, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, CallFunc_GetHorse_ReturnValue) == 0x000020, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::CallFunc_GetHorse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AST_CharacterUndocking_C_GetAnimTagsOverride, K2Node_Select_Default) == 0x00002C, "Member 'AST_CharacterUndocking_C_GetAnimTagsOverride::K2Node_Select_Default' has a wrong offset!");

}

