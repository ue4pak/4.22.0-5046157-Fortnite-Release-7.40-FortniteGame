#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOptionsWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
// 0x0020 (0x0020 - 0x0000)
struct AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIntroAlterations;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortAlterationOptionType                     K2Node_Event_OptionType;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationOption*                  K2Node_Event_OptionWidget;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_SelectedOption;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget");
static_assert(sizeof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget) == 0x000020, "Wrong size on AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, EntryPoint) == 0x000000, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, K2Node_Event_bIntroAlterations) == 0x000004, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::K2Node_Event_bIntroAlterations' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, K2Node_Event_OptionType) == 0x000005, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::K2Node_Event_OptionType' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, K2Node_Event_OptionWidget) == 0x000008, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::K2Node_Event_OptionWidget' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, K2Node_CustomEvent_SelectedOption) == 0x000010, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::K2Node_CustomEvent_SelectedOption' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget, K2Node_CustomEvent_Selected) == 0x000018, "Member 'AlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget::K2Node_CustomEvent_Selected' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnOptionSelected
// 0x0010 (0x0010 - 0x0000)
struct AlterationOptionsWidget_C_OnOptionSelected final
{
public:
	class UCommonButton*                          SelectedOption;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_OnOptionSelected) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_OnOptionSelected");
static_assert(sizeof(AlterationOptionsWidget_C_OnOptionSelected) == 0x000010, "Wrong size on AlterationOptionsWidget_C_OnOptionSelected");
static_assert(offsetof(AlterationOptionsWidget_C_OnOptionSelected, SelectedOption) == 0x000000, "Member 'AlterationOptionsWidget_C_OnOptionSelected::SelectedOption' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_OnOptionSelected, Selected) == 0x000008, "Member 'AlterationOptionsWidget_C_OnOptionSelected::Selected' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
// 0x0010 (0x0010 - 0x0000)
struct AlterationOptionsWidget_C_OnGenerateOption final
{
public:
	EFortAlterationOptionType                     OptionType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationOption*                  OptionWidget;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsWidget_C_OnGenerateOption) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_OnGenerateOption");
static_assert(sizeof(AlterationOptionsWidget_C_OnGenerateOption) == 0x000010, "Wrong size on AlterationOptionsWidget_C_OnGenerateOption");
static_assert(offsetof(AlterationOptionsWidget_C_OnGenerateOption, OptionType) == 0x000000, "Member 'AlterationOptionsWidget_C_OnGenerateOption::OptionType' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_OnGenerateOption, OptionWidget) == 0x000008, "Member 'AlterationOptionsWidget_C_OnGenerateOption::OptionWidget' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
// 0x0001 (0x0001 - 0x0000)
struct AlterationOptionsWidget_C_OnItemChanged final
{
public:
	bool                                          bIntroAlterations;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_OnItemChanged) == 0x000001, "Wrong alignment on AlterationOptionsWidget_C_OnItemChanged");
static_assert(sizeof(AlterationOptionsWidget_C_OnItemChanged) == 0x000001, "Wrong size on AlterationOptionsWidget_C_OnItemChanged");
static_assert(offsetof(AlterationOptionsWidget_C_OnItemChanged, bIntroAlterations) == 0x000000, "Member 'AlterationOptionsWidget_C_OnItemChanged::bIntroAlterations' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
// 0x0028 (0x0028 - 0x0000)
struct AlterationOptionsWidget_C_ClearOptionsAndInitialize final
{
public:
	bool                                          bIntroAlteration;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable4;                               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable5;                               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowNoOptions_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select1_Default;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoAlterationOptionsExist_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoAlterationOptionsExist_ReturnValue1;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select4_Default;                            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select5_Default;                            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsWidget_C_ClearOptionsAndInitialize) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_ClearOptionsAndInitialize");
static_assert(sizeof(AlterationOptionsWidget_C_ClearOptionsAndInitialize) == 0x000028, "Wrong size on AlterationOptionsWidget_C_ClearOptionsAndInitialize");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, bIntroAlteration) == 0x000000, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::bIntroAlteration' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable) == 0x000001, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable) == 0x000002, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable1) == 0x000003, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable1) == 0x000004, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable2) == 0x000005, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable2) == 0x000006, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable3) == 0x000007, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable3) == 0x000008, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable4) == 0x000009, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_byte_Variable5) == 0x00000A, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable4) == 0x00000B, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, Temp_bool_Variable5) == 0x00000C, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::Temp_bool_Variable5' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, CallFunc_ShouldShowNoOptions_ReturnValue) == 0x00000D, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::CallFunc_ShouldShowNoOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select_Default) == 0x000010, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select1_Default) == 0x000018, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, CallFunc_DoAlterationOptionsExist_ReturnValue) == 0x000020, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::CallFunc_DoAlterationOptionsExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, CallFunc_DoAlterationOptionsExist_ReturnValue1) == 0x000021, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::CallFunc_DoAlterationOptionsExist_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select2_Default) == 0x000022, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select3_Default) == 0x000023, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select4_Default) == 0x000024, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select4_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearOptionsAndInitialize, K2Node_Select5_Default) == 0x000025, "Member 'AlterationOptionsWidget_C_ClearOptionsAndInitialize::K2Node_Select5_Default' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
// 0x0038 (0x0038 - 0x0000)
struct AlterationOptionsWidget_C_AddAlterationOptionWidget final
{
public:
	EFortAlterationOptionType                     OptionType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationOption*                  OptionWidget;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	EFortAlterationOptionType                     Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBox*                           K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsWidget_C_AddAlterationOptionWidget) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_AddAlterationOptionWidget");
