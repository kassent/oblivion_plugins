﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_EnhancedLocomotionInAir

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct TABP_EnhancedLocomotionInAir.TABP_EnhancedLocomotionInAir_C.AnimBlueprintGeneratedConstantData
// 0x0187 (0x0188 - 0x0001)
struct TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_277;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_278;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_279;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_280;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_281;                                  // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_282;                                // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_283;                                // 0x0029(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_284;                               // 0x0030(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_285;                                // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_286;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_287;                                 // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_288;                                // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_289;                                 // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_290;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_291;                                 // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_292;                               // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_293;                              // 0x0070(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_294;                               // 0x009C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_295;                                // 0x00A0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_296;                                // 0x00A1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_297;                                // 0x00A4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_298;                                // 0x00AC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_299;                                 // 0x00B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_300;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_301;                                // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_302;                              // 0x00C8(0x0020)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_303;                                // 0x00E8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0170(0x0018)()
};
static_assert(alignof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData) == 0x000188, "Wrong size on TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_277) == 0x000004, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_277' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_278) == 0x00000C, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_278' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __IntProperty_279) == 0x000014, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__IntProperty_279' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __BlendProfile_280) == 0x000018, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__BlendProfile_280' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __CurveFloat_281) == 0x000020, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__CurveFloat_281' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __EnumProperty_282) == 0x000028, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__EnumProperty_282' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __EnumProperty_283) == 0x000029, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__EnumProperty_283' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __ArrayProperty_284) == 0x000030, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__ArrayProperty_284' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_285) == 0x000040, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_285' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_286) == 0x000048, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_286' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __IntProperty_287) == 0x000050, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__IntProperty_287' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_288) == 0x000054, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_288' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __IntProperty_289) == 0x00005C, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__IntProperty_289' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_290) == 0x000060, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_290' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __IntProperty_291) == 0x000068, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__IntProperty_291' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __FloatProperty_292) == 0x00006C, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__FloatProperty_292' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __StructProperty_293) == 0x000070, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__StructProperty_293' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __FloatProperty_294) == 0x00009C, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__FloatProperty_294' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __BoolProperty_295) == 0x0000A0, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__BoolProperty_295' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __EnumProperty_296) == 0x0000A1, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__EnumProperty_296' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_297) == 0x0000A4, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_297' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_298) == 0x0000AC, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_298' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __IntProperty_299) == 0x0000B4, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__IntProperty_299' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_300) == 0x0000B8, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_300' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __NameProperty_301) == 0x0000C0, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__NameProperty_301' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __StructProperty_302) == 0x0000C8, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__StructProperty_302' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, __ByteProperty_303) == 0x0000E8, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::__ByteProperty_303' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F0, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000170, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct TABP_EnhancedLocomotionInAir.TABP_EnhancedLocomotionInAir_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'TABP_EnhancedLocomotionInAir::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

