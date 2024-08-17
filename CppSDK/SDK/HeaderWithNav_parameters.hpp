#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeaderWithNav

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function HeaderWithNav.HeaderWithNav_C.ButtonPressed__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct HeaderWithNav_C_ButtonPressed__DelegateSignature final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_ButtonPressed__DelegateSignature) == 0x000004, "Wrong alignment on HeaderWithNav_C_ButtonPressed__DelegateSignature");
static_assert(sizeof(HeaderWithNav_C_ButtonPressed__DelegateSignature) == 0x000004, "Wrong size on HeaderWithNav_C_ButtonPressed__DelegateSignature");
static_assert(offsetof(HeaderWithNav_C_ButtonPressed__DelegateSignature, InIndex) == 0x000000, "Member 'HeaderWithNav_C_ButtonPressed__DelegateSignature::InIndex' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
// 0x0050 (0x0050 - 0x0000)
struct HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUISubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav) == 0x000008, "Wrong alignment on HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav");
static_assert(sizeof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav) == 0x000050, "Wrong size on HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, EntryPoint) == 0x000000, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, CallFunc_IsUsingGamepad_ReturnValue) == 0x000020, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_CustomEvent_bUsingGamepad) == 0x000021, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_ComponentBoundEvent_Button2) == 0x000028, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000030, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_Event_IsDesignTime) == 0x000038, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_ComponentBoundEvent_Button1) == 0x000040, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav, K2Node_ComponentBoundEvent_Button) == 0x000048, "Member 'HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HeaderWithNav_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeaderWithNav_C_PreConstruct) == 0x000001, "Wrong alignment on HeaderWithNav_C_PreConstruct");
static_assert(sizeof(HeaderWithNav_C_PreConstruct) == 0x000001, "Wrong size on HeaderWithNav_C_PreConstruct");
static_assert(offsetof(HeaderWithNav_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HeaderWithNav_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct HeaderWithNav_C_HandleInputMethodChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeaderWithNav_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on HeaderWithNav_C_HandleInputMethodChanged");
static_assert(sizeof(HeaderWithNav_C_HandleInputMethodChanged) == 0x000001, "Wrong size on HeaderWithNav_C_HandleInputMethodChanged");
static_assert(offsetof(HeaderWithNav_C_HandleInputMethodChanged, bUsingGamepad) == 0x000000, "Member 'HeaderWithNav_C_HandleInputMethodChanged::bUsingGamepad' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.Update
// 0x0218 (0x0218 - 0x0000)
struct HeaderWithNav_C_Update final
{
public:
	bool                                          IsUsingGamepad;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x0010(0x0200)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeaderWithNav_C_Update) == 0x000008, "Wrong alignment on HeaderWithNav_C_Update");
static_assert(sizeof(HeaderWithNav_C_Update) == 0x000218, "Wrong size on HeaderWithNav_C_Update");
static_assert(offsetof(HeaderWithNav_C_Update, IsUsingGamepad) == 0x000000, "Member 'HeaderWithNav_C_Update::IsUsingGamepad' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'HeaderWithNav_C_Update::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HeaderWithNav_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo) == 0x000010, "Member 'HeaderWithNav_C_Update::CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_Not_PreBool_ReturnValue1) == 0x000210, "Member 'HeaderWithNav_C_Update::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x000211, "Member 'HeaderWithNav_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_Update, CallFunc_BooleanAND_ReturnValue1) == 0x000212, "Member 'HeaderWithNav_C_Update::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
// 0x0028 (0x0028 - 0x0000)
struct HeaderWithNav_C_SetTextAndUpdate final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeaderWithNav_C_SetTextAndUpdate) == 0x000008, "Wrong alignment on HeaderWithNav_C_SetTextAndUpdate");
static_assert(sizeof(HeaderWithNav_C_SetTextAndUpdate) == 0x000028, "Wrong size on HeaderWithNav_C_SetTextAndUpdate");
static_assert(offsetof(HeaderWithNav_C_SetTextAndUpdate, Text) == 0x000000, "Member 'HeaderWithNav_C_SetTextAndUpdate::Text' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetTextAndUpdate, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'HeaderWithNav_C_SetTextAndUpdate::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetTextAndUpdate, CallFunc_IsUsingGamepad_ReturnValue) == 0x000020, "Member 'HeaderWithNav_C_SetTextAndUpdate::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.SetIndex
// 0x0004 (0x0004 - 0x0000)
struct HeaderWithNav_C_SetIndex final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_SetIndex) == 0x000004, "Wrong alignment on HeaderWithNav_C_SetIndex");
static_assert(sizeof(HeaderWithNav_C_SetIndex) == 0x000004, "Wrong size on HeaderWithNav_C_SetIndex");
static_assert(offsetof(HeaderWithNav_C_SetIndex, InIndex) == 0x000000, "Member 'HeaderWithNav_C_SetIndex::InIndex' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.UpdateIndex
// 0x001C (0x001C - 0x0000)
struct HeaderWithNav_C_UpdateIndex final
{
public:
	bool                                          Increment;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IncludeDefenders_IncludeDefenders;        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IncludeDefenders_IncludeDefenders1;       // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_UpdateIndex) == 0x000004, "Wrong alignment on HeaderWithNav_C_UpdateIndex");
static_assert(sizeof(HeaderWithNav_C_UpdateIndex) == 0x00001C, "Wrong size on HeaderWithNav_C_UpdateIndex");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, Increment) == 0x000000, "Member 'HeaderWithNav_C_UpdateIndex::Increment' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, Temp_int_Variable) == 0x000004, "Member 'HeaderWithNav_C_UpdateIndex::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, Temp_int_Variable1) == 0x000008, "Member 'HeaderWithNav_C_UpdateIndex::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_IncludeDefenders_IncludeDefenders) == 0x00000C, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_IncludeDefenders_IncludeDefenders' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000D, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_IncludeDefenders_IncludeDefenders1) == 0x00000E, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_IncludeDefenders_IncludeDefenders1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_EqualEqual_IntInt_ReturnValue1) == 0x00000F, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_EqualEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000011, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_UpdateIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'HeaderWithNav_C_UpdateIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.IncludeDefenders
// 0x0028 (0x0028 - 0x0000)
struct HeaderWithNav_C_IncludeDefenders final
{
public:
	bool                                          IncludeDefenders_0;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                         CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeaderWithNav_C_IncludeDefenders) == 0x000008, "Wrong alignment on HeaderWithNav_C_IncludeDefenders");
