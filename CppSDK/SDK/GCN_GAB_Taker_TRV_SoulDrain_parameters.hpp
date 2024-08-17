#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_GAB_Taker_TRV_SoulDrain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain
// 0x0180 (0x0180 - 0x0000)
struct GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0xF];                                       // 0x00D1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0xC];                                      // 0x0134(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Beam_C*                              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain) == 0x000010, "Wrong alignment on GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain");
static_assert(sizeof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain) == 0x000180, "Wrong size on GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, EntryPoint) == 0x000000, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, K2Node_Event_EventType) == 0x000010, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, K2Node_Event_Parameters) == 0x000018, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_GetTransform_ReturnValue) == 0x0000E0, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_BreakTransform_Location) == 0x000110, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_BreakTransform_Rotation) == 0x00011C, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_BreakTransform_Scale) == 0x000128, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_MakeTransform_ReturnValue) == 0x000140, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000170, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain, CallFunc_FinishSpawningActor_ReturnValue) == 0x000178, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue");
static_assert(sizeof(GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.OnExecute
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute) == 0x000008, "Wrong alignment on GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute");
static_assert(sizeof(GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute) == 0x0000C8, "Wrong size on GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_GAB_Taker_TRV_SoulDrain_C_OnExecute::ReturnValue' has a wrong offset!");

}

