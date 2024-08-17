#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMatchmakingKeyModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C
// 0x0040 (0x0388 - 0x0348)
class UCustomMatchmakingKeyModal_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      AcceptButton;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    EditTextActionWidget;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          MatchmakingKey;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CustomMatchmakingKeyModal(int32 EntryPoint);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomMatchmakingKeyModal_C">();
	}
	static class UCustomMatchmakingKeyModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMatchmakingKeyModal_C>();
	}
};
static_assert(alignof(UCustomMatchmakingKeyModal_C) == 0x000008, "Wrong alignment on UCustomMatchmakingKeyModal_C");
static_assert(sizeof(UCustomMatchmakingKeyModal_C) == 0x000388, "Wrong size on UCustomMatchmakingKeyModal_C");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, UberGraphFrame) == 0x000348, "Member 'UCustomMatchmakingKeyModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, AcceptButton) == 0x000350, "Member 'UCustomMatchmakingKeyModal_C::AcceptButton' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, CloseButton) == 0x000358, "Member 'UCustomMatchmakingKeyModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, EditTextActionWidget) == 0x000360, "Member 'UCustomMatchmakingKeyModal_C::EditTextActionWidget' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, Lightbox) == 0x000368, "Member 'UCustomMatchmakingKeyModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, MainIcon) == 0x000370, "Member 'UCustomMatchmakingKeyModal_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, MatchmakingKey) == 0x000378, "Member 'UCustomMatchmakingKeyModal_C::MatchmakingKey' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, Title) == 0x000380, "Member 'UCustomMatchmakingKeyModal_C::Title' has a wrong offset!");

}

