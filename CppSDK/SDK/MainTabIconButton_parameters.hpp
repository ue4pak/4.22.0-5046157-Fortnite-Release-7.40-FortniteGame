#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabIconButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
// 0x0110 (0x0110 - 0x0000)
struct MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0068(0x00A0)(ConstParm)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue1;                 // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton) == 0x000008, "Wrong alignment on MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton");
static_assert(sizeof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton) == 0x000110, "Wrong size on MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, EntryPoint) == 0x000000, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_CreateDelegate_OutputDelegate1) == 0x000014, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_CreateDelegate_OutputDelegate2) == 0x000024, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000038, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_Event_IsDesignTime) == 0x000040, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, CallFunc_GetCurrentTextStyleClass_ReturnValue1) == 0x000048, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::CallFunc_GetCurrentTextStyleClass_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_CreateDelegate_OutputDelegate3) == 0x000050, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, K2Node_Event_TabLabelInfo) == 0x000068, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, CallFunc_GetSelected_ReturnValue) == 0x000108, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton, CallFunc_GetSelected_ReturnValue1) == 0x000109, "Member 'MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton::CallFunc_GetSelected_ReturnValue1' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
// 0x00A0 (0x00A0 - 0x0000)
struct MainTabIconButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MainTabIconButton_C_SetTabLabelInfo) == 0x000008, "Wrong alignment on MainTabIconButton_C_SetTabLabelInfo");
static_assert(sizeof(MainTabIconButton_C_SetTabLabelInfo) == 0x0000A0, "Wrong size on MainTabIconButton_C_SetTabLabelInfo");
static_assert(offsetof(MainTabIconButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'MainTabIconButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MainTabIconButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainTabIconButton_C_PreConstruct) == 0x000001, "Wrong alignment on MainTabIconButton_C_PreConstruct");
static_assert(sizeof(MainTabIconButton_C_PreConstruct) == 0x000001, "Wrong size on MainTabIconButton_C_PreConstruct");
static_assert(offsetof(MainTabIconButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MainTabIconButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.Set Text
// 0x0038 (0x0038 - 0x0000)
struct MainTabIconButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_Set_Text) == 0x000008, "Wrong alignment on MainTabIconButton_C_Set_Text");
static_assert(sizeof(MainTabIconButton_C_Set_Text) == 0x000038, "Wrong size on MainTabIconButton_C_Set_Text");
static_assert(offsetof(MainTabIconButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'MainTabIconButton_C_Set_Text::ButtonText_0' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'MainTabIconButton_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Set_Text, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'MainTabIconButton_C_Set_Text::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Set_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'MainTabIconButton_C_Set_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Set_Text, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'MainTabIconButton_C_Set_Text::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Set_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'MainTabIconButton_C_Set_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.Set Icon
// 0x0088 (0x0088 - 0x0000)
struct MainTabIconButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MainTabIconButton_C_Set_Icon) == 0x000008, "Wrong alignment on MainTabIconButton_C_Set_Icon");
static_assert(sizeof(MainTabIconButton_C_Set_Icon) == 0x000088, "Wrong size on MainTabIconButton_C_Set_Icon");
static_assert(offsetof(MainTabIconButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'MainTabIconButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
// 0x0008 (0x0008 - 0x0000)
struct MainTabIconButton_C_SetTutorialBorderStyle final
{
public:
	class UClass*                                 BorderStyle;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_SetTutorialBorderStyle) == 0x000008, "Wrong alignment on MainTabIconButton_C_SetTutorialBorderStyle");
static_assert(sizeof(MainTabIconButton_C_SetTutorialBorderStyle) == 0x000008, "Wrong size on MainTabIconButton_C_SetTutorialBorderStyle");
static_assert(offsetof(MainTabIconButton_C_SetTutorialBorderStyle, BorderStyle) == 0x000000, "Member 'MainTabIconButton_C_SetTutorialBorderStyle::BorderStyle' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
// 0x0028 (0x0028 - 0x0000)
struct MainTabIconButton_C_Update_Bang_State final
{
public:
	bool                                          bBangEnabled_0;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUIFeature                                UIFeature;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UIFeatureRevealText;                               // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainTabIconButton_C_Update_Bang_State) == 0x000008, "Wrong alignment on MainTabIconButton_C_Update_Bang_State");
static_assert(sizeof(MainTabIconButton_C_Update_Bang_State) == 0x000028, "Wrong size on MainTabIconButton_C_Update_Bang_State");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, bBangEnabled_0) == 0x000000, "Member 'MainTabIconButton_C_Update_Bang_State::bBangEnabled_0' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, UIFeature) == 0x000001, "Member 'MainTabIconButton_C_Update_Bang_State::UIFeature' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, UIFeatureRevealText) == 0x000008, "Member 'MainTabIconButton_C_Update_Bang_State::UIFeatureRevealText' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, CallFunc_GetIsEnabled_ReturnValue) == 0x000020, "Member 'MainTabIconButton_C_Update_Bang_State::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'MainTabIconButton_C_Update_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_Update_Bang_State, CallFunc_BooleanAND_ReturnValue1) == 0x000022, "Member 'MainTabIconButton_C_Update_Bang_State::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.SetWrapperNameIDs
// 0x0010 (0x0010 - 0x0000)
struct MainTabIconButton_C_SetWrapperNameIDs final
{
public:
	class FName                                   InTutorialNameID;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InBangNameID;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_SetWrapperNameIDs) == 0x000004, "Wrong alignment on MainTabIconButton_C_SetWrapperNameIDs");
static_assert(sizeof(MainTabIconButton_C_SetWrapperNameIDs) == 0x000010, "Wrong size on MainTabIconButton_C_SetWrapperNameIDs");
static_assert(offsetof(MainTabIconButton_C_SetWrapperNameIDs, InTutorialNameID) == 0x000000, "Member 'MainTabIconButton_C_SetWrapperNameIDs::InTutorialNameID' has a wrong offset!");
static_assert(offsetof(MainTabIconButton_C_SetWrapperNameIDs, InBangNameID) == 0x000008, "Member 'MainTabIconButton_C_SetWrapperNameIDs::InBangNameID' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
// 0x0008 (0x0008 - 0x0000)
struct MainTabIconButton_C_TabAnimateInFinished final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_TabAnimateInFinished) == 0x000008, "Wrong alignment on MainTabIconButton_C_TabAnimateInFinished");
static_assert(sizeof(MainTabIconButton_C_TabAnimateInFinished) == 0x000008, "Wrong size on MainTabIconButton_C_TabAnimateInFinished");
static_assert(offsetof(MainTabIconButton_C_TabAnimateInFinished, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MainTabIconButton_C_TabAnimateInFinished::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.TabAdded
// 0x0008 (0x0008 - 0x0000)
struct MainTabIconButton_C_TabAdded final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_TabAdded) == 0x000008, "Wrong alignment on MainTabIconButton_C_TabAdded");
static_assert(sizeof(MainTabIconButton_C_TabAdded) == 0x000008, "Wrong size on MainTabIconButton_C_TabAdded");
static_assert(offsetof(MainTabIconButton_C_TabAdded, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MainTabIconButton_C_TabAdded::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
// 0x0008 (0x0008 - 0x0000)
struct MainTabIconButton_C_StopTabCallout final
{
public:
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_StopTabCallout) == 0x000008, "Wrong alignment on MainTabIconButton_C_StopTabCallout");
static_assert(sizeof(MainTabIconButton_C_StopTabCallout) == 0x000008, "Wrong size on MainTabIconButton_C_StopTabCallout");
static_assert(offsetof(MainTabIconButton_C_StopTabCallout, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'MainTabIconButton_C_StopTabCallout::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

// Function MainTabIconButton.MainTabIconButton_C.SetBangType
// 0x0001 (0x0001 - 0x0000)
struct MainTabIconButton_C_SetBangType final
{
public:
	EFortBangType                                 NewBangType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabIconButton_C_SetBangType) == 0x000001, "Wrong alignment on MainTabIconButton_C_SetBangType");
static_assert(sizeof(MainTabIconButton_C_SetBangType) == 0x000001, "Wrong size on MainTabIconButton_C_SetBangType");
static_assert(offsetof(MainTabIconButton_C_SetBangType, NewBangType) == 0x000000, "Member 'MainTabIconButton_C_SetBangType::NewBangType' has a wrong offset!");

}

