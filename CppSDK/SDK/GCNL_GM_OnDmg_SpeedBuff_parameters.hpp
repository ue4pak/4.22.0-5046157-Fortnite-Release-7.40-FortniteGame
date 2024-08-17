#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnDmg_SpeedBuff

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C.OnWhileActiveParticleSystemActivate
// 0x0240 (0x0240 - 0x0000)
struct GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue1;            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0120(0x0080)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0xC];                                      // 0x01A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam1;               // 0x01B0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate) == 0x000010, "Wrong alignment on GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate");
static_assert(sizeof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate) == 0x000240, "Wrong size on GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, Parameters) == 0x000008, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_MakeLiteralFloat_ReturnValue) == 0x0000C0, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_MakeLiteralFloat_ReturnValue1) == 0x0000C4, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_MakeLiteralFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C8, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x0000CC, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_GetOwner_ReturnValue) == 0x0000E0, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_GetActorBounds_Origin) == 0x0000E8, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_GetActorBounds_BoxExtent) == 0x0000F4, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_BreakVector_X) == 0x000100, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_BreakVector_Y) == 0x000104, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_BreakVector_Z) == 0x000108, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x00010C, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_MakeVector_ReturnValue1) == 0x000110, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00011C, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, K2Node_MakeStruct_ParticleSysParam) == 0x000120, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, CallFunc_FClamp_ReturnValue) == 0x0001A0, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, K2Node_MakeStruct_ParticleSysParam1) == 0x0001B0, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::K2Node_MakeStruct_ParticleSysParam1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate, K2Node_MakeArray_Array) == 0x000230, "Member 'GCNL_GM_OnDmg_SpeedBuff_C_OnWhileActiveParticleSystemActivate::K2Node_MakeArray_Array' has a wrong offset!");

}

