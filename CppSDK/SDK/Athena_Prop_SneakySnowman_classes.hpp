#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_SneakySnowman

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C
// 0x00C8 (0x0CF8 - 0x0C30)
class AAthena_Prop_SneakySnowman_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      OverlapCheck;                                      // 0x0C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovementComponent;                       // 0x0C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bSimulationRunning;                                // 0x0C48(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_C49[0x7];                                      // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ApplyEnemySnowman;                              // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         ShouldSnowmanEnemies;                              // 0x0C58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickupAthena*                      PickupAthena;                                      // 0x0C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Ignored_Actors;                                    // 0x0C80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<EObjectTypeQuery>                      LineTraceObjects;                                  // 0x0C90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          DestroyAfterHit;                                   // 0x0CA0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA1[0x3];                                      // 0x0CA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LandedLocation;                                    // 0x0CA4(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         InitialGravityScale;                               // 0x0CB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GamestateLoaded;                                   // 0x0CB4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB5[0x3];                                      // 0x0CB5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      ObjectTypes;                                       // 0x0CB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                StopLocation;                                      // 0x0CC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD4[0x4];                                      // 0x0CD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         FallHeightToDestroy;                               // 0x0CD8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Athena_Prop_SneakySnowman(int32 EntryPoint);
	void ResetDistanceCheck();
	void WorldPropSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void WobbleAnims();
	void PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin);
	void BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void RestartSimulating();
	void BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void UserConstructionScript();
	void ResetSimulatedComponents();
	void OnRep_bSimulationRunning();
	void OnRep_LandedLocation();
	void ForceSetLocationOnLanding();
	void TraceStartAndEnd(struct FVector* Start, struct FVector* End);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_SneakySnowman_C">();
	}
	static class AAthena_Prop_SneakySnowman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_SneakySnowman_C>();
	}
};
static_assert(alignof(AAthena_Prop_SneakySnowman_C) == 0x000008, "Wrong alignment on AAthena_Prop_SneakySnowman_C");
static_assert(sizeof(AAthena_Prop_SneakySnowman_C) == 0x000CF8, "Wrong size on AAthena_Prop_SneakySnowman_C");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, UberGraphFrame) == 0x000C30, "Member 'AAthena_Prop_SneakySnowman_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, OverlapCheck) == 0x000C38, "Member 'AAthena_Prop_SneakySnowman_C::OverlapCheck' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, ProjectileMovementComponent) == 0x000C40, "Member 'AAthena_Prop_SneakySnowman_C::ProjectileMovementComponent' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, bSimulationRunning) == 0x000C48, "Member 'AAthena_Prop_SneakySnowman_C::bSimulationRunning' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, GE_ApplyEnemySnowman) == 0x000C50, "Member 'AAthena_Prop_SneakySnowman_C::GE_ApplyEnemySnowman' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, ShouldSnowmanEnemies) == 0x000C58, "Member 'AAthena_Prop_SneakySnowman_C::ShouldSnowmanEnemies' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, PickupAthena) == 0x000C78, "Member 'AAthena_Prop_SneakySnowman_C::PickupAthena' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, Ignored_Actors) == 0x000C80, "Member 'AAthena_Prop_SneakySnowman_C::Ignored_Actors' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, LineTraceObjects) == 0x000C90, "Member 'AAthena_Prop_SneakySnowman_C::LineTraceObjects' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, DestroyAfterHit) == 0x000CA0, "Member 'AAthena_Prop_SneakySnowman_C::DestroyAfterHit' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, LandedLocation) == 0x000CA4, "Member 'AAthena_Prop_SneakySnowman_C::LandedLocation' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, InitialGravityScale) == 0x000CB0, "Member 'AAthena_Prop_SneakySnowman_C::InitialGravityScale' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, GamestateLoaded) == 0x000CB4, "Member 'AAthena_Prop_SneakySnowman_C::GamestateLoaded' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, ObjectTypes) == 0x000CB8, "Member 'AAthena_Prop_SneakySnowman_C::ObjectTypes' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, StopLocation) == 0x000CC8, "Member 'AAthena_Prop_SneakySnowman_C::StopLocation' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SneakySnowman_C, FallHeightToDestroy) == 0x000CD8, "Member 'AAthena_Prop_SneakySnowman_C::FallHeightToDestroy' has a wrong offset!");

}

