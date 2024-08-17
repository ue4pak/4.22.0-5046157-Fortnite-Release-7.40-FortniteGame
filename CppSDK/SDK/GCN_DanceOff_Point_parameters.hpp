#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_DanceOff_Point

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_DanceOff_Point.GCN_DanceOff_Point_C.OnBurst
// 0x0138 (0x0138 - 0x0000)
struct GCN_DanceOff_Point_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_DanceOff_Point_C_OnBurst) == 0x000008, "Wrong alignment on GCN_DanceOff_Point_C_OnBurst");
static_assert(sizeof(GCN_DanceOff_Point_C_OnBurst) == 0x000138, "Wrong size on GCN_DanceOff_Point_C_OnBurst");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_DanceOff_Point_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_DanceOff_Point_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_DanceOff_Point_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_DanceOff_Point_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_DanceOff_Point_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_DanceOff_Point_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, Temp_struct_Variable) == 0x0000F0, "Member 'GCN_DanceOff_Point_C_OnBurst::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, CallFunc_Array_Get_Item) == 0x000100, "Member 'GCN_DanceOff_Point_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, Temp_struct_Variable1) == 0x000108, "Member 'GCN_DanceOff_Point_C_OnBurst::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000118, "Member 'GCN_DanceOff_Point_C_OnBurst::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, Temp_bool_Variable) == 0x000119, "Member 'GCN_DanceOff_Point_C_OnBurst::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, K2Node_Select_Default) == 0x00011C, "Member 'GCN_DanceOff_Point_C_OnBurst::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_DanceOff_Point_C_OnBurst, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x00012C, "Member 'GCN_DanceOff_Point_C_OnBurst::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");

}

