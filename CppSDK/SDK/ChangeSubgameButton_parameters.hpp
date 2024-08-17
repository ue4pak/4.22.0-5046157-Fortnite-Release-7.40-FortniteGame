#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChangeSubgameButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton
// 0x0130 (0x0130 - 0x0000)
struct ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0040(0x0018)()
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0074(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton");
static_assert(sizeof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton) == 0x000130, "Wrong size on ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, EntryPoint) == 0x000000, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_name_Variable) == 0x000004, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, Temp_byte_Variable) == 0x00000C, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue1) == 0x000020, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_GetNumPlayersInLocalParty_ReturnValue) == 0x000030, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_GetNumPlayersInLocalParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_ComponentBoundEvent_Button) == 0x000038, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_MakeLiteralText_ReturnValue) == 0x000040, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CustomEvent_Result) == 0x000058, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CustomEvent_ResultName) == 0x00005C, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue) == 0x000068, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Event_MyGeometry) == 0x000074, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton, K2Node_CreateDelegate_OutputDelegate) == 0x000120, "Member 'ChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ChangeSubgameButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChangeSubgameButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_OnMouseEnter");
static_assert(sizeof(ChangeSubgameButton_C_OnMouseEnter) == 0x0000A8, "Wrong size on ChangeSubgameButton_C_OnMouseEnter");
static_assert(offsetof(ChangeSubgameButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ChangeSubgameButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ChangeSubgameButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult_3A1F478D47C301F9F1E029927174E059
// 0x000C (0x000C - 0x0000)
struct ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059) == 0x000004, "Wrong alignment on ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059");
static_assert(sizeof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059) == 0x00000C, "Wrong size on ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059");
static_assert(offsetof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059, Result) == 0x000000, "Member 'ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059::Result' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059, ResultName) == 0x000004, "Member 'ChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059::ResultName' has a wrong offset!");

// Function ChangeSubgameButton.ChangeSubgameButton_C.Change Main Menu Music State
// 0x0020 (0x0020 - 0x0000)
struct ChangeSubgameButton_C_Change_Main_Menu_Music_State final
{
public:
	bool                                          Set_Lobby_Music_State;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeSubgameButton_C_Change_Main_Menu_Music_State) == 0x000008, "Wrong alignment on ChangeSubgameButton_C_Change_Main_Menu_Music_State");
static_assert(sizeof(ChangeSubgameButton_C_Change_Main_Menu_Music_State) == 0x000020, "Wrong size on ChangeSubgameButton_C_Change_Main_Menu_Music_State");
static_assert(offsetof(ChangeSubgameButton_C_Change_Main_Menu_Music_State, Set_Lobby_Music_State) == 0x000000, "Member 'ChangeSubgameButton_C_Change_Main_Menu_Music_State::Set_Lobby_Music_State' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_Change_Main_Menu_Music_State, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'ChangeSubgameButton_C_Change_Main_Menu_Music_State::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(ChangeSubgameButton_C_Change_Main_Menu_Music_State, CallFunc_Array_Get_Item) == 0x000018, "Member 'ChangeSubgameButton_C_Change_Main_Menu_Music_State::CallFunc_Array_Get_Item' has a wrong offset!");

}