static_assert(sizeof(HeaderWithNav_C_IncludeDefenders) == 0x000028, "Wrong size on HeaderWithNav_C_IncludeDefenders");
static_assert(offsetof(HeaderWithNav_C_IncludeDefenders, IncludeDefenders_0) == 0x000000, "Member 'HeaderWithNav_C_IncludeDefenders::IncludeDefenders_0' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_IncludeDefenders, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HeaderWithNav_C_IncludeDefenders::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_IncludeDefenders, CallFunc_GetQuestManager_ReturnValue) == 0x000010, "Member 'HeaderWithNav_C_IncludeDefenders::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_IncludeDefenders, CallFunc_GetQuestWithDefinition_ReturnValue) == 0x000018, "Member 'HeaderWithNav_C_IncludeDefenders::CallFunc_GetQuestWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_IncludeDefenders, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'HeaderWithNav_C_IncludeDefenders::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function HeaderWithNav.HeaderWithNav_C.SetArrowButtonState
// 0x000B (0x000B - 0x0000)
struct HeaderWithNav_C_SetArrowButtonState final
{
public:
	bool                                          EnableLeftArrow;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableRightArrow;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideInsteadOfEnable;                               // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeaderWithNav_C_SetArrowButtonState) == 0x000001, "Wrong alignment on HeaderWithNav_C_SetArrowButtonState");
static_assert(sizeof(HeaderWithNav_C_SetArrowButtonState) == 0x00000B, "Wrong size on HeaderWithNav_C_SetArrowButtonState");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, EnableLeftArrow) == 0x000000, "Member 'HeaderWithNav_C_SetArrowButtonState::EnableLeftArrow' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, EnableRightArrow) == 0x000001, "Member 'HeaderWithNav_C_SetArrowButtonState::EnableRightArrow' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, HideInsteadOfEnable) == 0x000002, "Member 'HeaderWithNav_C_SetArrowButtonState::HideInsteadOfEnable' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_bool_Variable) == 0x000003, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_byte_Variable) == 0x000004, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_byte_Variable1) == 0x000005, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_bool_Variable1) == 0x000006, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, K2Node_Select_Default) == 0x000007, "Member 'HeaderWithNav_C_SetArrowButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_byte_Variable2) == 0x000008, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, Temp_byte_Variable3) == 0x000009, "Member 'HeaderWithNav_C_SetArrowButtonState::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(HeaderWithNav_C_SetArrowButtonState, K2Node_Select1_Default) == 0x00000A, "Member 'HeaderWithNav_C_SetArrowButtonState::K2Node_Select1_Default' has a wrong offset!");

}

