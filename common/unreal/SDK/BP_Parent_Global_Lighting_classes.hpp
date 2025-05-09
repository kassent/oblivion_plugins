﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Parent_Global_Lighting

#include "Basic.hpp"

#include "BPE_GlobalLighting_Modes_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Parent_Global_Lighting.BP_Parent_Global_Lighting_C
// 0x0180 (0x0448 - 0x02C8)
class ABP_Parent_Global_Lighting_C : public AVGlobalLighting
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Volumetric_GlobalFog;                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Fog_Volume;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PP_Volume;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExponentialHeightFogComponent*         ExponentialHeightFog;                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Locally;                                       // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PP_Unbound;                                        // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_DirectionalLight;                              // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_GlobalLighting_Modes                     GlobalLighitng_Mode;                               // 0x0313(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Fog_Volume_Scale;                                  // 0x0318(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PP_Volume_Scale;                                   // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Blend_Radius;                                      // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Scene_Color_Tint_Day;                              // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Scene_Color_Tint_Night;                            // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Scene_Color_Tint_Sunset;                           // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Scene_Color_Tint_Sunrise;                          // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Diffuse_Color_Boost_Day;                           // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Diffuse_Color_Boost_Night;                         // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunset;                                            // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunrise;                                           // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shadow_Contrast_Scale_Day;                         // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shadow_Contrast_Scale_Night;                       // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunrise_Transition;                                // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunset_Transition;                                 // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation_Vertical;                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation_Horizontal;                               // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor_Day;                                    // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor_Night;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor_Sunset;                                 // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor_Sunrise;                                // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity_Day;                                // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity_Night;                              // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TOD_Color_Mask;                                    // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TOD_Intensity_Mask;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sunset_Mask;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sunrise_Mask;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Night;                                          // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Day;                                            // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_422[0x2];                                      // 0x0422(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Light_Color_TOD;                                   // 0x0424(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExterior;                                        // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_435[0x3];                                      // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DefaultSkylightIntensityCurve;                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            TimeOfDaySkylightIntensityCurve;                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Parent_Global_Lighting(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Set_Day();
	void Set_Night();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Parent_Global_Lighting_C">();
	}
	static class ABP_Parent_Global_Lighting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Parent_Global_Lighting_C>();
	}
};
static_assert(alignof(ABP_Parent_Global_Lighting_C) == 0x000008, "Wrong alignment on ABP_Parent_Global_Lighting_C");
static_assert(sizeof(ABP_Parent_Global_Lighting_C) == 0x000448, "Wrong size on ABP_Parent_Global_Lighting_C");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_Parent_Global_Lighting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, DirectionalLight) == 0x0002D0, "Member 'ABP_Parent_Global_Lighting_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, BP_Volumetric_GlobalFog) == 0x0002D8, "Member 'ABP_Parent_Global_Lighting_C::BP_Volumetric_GlobalFog' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Fog_Volume) == 0x0002E0, "Member 'ABP_Parent_Global_Lighting_C::Fog_Volume' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, PostProcess) == 0x0002E8, "Member 'ABP_Parent_Global_Lighting_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, PP_Volume) == 0x0002F0, "Member 'ABP_Parent_Global_Lighting_C::PP_Volume' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, SkyLight) == 0x0002F8, "Member 'ABP_Parent_Global_Lighting_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, ExponentialHeightFog) == 0x000300, "Member 'ABP_Parent_Global_Lighting_C::ExponentialHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_Parent_Global_Lighting_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Use_Locally) == 0x000310, "Member 'ABP_Parent_Global_Lighting_C::Use_Locally' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, PP_Unbound) == 0x000311, "Member 'ABP_Parent_Global_Lighting_C::PP_Unbound' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Use_DirectionalLight) == 0x000312, "Member 'ABP_Parent_Global_Lighting_C::Use_DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, GlobalLighitng_Mode) == 0x000313, "Member 'ABP_Parent_Global_Lighting_C::GlobalLighitng_Mode' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Fog_Volume_Scale) == 0x000318, "Member 'ABP_Parent_Global_Lighting_C::Fog_Volume_Scale' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, PP_Volume_Scale) == 0x000330, "Member 'ABP_Parent_Global_Lighting_C::PP_Volume_Scale' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Blend_Radius) == 0x000348, "Member 'ABP_Parent_Global_Lighting_C::Blend_Radius' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Priority) == 0x00034C, "Member 'ABP_Parent_Global_Lighting_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Scene_Color_Tint_Day) == 0x000350, "Member 'ABP_Parent_Global_Lighting_C::Scene_Color_Tint_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Scene_Color_Tint_Night) == 0x000360, "Member 'ABP_Parent_Global_Lighting_C::Scene_Color_Tint_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Scene_Color_Tint_Sunset) == 0x000370, "Member 'ABP_Parent_Global_Lighting_C::Scene_Color_Tint_Sunset' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Scene_Color_Tint_Sunrise) == 0x000380, "Member 'ABP_Parent_Global_Lighting_C::Scene_Color_Tint_Sunrise' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Diffuse_Color_Boost_Day) == 0x000390, "Member 'ABP_Parent_Global_Lighting_C::Diffuse_Color_Boost_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Diffuse_Color_Boost_Night) == 0x000394, "Member 'ABP_Parent_Global_Lighting_C::Diffuse_Color_Boost_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunset) == 0x000398, "Member 'ABP_Parent_Global_Lighting_C::Sunset' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunrise) == 0x00039C, "Member 'ABP_Parent_Global_Lighting_C::Sunrise' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Shadow_Contrast_Scale_Day) == 0x0003A0, "Member 'ABP_Parent_Global_Lighting_C::Shadow_Contrast_Scale_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Shadow_Contrast_Scale_Night) == 0x0003A4, "Member 'ABP_Parent_Global_Lighting_C::Shadow_Contrast_Scale_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunrise_Transition) == 0x0003A8, "Member 'ABP_Parent_Global_Lighting_C::Sunrise_Transition' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunset_Transition) == 0x0003AC, "Member 'ABP_Parent_Global_Lighting_C::Sunset_Transition' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Rotation_Vertical) == 0x0003B0, "Member 'ABP_Parent_Global_Lighting_C::Rotation_Vertical' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Rotation_Horizontal) == 0x0003B4, "Member 'ABP_Parent_Global_Lighting_C::Rotation_Horizontal' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightColor_Day) == 0x0003B8, "Member 'ABP_Parent_Global_Lighting_C::LightColor_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightColor_Night) == 0x0003C8, "Member 'ABP_Parent_Global_Lighting_C::LightColor_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightColor_Sunset) == 0x0003D8, "Member 'ABP_Parent_Global_Lighting_C::LightColor_Sunset' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightColor_Sunrise) == 0x0003E8, "Member 'ABP_Parent_Global_Lighting_C::LightColor_Sunrise' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightIntensity_Day) == 0x0003F8, "Member 'ABP_Parent_Global_Lighting_C::LightIntensity_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, LightIntensity_Night) == 0x0003FC, "Member 'ABP_Parent_Global_Lighting_C::LightIntensity_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, TOD_Color_Mask) == 0x000400, "Member 'ABP_Parent_Global_Lighting_C::TOD_Color_Mask' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, TOD_Intensity_Mask) == 0x000408, "Member 'ABP_Parent_Global_Lighting_C::TOD_Intensity_Mask' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunset_Mask) == 0x000410, "Member 'ABP_Parent_Global_Lighting_C::Sunset_Mask' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Sunrise_Mask) == 0x000418, "Member 'ABP_Parent_Global_Lighting_C::Sunrise_Mask' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Is_Night) == 0x000420, "Member 'ABP_Parent_Global_Lighting_C::Is_Night' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Is_Day) == 0x000421, "Member 'ABP_Parent_Global_Lighting_C::Is_Day' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, Light_Color_TOD) == 0x000424, "Member 'ABP_Parent_Global_Lighting_C::Light_Color_TOD' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, IsExterior) == 0x000434, "Member 'ABP_Parent_Global_Lighting_C::IsExterior' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, DefaultSkylightIntensityCurve) == 0x000438, "Member 'ABP_Parent_Global_Lighting_C::DefaultSkylightIntensityCurve' has a wrong offset!");
static_assert(offsetof(ABP_Parent_Global_Lighting_C, TimeOfDaySkylightIntensityCurve) == 0x000440, "Member 'ABP_Parent_Global_Lighting_C::TimeOfDaySkylightIntensityCurve' has a wrong offset!");

}

