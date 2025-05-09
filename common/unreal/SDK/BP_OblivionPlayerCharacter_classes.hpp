﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OblivionPlayerCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FluidForceDynamic_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OblivionPlayerCharacter.BP_OblivionPlayerCharacter_C
// 0x0260 (0x14F0 - 0x1290)
class ABP_OblivionPlayerCharacter_C final : public AVOblivionPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  HighlightPostProcessingFoliage;                    // 0x1298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_WeapBloodSplatter_C*               BPC_WeapBloodSplatter;                             // 0x12A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  HighlightPostProcessing;                           // 0x12A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Swim;                                           // 0x12B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PP_Swim;                                           // 0x12B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Bubble;                                            // 0x12C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_FluidSim_01;                                    // 0x12C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVHitBoxComponent*                      LeftHandHitBox;                                    // 0x12D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVHitBoxComponent*                      RightHandHitBox;                                   // 0x12D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVHitBoxComponent*                      RightHandHitBox_FP;                                // 0x12E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVHitBoxComponent*                      LeftHandHitBox_FP;                                 // 0x12E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Customization_Camera_Preview;                      // 0x12F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Third_Person_Camera_Preview;                       // 0x12F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  DialoguePostProcess;                               // 0x1300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Water_Drops_Opacity_3906372E46B23A92B164E398420B93B6; // 0x1308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_3906372E46B23A92B164E398420B93B6; // 0x130C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_130D[0x3];                                     // 0x130D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x1310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentAttackIndex;                                // 0x1318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131C[0x4];                                     // 0x131C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFluidForceDynamic                     Fluid_Force_Dynamic_Settings_NPC;                  // 0x1320(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class AActor*>                         BufferActorSimulated;                              // 0x1390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FFluidForceDynamic                     Fluid_Force_Dynamic_Settings_Creature;             // 0x13A0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class AActor*>                         InitialArray;                                      // 0x1410(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Raycast_Timer;                                     // 0x1420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               DebugTrace;                                        // 0x1424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugLog;                                          // 0x1425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1426[0x2];                                     // 0x1426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              PP_Swimming;                                       // 0x1428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MIC_Swimming;                                      // 0x1430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          HighlightObjects;                                  // 0x1438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FLORA;                                             // 0x1439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_143A[0x6];                                     // 0x143A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      HighlightMaterial;                                 // 0x1440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MultiplierTrace;                                   // 0x1448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GetClass;                                          // 0x1450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         ClassesHighlight;                                  // 0x1458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 LookAtActorOld;                                    // 0x1468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LookAtActor;                                       // 0x1470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PostProcessMaterial;                               // 0x1478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        HighLightThickness;                                // 0x1480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HighlightColor;                                    // 0x1488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRegister;                                        // 0x1498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1499[0x3];                                     // 0x1499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   In_Bone_Name;                                      // 0x149C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomStencil_Skeletal;                            // 0x14A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomStencil_Static;                              // 0x14A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FloraEmptyVisible;                                 // 0x14AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14AD[0x3];                                     // 0x14AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            FloraEmptyMesh;                                    // 0x14B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          WasFlora;                                          // 0x14B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayWaterVFX;                                      // 0x14B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14BA[0x6];                                     // 0x14BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Time_of_Last_Blood_Hit;                            // 0x14C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PostProcessMaterialFoliage;                        // 0x14C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         HighlightCustomStencil;                            // 0x14D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D4[0x4];                                     // 0x14D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DropletOpacityValue;                               // 0x14D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerUnderwater;                                // 0x14E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateNS_Swim(bool Activate);
	void AddFoliageHighlightPickablesPostProcess();
	void AddHighlightPickablesPostProcess();
	void BindControllerMappingSwitch();
	void BndEvt__BP_OblivionPlayerCharacter_AnimationPairingComponent_K2Node_ComponentBoundEvent_1_OnAnimationStateChangeDelegate__DelegateSignature(const struct FOblivionSourcedCharacterAnimationState& Old, const struct FOblivionSourcedCharacterAnimationState& New);
	void ChangeFoliageHighlightMaterialColor();
	void ChangeFoliageHighlightMaterialThickness();
	void ChangeHighlightMaterialColor();
	void ChangeHighlightMaterialThickness();
	void EnterWaterSurface();
	void ExecuteUbergraph_BP_OblivionPlayerCharacter(int32 EntryPoint);
	void ExitWaterSurface();
	void FirstPersonClippingFixDetectNearestWall(bool* HasHit, double* Weight);
	void GetActorsToSimulation();
	void HighlightPickable();
	void InpActEvt_ToogleObvAssetStandout_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_ToogleObvAssetStandout_K2Node_InputActionEvent_1(const struct FKey& Key);
	void Is_Ridding_Horse(bool* Result);
	void Is_Surface_Water(bool* Result);
	void IsPlayerNotSwimming();
	void IsPlayerSwimming();
	void OnEnterUnderwater();
	void OnEnterWaterSurface();
	void OnExitUnderwater();
	void OnExitWaterSurface();
	void OnFadeToGameBegin();
	void OnGameplayCameraContextChanged(EGameplayCameraContext GameplayCameraContext);
	void OnGameplayCameraFocusOnPoint(const struct FVector& FromPosition, const struct FVector& ToPosition);
	void OnSwitchToGameMappings();
	void OnSwitchToUIMappings();
	void OnTorchChanged(const class AActor* TorchActor, bool bEquipping);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RegisterActorToSimulation(const struct FFluidForceDynamic& Fluid_Dynamic_Setting, class UVPhysicsControllerComponent* VPhysics_Controllable, class USceneComponent* ForceComponent, bool* IsSimulated);
	void RemoveActorToSimulation(TArray<class AActor*>& InitialArray_0);
	void SetupWaterbodyMIDParamsUpdates();
	void Tail_Physics();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();
	void WeaponBlood_UnderwaterON();
	void WeaponBlood_UnderwaterOUT();

	struct FVector HomogeneousToCarthesianCoordinates(const struct FVector4& InVec) const;
	void OnChangeActionState(EVActionType ActionState) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OblivionPlayerCharacter_C">();
	}
	static class ABP_OblivionPlayerCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OblivionPlayerCharacter_C>();
	}
};
static_assert(alignof(ABP_OblivionPlayerCharacter_C) == 0x000010, "Wrong alignment on ABP_OblivionPlayerCharacter_C");
static_assert(sizeof(ABP_OblivionPlayerCharacter_C) == 0x0014F0, "Wrong size on ABP_OblivionPlayerCharacter_C");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, UberGraphFrame) == 0x001290, "Member 'ABP_OblivionPlayerCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightPostProcessingFoliage) == 0x001298, "Member 'ABP_OblivionPlayerCharacter_C::HighlightPostProcessingFoliage' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, BPC_WeapBloodSplatter) == 0x0012A0, "Member 'ABP_OblivionPlayerCharacter_C::BPC_WeapBloodSplatter' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightPostProcessing) == 0x0012A8, "Member 'ABP_OblivionPlayerCharacter_C::HighlightPostProcessing' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, NS_Swim) == 0x0012B0, "Member 'ABP_OblivionPlayerCharacter_C::NS_Swim' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, PP_Swim) == 0x0012B8, "Member 'ABP_OblivionPlayerCharacter_C::PP_Swim' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Bubble) == 0x0012C0, "Member 'ABP_OblivionPlayerCharacter_C::Bubble' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, BP_FluidSim_01) == 0x0012C8, "Member 'ABP_OblivionPlayerCharacter_C::BP_FluidSim_01' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, LeftHandHitBox) == 0x0012D0, "Member 'ABP_OblivionPlayerCharacter_C::LeftHandHitBox' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, RightHandHitBox) == 0x0012D8, "Member 'ABP_OblivionPlayerCharacter_C::RightHandHitBox' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, RightHandHitBox_FP) == 0x0012E0, "Member 'ABP_OblivionPlayerCharacter_C::RightHandHitBox_FP' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, LeftHandHitBox_FP) == 0x0012E8, "Member 'ABP_OblivionPlayerCharacter_C::LeftHandHitBox_FP' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Customization_Camera_Preview) == 0x0012F0, "Member 'ABP_OblivionPlayerCharacter_C::Customization_Camera_Preview' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Third_Person_Camera_Preview) == 0x0012F8, "Member 'ABP_OblivionPlayerCharacter_C::Third_Person_Camera_Preview' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, DialoguePostProcess) == 0x001300, "Member 'ABP_OblivionPlayerCharacter_C::DialoguePostProcess' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Timeline_Water_Drops_Opacity_3906372E46B23A92B164E398420B93B6) == 0x001308, "Member 'ABP_OblivionPlayerCharacter_C::Timeline_Water_Drops_Opacity_3906372E46B23A92B164E398420B93B6' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Timeline__Direction_3906372E46B23A92B164E398420B93B6) == 0x00130C, "Member 'ABP_OblivionPlayerCharacter_C::Timeline__Direction_3906372E46B23A92B164E398420B93B6' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Timeline) == 0x001310, "Member 'ABP_OblivionPlayerCharacter_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, CurrentAttackIndex) == 0x001318, "Member 'ABP_OblivionPlayerCharacter_C::CurrentAttackIndex' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Fluid_Force_Dynamic_Settings_NPC) == 0x001320, "Member 'ABP_OblivionPlayerCharacter_C::Fluid_Force_Dynamic_Settings_NPC' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, BufferActorSimulated) == 0x001390, "Member 'ABP_OblivionPlayerCharacter_C::BufferActorSimulated' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Fluid_Force_Dynamic_Settings_Creature) == 0x0013A0, "Member 'ABP_OblivionPlayerCharacter_C::Fluid_Force_Dynamic_Settings_Creature' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, InitialArray) == 0x001410, "Member 'ABP_OblivionPlayerCharacter_C::InitialArray' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Raycast_Timer) == 0x001420, "Member 'ABP_OblivionPlayerCharacter_C::Raycast_Timer' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, DebugTrace) == 0x001424, "Member 'ABP_OblivionPlayerCharacter_C::DebugTrace' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, DebugLog) == 0x001425, "Member 'ABP_OblivionPlayerCharacter_C::DebugLog' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, PP_Swimming) == 0x001428, "Member 'ABP_OblivionPlayerCharacter_C::PP_Swimming' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, MIC_Swimming) == 0x001430, "Member 'ABP_OblivionPlayerCharacter_C::MIC_Swimming' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightObjects) == 0x001438, "Member 'ABP_OblivionPlayerCharacter_C::HighlightObjects' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, FLORA) == 0x001439, "Member 'ABP_OblivionPlayerCharacter_C::FLORA' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightMaterial) == 0x001440, "Member 'ABP_OblivionPlayerCharacter_C::HighlightMaterial' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, MultiplierTrace) == 0x001448, "Member 'ABP_OblivionPlayerCharacter_C::MultiplierTrace' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, GetClass) == 0x001450, "Member 'ABP_OblivionPlayerCharacter_C::GetClass' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, ClassesHighlight) == 0x001458, "Member 'ABP_OblivionPlayerCharacter_C::ClassesHighlight' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, LookAtActorOld) == 0x001468, "Member 'ABP_OblivionPlayerCharacter_C::LookAtActorOld' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, LookAtActor) == 0x001470, "Member 'ABP_OblivionPlayerCharacter_C::LookAtActor' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, PostProcessMaterial) == 0x001478, "Member 'ABP_OblivionPlayerCharacter_C::PostProcessMaterial' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighLightThickness) == 0x001480, "Member 'ABP_OblivionPlayerCharacter_C::HighLightThickness' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightColor) == 0x001488, "Member 'ABP_OblivionPlayerCharacter_C::HighlightColor' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, IsRegister) == 0x001498, "Member 'ABP_OblivionPlayerCharacter_C::IsRegister' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, In_Bone_Name) == 0x00149C, "Member 'ABP_OblivionPlayerCharacter_C::In_Bone_Name' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, CustomStencil_Skeletal) == 0x0014A4, "Member 'ABP_OblivionPlayerCharacter_C::CustomStencil_Skeletal' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, CustomStencil_Static) == 0x0014A8, "Member 'ABP_OblivionPlayerCharacter_C::CustomStencil_Static' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, FloraEmptyVisible) == 0x0014AC, "Member 'ABP_OblivionPlayerCharacter_C::FloraEmptyVisible' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, FloraEmptyMesh) == 0x0014B0, "Member 'ABP_OblivionPlayerCharacter_C::FloraEmptyMesh' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, WasFlora) == 0x0014B8, "Member 'ABP_OblivionPlayerCharacter_C::WasFlora' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, PlayWaterVFX) == 0x0014B9, "Member 'ABP_OblivionPlayerCharacter_C::PlayWaterVFX' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, Time_of_Last_Blood_Hit) == 0x0014C0, "Member 'ABP_OblivionPlayerCharacter_C::Time_of_Last_Blood_Hit' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, PostProcessMaterialFoliage) == 0x0014C8, "Member 'ABP_OblivionPlayerCharacter_C::PostProcessMaterialFoliage' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, HighlightCustomStencil) == 0x0014D0, "Member 'ABP_OblivionPlayerCharacter_C::HighlightCustomStencil' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, DropletOpacityValue) == 0x0014D8, "Member 'ABP_OblivionPlayerCharacter_C::DropletOpacityValue' has a wrong offset!");
static_assert(offsetof(ABP_OblivionPlayerCharacter_C, IsPlayerUnderwater) == 0x0014E0, "Member 'ABP_OblivionPlayerCharacter_C::IsPlayerUnderwater' has a wrong offset!");

}

