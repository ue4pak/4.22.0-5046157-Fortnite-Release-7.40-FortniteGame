#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpEntryBodyWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.SetActiveEntry
// 0x0010 (0x0010 - 0x0000)
struct HelpEntryBodyWidget_C_SetActiveEntry final
{
public:
	class UFortHelpItem*                          InHelpItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HelpEntryBodyWidget_C_SetActiveEntry) == 0x000008, "Wrong alignment on HelpEntryBodyWidget_C_SetActiveEntry");
static_assert(sizeof(HelpEntryBodyWidget_C_SetActiveEntry) == 0x000010, "Wrong size on HelpEntryBodyWidget_C_SetActiveEntry");
static_assert(offsetof(HelpEntryBodyWidget_C_SetActiveEntry, InHelpItem) == 0x000000, "Member 'HelpEntryBodyWidget_C_SetActiveEntry::InHelpItem' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_SetActiveEntry, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'HelpEntryBodyWidget_C_SetActiveEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalWidget
// 0x0030 (0x0030 - 0x0000)
struct HelpEntryBodyWidget_C_UpdateAdditionalWidget final
{
public:
	class UPanelWidget*                           ContentContainer;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHelpContentLocation                      Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HelpEntryBodyWidget_C_UpdateAdditionalWidget) == 0x000008, "Wrong alignment on HelpEntryBodyWidget_C_UpdateAdditionalWidget");
static_assert(sizeof(HelpEntryBodyWidget_C_UpdateAdditionalWidget) == 0x000030, "Wrong size on HelpEntryBodyWidget_C_UpdateAdditionalWidget");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, ContentContainer) == 0x000000, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::ContentContainer' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, Temp_byte_Variable) == 0x000008, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, K2Node_Select_Default) == 0x000020, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalWidget, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalImage
// 0x0018 (0x0018 - 0x0000)
struct HelpEntryBodyWidget_C_UpdateAdditionalImage final
{
public:
	class UImage*                                 ImageComponent;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHelpContentLocation                      Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HelpEntryBodyWidget_C_UpdateAdditionalImage) == 0x000008, "Wrong alignment on HelpEntryBodyWidget_C_UpdateAdditionalImage");
static_assert(sizeof(HelpEntryBodyWidget_C_UpdateAdditionalImage) == 0x000018, "Wrong size on HelpEntryBodyWidget_C_UpdateAdditionalImage");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalImage, ImageComponent) == 0x000000, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalImage::ImageComponent' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalImage, Temp_byte_Variable) == 0x000008, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HelpEntryBodyWidget_C_UpdateAdditionalImage, K2Node_Select_Default) == 0x000010, "Member 'HelpEntryBodyWidget_C_UpdateAdditionalImage::K2Node_Select_Default' has a wrong offset!");

}

