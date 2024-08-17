#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatWidget

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ChatWidget.ChatWidget_C.OnEnteredChat__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_OnEnteredChat__DelegateSignature final
{
public:
	bool                                          EnteredChat;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_OnEnteredChat__DelegateSignature) == 0x000001, "Wrong alignment on ChatWidget_C_OnEnteredChat__DelegateSignature");
static_assert(sizeof(ChatWidget_C_OnEnteredChat__DelegateSignature) == 0x000001, "Wrong size on ChatWidget_C_OnEnteredChat__DelegateSignature");
static_assert(offsetof(ChatWidget_C_OnEnteredChat__DelegateSignature, EnteredChat) == 0x000000, "Member 'ChatWidget_C_OnEnteredChat__DelegateSignature::EnteredChat' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
// 0x0048 (0x0048 - 0x0000)
struct ChatWidget_C_ExecuteUbergraph_ChatWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bOpen;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bEnteringChat;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ChatWidget_C_ExecuteUbergraph_ChatWidget) == 0x000004, "Wrong alignment on ChatWidget_C_ExecuteUbergraph_ChatWidget");
static_assert(sizeof(ChatWidget_C_ExecuteUbergraph_ChatWidget) == 0x000048, "Wrong size on ChatWidget_C_ExecuteUbergraph_ChatWidget");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, EntryPoint) == 0x000000, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CustomEvent_bUsingGamepad) == 0x000004, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_ComponentBoundEvent_bOpen) == 0x000005, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_ComponentBoundEvent_bOpen' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_ComponentBoundEvent_bEnteringChat) == 0x000006, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_ComponentBoundEvent_bEnteringChat' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CreateDelegate_OutputDelegate1) == 0x000018, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000028, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_ExecuteUbergraph_ChatWidget, K2Node_CreateDelegate_OutputDelegate3) == 0x000038, "Member 'ChatWidget_C_ExecuteUbergraph_ChatWidget::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_HandleInputMethodChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on ChatWidget_C_HandleInputMethodChanged");
static_assert(sizeof(ChatWidget_C_HandleInputMethodChanged) == 0x000001, "Wrong size on ChatWidget_C_HandleInputMethodChanged");
static_assert(offsetof(ChatWidget_C_HandleInputMethodChanged, bUsingGamepad) == 0x000000, "Member 'ChatWidget_C_HandleInputMethodChanged::bUsingGamepad' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature final
{
public:
	bool                                          bEnteringChat_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature) == 0x000001, "Wrong alignment on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");
static_assert(sizeof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature) == 0x000001, "Wrong size on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature");
static_assert(offsetof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature, bEnteringChat_0) == 0x000000, "Member 'ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature::bEnteringChat_0' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature final
{
public:
	bool                                          bOpen;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature) == 0x000001, "Wrong alignment on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");
static_assert(sizeof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature) == 0x000001, "Wrong size on ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature");
static_assert(offsetof(ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature, bOpen) == 0x000000, "Member 'ChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature::bOpen' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.Set Chat Visibility
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_Set_Chat_Visibility final
{
public:
	ESlateVisibility                              New_Visibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_Set_Chat_Visibility) == 0x000001, "Wrong alignment on ChatWidget_C_Set_Chat_Visibility");
static_assert(sizeof(ChatWidget_C_Set_Chat_Visibility) == 0x000001, "Wrong size on ChatWidget_C_Set_Chat_Visibility");
static_assert(offsetof(ChatWidget_C_Set_Chat_Visibility, New_Visibility) == 0x000000, "Member 'ChatWidget_C_Set_Chat_Visibility::New_Visibility' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_Set_Chat_Shortcut_Visibility final
{
public:
	ESlateVisibility                              New_Visibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_Set_Chat_Shortcut_Visibility) == 0x000001, "Wrong alignment on ChatWidget_C_Set_Chat_Shortcut_Visibility");