static_assert(sizeof(AlterationOptionsWidget_C_AddAlterationOptionWidget) == 0x000038, "Wrong size on AlterationOptionsWidget_C_AddAlterationOptionWidget");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, OptionType) == 0x000000, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::OptionType' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, OptionWidget) == 0x000008, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::OptionWidget' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, Temp_byte_Variable) == 0x000020, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, K2Node_Select_Default) == 0x000028, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_AddAlterationOptionWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'AlterationOptionsWidget_C_AddAlterationOptionWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
// 0x0004 (0x0004 - 0x0000)
struct AlterationOptionsWidget_C_DoAnyAlterationsExist final
{
public:
	bool                                          OptionsExist;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoAlterationOptionsExist_ReturnValue;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoAlterationOptionsExist_ReturnValue1;    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_DoAnyAlterationsExist) == 0x000001, "Wrong alignment on AlterationOptionsWidget_C_DoAnyAlterationsExist");
static_assert(sizeof(AlterationOptionsWidget_C_DoAnyAlterationsExist) == 0x000004, "Wrong size on AlterationOptionsWidget_C_DoAnyAlterationsExist");
static_assert(offsetof(AlterationOptionsWidget_C_DoAnyAlterationsExist, OptionsExist) == 0x000000, "Member 'AlterationOptionsWidget_C_DoAnyAlterationsExist::OptionsExist' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_DoAnyAlterationsExist, CallFunc_DoAlterationOptionsExist_ReturnValue) == 0x000001, "Member 'AlterationOptionsWidget_C_DoAnyAlterationsExist::CallFunc_DoAlterationOptionsExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_DoAnyAlterationsExist, CallFunc_DoAlterationOptionsExist_ReturnValue1) == 0x000002, "Member 'AlterationOptionsWidget_C_DoAnyAlterationsExist::CallFunc_DoAlterationOptionsExist_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_DoAnyAlterationsExist, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'AlterationOptionsWidget_C_DoAnyAlterationsExist::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
// 0x0005 (0x0005 - 0x0000)
struct AlterationOptionsWidget_C_ShouldShowNoOptions final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidAlterationSlot_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoAnyAlterationsExist_OptionsExist;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_ShouldShowNoOptions) == 0x000001, "Wrong alignment on AlterationOptionsWidget_C_ShouldShowNoOptions");
static_assert(sizeof(AlterationOptionsWidget_C_ShouldShowNoOptions) == 0x000005, "Wrong size on AlterationOptionsWidget_C_ShouldShowNoOptions");
static_assert(offsetof(AlterationOptionsWidget_C_ShouldShowNoOptions, ReturnValue) == 0x000000, "Member 'AlterationOptionsWidget_C_ShouldShowNoOptions::ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ShouldShowNoOptions, CallFunc_IsValidAlterationSlot_ReturnValue) == 0x000001, "Member 'AlterationOptionsWidget_C_ShouldShowNoOptions::CallFunc_IsValidAlterationSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ShouldShowNoOptions, CallFunc_DoAnyAlterationsExist_OptionsExist) == 0x000002, "Member 'AlterationOptionsWidget_C_ShouldShowNoOptions::CallFunc_DoAnyAlterationsExist_OptionsExist' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ShouldShowNoOptions, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'AlterationOptionsWidget_C_ShouldShowNoOptions::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ShouldShowNoOptions, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'AlterationOptionsWidget_C_ShouldShowNoOptions::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.SetScrollWidget
// 0x0008 (0x0008 - 0x0000)
struct AlterationOptionsWidget_C_SetScrollWidget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsWidget_C_SetScrollWidget) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_SetScrollWidget");
static_assert(sizeof(AlterationOptionsWidget_C_SetScrollWidget) == 0x000008, "Wrong size on AlterationOptionsWidget_C_SetScrollWidget");
static_assert(offsetof(AlterationOptionsWidget_C_SetScrollWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'AlterationOptionsWidget_C_SetScrollWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearAndUnbindOptions
// 0x0038 (0x0038 - 0x0000)
struct AlterationOptionsWidget_C_ClearAndUnbindOptions final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVerticalBox*>                   K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBox*                           CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_ClearAndUnbindOptions) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_ClearAndUnbindOptions");
static_assert(sizeof(AlterationOptionsWidget_C_ClearAndUnbindOptions) == 0x000038, "Wrong size on AlterationOptionsWidget_C_ClearAndUnbindOptions");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, K2Node_MakeArray_Array) == 0x000010, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, CallFunc_Array_Get_Item) == 0x000028, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_ClearAndUnbindOptions, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'AlterationOptionsWidget_C_ClearAndUnbindOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UnbindChildren
// 0x0040 (0x0040 - 0x0000)
struct AlterationOptionsWidget_C_UnbindChildren final
{
public:
	class UPanelWidget*                           Panel;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_DynamicCast_AsCommon_Button;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsWidget_C_UnbindChildren) == 0x000008, "Wrong alignment on AlterationOptionsWidget_C_UnbindChildren");
static_assert(sizeof(AlterationOptionsWidget_C_UnbindChildren) == 0x000040, "Wrong size on AlterationOptionsWidget_C_UnbindChildren");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, Panel) == 0x000000, "Member 'AlterationOptionsWidget_C_UnbindChildren::Panel' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'AlterationOptionsWidget_C_UnbindChildren::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'AlterationOptionsWidget_C_UnbindChildren::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'AlterationOptionsWidget_C_UnbindChildren::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, Temp_int_Variable) == 0x000020, "Member 'AlterationOptionsWidget_C_UnbindChildren::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'AlterationOptionsWidget_C_UnbindChildren::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'AlterationOptionsWidget_C_UnbindChildren::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, K2Node_DynamicCast_AsCommon_Button) == 0x000030, "Member 'AlterationOptionsWidget_C_UnbindChildren::K2Node_DynamicCast_AsCommon_Button' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'AlterationOptionsWidget_C_UnbindChildren::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AlterationOptionsWidget_C_UnbindChildren, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000039, "Member 'AlterationOptionsWidget_C_UnbindChildren::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

