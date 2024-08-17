#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Abilities_Activation_DBNOResurrect_Athena

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect_Athena.GC_Abilities_Activation_DBNOResurrect_Athena_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Abilities_Activation_DBNOResurrect_Athena_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_Activation_DBNOResurrect_Athena_C">();
	}
	static class UGC_Abilities_Activation_DBNOResurrect_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Abilities_Activation_DBNOResurrect_Athena_C>();
	}
};
static_assert(alignof(UGC_Abilities_Activation_DBNOResurrect_Athena_C) == 0x000008, "Wrong alignment on UGC_Abilities_Activation_DBNOResurrect_Athena_C");
static_assert(sizeof(UGC_Abilities_Activation_DBNOResurrect_Athena_C) == 0x0001A0, "Wrong size on UGC_Abilities_Activation_DBNOResurrect_Athena_C");

}

