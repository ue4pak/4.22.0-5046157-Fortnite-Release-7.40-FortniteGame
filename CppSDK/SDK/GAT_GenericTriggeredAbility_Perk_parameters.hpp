#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericTriggeredAbility_Perk

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk
// 0x00B0 (0x00B0 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk) == 0x0000B0, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk, EntryPoint) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk, K2Node_Event_EventData) == 0x000008, "Member 'GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk::K2Node_Event_EventData' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak
// 0x0020 (0x0020 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_CheckStreak final
{
public:
	int32                                         CountPerTrigger;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxStreak;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StreakCount_0;                                     // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StreakMaxed;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Passed;                                            // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak) == 0x000004, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_CheckStreak");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak) == 0x000020, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_CheckStreak");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, CountPerTrigger) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::CountPerTrigger' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, MaxStreak) == 0x000004, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::MaxStreak' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, StreakCount_0) == 0x000008, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::StreakCount_0' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, StreakMaxed) == 0x00000C, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::StreakMaxed' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, Passed) == 0x00000D, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::Passed' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, CallFunc_Less_IntInt_ReturnValue) == 0x00000E, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, CallFunc_Not_PreBool_ReturnValue) == 0x00000F, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, Temp_bool_Variable) == 0x000014, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CheckStreak, K2Node_Select_Default) == 0x00001C, "Member 'GAT_GenericTriggeredAbility_Perk_C_CheckStreak::K2Node_Select_Default' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge
// 0x0070 (0x0070 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge final
{
public:
	int32                                         Grant_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_HasFragmentTags;                                // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               FragmentAmmo;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Outlander_C*                K2Node_DynamicCast_AsPlayer_Pawn_Outlander;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0030(0x0010)()
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge) == 0x000070, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, Grant_Amount) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::Grant_Amount' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, GE_HasFragmentTags) == 0x000008, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::GE_HasFragmentTags' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, FragmentAmmo) == 0x000010, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::FragmentAmmo' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, K2Node_DynamicCast_AsPlayer_Pawn_Outlander) == 0x000020, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::K2Node_DynamicCast_AsPlayer_Pawn_Outlander' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000030, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, CallFunc_GetController_ReturnValue) == 0x000040, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000048, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000050, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, K2Node_DynamicCast_bSuccess1) == 0x000058, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge, CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput) == 0x000060, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge::CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue
// 0x00B0 (0x00B0 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue final
{
public:
	struct FScalableFloat                         Lookup_Base;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScalableFloat                         Lookup_Commander;                                  // 0x0020(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                           Commander_Tag;                                     // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0048(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput; // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         K2Node_Select_Default;                             // 0x0088(0x0020)()
	float                                         CallFunc_GetValueAtLevel_ReturnValue1;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue) == 0x0000B0, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, Lookup_Base) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::Lookup_Base' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, Lookup_Commander) == 0x000020, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::Lookup_Commander' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, Commander_Tag) == 0x000040, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::Commander_Tag' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, Value) == 0x000048, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::Value' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, Temp_bool_Variable) == 0x00004C, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000050, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, CallFunc_GetValueAtLevel_ReturnValue) == 0x000058, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000060, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput) == 0x000070, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue) == 0x000080, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, K2Node_Select_Default) == 0x000088, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue, CallFunc_GetValueAtLevel_ReturnValue1) == 0x0000A8, "Member 'GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue::CallFunc_GetValueAtLevel_ReturnValue1' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement
// 0x0088 (0x0088 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_SetDamageElement final
{
public:
	struct FGameplayTagContainer                  InstegatorTags;                                    // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                 DefaultEffect;                                     // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ElementEffectOut;                                  // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectWasChanged;                                  // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 EffectOut;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   CallFunc_Map_Keys_Keys;                            // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x006C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_SetDamageElement");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement) == 0x000088, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_SetDamageElement");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, InstegatorTags) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::InstegatorTags' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, DefaultEffect) == 0x000020, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::DefaultEffect' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, ElementEffectOut) == 0x000028, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::ElementEffectOut' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, EffectWasChanged) == 0x000030, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::EffectWasChanged' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, EffectOut) == 0x000038, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::EffectOut' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, Temp_int_Array_Index_Variable) == 0x000040, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000048, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, Temp_bool_True_if_break_was_hit_Variable) == 0x000050, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Map_Keys_Keys) == 0x000058, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Array_Get_Item) == 0x00006C, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_HasTag_ReturnValue) == 0x000075, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_BooleanAND_ReturnValue) == 0x000076, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Map_Find_Value) == 0x000078, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_Map_Find_ReturnValue) == 0x000080, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_SetDamageElement, CallFunc_BooleanAND_ReturnValue1) == 0x000081, "Member 'GAT_GenericTriggeredAbility_Perk_C_SetDamageElement::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner
// 0x0030 (0x0030 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner final
{
public:
	class AFortPlayerPawn*                        FortPlayerPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               ItemToGive;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberToGive;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotifyPlayer;                                      // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_AddRegenItemToInventoryOwner_InventoryOwner_CastInput; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner) == 0x000030, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, FortPlayerPawn_0) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::FortPlayerPawn_0' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, ItemToGive) == 0x000008, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::ItemToGive' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, NumberToGive) == 0x000010, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::NumberToGive' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, NotifyPlayer) == 0x000014, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::NotifyPlayer' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000018, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner, CallFunc_AddRegenItemToInventoryOwner_InventoryOwner_CastInput) == 0x000020, "Member 'GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner::CallFunc_AddRegenItemToInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold
// 0x0014 (0x0014 - 0x0000)
struct GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold final
{
public:
	float                                         PROC_Chance__0Minus1_;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Streak_Breaker_Threshold;                          // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Proc_Chance_Multiplier;                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold) == 0x000004, "Wrong alignment on GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold");
static_assert(sizeof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold) == 0x000014, "Wrong size on GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold, PROC_Chance__0Minus1_) == 0x000000, "Member 'GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold::PROC_Chance__0Minus1_' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold, Streak_Breaker_Threshold) == 0x000004, "Member 'GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold::Streak_Breaker_Threshold' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold, Proc_Chance_Multiplier) == 0x000008, "Member 'GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold::Proc_Chance_Multiplier' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

}

