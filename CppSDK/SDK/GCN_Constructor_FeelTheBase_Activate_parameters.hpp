#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Constructor_FeelTheBase_Activate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Constructor_FeelTheBase_Activate.GCN_Constructor_FeelTheBase_Activate_C.OnExecute
// 0x0108 (0x0108 - 0x0000)
struct GCN_Constructor_FeelTheBase_Activate_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue1;      // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute) == 0x000008, "Wrong alignment on GCN_Constructor_FeelTheBase_Activate_C_OnExecute");
static_assert(sizeof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute) == 0x000108, "Wrong size on GCN_Constructor_FeelTheBase_Activate_C_OnExecute");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000C1, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_X) == 0x0000C4, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_Y) == 0x0000C8, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_Z) == 0x0000CC, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_FFloor_ReturnValue) == 0x0000D0, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_Conv_IntToBool_ReturnValue) == 0x0000D4, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000D8, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_X1) == 0x0000DC, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_Y1) == 0x0000E0, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_BreakVector_Z1) == 0x0000E4, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E8, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x0000F4, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000F8, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Constructor_FeelTheBase_Activate_C_OnExecute, CallFunc_SpawnEmitterAtLocation_ReturnValue1) == 0x000100, "Member 'GCN_Constructor_FeelTheBase_Activate_C_OnExecute::CallFunc_SpawnEmitterAtLocation_ReturnValue1' has a wrong offset!");

}

