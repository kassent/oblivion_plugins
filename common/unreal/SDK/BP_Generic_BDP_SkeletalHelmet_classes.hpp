﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Generic_BDP_SkeletalHelmet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Generic_BDP_SkeletalHelmet.BP_Generic_BDP_SkeletalHelmet_C
// 0x0018 (0x0398 - 0x0380)
class ABP_Generic_BDP_SkeletalHelmet_C : public AVHelmetModularBodyPart
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USkeletalMesh*>                  SkeletalVariants;                                  // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Generic_BDP_SkeletalHelmet(int32 EntryPoint);
	void OnAttachedToPhenotype(class UVCharacterPhenotypeData* PhenotypeData, class UTESRace* CharacterRace, ECharacterSex CharacterSex);
	void SetGenderedSkeletalMeshes(ECharacterSex Selection, class USkeletalMesh* MaleVersion, class USkeletalMesh* FemaleVersion);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Generic_BDP_SkeletalHelmet_C">();
	}
	static class ABP_Generic_BDP_SkeletalHelmet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Generic_BDP_SkeletalHelmet_C>();
	}
};
static_assert(alignof(ABP_Generic_BDP_SkeletalHelmet_C) == 0x000008, "Wrong alignment on ABP_Generic_BDP_SkeletalHelmet_C");
static_assert(sizeof(ABP_Generic_BDP_SkeletalHelmet_C) == 0x000398, "Wrong size on ABP_Generic_BDP_SkeletalHelmet_C");
static_assert(offsetof(ABP_Generic_BDP_SkeletalHelmet_C, UberGraphFrame) == 0x000380, "Member 'ABP_Generic_BDP_SkeletalHelmet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Generic_BDP_SkeletalHelmet_C, SkeletalVariants) == 0x000388, "Member 'ABP_Generic_BDP_SkeletalHelmet_C::SkeletalVariants' has a wrong offset!");

}

