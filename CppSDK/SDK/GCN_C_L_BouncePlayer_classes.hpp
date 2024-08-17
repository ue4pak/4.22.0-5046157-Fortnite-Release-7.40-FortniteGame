#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_C_L_BouncePlayer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_C_L_BouncePlayer.GCN_C_L_BouncePlayer_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_C_L_BouncePlayer_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_C_L_BouncePlayer_C">();
	}
	static class UGCN_C_L_BouncePlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_C_L_BouncePlayer_C>();
	}
};
static_assert(alignof(UGCN_C_L_BouncePlayer_C) == 0x000008, "Wrong alignment on UGCN_C_L_BouncePlayer_C");
static_assert(sizeof(UGCN_C_L_BouncePlayer_C) == 0x0001A0, "Wrong size on UGCN_C_L_BouncePlayer_C");

}

