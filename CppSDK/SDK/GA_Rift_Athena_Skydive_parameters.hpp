#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Rift_Athena_Skydive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
// 0x0198 (0x0198 - 0x0000)
struct GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMovementMode                                 Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0050(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkydiving_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaVehicle*                     CallFunc_GetVehicle_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInAir_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue1;             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00D4(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1; // 0x00DC(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue2;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue1;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue2;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue3;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue3;             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	class AFortAthenaVehicle*                     CallFunc_GetVehicle_ReturnValue1;                  // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackalVehicle_Athena_C*                K2Node_DynamicCast_AsJackal_Vehicle_Athena;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaVehicle*                     CallFunc_GetVehicle_ReturnValue2;                  // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInVehicle_ReturnValue1;                 // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFerretVehicle_C*                       K2Node_DynamicCast_AsFerret_Vehicle;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0184(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive) == 0x000008, "Wrong alignment on GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive) == 0x000198, "Wrong size on GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, EntryPoint) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_CreateWaitMovementModeChange_ReturnValue) == 0x000008, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_CreateWaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_byte_Variable) == 0x000011, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CustomEvent_NewMovementMode) == 0x000012, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000030, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate1) == 0x000038, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue1) == 0x000048, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetActorInfo_ReturnValue) == 0x000050, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000090, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue) == 0x00009C, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsSkydiving_ReturnValue) == 0x0000A0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicle_ReturnValue) == 0x0000A8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsInAir_ReturnValue) == 0x0000B0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsInAir_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsInVehicle_ReturnValue) == 0x0000B1, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetMovementComponent_ReturnValue) == 0x0000B8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsCharacter_Movement_Component) == 0x0000C0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess1) == 0x0000C8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C9, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue1) == 0x0000CC, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000D0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000D4, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1) == 0x0000DC, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue2) == 0x0000E4, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_bool_Has_Been_Initd_Variable) == 0x0000E8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetPlayerController_ReturnValue) == 0x0000F0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetPlayerController_ReturnValue1) == 0x0000F8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetPlayerController_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetPlayerController_ReturnValue2) == 0x000100, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetPlayerController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate2) == 0x000108, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetPlayerController_ReturnValue3) == 0x000118, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetPlayerController_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue3) == 0x000120, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_Add_FloatFloat_ReturnValue) == 0x000124, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate3) == 0x000128, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicle_ReturnValue1) == 0x000138, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicle_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsJackal_Vehicle_Athena) == 0x000140, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsJackal_Vehicle_Athena' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess2) == 0x000148, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicle_ReturnValue2) == 0x000150, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicle_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsInVehicle_ReturnValue1) == 0x000158, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsInVehicle_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000160, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsFerret_Vehicle) == 0x000168, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsFerret_Vehicle' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess3) == 0x000170, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate4) == 0x000174, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate5) == 0x000184, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5
// 0x0001 (0x0001 - 0x0000)
struct GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5 final
{
public:
	EMovementMode                                 NewMovementMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5) == 0x000001, "Wrong alignment on GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5) == 0x000001, "Wrong size on GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5, NewMovementMode) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5::NewMovementMode' has a wrong offset!");

}

