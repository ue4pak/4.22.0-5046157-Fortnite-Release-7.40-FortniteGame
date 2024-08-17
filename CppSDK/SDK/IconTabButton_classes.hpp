#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTabButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// 0x0158 (0x0C88 - 0x0B30)
class UIconTabButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                   BangWrapper;                                       // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ContentHB;                                         // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxShell;                                      // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0B60(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0B78(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UseText;                                           // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C01[0x3];                                      // 0x0C01(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SelectedIconTint;                                  // 0x0C04(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedIconTint;                                // 0x0C14(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredIconTint;                                   // 0x0C24(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBangEnabled;                                      // 0x0C34(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ChangeIconColorWhenSelected;                       // 0x0C35(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C36[0x2];                                      // 0x0C36(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            SelectedIconColor;                                 // 0x0C38(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UnSelectedIconColor;                               // 0x0C60(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_IconTabButton(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void Construct();
	void BP_OnDeselected();
	void BP_OnSelected();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void Set_Text(const class FText& ButtonText_0);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void ShowText();
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Bang_State(bool bBangEnabled_0, int32 Count);
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor);
	void Play_Hover_Sound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconTabButton_C">();
	}
	static class UIconTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTabButton_C>();
	}
};
static_assert(alignof(UIconTabButton_C) == 0x000008, "Wrong alignment on UIconTabButton_C");
static_assert(sizeof(UIconTabButton_C) == 0x000C88, "Wrong size on UIconTabButton_C");
static_assert(offsetof(UIconTabButton_C, UberGraphFrame) == 0x000B30, "Member 'UIconTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, BangWrapper) == 0x000B38, "Member 'UIconTabButton_C::BangWrapper' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, CenterButtonTextWidget) == 0x000B40, "Member 'UIconTabButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, ContentHB) == 0x000B48, "Member 'UIconTabButton_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, LeftSideImage) == 0x000B50, "Member 'UIconTabButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, SizeBoxShell) == 0x000B58, "Member 'UIconTabButton_C::SizeBoxShell' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, ButtonText) == 0x000B60, "Member 'UIconTabButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, IconBrush) == 0x000B78, "Member 'UIconTabButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, UseText) == 0x000C00, "Member 'UIconTabButton_C::UseText' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, SelectedIconTint) == 0x000C04, "Member 'UIconTabButton_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, DeselectedIconTint) == 0x000C14, "Member 'UIconTabButton_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, HoveredIconTint) == 0x000C24, "Member 'UIconTabButton_C::HoveredIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, bBangEnabled) == 0x000C34, "Member 'UIconTabButton_C::bBangEnabled' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, ChangeIconColorWhenSelected) == 0x000C35, "Member 'UIconTabButton_C::ChangeIconColorWhenSelected' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, SelectedIconColor) == 0x000C38, "Member 'UIconTabButton_C::SelectedIconColor' has a wrong offset!");
static_assert(offsetof(UIconTabButton_C, UnSelectedIconColor) == 0x000C60, "Member 'UIconTabButton_C::UnSelectedIconColor' has a wrong offset!");

}

