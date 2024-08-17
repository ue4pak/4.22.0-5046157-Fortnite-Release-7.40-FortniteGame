#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Melee_Piercing_Spear_Joust_Loop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Melee_Piercing_Spear_Joust_Loop.GC_Melee_Piercing_Spear_Joust_Loop_C
// 0x0020 (0x08A0 - 0x0880)
class AGC_Melee_Piercing_Spear_Joust_Loop_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           Dust_Emitters;                                     // 0x0888(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_SplineVolumeTrail_v1b_C*            Teleport_Spline;                                   // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Melee_Piercing_Spear_Joust_Loop(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Melee_Piercing_Spear_Joust_Loop_C">();
	}
	static class AGC_Melee_Piercing_Spear_Joust_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Melee_Piercing_Spear_Joust_Loop_C>();
	}
};
static_assert(alignof(AGC_Melee_Piercing_Spear_Joust_Loop_C) == 0x000008, "Wrong alignment on AGC_Melee_Piercing_Spear_Joust_Loop_C");
static_assert(sizeof(AGC_Melee_Piercing_Spear_Joust_Loop_C) == 0x0008A0, "Wrong size on AGC_Melee_Piercing_Spear_Joust_Loop_C");
static_assert(offsetof(AGC_Melee_Piercing_Spear_Joust_Loop_C, UberGraphFrame) == 0x000880, "Member 'AGC_Melee_Piercing_Spear_Joust_Loop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Melee_Piercing_Spear_Joust_Loop_C, Dust_Emitters) == 0x000888, "Member 'AGC_Melee_Piercing_Spear_Joust_Loop_C::Dust_Emitters' has a wrong offset!");
static_assert(offsetof(AGC_Melee_Piercing_Spear_Joust_Loop_C, Teleport_Spline) == 0x000898, "Member 'AGC_Melee_Piercing_Spear_Joust_Loop_C::Teleport_Spline' has a wrong offset!");

}

