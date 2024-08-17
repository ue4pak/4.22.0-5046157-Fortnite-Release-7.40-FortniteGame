#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Tutorial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Announcement_Tutorial.Announcement_Tutorial_C
// 0x0078 (0x02B8 - 0x0240)
class UAnnouncement_Tutorial_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ChatBox;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ContentBox;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Lightbox;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SystemText;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TopOverlay;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           TextLines;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                   LastText;                                          // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           ContinueTutorialTimer;                             // 0x02B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announcement_Tutorial(int32 EntryPoint);
	void ResetTutorialAnnoucementWidget();
	void HandleClientEvent_OnboardingHideUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingShowUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Construct();
	void HandleUpdateTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow);
	void AddTextLine(const class FText& Text, bool Transparent);
	void UpdateTutorialData(const struct FFortClientAnnouncementData_Tutorial& TutorialData);
	void RefreshTextLines();
	ESlateVisibility GetLightboxVisibility(const struct FFortClientAnnouncementData_Tutorial& FortClientAnnouncementData_Tutorial);
	void CheckContinueTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData);
	void ContinueTutorial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announcement_Tutorial_C">();
	}
	static class UAnnouncement_Tutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnnouncement_Tutorial_C>();
	}
};
static_assert(alignof(UAnnouncement_Tutorial_C) == 0x000008, "Wrong alignment on UAnnouncement_Tutorial_C");
static_assert(sizeof(UAnnouncement_Tutorial_C) == 0x0002B8, "Wrong size on UAnnouncement_Tutorial_C");
static_assert(offsetof(UAnnouncement_Tutorial_C, UberGraphFrame) == 0x000240, "Member 'UAnnouncement_Tutorial_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, ChatBox) == 0x000248, "Member 'UAnnouncement_Tutorial_C::ChatBox' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, ContentBox) == 0x000250, "Member 'UAnnouncement_Tutorial_C::ContentBox' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, Image_0) == 0x000258, "Member 'UAnnouncement_Tutorial_C::Image_0' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, Image_1) == 0x000260, "Member 'UAnnouncement_Tutorial_C::Image_1' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, Lightbox) == 0x000268, "Member 'UAnnouncement_Tutorial_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, SystemText) == 0x000270, "Member 'UAnnouncement_Tutorial_C::SystemText' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, TitleText) == 0x000278, "Member 'UAnnouncement_Tutorial_C::TitleText' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, TopOverlay) == 0x000280, "Member 'UAnnouncement_Tutorial_C::TopOverlay' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, TextLines) == 0x000288, "Member 'UAnnouncement_Tutorial_C::TextLines' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, LastText) == 0x000298, "Member 'UAnnouncement_Tutorial_C::LastText' has a wrong offset!");
static_assert(offsetof(UAnnouncement_Tutorial_C, ContinueTutorialTimer) == 0x0002B0, "Member 'UAnnouncement_Tutorial_C::ContinueTutorialTimer' has a wrong offset!");

}

