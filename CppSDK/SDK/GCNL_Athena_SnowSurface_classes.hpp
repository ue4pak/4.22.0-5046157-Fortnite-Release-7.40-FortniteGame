#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_SnowSurface

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C
// 0x0008 (0x0888 - 0x0880)
class AGCNL_Athena_SnowSurface_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCNL_Athena_SnowSurface(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_SnowSurface_C">();
	}
	static class AGCNL_Athena_SnowSurface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_SnowSurface_C>();
	}
};
static_assert(alignof(AGCNL_Athena_SnowSurface_C) == 0x000008, "Wrong alignment on AGCNL_Athena_SnowSurface_C");
static_assert(sizeof(AGCNL_Athena_SnowSurface_C) == 0x000888, "Wrong size on AGCNL_Athena_SnowSurface_C");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, UberGraphFrame) == 0x000880, "Member 'AGCNL_Athena_SnowSurface_C::UberGraphFrame' has a wrong offset!");

}

