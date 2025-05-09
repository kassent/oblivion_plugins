﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeatherControl

#include "Basic.hpp"

#include "ENiagara_WeatherState_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeatherControl.BP_WeatherControl_C
// 0x01D8 (0x0470 - 0x0298)
class ABP_WeatherControl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Spore_Niagara_VFX;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CameraCollision;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Oblivion_Niagara_VFX;                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Thunder_Niagara_VFX;                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Snow_Niagara_VFX;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Rain_Niagara_VFX;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         WindVariation_WindRotation_0554DA7B43A404AEE02CFE85FD4C7D7C; // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindVariation_WindVariation_0554DA7B43A404AEE02CFE85FD4C7D7C; // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WindVariation__Direction_0554DA7B43A404AEE02CFE85FD4C7D7C; // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WindVariation;                                     // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_RampUp_05E978AB495132FEC8042AB966C63C00;  // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_05E978AB495132FEC8042AB966C63C00; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FD[0x3];                                      // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Rain_Niagara_System;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Snow_Niagara_System;                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Thunderstorm_Niagara_System;                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              Rain_PP_Material;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              Snow_PP_Material;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Current_TOD_Value;                                 // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Wind_Direction;                                    // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Wind_Intensity;                                    // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Rain_Intensity;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Snow_Intensity;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Thunderstorm_Intensity;                            // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Combined_Rain_Intensity;                           // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          Something_Changed;                                 // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Previous_Rain_Intensity;                           // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rain_Value_Changed;                                // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Previous_Snow_Intensity;                           // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Snow_Value_Changed;                                // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Previous_Thunderstorm_Intensity;                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Thunderstorm_Value_Changed;                        // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Oblivion_Intensity;                                // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Previous_Oblivion_Intensity;                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Oblivion_Value_Changed;                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         Oblivion_Niagara_System;                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Rain_Niagara_is_Valid;                             // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Snow_Niagara_is_Valid;                             // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Thunderstorm_Niagara_is_Valid;                     // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Oblivion_Niagara_is_Valid;                         // 0x03D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Previous_Spore_Intensity;                          // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spore_Value_Changed;                               // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENiagara_WeatherState                         Previous_Weather_State;                            // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Weather_State_Changed;                             // 0x03E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rain_PP_Is_Active;                                 // 0x03E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Snow_PP_Is_Active;                                 // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5[0x3];                                      // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spore_Intensity;                                   // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	ENiagara_WeatherState                         Weather_State;                                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(ENiagara_WeatherState Weather, double Value)> Update_Weather;      // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AWindDirectionalSource*                 WindDirectionalSource;                             // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CameraComponent;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 Current_Level;                                     // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UDataTable*                             LevelArray;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_Wind_Direction;                             // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_Rain_Intensity;                             // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_432[0x6];                                      // 0x0432(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Override_Wind_Direction;                           // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Override_Wind_Intensity;                           // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_Wind_Intensity;                             // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Level_Override;                                    // 0x0449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44A[0x6];                                      // 0x044A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Wind_Time;                                         // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Lightning_Strike_Audio_Event;                      // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Spore_Niagara_is_Valid;                            // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         Spore_Niagara_System;                              // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Deactivate_PostProcess_Material(ENiagara_WeatherState Weather, double Weather_Intensity);
	void Deactivate_Weather_Niagara_System(double Weather_Value, class UNiagaraComponent* System, bool Condition);
	void Check_If_Weather_Value_Changed();
	void ExecuteUbergraph_BP_WeatherControl(int32 EntryPoint);
	void ForceUpdateWeather();
	void OnBeginOverlapWater(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlapWater(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
	void ReceiveTick(float DeltaSeconds);
	void Tick_End();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Update_Oblivion();
	void Update_Rain();
	void Update_Snow();
	void Update_Spore();
	void Update_Thunderstorm();
	void UserConstructionScript();
	void WindVariation__FinishedFunc();
	void WindVariation__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeatherControl_C">();
	}
	static class ABP_WeatherControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeatherControl_C>();
	}
};
static_assert(alignof(ABP_WeatherControl_C) == 0x000008, "Wrong alignment on ABP_WeatherControl_C");
static_assert(sizeof(ABP_WeatherControl_C) == 0x000470, "Wrong size on ABP_WeatherControl_C");
static_assert(offsetof(ABP_WeatherControl_C, UberGraphFrame) == 0x000298, "Member 'ABP_WeatherControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Spore_Niagara_VFX) == 0x0002A0, "Member 'ABP_WeatherControl_C::Spore_Niagara_VFX' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, CameraCollision) == 0x0002A8, "Member 'ABP_WeatherControl_C::CameraCollision' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Oblivion_Niagara_VFX) == 0x0002B0, "Member 'ABP_WeatherControl_C::Oblivion_Niagara_VFX' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Thunder_Niagara_VFX) == 0x0002B8, "Member 'ABP_WeatherControl_C::Thunder_Niagara_VFX' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_Niagara_VFX) == 0x0002C0, "Member 'ABP_WeatherControl_C::Snow_Niagara_VFX' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_Niagara_VFX) == 0x0002C8, "Member 'ABP_WeatherControl_C::Rain_Niagara_VFX' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, PostProcess) == 0x0002D0, "Member 'ABP_WeatherControl_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, DefaultSceneRoot) == 0x0002D8, "Member 'ABP_WeatherControl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, WindVariation_WindRotation_0554DA7B43A404AEE02CFE85FD4C7D7C) == 0x0002E0, "Member 'ABP_WeatherControl_C::WindVariation_WindRotation_0554DA7B43A404AEE02CFE85FD4C7D7C' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, WindVariation_WindVariation_0554DA7B43A404AEE02CFE85FD4C7D7C) == 0x0002E4, "Member 'ABP_WeatherControl_C::WindVariation_WindVariation_0554DA7B43A404AEE02CFE85FD4C7D7C' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, WindVariation__Direction_0554DA7B43A404AEE02CFE85FD4C7D7C) == 0x0002E8, "Member 'ABP_WeatherControl_C::WindVariation__Direction_0554DA7B43A404AEE02CFE85FD4C7D7C' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, WindVariation) == 0x0002F0, "Member 'ABP_WeatherControl_C::WindVariation' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Timeline_RampUp_05E978AB495132FEC8042AB966C63C00) == 0x0002F8, "Member 'ABP_WeatherControl_C::Timeline_RampUp_05E978AB495132FEC8042AB966C63C00' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Timeline__Direction_05E978AB495132FEC8042AB966C63C00) == 0x0002FC, "Member 'ABP_WeatherControl_C::Timeline__Direction_05E978AB495132FEC8042AB966C63C00' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Timeline) == 0x000300, "Member 'ABP_WeatherControl_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_Niagara_System) == 0x000308, "Member 'ABP_WeatherControl_C::Rain_Niagara_System' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_Niagara_System) == 0x000310, "Member 'ABP_WeatherControl_C::Snow_Niagara_System' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Thunderstorm_Niagara_System) == 0x000318, "Member 'ABP_WeatherControl_C::Thunderstorm_Niagara_System' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_PP_Material) == 0x000320, "Member 'ABP_WeatherControl_C::Rain_PP_Material' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_PP_Material) == 0x000328, "Member 'ABP_WeatherControl_C::Snow_PP_Material' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Current_TOD_Value) == 0x000330, "Member 'ABP_WeatherControl_C::Current_TOD_Value' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Wind_Direction) == 0x000338, "Member 'ABP_WeatherControl_C::Wind_Direction' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Wind_Intensity) == 0x000350, "Member 'ABP_WeatherControl_C::Wind_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_Intensity) == 0x000358, "Member 'ABP_WeatherControl_C::Rain_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_Intensity) == 0x000360, "Member 'ABP_WeatherControl_C::Snow_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Thunderstorm_Intensity) == 0x000368, "Member 'ABP_WeatherControl_C::Thunderstorm_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Combined_Rain_Intensity) == 0x000370, "Member 'ABP_WeatherControl_C::Combined_Rain_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Something_Changed) == 0x000378, "Member 'ABP_WeatherControl_C::Something_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Rain_Intensity) == 0x000380, "Member 'ABP_WeatherControl_C::Previous_Rain_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_Value_Changed) == 0x000388, "Member 'ABP_WeatherControl_C::Rain_Value_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Snow_Intensity) == 0x000390, "Member 'ABP_WeatherControl_C::Previous_Snow_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_Value_Changed) == 0x000398, "Member 'ABP_WeatherControl_C::Snow_Value_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Thunderstorm_Intensity) == 0x0003A0, "Member 'ABP_WeatherControl_C::Previous_Thunderstorm_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Thunderstorm_Value_Changed) == 0x0003A8, "Member 'ABP_WeatherControl_C::Thunderstorm_Value_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Oblivion_Intensity) == 0x0003B0, "Member 'ABP_WeatherControl_C::Oblivion_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Oblivion_Intensity) == 0x0003B8, "Member 'ABP_WeatherControl_C::Previous_Oblivion_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Oblivion_Value_Changed) == 0x0003C0, "Member 'ABP_WeatherControl_C::Oblivion_Value_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Oblivion_Niagara_System) == 0x0003C8, "Member 'ABP_WeatherControl_C::Oblivion_Niagara_System' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_Niagara_is_Valid) == 0x0003D0, "Member 'ABP_WeatherControl_C::Rain_Niagara_is_Valid' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_Niagara_is_Valid) == 0x0003D1, "Member 'ABP_WeatherControl_C::Snow_Niagara_is_Valid' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Thunderstorm_Niagara_is_Valid) == 0x0003D2, "Member 'ABP_WeatherControl_C::Thunderstorm_Niagara_is_Valid' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Oblivion_Niagara_is_Valid) == 0x0003D3, "Member 'ABP_WeatherControl_C::Oblivion_Niagara_is_Valid' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Spore_Intensity) == 0x0003D8, "Member 'ABP_WeatherControl_C::Previous_Spore_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Spore_Value_Changed) == 0x0003E0, "Member 'ABP_WeatherControl_C::Spore_Value_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Previous_Weather_State) == 0x0003E1, "Member 'ABP_WeatherControl_C::Previous_Weather_State' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Weather_State_Changed) == 0x0003E2, "Member 'ABP_WeatherControl_C::Weather_State_Changed' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Rain_PP_Is_Active) == 0x0003E3, "Member 'ABP_WeatherControl_C::Rain_PP_Is_Active' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Snow_PP_Is_Active) == 0x0003E4, "Member 'ABP_WeatherControl_C::Snow_PP_Is_Active' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Spore_Intensity) == 0x0003E8, "Member 'ABP_WeatherControl_C::Spore_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Weather_State) == 0x0003F0, "Member 'ABP_WeatherControl_C::Weather_State' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Update_Weather) == 0x0003F8, "Member 'ABP_WeatherControl_C::Update_Weather' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, WindDirectionalSource) == 0x000408, "Member 'ABP_WeatherControl_C::WindDirectionalSource' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, CameraComponent) == 0x000410, "Member 'ABP_WeatherControl_C::CameraComponent' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Current_Level) == 0x000418, "Member 'ABP_WeatherControl_C::Current_Level' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, LevelArray) == 0x000428, "Member 'ABP_WeatherControl_C::LevelArray' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Change_Wind_Direction) == 0x000430, "Member 'ABP_WeatherControl_C::Change_Wind_Direction' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Change_Rain_Intensity) == 0x000431, "Member 'ABP_WeatherControl_C::Change_Rain_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Override_Wind_Direction) == 0x000438, "Member 'ABP_WeatherControl_C::Override_Wind_Direction' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Override_Wind_Intensity) == 0x000440, "Member 'ABP_WeatherControl_C::Override_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Change_Wind_Intensity) == 0x000448, "Member 'ABP_WeatherControl_C::Change_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Level_Override) == 0x000449, "Member 'ABP_WeatherControl_C::Level_Override' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Wind_Time) == 0x000450, "Member 'ABP_WeatherControl_C::Wind_Time' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Lightning_Strike_Audio_Event) == 0x000458, "Member 'ABP_WeatherControl_C::Lightning_Strike_Audio_Event' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Spore_Niagara_is_Valid) == 0x000460, "Member 'ABP_WeatherControl_C::Spore_Niagara_is_Valid' has a wrong offset!");
static_assert(offsetof(ABP_WeatherControl_C, Spore_Niagara_System) == 0x000468, "Member 'ABP_WeatherControl_C::Spore_Niagara_System' has a wrong offset!");

}

