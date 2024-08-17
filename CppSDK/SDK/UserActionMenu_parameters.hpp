#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserActionMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SocialUMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
// 0x0060 (0x0060 - 0x0000)
struct UserActionMenu_C_ExecuteUbergraph_UserActionMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetFirstEntryToCenter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetNavigationManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsVisible;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EOnlineStatus                                 K2Node_Event_OnlineStatus;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFirstEntryToCenter_ReturnValue1;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnableBackButtonDisplay;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu) == 0x000008, "Wrong alignment on UserActionMenu_C_ExecuteUbergraph_UserActionMenu");
static_assert(sizeof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu) == 0x000060, "Wrong size on UserActionMenu_C_ExecuteUbergraph_UserActionMenu");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, EntryPoint) == 0x000000, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, Temp_byte_Variable) == 0x000004, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, Temp_byte_Variable1) == 0x000005, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_GetFirstEntryToCenter_ReturnValue) == 0x000008, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_GetFirstEntryToCenter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_GetNavigationManager_ReturnValue) == 0x000020, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_GetNavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Event_bIsVisible) == 0x000028, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Event_OnlineStatus) == 0x000029, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Event_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_GetUINavigationManager_ReturnValue) == 0x000030, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_GetFirstEntryToCenter_ReturnValue1) == 0x000038, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_GetFirstEntryToCenter_ReturnValue1' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, Temp_bool_Variable) == 0x000040, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, Temp_bool_Variable1) == 0x000041, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_PlayAnimation_ReturnValue1) == 0x000048, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Select_Default) == 0x000050, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Event_bEnableBackButtonDisplay) == 0x000058, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Event_bEnableBackButtonDisplay' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Select1_Default) == 0x00005A, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Select1_Default' has a wrong offset!");

// Function UserActionMenu.UserActionMenu_C.OnEnableBackButtonDisplay
// 0x0001 (0x0001 - 0x0000)
struct UserActionMenu_C_OnEnableBackButtonDisplay final
{
public:
	bool                                          bEnableBackButtonDisplay;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UserActionMenu_C_OnEnableBackButtonDisplay) == 0x000001, "Wrong alignment on UserActionMenu_C_OnEnableBackButtonDisplay");
static_assert(sizeof(UserActionMenu_C_OnEnableBackButtonDisplay) == 0x000001, "Wrong size on UserActionMenu_C_OnEnableBackButtonDisplay");
static_assert(offsetof(UserActionMenu_C_OnEnableBackButtonDisplay, bEnableBackButtonDisplay) == 0x000000, "Member 'UserActionMenu_C_OnEnableBackButtonDisplay::bEnableBackButtonDisplay' has a wrong offset!");

// Function UserActionMenu.UserActionMenu_C.OnUserPresenceChanged
// 0x0001 (0x0001 - 0x0000)
struct UserActionMenu_C_OnUserPresenceChanged final
{
public:
	EOnlineStatus                                 OnlineStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UserActionMenu_C_OnUserPresenceChanged) == 0x000001, "Wrong alignment on UserActionMenu_C_OnUserPresenceChanged");
static_assert(sizeof(UserActionMenu_C_OnUserPresenceChanged) == 0x000001, "Wrong size on UserActionMenu_C_OnUserPresenceChanged");
static_assert(offsetof(UserActionMenu_C_OnUserPresenceChanged, OnlineStatus) == 0x000000, "Member 'UserActionMenu_C_OnUserPresenceChanged::OnlineStatus' has a wrong offset!");

// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
// 0x0001 (0x0001 - 0x0000)
struct UserActionMenu_C_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong alignment on UserActionMenu_C_OnToggleConfirmation");
static_assert(sizeof(UserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong size on UserActionMenu_C_OnToggleConfirmation");
static_assert(offsetof(UserActionMenu_C_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'UserActionMenu_C_OnToggleConfirmation::bIsVisible' has a wrong offset!");

// Function UserActionMenu.UserActionMenu_C.HandleOnlineIndicatorView
// 0x0040 (0x0040 - 0x0000)
struct UserActionMenu_C_HandleOnlineIndicatorView final
{
public:
	EOnlineStatus                                 OnlineStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOnlineStatus                                 Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOnlineStatus                                 Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0008(0x0028)()
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UserActionMenu_C_HandleOnlineIndicatorView) == 0x000008, "Wrong alignment on UserActionMenu_C_HandleOnlineIndicatorView");
static_assert(sizeof(UserActionMenu_C_HandleOnlineIndicatorView) == 0x000040, "Wrong size on UserActionMenu_C_HandleOnlineIndicatorView");
static_assert(offsetof(UserActionMenu_C_HandleOnlineIndicatorView, OnlineStatus) == 0x000000, "Member 'UserActionMenu_C_HandleOnlineIndicatorView::OnlineStatus' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_HandleOnlineIndicatorView, Temp_byte_Variable) == 0x000001, "Member 'UserActionMenu_C_HandleOnlineIndicatorView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_HandleOnlineIndicatorView, Temp_byte_Variable1) == 0x000002, "Member 'UserActionMenu_C_HandleOnlineIndicatorView::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_HandleOnlineIndicatorView, K2Node_Select_Default) == 0x000008, "Member 'UserActionMenu_C_HandleOnlineIndicatorView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_HandleOnlineIndicatorView, K2Node_Select1_Default) == 0x000030, "Member 'UserActionMenu_C_HandleOnlineIndicatorView::K2Node_Select1_Default' has a wrong offset!");

}

