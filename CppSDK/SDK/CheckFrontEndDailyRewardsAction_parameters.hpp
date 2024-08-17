#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckFrontEndDailyRewardsAction

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
// 0x00C0 (0x00C0 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortScriptedActionParams              K2Node_Event_Params;                               // 0x0008(0x0030)(ConstParm, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleClientEvent_EventSource;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;              // 0x0058(0x0020)(ConstParm, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPendingLogout_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortStoreState                               CallFunc_GetStoreState_ReturnValue;                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Daily_Rewards_Open_bRunning;              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFrontEndRewards_Running_IsRunning;      // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue3;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInLobby_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatchmakingLocal_ReturnValue;           // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue4;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortFrontEndFeatureState                     CallFunc_GetFeatureState_OutFeatureState;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortFrontEndFeatureStateReason               CallFunc_GetFeatureState_OutReason;                // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue5;                  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward; // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDailyRewardAvailable_ReturnValue;       // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction) == 0x0000C0, "Wrong size on CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, EntryPoint) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, K2Node_Event_Params) == 0x000008, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::K2Node_Event_Params' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetSubGame_ReturnValue) == 0x000040, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, K2Node_HandleClientEvent_EventSource) == 0x000048, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, K2Node_HandleClientEvent_EventFocus) == 0x000050, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, K2Node_HandleClientEvent_ClientEvent) == 0x000058, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue1) == 0x000078, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue2) == 0x000080, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsPendingLogout_ReturnValue) == 0x000088, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsPendingLogout_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetStoreState_ReturnValue) == 0x000089, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetStoreState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_Not_PreBool_ReturnValue) == 0x00008A, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00008B, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_Daily_Rewards_Open_bRunning) == 0x00008C, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_Daily_Rewards_Open_bRunning' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsFrontEndRewards_Running_IsRunning) == 0x00008D, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsFrontEndRewards_Running_IsRunning' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue3) == 0x000090, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsInLobby_ReturnValue) == 0x000098, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsInLobby_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsMatchmakingLocal_ReturnValue) == 0x000099, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsMatchmakingLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue4) == 0x0000A0, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_BooleanOR_ReturnValue) == 0x0000A8, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetFeatureState_OutFeatureState) == 0x0000A9, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetFeatureState_OutReason) == 0x0000AA, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_BooleanOR_ReturnValue1) == 0x0000AB, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_BooleanOR_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, K2Node_SwitchEnum_CmpSuccess) == 0x0000AC, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_Not_PreBool_ReturnValue1) == 0x0000AD, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_GetContext_ReturnValue5) == 0x0000B0, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_GetContext_ReturnValue5' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward) == 0x0000B8, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction, CallFunc_IsDailyRewardAvailable_ReturnValue) == 0x0000BC, "Member 'CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction::CallFunc_IsDailyRewardAvailable_ReturnValue' has a wrong offset!");

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
// 0x0030 (0x0030 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue) == 0x000030, "Wrong size on CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue, EventSource) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue::EventSource' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue, EventFocus) == 0x000008, "Member 'CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue::EventFocus' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue, ClientEvent) == 0x000010, "Member 'CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue::ClientEvent' has a wrong offset!");

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
// 0x0030 (0x0030 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_Execute final
{
public:
	struct FFortScriptedActionParams              Params_0;                                          // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_Execute) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_Execute");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_Execute) == 0x000030, "Wrong size on CheckFrontEndDailyRewardsAction_C_Execute");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Execute, Params_0) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_Execute::Params_0' has a wrong offset!");

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
// 0x0050 (0x0050 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_ShowDailyRewards final
{
public:
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewards_C*                        K2Node_DynamicCast_AsDaily_Rewards;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_ShowDailyRewards");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards) == 0x000050, "Wrong size on CheckFrontEndDailyRewardsAction_C_ShowDailyRewards");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_IsInViewport_ReturnValue) == 0x000018, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_GetCachedWidget_ReturnValue) == 0x000020, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, K2Node_DynamicCast_AsDaily_Rewards) == 0x000028, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::K2Node_DynamicCast_AsDaily_Rewards' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_GetContext_ReturnValue1) == 0x000040, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_ShowDailyRewards, CallFunc_IsInZone_ReturnValue) == 0x000048, "Member 'CheckFrontEndDailyRewardsAction_C_ShowDailyRewards::CallFunc_IsInZone_ReturnValue' has a wrong offset!");

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
// 0x0030 (0x0030 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open final
{
public:
	bool                                          bRunning;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDailyRewards_C*                        K2Node_DynamicCast_AsDaily_Rewards;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open) == 0x000030, "Wrong size on CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, bRunning) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::bRunning' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, CallFunc_GetCachedWidget_ReturnValue) == 0x000010, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, CallFunc_IsInViewport_ReturnValue) == 0x000018, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, K2Node_DynamicCast_AsDaily_Rewards) == 0x000020, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::K2Node_DynamicCast_AsDaily_Rewards' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
// 0x0030 (0x0030 - 0x0000)
struct CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running final
{
public:
	bool                                          IsRunning;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFrontEndRewards_Widget_C*              K2Node_DynamicCast_AsFront_End_Rewards_Widget;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running) == 0x000008, "Wrong alignment on CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running");
static_assert(sizeof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running) == 0x000030, "Wrong size on CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, IsRunning) == 0x000000, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::IsRunning' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, CallFunc_GetCachedWidget_ReturnValue) == 0x000010, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, CallFunc_IsInViewport_ReturnValue) == 0x000018, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, K2Node_DynamicCast_AsFront_End_Rewards_Widget) == 0x000020, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::K2Node_DynamicCast_AsFront_End_Rewards_Widget' has a wrong offset!");
static_assert(offsetof(CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

