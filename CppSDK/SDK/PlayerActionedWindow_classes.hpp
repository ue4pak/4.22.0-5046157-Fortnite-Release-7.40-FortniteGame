#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerActionedWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerActionedWindow.PlayerActionedWindow_C
// 0x0030 (0x0390 - 0x0360)
class UPlayerActionedWindow_C final : public UFortMessageReceivedScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_34;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerActionedWindow(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerActionedWindow_C">();
	}
	static class UPlayerActionedWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerActionedWindow_C>();
	}
};
static_assert(alignof(UPlayerActionedWindow_C) == 0x000008, "Wrong alignment on UPlayerActionedWindow_C");
static_assert(sizeof(UPlayerActionedWindow_C) == 0x000390, "Wrong size on UPlayerActionedWindow_C");
static_assert(offsetof(UPlayerActionedWindow_C, UberGraphFrame) == 0x000360, "Member 'UPlayerActionedWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerActionedWindow_C, Intro) == 0x000368, "Member 'UPlayerActionedWindow_C::Intro' has a wrong offset!");
static_assert(offsetof(UPlayerActionedWindow_C, CloseButton) == 0x000370, "Member 'UPlayerActionedWindow_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UPlayerActionedWindow_C, Image_34) == 0x000378, "Member 'UPlayerActionedWindow_C::Image_34' has a wrong offset!");
static_assert(offsetof(UPlayerActionedWindow_C, Lightbox) == 0x000380, "Member 'UPlayerActionedWindow_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UPlayerActionedWindow_C, Title) == 0x000388, "Member 'UPlayerActionedWindow_C::Title' has a wrong offset!");

}

