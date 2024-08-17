#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeimosRift

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C
// 0x03D0 (0x0BE0 - 0x0810)
class ABP_DeimosRift_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0810(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Rift_IdleFog;                                    // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CubeRunes;                                      // 0x0820(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Deimos_Spawner_Loop_Sound;                         // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FogMesh;                                           // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          NoBuildZone;                                       // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Deimos_Rift_Dying;                               // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CosmeticBaseMesh;                                  // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Deimos_RiftSpawn_DamageState;                    // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeMesh;                                          // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaskedMID;                                         // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               OpaqueMID;                                         // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CubeMat;                                           // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CubeMatLOD1;                                       // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     BaseMaterial;                                      // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Destroyed;                                      // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CueParamsCreate;                                   // 0x0898(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayCueParameters                 CueParamsChargeUp;                                 // 0x0950(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayCueParameters                 CueParamsSpawnFiend;                               // 0x0A08(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayCueParameters                 CueParamsRiftSpawn;                                // 0x0AC0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         DamageState;                                       // 0x0B78(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7C[0x4];                                      // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     BaseLODMaterial;                                   // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     BaseMeshMat;                                       // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_StageOneExplode;                             // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_StageTwoExplode;                             // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_DeimosSpawnerLoop;                           // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_StageThreeBuildup;                           // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DamagePerSpawn;                                 // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DamageReduction;                                // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoSpawnEffects;                                    // 0x0BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC1[0x3];                                      // 0x0BC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnAnimDuration;                                 // 0x0BC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           FiendSpawnFXGC;                                    // 0x0BC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ChargeUpFXGC;                                      // 0x0BD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SpawnFXGC;                                         // 0x0BD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeimosRift(int32 EntryPoint);
	void SpawnEffects();
	void TestDynamicRiftSpawn();
	void OnBuildingRiftSpawnedAI_Bind();
	void BP_Cosmetic_ShouldDie();
	void OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveBeginPlay();
	void OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI);
	void BP_Cosmetic_Idle();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_RampUp();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void UserConstructionScript();
	void OnRep_DamageState();
	void FlashCubeMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeimosRift_C">();
	}
	static class ABP_DeimosRift_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeimosRift_C>();
	}
};
static_assert(alignof(ABP_DeimosRift_C) == 0x000008, "Wrong alignment on ABP_DeimosRift_C");
static_assert(sizeof(ABP_DeimosRift_C) == 0x000BE0, "Wrong size on ABP_DeimosRift_C");
static_assert(offsetof(ABP_DeimosRift_C, UberGraphFrame) == 0x000810, "Member 'ABP_DeimosRift_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, P_Rift_IdleFog) == 0x000818, "Member 'ABP_DeimosRift_C::P_Rift_IdleFog' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, SM_CubeRunes) == 0x000820, "Member 'ABP_DeimosRift_C::SM_CubeRunes' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, Deimos_Spawner_Loop_Sound) == 0x000828, "Member 'ABP_DeimosRift_C::Deimos_Spawner_Loop_Sound' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, FogMesh) == 0x000830, "Member 'ABP_DeimosRift_C::FogMesh' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, NoBuildZone) == 0x000838, "Member 'ABP_DeimosRift_C::NoBuildZone' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, P_Deimos_Rift_Dying) == 0x000840, "Member 'ABP_DeimosRift_C::P_Deimos_Rift_Dying' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CosmeticBaseMesh) == 0x000848, "Member 'ABP_DeimosRift_C::CosmeticBaseMesh' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, P_Deimos_RiftSpawn_DamageState) == 0x000850, "Member 'ABP_DeimosRift_C::P_Deimos_RiftSpawn_DamageState' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CubeMesh) == 0x000858, "Member 'ABP_DeimosRift_C::CubeMesh' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, PointLight) == 0x000860, "Member 'ABP_DeimosRift_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, MaskedMID) == 0x000868, "Member 'ABP_DeimosRift_C::MaskedMID' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, OpaqueMID) == 0x000870, "Member 'ABP_DeimosRift_C::OpaqueMID' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CubeMat) == 0x000878, "Member 'ABP_DeimosRift_C::CubeMat' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CubeMatLOD1) == 0x000880, "Member 'ABP_DeimosRift_C::CubeMatLOD1' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, BaseMaterial) == 0x000888, "Member 'ABP_DeimosRift_C::BaseMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, GE_Destroyed) == 0x000890, "Member 'ABP_DeimosRift_C::GE_Destroyed' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CueParamsCreate) == 0x000898, "Member 'ABP_DeimosRift_C::CueParamsCreate' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CueParamsChargeUp) == 0x000950, "Member 'ABP_DeimosRift_C::CueParamsChargeUp' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CueParamsSpawnFiend) == 0x000A08, "Member 'ABP_DeimosRift_C::CueParamsSpawnFiend' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, CueParamsRiftSpawn) == 0x000AC0, "Member 'ABP_DeimosRift_C::CueParamsRiftSpawn' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, DamageState) == 0x000B78, "Member 'ABP_DeimosRift_C::DamageState' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, BaseLODMaterial) == 0x000B80, "Member 'ABP_DeimosRift_C::BaseLODMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, BaseMeshMat) == 0x000B88, "Member 'ABP_DeimosRift_C::BaseMeshMat' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, Sound_StageOneExplode) == 0x000B90, "Member 'ABP_DeimosRift_C::Sound_StageOneExplode' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, Sound_StageTwoExplode) == 0x000B98, "Member 'ABP_DeimosRift_C::Sound_StageTwoExplode' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, Sound_DeimosSpawnerLoop) == 0x000BA0, "Member 'ABP_DeimosRift_C::Sound_DeimosSpawnerLoop' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, Sound_StageThreeBuildup) == 0x000BA8, "Member 'ABP_DeimosRift_C::Sound_StageThreeBuildup' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, GE_DamagePerSpawn) == 0x000BB0, "Member 'ABP_DeimosRift_C::GE_DamagePerSpawn' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, GE_DamageReduction) == 0x000BB8, "Member 'ABP_DeimosRift_C::GE_DamageReduction' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, DoSpawnEffects) == 0x000BC0, "Member 'ABP_DeimosRift_C::DoSpawnEffects' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, SpawnAnimDuration) == 0x000BC4, "Member 'ABP_DeimosRift_C::SpawnAnimDuration' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, FiendSpawnFXGC) == 0x000BC8, "Member 'ABP_DeimosRift_C::FiendSpawnFXGC' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, ChargeUpFXGC) == 0x000BD0, "Member 'ABP_DeimosRift_C::ChargeUpFXGC' has a wrong offset!");
static_assert(offsetof(ABP_DeimosRift_C, SpawnFXGC) == 0x000BD8, "Member 'ABP_DeimosRift_C::SpawnFXGC' has a wrong offset!");

}

