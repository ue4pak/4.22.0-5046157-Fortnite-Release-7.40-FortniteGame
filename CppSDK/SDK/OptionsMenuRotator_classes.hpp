#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuRotator.OptionsMenuRotator_C
// 0x0080 (0x02E8 - 0x0268)
class UOptionsMenuRotator_C final : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonLeft;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonRight;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonTouchTooltip;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchorSettingDescription;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RotatorText;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxContainer;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxLabel;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerBottom;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                         TextRotator;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Hover_Text;                                        // 0x02C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           Tooltip_Timer;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousValue;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OptionsMenuRotator(int32 EntryPoint);
	void CenterOnWidget();
	void UpdateSetting(class UCommonTextBlock* TooltipTextBlock);
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature(int32 Value);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void UpdateSize();
	void HandlePawnSet();
	class UWidget* OnGetMenuContent();
	void Show_Tooltip();
	void Hide_Tooltip();
	void Update_Display_Names();

	class UObject* GetListItemObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuRotator_C">();
	}
	static class UOptionsMenuRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuRotator_C>();
	}
};
static_assert(alignof(UOptionsMenuRotator_C) == 0x000008, "Wrong alignment on UOptionsMenuRotator_C");
static_assert(sizeof(UOptionsMenuRotator_C) == 0x0002E8, "Wrong size on UOptionsMenuRotator_C");
static_assert(offsetof(UOptionsMenuRotator_C, UberGraphFrame) == 0x000268, "Member 'UOptionsMenuRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, ButtonLeft) == 0x000270, "Member 'UOptionsMenuRotator_C::ButtonLeft' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, ButtonRight) == 0x000278, "Member 'UOptionsMenuRotator_C::ButtonRight' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, ButtonTouchTooltip) == 0x000280, "Member 'UOptionsMenuRotator_C::ButtonTouchTooltip' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, MenuAnchorSettingDescription) == 0x000288, "Member 'UOptionsMenuRotator_C::MenuAnchorSettingDescription' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, RotatorText) == 0x000290, "Member 'UOptionsMenuRotator_C::RotatorText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, SizeBoxContainer) == 0x000298, "Member 'UOptionsMenuRotator_C::SizeBoxContainer' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, SizeBoxLabel) == 0x0002A0, "Member 'UOptionsMenuRotator_C::SizeBoxLabel' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, SpacerBottom) == 0x0002A8, "Member 'UOptionsMenuRotator_C::SpacerBottom' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, TextRotator) == 0x0002B0, "Member 'UOptionsMenuRotator_C::TextRotator' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, Tab_Tooltip_Text) == 0x0002B8, "Member 'UOptionsMenuRotator_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, Hover_Text) == 0x0002C0, "Member 'UOptionsMenuRotator_C::Hover_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, Tooltip_Timer) == 0x0002D8, "Member 'UOptionsMenuRotator_C::Tooltip_Timer' has a wrong offset!");
static_assert(offsetof(UOptionsMenuRotator_C, PreviousValue) == 0x0002E0, "Member 'UOptionsMenuRotator_C::PreviousValue' has a wrong offset!");

}

