#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftStaminaDrain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct GCN_RiftStaminaDrain_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_RiftStaminaDrain_C_UserConstructionScript) == 0x000008, "Wrong alignment on GCN_RiftStaminaDrain_C_UserConstructionScript");
static_assert(sizeof(GCN_RiftStaminaDrain_C_UserConstructionScript) == 0x000010, "Wrong size on GCN_RiftStaminaDrain_C_UserConstructionScript");
static_assert(offsetof(GCN_RiftStaminaDrain_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'GCN_RiftStaminaDrain_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000008, "Member 'GCN_RiftStaminaDrain_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate
// 0x0120 (0x0120 - 0x0000)
struct GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_EffectContextGetEffectCauser_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_DtB_FloatingRift_C*                  K2Node_DynamicCast_AsB_Dt_B_Floating_Rift;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x00F4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue1;    // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate) == 0x000008, "Wrong alignment on GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate");
static_assert(sizeof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate) == 0x000120, "Wrong size on GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, Parameters) == 0x000008, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_EffectContextGetEffectCauser_ReturnValue) == 0x0000C0, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_EffectContextGetEffectCauser_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, K2Node_DynamicCast_AsB_Dt_B_Floating_Rift) == 0x0000D0, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::K2Node_DynamicCast_AsB_Dt_B_Floating_Rift' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000DC, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000E8, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x0000F4, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_Add_VectorVector_ReturnValue) == 0x000104, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate, CallFunc_Conv_VectorToLinearColor_ReturnValue1) == 0x000110, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate::CallFunc_Conv_VectorToLinearColor_ReturnValue1' has a wrong offset!");

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate
// 0x00C0 (0x00C0 - 0x0000)
struct GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate) == 0x000008, "Wrong alignment on GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate");
static_assert(sizeof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate) == 0x0000C0, "Wrong size on GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate, Parameters) == 0x000008, "Member 'GCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate::Parameters' has a wrong offset!");

}

