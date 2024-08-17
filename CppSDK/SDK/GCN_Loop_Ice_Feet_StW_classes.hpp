#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Ice_Feet_StW

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C
// 0x00A8 (0x0928 - 0x0880)
class AGCN_Loop_Ice_Feet_StW_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Duration;                                          // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationTellDuration;                            // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        TargetPlayer;                                      // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpireTellDelayTimer;                              // 0x0898(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpirationSoundTimer;                              // 0x08A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationSoundPeriod;                             // 0x08A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC[0x4];                                      // 0x08AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       SpawnedEmitters;                                   // 0x08B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Crack;                                             // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C4[0x4];                                      // 0x08C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         DataTellDuration;                                  // 0x08C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             SC_Footstep_Local;                                 // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_Footstep_Remote;                                // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_Collision;                                      // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                SpawnedAudioComps;                                 // 0x0908(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                             SC_OnJumpOrBeginFalling;                           // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_OnLand;                                         // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_StW(int32 EntryPoint);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void On_Target_Pawn_Landed(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void On_Player_Step();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void ExpireWarningTick();
	void ClearExpireTell();
	void BeginExpireTell();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Feet_StW_C">();
	}
	static class AGCN_Loop_Ice_Feet_StW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Feet_StW_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Feet_StW_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Feet_StW_C");
static_assert(sizeof(AGCN_Loop_Ice_Feet_StW_C) == 0x000928, "Wrong size on AGCN_Loop_Ice_Feet_StW_C");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_Ice_Feet_StW_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, Duration) == 0x000888, "Member 'AGCN_Loop_Ice_Feet_StW_C::Duration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, ExpirationTellDuration) == 0x00088C, "Member 'AGCN_Loop_Ice_Feet_StW_C::ExpirationTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, TargetPlayer) == 0x000890, "Member 'AGCN_Loop_Ice_Feet_StW_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, ExpireTellDelayTimer) == 0x000898, "Member 'AGCN_Loop_Ice_Feet_StW_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, ExpirationSoundTimer) == 0x0008A0, "Member 'AGCN_Loop_Ice_Feet_StW_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, ExpirationSoundPeriod) == 0x0008A8, "Member 'AGCN_Loop_Ice_Feet_StW_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SpawnedEmitters) == 0x0008B0, "Member 'AGCN_Loop_Ice_Feet_StW_C::SpawnedEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, Crack) == 0x0008C0, "Member 'AGCN_Loop_Ice_Feet_StW_C::Crack' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, DataTellDuration) == 0x0008C8, "Member 'AGCN_Loop_Ice_Feet_StW_C::DataTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SC_Footstep_Local) == 0x0008E8, "Member 'AGCN_Loop_Ice_Feet_StW_C::SC_Footstep_Local' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SC_Footstep_Remote) == 0x0008F0, "Member 'AGCN_Loop_Ice_Feet_StW_C::SC_Footstep_Remote' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SC_Collision) == 0x0008F8, "Member 'AGCN_Loop_Ice_Feet_StW_C::SC_Collision' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, CollisionAudioComp) == 0x000900, "Member 'AGCN_Loop_Ice_Feet_StW_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SpawnedAudioComps) == 0x000908, "Member 'AGCN_Loop_Ice_Feet_StW_C::SpawnedAudioComps' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SC_OnJumpOrBeginFalling) == 0x000918, "Member 'AGCN_Loop_Ice_Feet_StW_C::SC_OnJumpOrBeginFalling' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_StW_C, SC_OnLand) == 0x000920, "Member 'AGCN_Loop_Ice_Feet_StW_C::SC_OnLand' has a wrong offset!");

}

