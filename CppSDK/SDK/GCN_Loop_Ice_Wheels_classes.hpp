#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Ice_Wheels

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C
// 0x00B8 (0x0938 - 0x0880)
class AGCN_Loop_Ice_Wheels_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Duration;                                          // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationTellDuration;                            // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpireTellDelayTimer;                              // 0x0890(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpirationSoundTimer;                              // 0x0898(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         DataTellDuration;                                  // 0x08A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ExpirationSoundPeriod;                             // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Crack;                                             // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       LoopingEmitters;                                   // 0x08C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                SpawnedAudioComps;                                 // 0x08E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                   TargetVehicle;                                     // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShoppingCart;                                      // 0x08F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9[0x7];                                      // 0x08F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           GolfSockets;                                       // 0x0900(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           ShoppingSockets;                                   // 0x0910(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           PlaneSockets;                                      // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                           Timer_SoundModulation;                             // 0x0930(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels(int32 EntryPoint);
	void Event_ModulateSound();
	void ExpireWarningTick();
	void ClearExpireTell();
	void BeginExpireTell();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();
	void SpawnEmittersAttachedToWheels(TArray<class FName>& Sockets, class USceneComponent* AttachToComponent, bool NoOffsets, class UParticleSystem* EmitterTemplate, float ScaleMult, TArray<class UParticleSystemComponent*>* SpawnedEmitters1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Wheels_C">();
	}
	static class AGCN_Loop_Ice_Wheels_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Wheels_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Wheels_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Wheels_C");
static_assert(sizeof(AGCN_Loop_Ice_Wheels_C) == 0x000938, "Wrong size on AGCN_Loop_Ice_Wheels_C");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_Ice_Wheels_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, Duration) == 0x000888, "Member 'AGCN_Loop_Ice_Wheels_C::Duration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ExpirationTellDuration) == 0x00088C, "Member 'AGCN_Loop_Ice_Wheels_C::ExpirationTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ExpireTellDelayTimer) == 0x000890, "Member 'AGCN_Loop_Ice_Wheels_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ExpirationSoundTimer) == 0x000898, "Member 'AGCN_Loop_Ice_Wheels_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, DataTellDuration) == 0x0008A0, "Member 'AGCN_Loop_Ice_Wheels_C::DataTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ExpirationSoundPeriod) == 0x0008C0, "Member 'AGCN_Loop_Ice_Wheels_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, Crack) == 0x0008C4, "Member 'AGCN_Loop_Ice_Wheels_C::Crack' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, LoopingEmitters) == 0x0008C8, "Member 'AGCN_Loop_Ice_Wheels_C::LoopingEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, CollisionAudioComp) == 0x0008D8, "Member 'AGCN_Loop_Ice_Wheels_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, SpawnedAudioComps) == 0x0008E0, "Member 'AGCN_Loop_Ice_Wheels_C::SpawnedAudioComps' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, TargetVehicle) == 0x0008F0, "Member 'AGCN_Loop_Ice_Wheels_C::TargetVehicle' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ShoppingCart) == 0x0008F8, "Member 'AGCN_Loop_Ice_Wheels_C::ShoppingCart' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, GolfSockets) == 0x000900, "Member 'AGCN_Loop_Ice_Wheels_C::GolfSockets' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, ShoppingSockets) == 0x000910, "Member 'AGCN_Loop_Ice_Wheels_C::ShoppingSockets' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, PlaneSockets) == 0x000920, "Member 'AGCN_Loop_Ice_Wheels_C::PlaneSockets' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_C, Timer_SoundModulation) == 0x000930, "Member 'AGCN_Loop_Ice_Wheels_C::Timer_SoundModulation' has a wrong offset!");

}

