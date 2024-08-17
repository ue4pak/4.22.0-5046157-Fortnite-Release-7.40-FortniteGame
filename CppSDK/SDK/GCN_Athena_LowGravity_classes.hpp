#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_LowGravity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// 0x0050 (0x0478 - 0x0428)
class AGCN_Athena_LowGravity_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 MyTargetCached;                                    // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpDelta;                                       // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetDelta;                                       // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LowGravityPSComponent;                             // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpireTellDelayTimer;                              // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationTellDuration;                            // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationSoundPeriod;                             // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpirationSoundTimer;                              // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDrawDistance;                                   // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Athena_LowGravity(int32 EntryPoint);
	void PlayExpirationSound();
	void ClearExpireTell();
	void ExpireTell();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Activated(class AActor* PlayerPawn_0);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_LowGravity_C">();
	}
	static class AGCN_Athena_LowGravity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_LowGravity_C>();
	}
};
static_assert(alignof(AGCN_Athena_LowGravity_C) == 0x000008, "Wrong alignment on AGCN_Athena_LowGravity_C");
static_assert(sizeof(AGCN_Athena_LowGravity_C) == 0x000478, "Wrong size on AGCN_Athena_LowGravity_C");
static_assert(offsetof(AGCN_Athena_LowGravity_C, UberGraphFrame) == 0x000428, "Member 'AGCN_Athena_LowGravity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, MyTargetCached) == 0x000430, "Member 'AGCN_Athena_LowGravity_C::MyTargetCached' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, InterpDelta) == 0x000438, "Member 'AGCN_Athena_LowGravity_C::InterpDelta' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, TargetDelta) == 0x00043C, "Member 'AGCN_Athena_LowGravity_C::TargetDelta' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, PlayerPawn) == 0x000440, "Member 'AGCN_Athena_LowGravity_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, LowGravityPSComponent) == 0x000448, "Member 'AGCN_Athena_LowGravity_C::LowGravityPSComponent' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpireTellDelayTimer) == 0x000450, "Member 'AGCN_Athena_LowGravity_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, Duration) == 0x000458, "Member 'AGCN_Athena_LowGravity_C::Duration' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpirationTellDuration) == 0x00045C, "Member 'AGCN_Athena_LowGravity_C::ExpirationTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, StartTime) == 0x000460, "Member 'AGCN_Athena_LowGravity_C::StartTime' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpirationSoundPeriod) == 0x000464, "Member 'AGCN_Athena_LowGravity_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpirationSoundTimer) == 0x000468, "Member 'AGCN_Athena_LowGravity_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, MaxDrawDistance) == 0x000470, "Member 'AGCN_Athena_LowGravity_C::MaxDrawDistance' has a wrong offset!");

}

