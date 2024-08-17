#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InviteListEntry_FriendInvite_XS

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SocialUMG_structs.hpp"


namespace SDK::Params
{

// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS
// 0x0038 (0x0038 - 0x0000)
struct InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue2;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue3;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS) == 0x000008, "Wrong alignment on InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS");
static_assert(sizeof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS) == 0x000038, "Wrong size on InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, EntryPoint) == 0x000000, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::EntryPoint' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, K2Node_ComponentBoundEvent_bIsOpen) == 0x000010, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, CallFunc_PlayAnimation_ReturnValue1) == 0x000018, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, CallFunc_PlayAnimation_ReturnValue2) == 0x000020, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::CallFunc_PlayAnimation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS, CallFunc_PlayAnimation_ReturnValue3) == 0x000030, "Member 'InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS::CallFunc_PlayAnimation_ReturnValue3' has a wrong offset!");

// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView
// 0x0014 (0x0014 - 0x0000)
struct InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView final
{
public:
	EOnlineStatus                                 OnlineStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOnlineStatus                                 Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView) == 0x000004, "Wrong alignment on InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView");
static_assert(sizeof(InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView) == 0x000014, "Wrong size on InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView, OnlineStatus) == 0x000000, "Member 'InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView::OnlineStatus' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView, Temp_byte_Variable) == 0x000001, "Member 'InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView, K2Node_Select_Default) == 0x000004, "Member 'InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView::K2Node_Select_Default' has a wrong offset!");

}

