﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_BlockShield

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct TABP_BlockShield.TABP_BlockShield_C.AnimBlueprintGeneratedConstantData
// 0x01BF (0x01C0 - 0x0001)
struct TABP_BlockShield::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_123;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_124;                              // 0x0010(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_125;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_126;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_127;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_128;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_129;                              // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_130;                                // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_131;                              // 0x0070(0x0020)(BlueprintVisible, NoDestructor)
	int32                                         __IntProperty_132;                                 // 0x0090(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_133;                                // 0x0094(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_134;                               // 0x0098(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_135;                              // 0x009C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_136;                               // 0x00C8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_137;                                // 0x00CC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_138;                                // 0x00CD(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CE[0x2];                                       // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_139;                                // 0x00D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_140;                                 // 0x00D8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_141;                                // 0x00DC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_142;                                 // 0x00E4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_143;                                // 0x00E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_144;                                // 0x00F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_145;                              // 0x00F8(0x0020)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_146;                                // 0x0118(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0120(0x0080)()
	struct FAnimSubsystem                         AnimBlueprintExtension_NodeRelevancy;              // 0x01A0(0x0008)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x01A8(0x0018)()
};
static_assert(alignof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TABP_BlockShield::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData) == 0x0001C0, "Wrong size on TABP_BlockShield::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_123) == 0x000004, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_123' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __StructProperty_124) == 0x000010, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__StructProperty_124' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_125) == 0x000030, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_125' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __IntProperty_126) == 0x000038, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__IntProperty_126' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_127) == 0x00003C, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_127' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __IntProperty_128) == 0x000044, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__IntProperty_128' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __StructProperty_129) == 0x000048, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__StructProperty_129' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_130) == 0x000068, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_130' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __StructProperty_131) == 0x000070, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__StructProperty_131' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __IntProperty_132) == 0x000090, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__IntProperty_132' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __BoolProperty_133) == 0x000094, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__BoolProperty_133' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __FloatProperty_134) == 0x000098, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__FloatProperty_134' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __StructProperty_135) == 0x00009C, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__StructProperty_135' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __FloatProperty_136) == 0x0000C8, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__FloatProperty_136' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __BoolProperty_137) == 0x0000CC, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__BoolProperty_137' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __EnumProperty_138) == 0x0000CD, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__EnumProperty_138' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_139) == 0x0000D0, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_139' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __IntProperty_140) == 0x0000D8, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__IntProperty_140' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_141) == 0x0000DC, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_141' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __IntProperty_142) == 0x0000E4, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__IntProperty_142' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_143) == 0x0000E8, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_143' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x0000F0, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __StructProperty_145) == 0x0000F8, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__StructProperty_145' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, __ByteProperty_146) == 0x000118, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::__ByteProperty_146' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000120, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_NodeRelevancy) == 0x0001A0, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_NodeRelevancy' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001A8, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct TABP_BlockShield.TABP_BlockShield_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct TABP_BlockShield::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_BlockShield::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on TABP_BlockShield::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(TABP_BlockShield::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on TABP_BlockShield::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(TABP_BlockShield::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'TABP_BlockShield::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");

}

