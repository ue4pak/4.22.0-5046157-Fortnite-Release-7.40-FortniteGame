#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Snow_WorldImpact

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Snow_WorldImpact.GC_Snow_WorldImpact_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Snow_WorldImpact_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Snow_WorldImpact_C">();
	}
	static class UGC_Snow_WorldImpact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Snow_WorldImpact_C>();
	}
};
static_assert(alignof(UGC_Snow_WorldImpact_C) == 0x000008, "Wrong alignment on UGC_Snow_WorldImpact_C");
static_assert(sizeof(UGC_Snow_WorldImpact_C) == 0x0001A0, "Wrong size on UGC_Snow_WorldImpact_C");

}

