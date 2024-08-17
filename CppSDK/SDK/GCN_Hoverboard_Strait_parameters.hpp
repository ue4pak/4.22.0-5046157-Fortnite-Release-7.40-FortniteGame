#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Hoverboard_Strait

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait
// 0x0020 (0x0020 - 0x0000)
struct GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*           CallFunc_SpawnCameraLensEffect_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait) == 0x000008, "Wrong alignment on GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait");
static_assert(sizeof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait) == 0x000020, "Wrong size on GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait");
static_assert(offsetof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait, EntryPoint) == 0x000000, "Member 'GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000010, "Member 'GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait, CallFunc_SpawnCameraLensEffect_ReturnValue) == 0x000018, "Member 'GCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait::CallFunc_SpawnCameraLensEffect_ReturnValue' has a wrong offset!");

// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_Hoverboard_Strait_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrap_Floor_Hoverboard_Speed_C*         K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed;  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Hoverboard_Strait_C_OnActive) == 0x000008, "Wrong alignment on GCN_Hoverboard_Strait_C_OnActive");
static_assert(sizeof(GCN_Hoverboard_Strait_C_OnActive) == 0x0000E8, "Wrong size on GCN_Hoverboard_Strait_C_OnActive");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, MyTarget) == 0x000000, "Member 'GCN_Hoverboard_Strait_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, Parameters) == 0x000008, "Member 'GCN_Hoverboard_Strait_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCN_Hoverboard_Strait_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed) == 0x0000C8, "Member 'GCN_Hoverboard_Strait_C_OnActive::K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCN_Hoverboard_Strait_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x0000D8, "Member 'GCN_Hoverboard_Strait_C_OnActive::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(GCN_Hoverboard_Strait_C_OnActive, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'GCN_Hoverboard_Strait_C_OnActive::K2Node_DynamicCast_bSuccess1' has a wrong offset!");

}

