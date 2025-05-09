﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_WeapBloodSplatter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Altar_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_WeapBloodSplatter.BPC_WeapBloodSplatter_C
// 0x0200 (0x02A0 - 0x00A0)
class UBPC_WeapBloodSplatter_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                randomPosition;                                    // 0x00A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                bloodSplatterPosition;                             // 0x00C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        bloodSplatterTextureSize;                          // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MIC_Body;                                          // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             MICs;                                              // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                   MainStaticMeshComponent;                           // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DIMs;                                              // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceConstant*>      MICsBloodParentReferences;                         // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceConstant*>      MICsBloodParentReferences_Male;                    // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceConstant*>      MICsBloodParentReferences_Female;                  // 0x0130(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Dim;                                               // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DIM_Body;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MICArgonianFemale;                                 // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVHitBoxComponent*                      VHitBox;                                           // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         stainPerHeavyAttack;                               // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         stainPerLightAttack;                               // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         maxBloodStains;                                    // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         bloodStainsAmount;                                 // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Weapons_Mat_Parameters_Mask;                       // 0x0170(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Weapons_Mat_Parameters_Color;                      // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                allStainsIntensity;                                // 0x0190(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                allStainsIntensity_BAK;                            // 0x01A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        underwaterStainTimescale;                          // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         weatherStainTimescale;                             // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Stain_Lifespan;                                    // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cooldown_Current_Time;                             // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cooldown_Current_Duration;                         // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cooldown_Start_Time;                               // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Cooldown_Timer_Handle;                             // 0x01E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Stain_FadeOut_Duration;                            // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FadeOut_Timer_Handle;                              // 0x01F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          isFading;                                          // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isPugilism;                                        // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isLeftHand;                                        // 0x01FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FB[0x1];                                      // 0x01FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         bloodStainsAmount_L;                               // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         bloodStainsAmount_R;                               // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        allStainsIntensity_L;                              // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        allStainsIntensity_R;                              // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        allStainsIntensity_L_BAK;                          // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        allStainsIntensity_R_BAK;                          // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          hasGauntletsEquiped;                               // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 BodySkeletalMeshComponent;                         // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 FPVBodySkeletalMeshComponent;                      // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Gauntlet_Actor;                                    // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 FPV_Gauntlet_Actor;                                // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Is_Power_Attack;                                   // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_OblivionPlayerCharacter_C*          As_BP_Oblivion_Player_Character;                   // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EVBloodColor                                  Blood_Color;                                       // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_A;                                              // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_B;                                              // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_263[0x5];                                      // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTESRace*                               Race;                                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FullBodyArmor;                                     // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 FPV_Full_Body_Armor;                               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Has_Full_Body_Armor_Equiped;                       // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          hasOpenGauntletsEquiped;                           // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_282[0x6];                                      // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OpenHandGauntlets;                                 // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UsesFist;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitDisabled;                                       // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckGenderAndSetMIC(class ABP_OblivionPlayerCharacter_C* PlayerCharacter);
	void Setup_FullArmor(class ABP_OblivionPlayerCharacter_C* Player_Character);
	void Set_Blood_Color_on_Gauntlets(class UMaterialInstanceDynamic* Material_Instance, class FName Material_Parameters);
	void Refresh_Body_Gauntlet_Materials();
	void Left_or_Right_Hand(class ABP_OblivionPlayerCharacter_C* Player_Character);
	void GetAndSetRandomBloodParameters_Gauntlets();
	void StopFade();
	void ResetVariables();
	void BloodStainsRecalculation();
	void FadeSetScalarParameter(double Timeline_Value);
	void GetAndSetRandomBloodParameters();
	void SetupMaterials_Gauntlets(TArray<class UMaterialInstanceConstant*>& MICs_Blood_Parent_References, class UMeshComponent* Mesh_Component);
	void SetupMaterials_Body(class UMeshComponent* Body_Mesh_Reference, class AVOblivionPlayerCharacter* PlayerCharacter);
	void SetupMaterials();
	void GetVHitBoxComponent(class UVHitBoxComponent** VHitBox_0);
	void GetMainStaticMeshComponent();
	void Setup_Gauntlets(class ABP_OblivionPlayerCharacter_C* Player_Character);
	void Setup_Body(class AVOblivionPlayerCharacter* Player_Character);
	void ReceiveBeginPlay();
	void Hit(EVBloodColor BloodColor, const class AActor* Attacker, bool IsPowerAttack, bool isPugilism_0);
	void Cooldown_Timer_Finished();
	void Start_Cooldown_Timer();
	void Underwater_Changement();
	void UnderwaterOn();
	void UnderwaterOut();
	void ReceiveTick(float DeltaSeconds);
	void Start_FadeOut_Timer();
	void FadeOut_Timer_Finished();
	void Apply_Blood_();
	void Weather_Update();
	void OnCharacterSexChanged_Event();
	void OnAppearanceRefreshedEnd_Event();
	void ClearComponentState();
	void StopTickClearTimersResetMaterials();
	void SetHitDisabled(bool Hit_is_disabled);
	void ExecuteUbergraph_BPC_WeapBloodSplatter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_WeapBloodSplatter_C">();
	}
	static class UBPC_WeapBloodSplatter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_WeapBloodSplatter_C>();
	}
};
static_assert(alignof(UBPC_WeapBloodSplatter_C) == 0x000008, "Wrong alignment on UBPC_WeapBloodSplatter_C");
static_assert(sizeof(UBPC_WeapBloodSplatter_C) == 0x0002A0, "Wrong size on UBPC_WeapBloodSplatter_C");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, UberGraphFrame) == 0x0000A0, "Member 'UBPC_WeapBloodSplatter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, randomPosition) == 0x0000A8, "Member 'UBPC_WeapBloodSplatter_C::randomPosition' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, bloodSplatterPosition) == 0x0000C0, "Member 'UBPC_WeapBloodSplatter_C::bloodSplatterPosition' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, bloodSplatterTextureSize) == 0x0000D8, "Member 'UBPC_WeapBloodSplatter_C::bloodSplatterTextureSize' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MIC_Body) == 0x0000E0, "Member 'UBPC_WeapBloodSplatter_C::MIC_Body' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MICs) == 0x0000E8, "Member 'UBPC_WeapBloodSplatter_C::MICs' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MainStaticMeshComponent) == 0x0000F8, "Member 'UBPC_WeapBloodSplatter_C::MainStaticMeshComponent' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, DIMs) == 0x000100, "Member 'UBPC_WeapBloodSplatter_C::DIMs' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MICsBloodParentReferences) == 0x000110, "Member 'UBPC_WeapBloodSplatter_C::MICsBloodParentReferences' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MICsBloodParentReferences_Male) == 0x000120, "Member 'UBPC_WeapBloodSplatter_C::MICsBloodParentReferences_Male' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MICsBloodParentReferences_Female) == 0x000130, "Member 'UBPC_WeapBloodSplatter_C::MICsBloodParentReferences_Female' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Dim) == 0x000140, "Member 'UBPC_WeapBloodSplatter_C::Dim' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, DIM_Body) == 0x000148, "Member 'UBPC_WeapBloodSplatter_C::DIM_Body' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, MICArgonianFemale) == 0x000150, "Member 'UBPC_WeapBloodSplatter_C::MICArgonianFemale' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, VHitBox) == 0x000158, "Member 'UBPC_WeapBloodSplatter_C::VHitBox' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, stainPerHeavyAttack) == 0x000160, "Member 'UBPC_WeapBloodSplatter_C::stainPerHeavyAttack' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, stainPerLightAttack) == 0x000164, "Member 'UBPC_WeapBloodSplatter_C::stainPerLightAttack' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, maxBloodStains) == 0x000168, "Member 'UBPC_WeapBloodSplatter_C::maxBloodStains' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, bloodStainsAmount) == 0x00016C, "Member 'UBPC_WeapBloodSplatter_C::bloodStainsAmount' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Weapons_Mat_Parameters_Mask) == 0x000170, "Member 'UBPC_WeapBloodSplatter_C::Weapons_Mat_Parameters_Mask' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Weapons_Mat_Parameters_Color) == 0x000180, "Member 'UBPC_WeapBloodSplatter_C::Weapons_Mat_Parameters_Color' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity) == 0x000190, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity_BAK) == 0x0001A0, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity_BAK' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, underwaterStainTimescale) == 0x0001B0, "Member 'UBPC_WeapBloodSplatter_C::underwaterStainTimescale' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, weatherStainTimescale) == 0x0001B8, "Member 'UBPC_WeapBloodSplatter_C::weatherStainTimescale' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Stain_Lifespan) == 0x0001C0, "Member 'UBPC_WeapBloodSplatter_C::Stain_Lifespan' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Cooldown_Current_Time) == 0x0001C8, "Member 'UBPC_WeapBloodSplatter_C::Cooldown_Current_Time' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Cooldown_Current_Duration) == 0x0001D0, "Member 'UBPC_WeapBloodSplatter_C::Cooldown_Current_Duration' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Cooldown_Start_Time) == 0x0001D8, "Member 'UBPC_WeapBloodSplatter_C::Cooldown_Start_Time' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Cooldown_Timer_Handle) == 0x0001E0, "Member 'UBPC_WeapBloodSplatter_C::Cooldown_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Stain_FadeOut_Duration) == 0x0001E8, "Member 'UBPC_WeapBloodSplatter_C::Stain_FadeOut_Duration' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, FadeOut_Timer_Handle) == 0x0001F0, "Member 'UBPC_WeapBloodSplatter_C::FadeOut_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, isFading) == 0x0001F8, "Member 'UBPC_WeapBloodSplatter_C::isFading' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, isPugilism) == 0x0001F9, "Member 'UBPC_WeapBloodSplatter_C::isPugilism' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, isLeftHand) == 0x0001FA, "Member 'UBPC_WeapBloodSplatter_C::isLeftHand' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, bloodStainsAmount_L) == 0x0001FC, "Member 'UBPC_WeapBloodSplatter_C::bloodStainsAmount_L' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, bloodStainsAmount_R) == 0x000200, "Member 'UBPC_WeapBloodSplatter_C::bloodStainsAmount_R' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity_L) == 0x000208, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity_L' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity_R) == 0x000210, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity_R' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity_L_BAK) == 0x000218, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity_L_BAK' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, allStainsIntensity_R_BAK) == 0x000220, "Member 'UBPC_WeapBloodSplatter_C::allStainsIntensity_R_BAK' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, hasGauntletsEquiped) == 0x000228, "Member 'UBPC_WeapBloodSplatter_C::hasGauntletsEquiped' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, BodySkeletalMeshComponent) == 0x000230, "Member 'UBPC_WeapBloodSplatter_C::BodySkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, FPVBodySkeletalMeshComponent) == 0x000238, "Member 'UBPC_WeapBloodSplatter_C::FPVBodySkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Gauntlet_Actor) == 0x000240, "Member 'UBPC_WeapBloodSplatter_C::Gauntlet_Actor' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, FPV_Gauntlet_Actor) == 0x000248, "Member 'UBPC_WeapBloodSplatter_C::FPV_Gauntlet_Actor' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Is_Power_Attack) == 0x000250, "Member 'UBPC_WeapBloodSplatter_C::Is_Power_Attack' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, As_BP_Oblivion_Player_Character) == 0x000258, "Member 'UBPC_WeapBloodSplatter_C::As_BP_Oblivion_Player_Character' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Blood_Color) == 0x000260, "Member 'UBPC_WeapBloodSplatter_C::Blood_Color' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Is_A) == 0x000261, "Member 'UBPC_WeapBloodSplatter_C::Is_A' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Is_B) == 0x000262, "Member 'UBPC_WeapBloodSplatter_C::Is_B' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Race) == 0x000268, "Member 'UBPC_WeapBloodSplatter_C::Race' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, FullBodyArmor) == 0x000270, "Member 'UBPC_WeapBloodSplatter_C::FullBodyArmor' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, FPV_Full_Body_Armor) == 0x000278, "Member 'UBPC_WeapBloodSplatter_C::FPV_Full_Body_Armor' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, Has_Full_Body_Armor_Equiped) == 0x000280, "Member 'UBPC_WeapBloodSplatter_C::Has_Full_Body_Armor_Equiped' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, hasOpenGauntletsEquiped) == 0x000281, "Member 'UBPC_WeapBloodSplatter_C::hasOpenGauntletsEquiped' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, OpenHandGauntlets) == 0x000288, "Member 'UBPC_WeapBloodSplatter_C::OpenHandGauntlets' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, UsesFist) == 0x000298, "Member 'UBPC_WeapBloodSplatter_C::UsesFist' has a wrong offset!");
static_assert(offsetof(UBPC_WeapBloodSplatter_C, HitDisabled) == 0x000299, "Member 'UBPC_WeapBloodSplatter_C::HitDisabled' has a wrong offset!");

}

