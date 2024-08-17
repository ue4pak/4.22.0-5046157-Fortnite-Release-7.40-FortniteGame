#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_FragGrenade_WithTrajectory

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_CommandoActiveAbility_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// 0x03C8 (0x0E00 - 0x0A38)
class UGA_Commando_FragGrenade_WithTrajectory_C final : public UGAT_CommandoActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C; // 0x0A38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0A40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Prj_Grenade;                                       // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMin;                                   // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMax;                                   // 0x0A5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GravityScale;                                      // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A64[0x4];                                      // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             GrenadeSound;                                      // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ClusterBomb;                                    // 0x0A70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxClusterGrenades;                                // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A94[0x4];                                      // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Prj_Cluster;                                       // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterSpeedMax;                                   // 0x0AA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA4[0x4];                                      // 0x0AA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_BiggerIsBetter;                                 // 0x0AA8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           T_GEContainer_Explosion;                           // 0x0AC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_IncreasedRadius;                                // 0x0AD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       EC_ReturnedEffect;                                 // 0x0AD8(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ExplosionRadius;                                   // 0x0B58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdditionalThrowAngle;                              // 0x0B5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterMinPitch;                                   // 0x0B60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterMaxPitch;                                   // 0x0B64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_ClusterExplosion;                               // 0x0B68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ClusterSpeedMin;                                   // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B74[0x4];                                      // 0x0B74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortFeedbackHandle                    GrenadeDialogFeedback;                             // 0x0B78(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                  TC_KeepOut;                                        // 0x0B90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_KeepOut;                                        // 0x0BB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AOE_KeepOut;                                       // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BiggerIsBetter;                                    // 0x0BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ClusterBomb;                                       // 0x0BC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          KeepOut;                                           // 0x0BC2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC3[0x5];                                      // 0x0BC3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_GrenadeAmmo;                                    // 0x0BC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_GrenadeCost;                                    // 0x0BE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_GrenadeDamage;                                  // 0x0C08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          GrenadeAmmo;                                       // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GrenadeCost;                                       // 0x0C29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GrenadeDamage;                                     // 0x0C2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2B[0x1];                                      // 0x0C2B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GrenadeAmmoUpgrade;                                // 0x0C2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GrenadeAmmoDefault;                                // 0x0C30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxGrenadeAmmo;                                    // 0x0C34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusTooltip;                            // 0x0C38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusDefault;                            // 0x0C3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionRadiusUpgrade;                            // 0x0C40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C44[0x4];                                      // 0x0C44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_PlasmaGrenades;                                 // 0x0C48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PlasmaGrenades;                                    // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C69[0x7];                                      // 0x0C69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_Flashbang;                                      // 0x0C70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Flashbang;                                         // 0x0C90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C91[0x3];                                      // 0x0C91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0C94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DummyShouldBounce;                                 // 0x0CA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA9[0x3];                                      // 0x0CA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBounciness;                                   // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyFriction;                                     // 0x0CB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrajectoryUpdateInterval;                          // 0x0CB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0CB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0CBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0CC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InThrowWindup;                                     // 0x0CC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CC9[0x7];                                      // 0x0CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo        ThrowWindupMontage;                                // 0x0CE0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AbilityKeyPressed;                                 // 0x0D38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D39[0x3];                                      // 0x0D39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSpeedPitch;                                     // 0x0D3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSpeedPitch;                                     // 0x0D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0D44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTrajectoryBounces;                              // 0x0D48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4C[0x4];                                      // 0x0D4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_Tactical_Clusterbomb;                           // 0x0D50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Tactical_Clusterbomb;                              // 0x0D70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D71[0x3];                                      // 0x0D71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EC_ClusterExplosion_Tactical;                      // 0x0D74(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         F_FrameDelay;                                      // 0x0D7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BiggerIsBetter_T01;                                // 0x0D80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BiggerIsBetter_T02;                                // 0x0D81(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ClusterBomb_T01;                                   // 0x0D82(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ClusterBomb_T02;                                   // 0x0D83(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           T_BiggerIsBetter_T01;                              // 0x0D84(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_BiggerIsBetter_T02;                              // 0x0D8C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_ClusterBomb_T01;                                 // 0x0D94(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_ClusterBomb_T02;                                 // 0x0D9C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA4[0x4];                                      // 0x0DA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         SF_BiggerIsBetterRadius_T01;                       // 0x0DA8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           ThrowMontage;                                      // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Event_Activate;                                  // 0x0DD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Event_Deactivate;                                // 0x0DD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         SF_BiggerIsBetterRadius_T02;                       // 0x0DE0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32 EntryPoint);
	void K2_ActivateAbility();
	void ServerSpawnProjectile();
	void TossGrenade();
	void CleanupTrajectoryDisplay();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void SetupDummyProjectile();
	void UpdateTrajectorySpline();
	void SpawnFragGrenade(class UClass* ProjectileClass_0, struct FVector& SpawnLocation, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale_0);
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);

	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot) const;
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Commando_FragGrenade_WithTrajectory_C">();
	}
	static class UGA_Commando_FragGrenade_WithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Commando_FragGrenade_WithTrajectory_C>();
	}
};
static_assert(alignof(UGA_Commando_FragGrenade_WithTrajectory_C) == 0x000008, "Wrong alignment on UGA_Commando_FragGrenade_WithTrajectory_C");
static_assert(sizeof(UGA_Commando_FragGrenade_WithTrajectory_C) == 0x000E00, "Wrong size on UGA_Commando_FragGrenade_WithTrajectory_C");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C) == 0x000A38, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::UberGraphFrame_GA_Commando_FragGrenade_WithTrajectory_C' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EventActivation) == 0x000A40, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EventComplete) == 0x000A48, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Prj_Grenade) == 0x000A50, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Prj_Grenade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSpeedMin) == 0x000A58, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSpeedMin' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSpeedMax) == 0x000A5C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSpeedMax' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GravityScale) == 0x000A60, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeSound) == 0x000A68, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeSound' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_ClusterBomb) == 0x000A70, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_ClusterBomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxClusterGrenades) == 0x000A90, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxClusterGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Prj_Cluster) == 0x000A98, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Prj_Cluster' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterSpeedMax) == 0x000AA0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterSpeedMax' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_BiggerIsBetter) == 0x000AA8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_BiggerIsBetter' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_GEContainer_Explosion) == 0x000AC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_GEContainer_Explosion' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_IncreasedRadius) == 0x000AD0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_IncreasedRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_ReturnedEffect) == 0x000AD8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_ReturnedEffect' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadius) == 0x000B58, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AdditionalThrowAngle) == 0x000B5C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterMinPitch) == 0x000B60, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterMinPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterMaxPitch) == 0x000B64, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterMaxPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_ClusterExplosion) == 0x000B68, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_ClusterExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterSpeedMin) == 0x000B70, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterSpeedMin' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeDialogFeedback) == 0x000B78, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeDialogFeedback' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_KeepOut) == 0x000B90, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_KeepOut) == 0x000BB0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AOE_KeepOut) == 0x000BB8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AOE_KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, BiggerIsBetter) == 0x000BC0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::BiggerIsBetter' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterBomb) == 0x000BC1, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterBomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, KeepOut) == 0x000BC2, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::KeepOut' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeAmmo) == 0x000BC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeCost) == 0x000BE8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeCost' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_GrenadeDamage) == 0x000C08, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_GrenadeDamage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmo) == 0x000C28, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeCost) == 0x000C29, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeCost' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeDamage) == 0x000C2A, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeDamage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmoUpgrade) == 0x000C2C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmoUpgrade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeAmmoDefault) == 0x000C30, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeAmmoDefault' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxGrenadeAmmo) == 0x000C34, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxGrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusTooltip) == 0x000C38, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusTooltip' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusDefault) == 0x000C3C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusDefault' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ExplosionRadiusUpgrade) == 0x000C40, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ExplosionRadiusUpgrade' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_PlasmaGrenades) == 0x000C48, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_PlasmaGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, PlasmaGrenades) == 0x000C68, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::PlasmaGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_Flashbang) == 0x000C70, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_Flashbang' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Flashbang) == 0x000C90, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Flashbang' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, GrenadeTargetingOriginOffset) == 0x000C94, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyProjectile) == 0x000CA0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyShouldBounce) == 0x000CA8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyShouldBounce' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyBounciness) == 0x000CAC, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyBounciness' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyFriction) == 0x000CB0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyFriction' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryUpdateInterval) == 0x000CB4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyMaxSpeed) == 0x000CB8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyGravity) == 0x000CBC, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyTimeStep) == 0x000CC0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, DummyExtent) == 0x000CC4, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, InThrowWindup) == 0x000CC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryIndicator) == 0x000CD0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TrajectoryIndicatorClass) == 0x000CD8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ThrowWindupMontage) == 0x000CE0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ThrowWindupMontage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, AbilityKeyPressed) == 0x000D38, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxSpeedPitch) == 0x000D3C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MinSpeedPitch) == 0x000D40, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MinSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxTossPitch) == 0x000D44, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, MaxTrajectoryBounces) == 0x000D48, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::MaxTrajectoryBounces' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, TC_Tactical_Clusterbomb) == 0x000D50, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::TC_Tactical_Clusterbomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, Tactical_Clusterbomb) == 0x000D70, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::Tactical_Clusterbomb' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, EC_ClusterExplosion_Tactical) == 0x000D74, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::EC_ClusterExplosion_Tactical' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, F_FrameDelay) == 0x000D7C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::F_FrameDelay' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, BiggerIsBetter_T01) == 0x000D80, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::BiggerIsBetter_T01' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, BiggerIsBetter_T02) == 0x000D81, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::BiggerIsBetter_T02' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterBomb_T01) == 0x000D82, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterBomb_T01' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ClusterBomb_T02) == 0x000D83, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ClusterBomb_T02' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_BiggerIsBetter_T01) == 0x000D84, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_BiggerIsBetter_T01' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_BiggerIsBetter_T02) == 0x000D8C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_BiggerIsBetter_T02' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_ClusterBomb_T01) == 0x000D94, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_ClusterBomb_T01' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_ClusterBomb_T02) == 0x000D9C, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_ClusterBomb_T02' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, SF_BiggerIsBetterRadius_T01) == 0x000DA8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::SF_BiggerIsBetterRadius_T01' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, ThrowMontage) == 0x000DC8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_Event_Activate) == 0x000DD0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_Event_Activate' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, T_Event_Deactivate) == 0x000DD8, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::T_Event_Deactivate' has a wrong offset!");
static_assert(offsetof(UGA_Commando_FragGrenade_WithTrajectory_C, SF_BiggerIsBetterRadius_T02) == 0x000DE0, "Member 'UGA_Commando_FragGrenade_WithTrajectory_C::SF_BiggerIsBetterRadius_T02' has a wrong offset!");

}

