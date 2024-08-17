#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Ice_Feet_Environmental

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C
// 0x0060 (0x08E0 - 0x0880)
class AGCN_Loop_Ice_Feet_Environmental_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        TargetPlayer;                                      // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       SpawnedEmitters;                                   // 0x0890(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                             SC_Footstep_Local;                                 // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_Footstep_Remote;                                // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_Collision;                                      // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                SpawnedAudioComps;                                 // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                             SC_OnJumpOrBeginFalling;                           // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SC_OnLand;                                         // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int32 EntryPoint);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void On_Target_Pawn_Landed(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void On_Player_Step();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Feet_Environmental_C">();
	}
	static class AGCN_Loop_Ice_Feet_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Feet_Environmental_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Feet_Environmental_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Feet_Environmental_C");
static_assert(sizeof(AGCN_Loop_Ice_Feet_Environmental_C) == 0x0008E0, "Wrong size on AGCN_Loop_Ice_Feet_Environmental_C");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, TargetPlayer) == 0x000888, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SpawnedEmitters) == 0x000890, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SpawnedEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SC_Footstep_Local) == 0x0008A0, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SC_Footstep_Local' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SC_Footstep_Remote) == 0x0008A8, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SC_Footstep_Remote' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SC_Collision) == 0x0008B0, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SC_Collision' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, CollisionAudioComp) == 0x0008B8, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SpawnedAudioComps) == 0x0008C0, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SpawnedAudioComps' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SC_OnJumpOrBeginFalling) == 0x0008D0, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SC_OnJumpOrBeginFalling' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SC_OnLand) == 0x0008D8, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SC_OnLand' has a wrong offset!");

}

