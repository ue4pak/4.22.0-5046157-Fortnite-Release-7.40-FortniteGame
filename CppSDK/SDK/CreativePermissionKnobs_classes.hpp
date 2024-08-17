#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePermissionKnobs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreativePermissionKnobs.CreativePermissionKnobs_C
// 0x00A8 (0x0530 - 0x0488)
class UCreativePermissionKnobs_C final : public UFortCreativePermissionOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Error;                                             // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out_0;                                             // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewAnimation_1;                                    // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchmakingSpinnerButton_C*      AthenaMatchmakingSpinnerButton;                    // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_2;                                    // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionShine;                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ModalContent;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OptionDisplayName;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         DebugOptions;                                      // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                        ListItems;                                         // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnAccept;                                          // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCancel;                                          // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedValue;                                     // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAccept__DelegateSignature();
	void OnCancel__DelegateSignature();
	void ExecuteUbergraph_CreativePermissionKnobs(int32 EntryPoint);
	void CloseDialog();
	void ShowWhitelistLimitError();
	void HandleNoOptionsLoaded();
	void OnRotated(int32 Value);
	void UpdatePermissionSpinner();
	void AnimateIn();
	void HandleCancelClicked();
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Close();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnActivated();
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	class UWidget* CustomNavToPermissionsListIfShown(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativePermissionKnobs_C">();
	}
	static class UCreativePermissionKnobs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativePermissionKnobs_C>();
	}
};
static_assert(alignof(UCreativePermissionKnobs_C) == 0x000008, "Wrong alignment on UCreativePermissionKnobs_C");
static_assert(sizeof(UCreativePermissionKnobs_C) == 0x000530, "Wrong size on UCreativePermissionKnobs_C");
static_assert(offsetof(UCreativePermissionKnobs_C, UberGraphFrame) == 0x000488, "Member 'UCreativePermissionKnobs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, Error) == 0x000490, "Member 'UCreativePermissionKnobs_C::Error' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, Out_0) == 0x000498, "Member 'UCreativePermissionKnobs_C::Out_0' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, NewAnimation_1) == 0x0004A0, "Member 'UCreativePermissionKnobs_C::NewAnimation_1' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, Out) == 0x0004A8, "Member 'UCreativePermissionKnobs_C::Out' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, In) == 0x0004B0, "Member 'UCreativePermissionKnobs_C::In' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, AthenaMatchmakingSpinnerButton) == 0x0004B8, "Member 'UCreativePermissionKnobs_C::AthenaMatchmakingSpinnerButton' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, CommonBorder_2) == 0x0004C0, "Member 'UCreativePermissionKnobs_C::CommonBorder_2' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, ConfirmSelectionShine) == 0x0004C8, "Member 'UCreativePermissionKnobs_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, HorizontalBox_3) == 0x0004D0, "Member 'UCreativePermissionKnobs_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, ModalContent) == 0x0004D8, "Member 'UCreativePermissionKnobs_C::ModalContent' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, OptionDisplayName) == 0x0004E0, "Member 'UCreativePermissionKnobs_C::OptionDisplayName' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, DebugOptions) == 0x0004E8, "Member 'UCreativePermissionKnobs_C::DebugOptions' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, ListItems) == 0x0004F8, "Member 'UCreativePermissionKnobs_C::ListItems' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, OnAccept) == 0x000508, "Member 'UCreativePermissionKnobs_C::OnAccept' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, OnCancel) == 0x000518, "Member 'UCreativePermissionKnobs_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UCreativePermissionKnobs_C, SelectedValue) == 0x000528, "Member 'UCreativePermissionKnobs_C::SelectedValue' has a wrong offset!");

}

