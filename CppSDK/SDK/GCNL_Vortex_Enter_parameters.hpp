#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Vortex_Enter

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.ExecuteUbergraph_GCNL_Vortex_Enter
// 0x0220 (0x0220 - 0x0000)
struct GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0010(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x00C8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x00D8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x00F0(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x01A8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x01B8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E2[0x6];                                      // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraShake*                           CallFunc_PlayCameraShake_ReturnValue;              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraShake*                           CallFunc_PlayCameraShake_ReturnValue1;             // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter) == 0x000008, "Wrong alignment on GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter");
static_assert(sizeof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter) == 0x000220, "Wrong size on GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, EntryPoint) == 0x000000, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_MyTarget1) == 0x000008, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_Parameters1) == 0x000010, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_ParticleComponents1) == 0x0000C8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_AudioComponents1) == 0x0000D8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_MyTarget) == 0x0000E8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_Parameters) == 0x0000F0, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_ParticleComponents) == 0x0001A8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_AudioComponents) == 0x0001B8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_BurstCameraShakeInstance) == 0x0001C8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_Event_BurstDecalInstance) == 0x0001D0, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001D8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0001E1, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0001E8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001F0, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_GetController_ReturnValue) == 0x0001F8, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_DynamicCast_AsPlayer_Controller) == 0x000200, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, K2Node_DynamicCast_bSuccess1) == 0x000208, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_PlayCameraShake_ReturnValue) == 0x000210, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_PlayCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter, CallFunc_PlayCameraShake_ReturnValue1) == 0x000218, "Member 'GCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter::CallFunc_PlayCameraShake_ReturnValue1' has a wrong offset!");

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_Vortex_Enter_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Vortex_Enter_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Vortex_Enter_C_OnRemoval");
static_assert(sizeof(GCNL_Vortex_Enter_C_OnRemoval) == 0x0000F0, "Wrong size on GCNL_Vortex_Enter_C_OnRemoval");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Vortex_Enter_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Vortex_Enter_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCNL_Vortex_Enter_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCNL_Vortex_Enter_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_Vortex_Enter_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_Vortex_Enter_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCNL_Vortex_Enter_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCNL_Vortex_Enter_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Vortex_Enter_C_OnLoopingStart");
static_assert(sizeof(GCNL_Vortex_Enter_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCNL_Vortex_Enter_C_OnLoopingStart");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Vortex_Enter_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Vortex_Enter_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCNL_Vortex_Enter_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vortex_Enter_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCNL_Vortex_Enter_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}

