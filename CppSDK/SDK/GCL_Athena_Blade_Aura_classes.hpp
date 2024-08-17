#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Athena_Blade_Aura

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C
// 0x0020 (0x08A0 - 0x0880)
class AGCL_Athena_Blade_Aura_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       Spawned_Emitters;                                  // 0x0890(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCL_Athena_Blade_Aura(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Show();
	void Unhide();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Athena_Blade_Aura_C">();
	}
	static class AGCL_Athena_Blade_Aura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Athena_Blade_Aura_C>();
	}
};
static_assert(alignof(AGCL_Athena_Blade_Aura_C) == 0x000008, "Wrong alignment on AGCL_Athena_Blade_Aura_C");
static_assert(sizeof(AGCL_Athena_Blade_Aura_C) == 0x0008A0, "Wrong size on AGCL_Athena_Blade_Aura_C");
static_assert(offsetof(AGCL_Athena_Blade_Aura_C, UberGraphFrame) == 0x000880, "Member 'AGCL_Athena_Blade_Aura_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_Athena_Blade_Aura_C, PlayerPawn) == 0x000888, "Member 'AGCL_Athena_Blade_Aura_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCL_Athena_Blade_Aura_C, Spawned_Emitters) == 0x000890, "Member 'AGCL_Athena_Blade_Aura_C::Spawned_Emitters' has a wrong offset!");

}

