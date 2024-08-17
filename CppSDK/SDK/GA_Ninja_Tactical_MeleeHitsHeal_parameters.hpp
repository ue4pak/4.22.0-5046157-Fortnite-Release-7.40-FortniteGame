#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_Tactical_MeleeHitsHeal

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal
// 0x00F0 (0x00F0 - 0x0000)
struct GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0018(0x00A8)(ConstParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue1;        // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal) == 0x000008, "Wrong alignment on GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal");
static_assert(sizeof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal) == 0x0000F0, "Wrong size on GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, EntryPoint) == 0x000000, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, Temp_int_Variable) == 0x000004, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x00000C, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, K2Node_Event_EventData) == 0x000018, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C0, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000C8, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000D4, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, K2Node_Event_bWasCancelled) == 0x0000D8, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_GetGameTimeInSeconds_ReturnValue1) == 0x0000DC, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_GetGameTimeInSeconds_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000E0, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_Abs_ReturnValue) == 0x0000E4, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000E8, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility");
static_assert(sizeof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility
// 0x0178 (0x0178 - 0x0000)
struct GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility final
{
public:
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBaseWeaponStats                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0130)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0148(0x0020)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess; // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue; // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility) == 0x000008, "Wrong alignment on GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility");
static_assert(sizeof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility) == 0x000178, "Wrong size on GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, AbilitySystem) == 0x000000, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::AbilitySystem' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000008, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x00000C, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000140, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000148, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000168, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess) == 0x00016C, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility, CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue) == 0x000170, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility::CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue' has a wrong offset!");

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent
// 0x0100 (0x0100 - 0x0000)
struct GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue; // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue; // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllTags_ReturnValue;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent) == 0x000100, "Wrong size on GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue) == 0x0000E9, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue) == 0x0000EA, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanOR_ReturnValue) == 0x0000EB, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_AsFort_Pawn) == 0x0000F0, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAllTags_ReturnValue) == 0x0000F9, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAllTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x0000FA, "Member 'GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

