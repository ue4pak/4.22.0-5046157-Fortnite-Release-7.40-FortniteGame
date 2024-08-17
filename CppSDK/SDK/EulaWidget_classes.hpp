#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EulaWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
// 0x0030 (0x0388 - 0x0358)
class UEulaWidget_C final : public UFortEulaWidget
{
public:
	class UHorizontalBox*                         HBox_Buttons;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnEulaResponse;                                    // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SelectedResponse;                                  // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnEulaResponse__DelegateSignature(bool Accepted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EulaWidget_C">();
	}
	static class UEulaWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEulaWidget_C>();
	}
};
static_assert(alignof(UEulaWidget_C) == 0x000008, "Wrong alignment on UEulaWidget_C");
static_assert(sizeof(UEulaWidget_C) == 0x000388, "Wrong size on UEulaWidget_C");
static_assert(offsetof(UEulaWidget_C, HBox_Buttons) == 0x000358, "Member 'UEulaWidget_C::HBox_Buttons' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, SafeZone) == 0x000360, "Member 'UEulaWidget_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, TitleText) == 0x000368, "Member 'UEulaWidget_C::TitleText' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, OnEulaResponse) == 0x000370, "Member 'UEulaWidget_C::OnEulaResponse' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, SelectedResponse) == 0x000380, "Member 'UEulaWidget_C::SelectedResponse' has a wrong offset!");

}

