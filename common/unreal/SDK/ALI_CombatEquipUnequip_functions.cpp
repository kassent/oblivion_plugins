﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_CombatEquipUnequip

#include "Basic.hpp"

#include "ALI_CombatEquipUnequip_classes.hpp"
#include "ALI_CombatEquipUnequip_parameters.hpp"


namespace SDK
{

// Function ALI_CombatEquipUnequip.ALI_CombatEquipUnequip_C.EquipUnequipLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       EquipUnequipLayer_0                                    (Parm, OutParm, NoDestructor)

void IALI_CombatEquipUnequip_C::EquipUnequipLayer(struct FPoseLink* EquipUnequipLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ALI_CombatEquipUnequip_C", "EquipUnequipLayer");

	Params::ALI_CombatEquipUnequip_C_EquipUnequipLayer Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (EquipUnequipLayer_0 != nullptr)
		*EquipUnequipLayer_0 = std::move(Parms.EquipUnequipLayer_0);
}

}

