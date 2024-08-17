#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftZapPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_RiftZapPlayer.GCN_RiftZapPlayer_C.OnExecute
// 0x0160 (0x0160 - 0x0000)
struct GCN_RiftZapPlayer_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0xF];                                       // 0x00C1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_EffectContextGetEffectCauser_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_DtB_LightningZap_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_DtB_LightningZap_C*                  K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_RiftZapPlayer_C_OnExecute) == 0x000010, "Wrong alignment on GCN_RiftZapPlayer_C_OnExecute");
static_assert(sizeof(GCN_RiftZapPlayer_C_OnExecute) == 0x000160, "Wrong size on GCN_RiftZapPlayer_C_OnExecute");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_RiftZapPlayer_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_RiftZapPlayer_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_RiftZapPlayer_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000100, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_EffectContextGetEffectCauser_ReturnValue) == 0x000108, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_EffectContextGetEffectCauser_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_FinishSpawningActor_ReturnValue) == 0x000110, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000118, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue) == 0x000124, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x000130, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x000138, "Member 'GCN_RiftZapPlayer_C_OnExecute::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'GCN_RiftZapPlayer_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x000141, "Member 'GCN_RiftZapPlayer_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap) == 0x000148, "Member 'GCN_RiftZapPlayer_C_OnExecute::K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap' has a wrong offset!");
static_assert(offsetof(GCN_RiftZapPlayer_C_OnExecute, K2Node_DynamicCast_bSuccess1) == 0x000150, "Member 'GCN_RiftZapPlayer_C_OnExecute::K2Node_DynamicCast_bSuccess1' has a wrong offset!");

}

