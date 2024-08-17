#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AIBaseMelee_NoMontage

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.ExecuteUbergraph_GAB_AIBaseMelee_NoMontage
// 0x01F0 (0x01F0 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData5;                    // 0x0018(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag5;                // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData4;                    // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag4;                // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData3;                    // 0x0078(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag3;                // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x00B8(0x0020)()
	bool                                          CallFunc_TargetDataHasActor_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00E0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x00F0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0128(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0160(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate5;             // 0x0188(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable2;                             // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable3;                             // 0x01A0(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue1; // 0x01C0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_TargetDataHasActor_ReturnValue1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D2[0x6];                                      // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayAnimWaitTarget*    CallFunc_PlayAnimWithMontageInfoAndWaitForTrigger_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AnimSharingEnabled_ReturnValue;           // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage) == 0x0001F0, "Wrong size on GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, EntryPoint) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData5) == 0x000018, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData5' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag5) == 0x000038, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag5' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData4) == 0x000040, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData4' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag4) == 0x000060, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag4' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate1) == 0x000068, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData3) == 0x000078, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData3' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag3) == 0x000098, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag3' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate2) == 0x0000A0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, Temp_struct_Variable) == 0x0000B0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, Temp_struct_Variable1) == 0x0000B8, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_TargetDataHasActor_ReturnValue) == 0x0000D8, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_TargetDataHasActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x0000E0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData2) == 0x0000F0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag2) == 0x000110, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate3) == 0x000118, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData1) == 0x000128, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag1) == 0x000148, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate4) == 0x000150, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_TargetData) == 0x000160, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CustomEvent_ApplicationTag) == 0x000180, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, K2Node_CreateDelegate_OutputDelegate5) == 0x000188, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, Temp_struct_Variable2) == 0x000198, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, Temp_struct_Variable3) == 0x0001A0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_ApplyGameplayEffectContainer_ReturnValue1) == 0x0001C0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_ApplyGameplayEffectContainer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_TargetDataHasActor_ReturnValue1) == 0x0001D0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_TargetDataHasActor_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001D1, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0001D8, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_PlayAnimWithMontageInfoAndWaitForTrigger_ReturnValue) == 0x0001E0, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_PlayAnimWithMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_IsValid_ReturnValue) == 0x0001E8, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_IsValid_ReturnValue1) == 0x0001E9, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage, CallFunc_AnimSharingEnabled_ReturnValue) == 0x0001EA, "Member 'GAB_AIBaseMelee_NoMontage_C_ExecuteUbergraph_GAB_AIBaseMelee_NoMontage::CallFunc_AnimSharingEnabled_ReturnValue' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Cancelled_B887396E419FF2C0364C58B63D973822
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Cancelled_B887396E419FF2C0364C58B63D973822::ApplicationTag' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Cancelled_DB3662934464473995AE9DABED04B860
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Cancelled_DB3662934464473995AE9DABED04B860::ApplicationTag' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Completed_B887396E419FF2C0364C58B63D973822
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Completed_B887396E419FF2C0364C58B63D973822::ApplicationTag' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Completed_DB3662934464473995AE9DABED04B860
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Completed_DB3662934464473995AE9DABED04B860::ApplicationTag' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Triggered_B887396E419FF2C0364C58B63D973822
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Triggered_B887396E419FF2C0364C58B63D973822::ApplicationTag' has a wrong offset!");

// Function GAB_AIBaseMelee_NoMontage.GAB_AIBaseMelee_NoMontage_C.Triggered_DB3662934464473995AE9DABED04B860
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860) == 0x000008, "Wrong alignment on GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860");
static_assert(sizeof(GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860) == 0x000028, "Wrong size on GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860, TargetData) == 0x000000, "Member 'GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860, ApplicationTag) == 0x000020, "Member 'GAB_AIBaseMelee_NoMontage_C_Triggered_DB3662934464473995AE9DABED04B860::ApplicationTag' has a wrong offset!");

}

