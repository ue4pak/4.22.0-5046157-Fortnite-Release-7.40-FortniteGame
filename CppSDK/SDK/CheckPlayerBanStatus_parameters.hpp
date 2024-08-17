#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckPlayerBanStatus

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ExecuteUbergraph_CheckPlayerBanStatus
// 0x0048 (0x0048 - 0x0000)
struct CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortScriptedActionParams              K2Node_Event_Params;                               // 0x0008(0x0030)(ConstParm, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPendingLogout_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus) == 0x000008, "Wrong alignment on CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus");
static_assert(sizeof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus) == 0x000048, "Wrong size on CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus");
static_assert(offsetof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus, EntryPoint) == 0x000000, "Member 'CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus, K2Node_Event_Params) == 0x000008, "Member 'CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus::K2Node_Event_Params' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus, CallFunc_IsPendingLogout_ReturnValue) == 0x000040, "Member 'CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus::CallFunc_IsPendingLogout_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'CheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.Execute
// 0x0030 (0x0030 - 0x0000)
struct CheckPlayerBanStatus_C_Execute final
{
public:
	struct FFortScriptedActionParams              Params_0;                                          // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckPlayerBanStatus_C_Execute) == 0x000008, "Wrong alignment on CheckPlayerBanStatus_C_Execute");
static_assert(sizeof(CheckPlayerBanStatus_C_Execute) == 0x000030, "Wrong size on CheckPlayerBanStatus_C_Execute");
static_assert(offsetof(CheckPlayerBanStatus_C_Execute, Params_0) == 0x000000, "Member 'CheckPlayerBanStatus_C_Execute::Params_0' has a wrong offset!");

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ShowBan
// 0x00F8 (0x00F8 - 0x0000)
struct CheckPlayerBanStatus_C_ShowBan final
{
public:
	class FText                                   BanInformation;                                    // 0x0000(0x0018)(Edit, BlueprintVisible)
	struct FMcpBanInfo                            BanInfo;                                           // 0x0018(0x0040)(Edit, BlueprintVisible)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMcpBanInfo                            CallFunc_GetBanInfo_ReturnValue;                   // 0x0088(0x0040)(ConstParm)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUserCurrentlyBanned_ReturnValue;        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerBannedModal_C*                   CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckPlayerBanStatus_C_ShowBan) == 0x000008, "Wrong alignment on CheckPlayerBanStatus_C_ShowBan");
static_assert(sizeof(CheckPlayerBanStatus_C_ShowBan) == 0x0000F8, "Wrong size on CheckPlayerBanStatus_C_ShowBan");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, BanInformation) == 0x000000, "Member 'CheckPlayerBanStatus_C_ShowBan::BanInformation' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, BanInfo) == 0x000018, "Member 'CheckPlayerBanStatus_C_ShowBan::BanInfo' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'CheckPlayerBanStatus_C_ShowBan::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000068, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_IsInZone_ReturnValue) == 0x000078, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetContext_ReturnValue1) == 0x000080, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetBanInfo_ReturnValue) == 0x000088, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetBanInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetContext_ReturnValue2) == 0x0000C8, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_IsUserCurrentlyBanned_ReturnValue) == 0x0000D0, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_IsUserCurrentlyBanned_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_GetUIManagerWidget_ReturnValue1) == 0x0000D8, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_GetUIManagerWidget_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_IsInViewport_ReturnValue) == 0x0000E0, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckPlayerBanStatus_C_ShowBan, CallFunc_BooleanOR_ReturnValue) == 0x0000F0, "Member 'CheckPlayerBanStatus_C_ShowBan::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

