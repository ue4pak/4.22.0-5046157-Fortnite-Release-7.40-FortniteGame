#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_TNT_Fuse_Projectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C
// 0x00C8 (0x0948 - 0x0880)
class AGCL_TNT_Fuse_Projectile_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Stage_2_Fuse_Death_Warning_864F89AB4908B84538EE68B4DF0D26CE; // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Stage_2_Fuse__Direction_864F89AB4908B84538EE68B4DF0D26CE; // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88D[0x3];                                      // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Stage_2_Fuse;                                      // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Stage_1_Fuse_Death_Warning_2FFFDFE8431CAC993AA46387580F7A84; // 0x0898(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Stage_1_Fuse__Direction_2FFFDFE8431CAC993AA46387580F7A84; // 0x089C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D[0x3];                                      // 0x089D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Stage_1_Fuse;                                      // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Movement_Material_Flash_74AFF49A4CEE87DDE4FCD785AA920130; // 0x08A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Movement_Lerp_Control_74AFF49A4CEE87DDE4FCD785AA920130; // 0x08AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fuse_Movement__Direction_74AFF49A4CEE87DDE4FCD785AA920130; // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B1[0x7];                                      // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fuse_Movement;                                     // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseDuration;                                      // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseElapsedTime;                                   // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Prj_Athena_TNT_C*                    Projectile;                                        // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Death_FX;                                          // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Flare_Size;                                        // 0x08D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSysSplineLoca;                                    // 0x08E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PSysSplineRot;                                     // 0x08F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         PSys_Opacity;                                      // 0x08FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSys_Color;                                        // 0x0900(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Psys_Size;                                         // 0x090C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LoopingParticle;                                   // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Looping_Audio;                                     // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        DeathAudio;                                        // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Change__;                                     // 0x0930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Twond_Stage_Fuse_Duration;                         // 0x0934(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Emissive_Color;                                    // 0x0938(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCL_TNT_Fuse_Projectile(int32 EntryPoint);
	void Control_Stage_2_Fuse_Particles();
	void Control_Stage_1_Fuse_Particles();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void Stage_2_Fuse__UpdateFunc();
	void Stage_2_Fuse__FinishedFunc();
	void Stage_1_Fuse__UpdateFunc();
	void Stage_1_Fuse__FinishedFunc();
	void Fuse_Movement__UpdateFunc();
	void Fuse_Movement__FinishedFunc();
	void UserConstructionScript();
	void Spline_Setup(float Alpha, struct FVector* Spline_Location);
	void Warning_System_Setup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_TNT_Fuse_Projectile_C">();
	}
	static class AGCL_TNT_Fuse_Projectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_TNT_Fuse_Projectile_C>();
	}
};
static_assert(alignof(AGCL_TNT_Fuse_Projectile_C) == 0x000008, "Wrong alignment on AGCL_TNT_Fuse_Projectile_C");
static_assert(sizeof(AGCL_TNT_Fuse_Projectile_C) == 0x000948, "Wrong size on AGCL_TNT_Fuse_Projectile_C");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, UberGraphFrame) == 0x000880, "Member 'AGCL_TNT_Fuse_Projectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_2_Fuse_Death_Warning_864F89AB4908B84538EE68B4DF0D26CE) == 0x000888, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_2_Fuse_Death_Warning_864F89AB4908B84538EE68B4DF0D26CE' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_2_Fuse__Direction_864F89AB4908B84538EE68B4DF0D26CE) == 0x00088C, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_2_Fuse__Direction_864F89AB4908B84538EE68B4DF0D26CE' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_2_Fuse) == 0x000890, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_2_Fuse' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_1_Fuse_Death_Warning_2FFFDFE8431CAC993AA46387580F7A84) == 0x000898, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_1_Fuse_Death_Warning_2FFFDFE8431CAC993AA46387580F7A84' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_1_Fuse__Direction_2FFFDFE8431CAC993AA46387580F7A84) == 0x00089C, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_1_Fuse__Direction_2FFFDFE8431CAC993AA46387580F7A84' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Stage_1_Fuse) == 0x0008A0, "Member 'AGCL_TNT_Fuse_Projectile_C::Stage_1_Fuse' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Fuse_Movement_Material_Flash_74AFF49A4CEE87DDE4FCD785AA920130) == 0x0008A8, "Member 'AGCL_TNT_Fuse_Projectile_C::Fuse_Movement_Material_Flash_74AFF49A4CEE87DDE4FCD785AA920130' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Fuse_Movement_Lerp_Control_74AFF49A4CEE87DDE4FCD785AA920130) == 0x0008AC, "Member 'AGCL_TNT_Fuse_Projectile_C::Fuse_Movement_Lerp_Control_74AFF49A4CEE87DDE4FCD785AA920130' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Fuse_Movement__Direction_74AFF49A4CEE87DDE4FCD785AA920130) == 0x0008B0, "Member 'AGCL_TNT_Fuse_Projectile_C::Fuse_Movement__Direction_74AFF49A4CEE87DDE4FCD785AA920130' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Fuse_Movement) == 0x0008B8, "Member 'AGCL_TNT_Fuse_Projectile_C::Fuse_Movement' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, FuseDuration) == 0x0008C0, "Member 'AGCL_TNT_Fuse_Projectile_C::FuseDuration' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, FuseElapsedTime) == 0x0008C4, "Member 'AGCL_TNT_Fuse_Projectile_C::FuseElapsedTime' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Projectile) == 0x0008C8, "Member 'AGCL_TNT_Fuse_Projectile_C::Projectile' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Death_FX) == 0x0008D0, "Member 'AGCL_TNT_Fuse_Projectile_C::Death_FX' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Flare_Size) == 0x0008D8, "Member 'AGCL_TNT_Fuse_Projectile_C::Flare_Size' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, PSysSplineLoca) == 0x0008E4, "Member 'AGCL_TNT_Fuse_Projectile_C::PSysSplineLoca' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, PSysSplineRot) == 0x0008F0, "Member 'AGCL_TNT_Fuse_Projectile_C::PSysSplineRot' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, PSys_Opacity) == 0x0008FC, "Member 'AGCL_TNT_Fuse_Projectile_C::PSys_Opacity' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, PSys_Color) == 0x000900, "Member 'AGCL_TNT_Fuse_Projectile_C::PSys_Color' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Psys_Size) == 0x00090C, "Member 'AGCL_TNT_Fuse_Projectile_C::Psys_Size' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, LoopingParticle) == 0x000918, "Member 'AGCL_TNT_Fuse_Projectile_C::LoopingParticle' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Looping_Audio) == 0x000920, "Member 'AGCL_TNT_Fuse_Projectile_C::Looping_Audio' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, DeathAudio) == 0x000928, "Member 'AGCL_TNT_Fuse_Projectile_C::DeathAudio' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Fuse_Change__) == 0x000930, "Member 'AGCL_TNT_Fuse_Projectile_C::Fuse_Change__' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Twond_Stage_Fuse_Duration) == 0x000934, "Member 'AGCL_TNT_Fuse_Projectile_C::Twond_Stage_Fuse_Duration' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Projectile_C, Emissive_Color) == 0x000938, "Member 'AGCL_TNT_Fuse_Projectile_C::Emissive_Color' has a wrong offset!");

}

