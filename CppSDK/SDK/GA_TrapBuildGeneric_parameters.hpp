#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrapBuildGeneric

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric
// 0x0018 (0x0018 - 0x0000)
struct GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric) == 0x000008, "Wrong alignment on GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric");
static_assert(sizeof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric) == 0x000018, "Wrong size on GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric");
static_assert(offsetof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric, EntryPoint) == 0x000000, "Member 'GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000008, "Member 'GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");

}

