#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_BoostJumpPack_Boost

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_BoostJumpPack_Boost.GCN_BoostJumpPack_Boost_C.OnStartParticleSystemSpawned
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned) == 0x0000E0, "Wrong size on GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000C0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000D0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000D9, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

}

