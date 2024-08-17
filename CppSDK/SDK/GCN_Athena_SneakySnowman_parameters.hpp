#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_SneakySnowman

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ExecuteUbergraph_GCN_Athena_SneakySnowman
// 0x02C0 (0x02C0 - 0x0000)
struct GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena1;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0040(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x00F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x0108(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0140(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x01F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x0208(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena2;     // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x3];                                      // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0234(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman) == 0x000008, "Wrong alignment on GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman");
static_assert(sizeof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman) == 0x0002C0, "Wrong size on GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, EntryPoint) == 0x000000, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000004, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000010, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn_Athena1) == 0x000020, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn_Athena1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_bSuccess1) == 0x000028, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_MyTarget1) == 0x000038, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_Parameters1) == 0x000040, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_ParticleComponents1) == 0x0000F8, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_AudioComponents1) == 0x000108, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_BurstCameraShakeInstance) == 0x000118, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_BurstDecalInstance) == 0x000120, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_MyTarget) == 0x000138, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_Parameters) == 0x000140, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_ParticleComponents) == 0x0001F8, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_Event_AudioComponents) == 0x000208, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_CreateDelegate_OutputDelegate1) == 0x000218, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn_Athena2) == 0x000228, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn_Athena2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, K2Node_DynamicCast_bSuccess2) == 0x000230, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000234, "Member 'GCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Athena_SneakySnowman_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCN_Athena_SneakySnowman_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Athena_SneakySnowman_C_OnLoopingStart");
static_assert(sizeof(GCN_Athena_SneakySnowman_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCN_Athena_SneakySnowman_C_OnLoopingStart");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Athena_SneakySnowman_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Athena_SneakySnowman_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_SneakySnowman_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_SneakySnowman_C_OnLoopingStart::AudioComponents' has a wrong offset!");

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_Athena_SneakySnowman_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_SneakySnowman_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Athena_SneakySnowman_C_OnRemoval");
static_assert(sizeof(GCN_Athena_SneakySnowman_C_OnRemoval) == 0x0000F0, "Wrong size on GCN_Athena_SneakySnowman_C_OnRemoval");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SneakySnowman_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Athena_SneakySnowman_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}

