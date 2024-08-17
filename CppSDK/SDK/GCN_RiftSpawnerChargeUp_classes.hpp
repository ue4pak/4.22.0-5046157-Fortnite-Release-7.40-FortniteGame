#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawnerChargeUp

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RiftSpawnerChargeUp.GCN_RiftSpawnerChargeUp_C
// 0x0008 (0x01A8 - 0x01A0)
class UGCN_RiftSpawnerChargeUp_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RiftSpawnerChargeUp_C">();
	}
	static class UGCN_RiftSpawnerChargeUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_RiftSpawnerChargeUp_C>();
	}
};
static_assert(alignof(UGCN_RiftSpawnerChargeUp_C) == 0x000008, "Wrong alignment on UGCN_RiftSpawnerChargeUp_C");
static_assert(sizeof(UGCN_RiftSpawnerChargeUp_C) == 0x0001A8, "Wrong size on UGCN_RiftSpawnerChargeUp_C");
static_assert(offsetof(UGCN_RiftSpawnerChargeUp_C, ConcurrencySettings) == 0x0001A0, "Member 'UGCN_RiftSpawnerChargeUp_C::ConcurrencySettings' has a wrong offset!");

}

