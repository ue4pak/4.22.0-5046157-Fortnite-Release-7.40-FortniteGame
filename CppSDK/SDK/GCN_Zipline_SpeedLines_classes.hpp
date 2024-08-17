#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Zipline_SpeedLines

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Zipline_SpeedLines.GCN_Zipline_SpeedLines_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_Zipline_SpeedLines_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Zipline_SpeedLines_C">();
	}
	static class UGCN_Zipline_SpeedLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Zipline_SpeedLines_C>();
	}
};
static_assert(alignof(UGCN_Zipline_SpeedLines_C) == 0x000008, "Wrong alignment on UGCN_Zipline_SpeedLines_C");
static_assert(sizeof(UGCN_Zipline_SpeedLines_C) == 0x0001A0, "Wrong size on UGCN_Zipline_SpeedLines_C");

}