static_assert(sizeof(ChatWidget_C_Set_Chat_Shortcut_Visibility) == 0x000001, "Wrong size on ChatWidget_C_Set_Chat_Shortcut_Visibility");
static_assert(offsetof(ChatWidget_C_Set_Chat_Shortcut_Visibility, New_Visibility) == 0x000000, "Member 'ChatWidget_C_Set_Chat_Shortcut_Visibility::New_Visibility' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_UpdateChatUserListIcon final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_UpdateChatUserListIcon) == 0x000001, "Wrong alignment on ChatWidget_C_UpdateChatUserListIcon");
static_assert(sizeof(ChatWidget_C_UpdateChatUserListIcon) == 0x000001, "Wrong size on ChatWidget_C_UpdateChatUserListIcon");
static_assert(offsetof(ChatWidget_C_UpdateChatUserListIcon, Open) == 0x000000, "Member 'ChatWidget_C_UpdateChatUserListIcon::Open' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
// 0x0002 (0x0002 - 0x0000)
struct ChatWidget_C_HandeChatEnteredEvent final
{
public:
	bool                                          bEnteringChat_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewLocalVar_0;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandeChatEnteredEvent) == 0x000001, "Wrong alignment on ChatWidget_C_HandeChatEnteredEvent");
static_assert(sizeof(ChatWidget_C_HandeChatEnteredEvent) == 0x000002, "Wrong size on ChatWidget_C_HandeChatEnteredEvent");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, bEnteringChat_0) == 0x000000, "Member 'ChatWidget_C_HandeChatEnteredEvent::bEnteringChat_0' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandeChatEnteredEvent, NewLocalVar_0) == 0x000001, "Member 'ChatWidget_C_HandeChatEnteredEvent::NewLocalVar_0' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
// 0x0003 (0x0003 - 0x0000)
struct ChatWidget_C_HandleShowChatWindow final
{
public:
	EFortUIFeature                                Feature;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           FeatureState;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     FeatureStateReason;                                // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandleShowChatWindow) == 0x000001, "Wrong alignment on ChatWidget_C_HandleShowChatWindow");
static_assert(sizeof(ChatWidget_C_HandleShowChatWindow) == 0x000003, "Wrong size on ChatWidget_C_HandleShowChatWindow");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, Feature) == 0x000000, "Member 'ChatWidget_C_HandleShowChatWindow::Feature' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, FeatureState) == 0x000001, "Member 'ChatWidget_C_HandleShowChatWindow::FeatureState' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleShowChatWindow, FeatureStateReason) == 0x000002, "Member 'ChatWidget_C_HandleShowChatWindow::FeatureStateReason' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
// 0x0018 (0x0018 - 0x0000)
struct ChatWidget_C_HandleCursorModeChanged final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActionName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Widget;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandleCursorModeChanged) == 0x000008, "Wrong alignment on ChatWidget_C_HandleCursorModeChanged");
static_assert(sizeof(ChatWidget_C_HandleCursorModeChanged) == 0x000018, "Wrong size on ChatWidget_C_HandleCursorModeChanged");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, bEnabled) == 0x000000, "Member 'ChatWidget_C_HandleCursorModeChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, ActionName) == 0x000004, "Member 'ChatWidget_C_HandleCursorModeChanged::ActionName' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleCursorModeChanged, Widget) == 0x000010, "Member 'ChatWidget_C_HandleCursorModeChanged::Widget' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.InitializeChat
// 0x0048 (0x0048 - 0x0000)
struct ChatWidget_C_InitializeChat final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInCursorMode_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_InitializeChat) == 0x000008, "Wrong alignment on ChatWidget_C_InitializeChat");
static_assert(sizeof(ChatWidget_C_InitializeChat) == 0x000048, "Wrong size on ChatWidget_C_InitializeChat");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_bool_Variable) == 0x000000, "Member 'ChatWidget_C_InitializeChat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_bool_Variable1) == 0x000010, "Member 'ChatWidget_C_InitializeChat::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_IsInCursorMode_ReturnValue) == 0x000011, "Member 'ChatWidget_C_InitializeChat::CallFunc_IsInCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_byte_Variable) == 0x000012, "Member 'ChatWidget_C_InitializeChat::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'ChatWidget_C_InitializeChat::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, Temp_byte_Variable1) == 0x000014, "Member 'ChatWidget_C_InitializeChat::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue1) == 0x000018, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_IsInZone_ReturnValue) == 0x000020, "Member 'ChatWidget_C_InitializeChat::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'ChatWidget_C_InitializeChat::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_GetCurrentInputType_ReturnValue) == 0x000030, "Member 'ChatWidget_C_InitializeChat::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'ChatWidget_C_InitializeChat::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, K2Node_Select_Default) == 0x000038, "Member 'ChatWidget_C_InitializeChat::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_InitializeChat, K2Node_Select1_Default) == 0x000040, "Member 'ChatWidget_C_InitializeChat::K2Node_Select1_Default' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleExitPressed
// 0x0018 (0x0018 - 0x0000)
struct ChatWidget_C_HandleExitPressed final
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUISubsystem*                     CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWidget_C_HandleExitPressed) == 0x000008, "Wrong alignment on ChatWidget_C_HandleExitPressed");
static_assert(sizeof(ChatWidget_C_HandleExitPressed) == 0x000018, "Wrong size on ChatWidget_C_HandleExitPressed");
static_assert(offsetof(ChatWidget_C_HandleExitPressed, Handled) == 0x000000, "Member 'ChatWidget_C_HandleExitPressed::Handled' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleExitPressed, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatWidget_C_HandleExitPressed::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandleExitPressed, CallFunc_GetInputManager_ReturnValue) == 0x000010, "Member 'ChatWidget_C_HandleExitPressed::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleLeftTabPressed
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_HandleLeftTabPressed final
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandleLeftTabPressed) == 0x000001, "Wrong alignment on ChatWidget_C_HandleLeftTabPressed");
static_assert(sizeof(ChatWidget_C_HandleLeftTabPressed) == 0x000001, "Wrong size on ChatWidget_C_HandleLeftTabPressed");
static_assert(offsetof(ChatWidget_C_HandleLeftTabPressed, Handled) == 0x000000, "Member 'ChatWidget_C_HandleLeftTabPressed::Handled' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleRightTabPressed
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_HandleRightTabPressed final
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandleRightTabPressed) == 0x000001, "Wrong alignment on ChatWidget_C_HandleRightTabPressed");
static_assert(sizeof(ChatWidget_C_HandleRightTabPressed) == 0x000001, "Wrong size on ChatWidget_C_HandleRightTabPressed");
static_assert(offsetof(ChatWidget_C_HandleRightTabPressed, Handled) == 0x000000, "Member 'ChatWidget_C_HandleRightTabPressed::Handled' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandleControllerSendMessagePressed
// 0x0001 (0x0001 - 0x0000)
struct ChatWidget_C_HandleControllerSendMessagePressed final
{
public:
	bool                                          Handled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWidget_C_HandleControllerSendMessagePressed) == 0x000001, "Wrong alignment on ChatWidget_C_HandleControllerSendMessagePressed");
