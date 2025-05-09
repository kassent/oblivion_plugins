﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_InventoryCharacter

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_InventoryCharacter.ABP_InventoryCharacter_C.AnimBlueprintGeneratedConstantData
// 0x0167 (0x0168 - 0x0001)
struct ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_205;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_206;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_207;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_208;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_209;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_210;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_211;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_212;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_213;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_214;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_215;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_216;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_217;                                 // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_218;                                // 0x0058(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_219;                                  // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_220;                                // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_221;                                // 0x0069(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_222;                                // 0x006A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x1];                                       // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_223;                               // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_224;                              // 0x0070(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_225;                               // 0x009C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_226;                                // 0x00A0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_227;                                // 0x00A1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_228;                                // 0x00A2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_229;                                // 0x00A4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_230;                              // 0x00B0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00D0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0150(0x0018)()
};
static_assert(alignof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData) == 0x000168, "Wrong size on ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_205) == 0x000004, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_205' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_206) == 0x00000C, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_206' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_207) == 0x000014, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_207' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_208) == 0x000018, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_208' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_209) == 0x000020, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_209' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_210) == 0x000024, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_210' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_211) == 0x00002C, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_211' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_212) == 0x000030, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_212' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_213) == 0x000038, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_213' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_214) == 0x00003C, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_214' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_215) == 0x000044, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_215' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_216) == 0x000048, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_216' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __IntProperty_217) == 0x000050, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__IntProperty_217' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __BlendProfile_218) == 0x000058, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__BlendProfile_218' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __CurveFloat_219) == 0x000060, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__CurveFloat_219' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __EnumProperty_220) == 0x000068, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__EnumProperty_220' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __EnumProperty_221) == 0x000069, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__EnumProperty_221' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __BoolProperty_222) == 0x00006A, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__BoolProperty_222' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __FloatProperty_223) == 0x00006C, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__FloatProperty_223' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __StructProperty_224) == 0x000070, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__StructProperty_224' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __FloatProperty_225) == 0x00009C, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__FloatProperty_225' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __BoolProperty_226) == 0x0000A0, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__BoolProperty_226' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __EnumProperty_227) == 0x0000A1, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__EnumProperty_227' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __ByteProperty_228) == 0x0000A2, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__ByteProperty_228' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __NameProperty_229) == 0x0000A4, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__NameProperty_229' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, __StructProperty_230) == 0x0000B0, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::__StructProperty_230' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000D0, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000150, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_InventoryCharacter.ABP_InventoryCharacter_C.AnimBlueprintGeneratedMutableData
// 0x0037 (0x0038 - 0x0001)
struct ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty;                                   // 0x0008(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_0;                                  // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_1;                                 // 0x0020(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_2;                                  // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData) == 0x000038, "Wrong size on ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData, __ArrayProperty) == 0x000008, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData::__ArrayProperty' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000018, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData, __ArrayProperty_1) == 0x000020, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData::__ArrayProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000030, "Member 'ABP_InventoryCharacter::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");

}

