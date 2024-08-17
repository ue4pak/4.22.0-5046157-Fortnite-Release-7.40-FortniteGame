#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SiphonEffect_OnKillGrant

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.ExecuteUbergraph_GA_SiphonEffect_OnKillGrant
// 0x0218 (0x0218 - 0x0000)
struct GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0008(0x0020)()
	float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHealth_ReturnValue1;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealth_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealth_ReturnValue1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0040(0x00A8)(ConstParm)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult1;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY1;             // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult2;         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY2;             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue1;                      // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult3;         // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12B[0x1];                                      // 0x012B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY3;             // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue2;                      // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum3_CmpSuccess;                     // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult4;         // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY4;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0140(0x0010)()
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0150(0x0010)()
	bool                                          K2Node_SwitchEnum4_CmpSuccess;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x0168(0x0010)(ZeroConstructor, ReferenceParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue1; // 0x0180(0x0010)()
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1; // 0x01A0(0x0010)()
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue1; // 0x01C0(0x0010)(ZeroConstructor, ReferenceParm)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput; // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput; // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult5;         // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x3];                                      // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY5;             // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue1;       // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum5_CmpSuccess;                     // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FA[0x6];                                      // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0200(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant) == 0x000008, "Wrong alignment on GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant");
static_assert(sizeof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant) == 0x000218, "Wrong size on GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, EntryPoint) == 0x000000, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000008, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetMaxHealth_ReturnValue) == 0x000028, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetMaxHealth_ReturnValue1) == 0x00002C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetMaxHealth_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetHealth_ReturnValue) == 0x000030, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetHealth_ReturnValue1) == 0x000034, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetHealth_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_Less_FloatFloat_ReturnValue) == 0x00003C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_IsDBNO_ReturnValue) == 0x00003D, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_Event_EventData) == 0x000040, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x0000E8, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000F0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000F8, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_SelectFloat_ReturnValue) == 0x0000FC, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000100, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000104, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum_CmpSuccess) == 0x000108, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_Subtract_FloatFloat_ReturnValue1) == 0x00010C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_Subtract_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult1) == 0x000110, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY1) == 0x000114, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult2) == 0x000118, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult2' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY2) == 0x00011C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY2' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_FTrunc_ReturnValue) == 0x000120, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_FTrunc_ReturnValue1) == 0x000124, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_FTrunc_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum1_CmpSuccess) == 0x000128, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum1_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum2_CmpSuccess) == 0x000129, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult3) == 0x00012A, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult3' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY3) == 0x00012C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY3' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_FTrunc_ReturnValue2) == 0x000130, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_FTrunc_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum3_CmpSuccess) == 0x000134, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum3_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult4) == 0x000135, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult4' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY4) == 0x000138, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY4' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x00013C, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000140, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000150, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum4_CmpSuccess) == 0x000160, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum4_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue) == 0x000168, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GetController_ReturnValue) == 0x000178, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue1) == 0x000180, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000190, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1) == 0x0001A0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput) == 0x0001B0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue1) == 0x0001C0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput) == 0x0001D0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput) == 0x0001E0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutResult5) == 0x0001F0, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutResult5' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EvaluateCurveTableRow_OutXY5) == 0x0001F4, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EvaluateCurveTableRow_OutXY5' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_EqualEqual_FloatFloat_ReturnValue1) == 0x0001F8, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_EqualEqual_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, K2Node_SwitchEnum5_CmpSuccess) == 0x0001F9, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::K2Node_SwitchEnum5_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000200, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000210, "Member 'GA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.K2_ShouldAbilityRespondToEvent
// 0x00F0 (0x00F0 - 0x0000)
struct GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent) == 0x0000F0, "Wrong size on GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");

}