static_assert(sizeof(ChatWidget_C_HandleControllerSendMessagePressed) == 0x000001, "Wrong size on ChatWidget_C_HandleControllerSendMessagePressed");
static_assert(offsetof(ChatWidget_C_HandleControllerSendMessagePressed, Handled) == 0x000000, "Member 'ChatWidget_C_HandleControllerSendMessagePressed::Handled' has a wrong offset!");

// Function ChatWidget.ChatWidget_C.HandlePreShowConfirmationDialog
// 0x0128 (0x0128 - 0x0000)
struct ChatWidget_C_HandlePreShowConfirmationDialog final
{
public:
	class UFortUIManagerWidget_NUI*               Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogDescription_NUI             DialogDescription;                                 // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ChatWidget_C_HandlePreShowConfirmationDialog) == 0x000008, "Wrong alignment on ChatWidget_C_HandlePreShowConfirmationDialog");
static_assert(sizeof(ChatWidget_C_HandlePreShowConfirmationDialog) == 0x000128, "Wrong size on ChatWidget_C_HandlePreShowConfirmationDialog");
static_assert(offsetof(ChatWidget_C_HandlePreShowConfirmationDialog, Source) == 0x000000, "Member 'ChatWidget_C_HandlePreShowConfirmationDialog::Source' has a wrong offset!");
static_assert(offsetof(ChatWidget_C_HandlePreShowConfirmationDialog, DialogDescription) == 0x000008, "Member 'ChatWidget_C_HandlePreShowConfirmationDialog::DialogDescription' has a wrong offset!");

}

