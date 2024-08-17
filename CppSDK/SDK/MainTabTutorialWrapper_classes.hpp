#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
// 0x0030 (0x0288 - 0x0258)
class UMainTabTutorialWrapper_C final : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TutorialGlow;                                      // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFancyToastWidget_C*                    FancyToastWidget;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialToastWidget_C*                 TutorialToastWidget;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             Play_Callout_Sound;                                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          ParentButton;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainTabTutorialWrapper(int32 EntryPoint);
	void Tab_Reveal_Message_Closed();
	void OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType);
	void OnStopCallout();
	void OnBangStateChanged(bool bEnabled, int32 Count);
	void CheckFinishTutorialWrapper();
	void HandleTutorialCallout(const class FName& TutorialObjectiveName, ETutorialType TutorialType);
	void HasValidData(const struct FFortUITutorialData& FortUITutorialData, bool* Result);
	void GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo);
	void SetParentButton(class UCommonButton* ParentButton_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabTutorialWrapper_C">();
	}
	static class UMainTabTutorialWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabTutorialWrapper_C>();
	}
};
static_assert(alignof(UMainTabTutorialWrapper_C) == 0x000008, "Wrong alignment on UMainTabTutorialWrapper_C");
static_assert(sizeof(UMainTabTutorialWrapper_C) == 0x000288, "Wrong size on UMainTabTutorialWrapper_C");
static_assert(offsetof(UMainTabTutorialWrapper_C, UberGraphFrame) == 0x000258, "Member 'UMainTabTutorialWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialWrapper_C, TutorialGlow) == 0x000260, "Member 'UMainTabTutorialWrapper_C::TutorialGlow' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialWrapper_C, FancyToastWidget) == 0x000268, "Member 'UMainTabTutorialWrapper_C::FancyToastWidget' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialWrapper_C, TutorialToastWidget) == 0x000270, "Member 'UMainTabTutorialWrapper_C::TutorialToastWidget' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialWrapper_C, Play_Callout_Sound) == 0x000278, "Member 'UMainTabTutorialWrapper_C::Play_Callout_Sound' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialWrapper_C, ParentButton) == 0x000280, "Member 'UMainTabTutorialWrapper_C::ParentButton' has a wrong offset!");

}

