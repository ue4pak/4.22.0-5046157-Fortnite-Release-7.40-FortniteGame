#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchmakingRegionAndPool

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool
// 0x00B8 (0x00B8 - 0x0000)
struct MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue1;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue; // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0044(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue2;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue1; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMCPRegionText_ReturnValue;             // 0x0098(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool) == 0x000008, "Wrong alignment on MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool");
static_assert(sizeof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool) == 0x0000B8, "Wrong size on MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, EntryPoint) == 0x000000, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_int_Variable) == 0x000004, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_int_Variable1) == 0x000008, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue1) == 0x000018, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue) == 0x000020, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue) == 0x000028, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_bool_Variable) == 0x000040, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Event_MyGeometry) == 0x000044, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Event_InDeltaTime) == 0x00007C, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue2) == 0x000080, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue3) == 0x000088, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue1) == 0x000090, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetMCPRegionText_ReturnValue) == 0x000098, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetMCPRegionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Select_Default) == 0x0000B0, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Select_Default' has a wrong offset!");

// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick
// 0x003C (0x003C - 0x0000)
struct MatchmakingRegionAndPool_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchmakingRegionAndPool_C_Tick) == 0x000004, "Wrong alignment on MatchmakingRegionAndPool_C_Tick");
static_assert(sizeof(MatchmakingRegionAndPool_C_Tick) == 0x00003C, "Wrong size on MatchmakingRegionAndPool_C_Tick");
static_assert(offsetof(MatchmakingRegionAndPool_C_Tick, MyGeometry) == 0x000000, "Member 'MatchmakingRegionAndPool_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_Tick, InDeltaTime) == 0x000038, "Member 'MatchmakingRegionAndPool_C_Tick::InDeltaTime' has a wrong offset!");

}

