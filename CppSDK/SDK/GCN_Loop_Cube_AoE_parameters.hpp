#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Cube_AoE

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C.ExecuteUbergraph_GCN_Loop_Cube_AoE
// 0x02F0 (0x02F0 - 0x0000)
struct GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0040(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x00F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x0108(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TimeFromJumpApex_ReturnValue;             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue1;                         // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0160(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x0218(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x0228(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_252[0x2];                                      // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue1;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0264(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE) == 0x000008, "Wrong alignment on GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE");
static_assert(sizeof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE) == 0x0002F0, "Wrong size on GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, EntryPoint) == 0x000000, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_IsValid_ReturnValue1) == 0x000018, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000028, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_IsValid_ReturnValue2) == 0x000030, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000031, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, Temp_bool_Has_Been_Initd_Variable) == 0x000032, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, Temp_bool_IsClosed_Variable) == 0x000033, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_MyTarget1) == 0x000038, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_Parameters1) == 0x000040, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_ParticleComponents1) == 0x0000F8, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_AudioComponents1) == 0x000108, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_DeltaSeconds) == 0x000118, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Array_Get_Item) == 0x000120, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000128, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_TimeFromJumpApex_ReturnValue) == 0x000134, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_TimeFromJumpApex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_IsFalling_ReturnValue) == 0x000138, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_BreakVector_X) == 0x00013C, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_BreakVector_Y) == 0x000140, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_BreakVector_Z) == 0x000144, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Not_PreBool_ReturnValue) == 0x000148, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Abs_ReturnValue) == 0x00014C, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000150, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Abs_ReturnValue1) == 0x000154, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Abs_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_MyTarget) == 0x000158, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_Parameters) == 0x000160, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_ParticleComponents) == 0x000218, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_AudioComponents) == 0x000228, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_BurstCameraShakeInstance) == 0x000238, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_Event_BurstDecalInstance) == 0x000240, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_MapRangeClamped_ReturnValue) == 0x000248, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_SelectFloat_ReturnValue) == 0x00024C, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000250, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_BooleanOR_ReturnValue) == 0x000251, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000254, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_SelectFloat_ReturnValue1) == 0x000258, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_SelectFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_FInterpTo_ReturnValue) == 0x00025C, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000260, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE, K2Node_CustomEvent_Hit) == 0x000264, "Member 'GCN_Loop_Cube_AoE_C_ExecuteUbergraph_GCN_Loop_Cube_AoE::K2Node_CustomEvent_Hit' has a wrong offset!");

// Function GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C.TargetPlayerLanded
// 0x0088 (0x0088 - 0x0000)
struct GCN_Loop_Cube_AoE_C_TargetPlayerLanded final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCN_Loop_Cube_AoE_C_TargetPlayerLanded) == 0x000004, "Wrong alignment on GCN_Loop_Cube_AoE_C_TargetPlayerLanded");
static_assert(sizeof(GCN_Loop_Cube_AoE_C_TargetPlayerLanded) == 0x000088, "Wrong size on GCN_Loop_Cube_AoE_C_TargetPlayerLanded");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_TargetPlayerLanded, Hit) == 0x000000, "Member 'GCN_Loop_Cube_AoE_C_TargetPlayerLanded::Hit' has a wrong offset!");

// Function GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_Loop_Cube_AoE_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_Cube_AoE_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_Cube_AoE_C_OnRemoval");
static_assert(sizeof(GCN_Loop_Cube_AoE_C_OnRemoval) == 0x0000F0, "Wrong size on GCN_Loop_Cube_AoE_C_OnRemoval");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Loop_Cube_AoE_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCN_Loop_Cube_AoE_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_Cube_AoE_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Loop_Cube_AoE_C_ReceiveTick");
static_assert(sizeof(GCN_Loop_Cube_AoE_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Loop_Cube_AoE_C_ReceiveTick");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Loop_Cube_AoE_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Loop_Cube_AoE_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCN_Loop_Cube_AoE_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_Cube_AoE_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_Cube_AoE_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCN_Loop_Cube_AoE_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_Cube_AoE_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_Cube_AoE_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCN_Loop_Cube_AoE_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Cube_AoE_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCN_Loop_Cube_AoE_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}

