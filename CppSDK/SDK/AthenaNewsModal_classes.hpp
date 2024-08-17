#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaNewsModal.AthenaNewsModal_C
// 0x00D8 (0x0420 - 0x0348)
class UAthenaNewsModal_C final : public UFortAthenaNewsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewPopUpIntro;                                     // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaNews_C*                          AthenaNews;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_TapToClose;                                      // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundFill;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                ButtonBar_Spacer;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CenterRibbon;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      FNBR_LobbyButton;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ItemShopButton;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LargeLeftRibbon;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LargeRightRibbon;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallBottomLeftRibbon;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallBottomRightRibbon;                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallTopLeftRibbon;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallTopRightRibbon;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SpecialEventBackgroundOVR;                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpeedLines;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      STW_CloseButton;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      STWFounderPackButton;                              // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                STWFounderPackSpacer;                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      STWUpdateButton;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                STWUpdateSpacer;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ExitButtons;                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 BS_Default;                                        // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BS_SpecialEvent;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaNewsModal(int32 EntryPoint);
	void BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaNews_K2Node_ComponentBoundEvent_2_UpdateStyle__DelegateSignature(EAthenaNewsStyle NewStyle);
	void BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ForceNewsClosed();
	void DialogResult_3BE479B64CDE5378C77A8DA453770A3B(EFortDialogResult Result, class FName ResultName);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ShouldShowSTWUpsellInBR(bool* ShouldShow);
	void ShouldShowSTWUpdates(bool* ShouldShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaNewsModal_C">();
	}
	static class UAthenaNewsModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNewsModal_C>();
	}
};
static_assert(alignof(UAthenaNewsModal_C) == 0x000008, "Wrong alignment on UAthenaNewsModal_C");
static_assert(sizeof(UAthenaNewsModal_C) == 0x000420, "Wrong size on UAthenaNewsModal_C");
static_assert(offsetof(UAthenaNewsModal_C, UberGraphFrame) == 0x000348, "Member 'UAthenaNewsModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, NewPopUpIntro) == 0x000350, "Member 'UAthenaNewsModal_C::NewPopUpIntro' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, AthenaNews) == 0x000358, "Member 'UAthenaNewsModal_C::AthenaNews' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, B_TapToClose) == 0x000360, "Member 'UAthenaNewsModal_C::B_TapToClose' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BackgroundFill) == 0x000368, "Member 'UAthenaNewsModal_C::BackgroundFill' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, ButtonBar_Spacer) == 0x000370, "Member 'UAthenaNewsModal_C::ButtonBar_Spacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, CenterRibbon) == 0x000378, "Member 'UAthenaNewsModal_C::CenterRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, FNBR_LobbyButton) == 0x000380, "Member 'UAthenaNewsModal_C::FNBR_LobbyButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, ItemShopButton) == 0x000388, "Member 'UAthenaNewsModal_C::ItemShopButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, LargeLeftRibbon) == 0x000390, "Member 'UAthenaNewsModal_C::LargeLeftRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, LargeRightRibbon) == 0x000398, "Member 'UAthenaNewsModal_C::LargeRightRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Lightbox) == 0x0003A0, "Member 'UAthenaNewsModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SafeZone_0) == 0x0003A8, "Member 'UAthenaNewsModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SmallBottomLeftRibbon) == 0x0003B0, "Member 'UAthenaNewsModal_C::SmallBottomLeftRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SmallBottomRightRibbon) == 0x0003B8, "Member 'UAthenaNewsModal_C::SmallBottomRightRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SmallTopLeftRibbon) == 0x0003C0, "Member 'UAthenaNewsModal_C::SmallTopLeftRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SmallTopRightRibbon) == 0x0003C8, "Member 'UAthenaNewsModal_C::SmallTopRightRibbon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SpecialEventBackgroundOVR) == 0x0003D0, "Member 'UAthenaNewsModal_C::SpecialEventBackgroundOVR' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SpeedLines) == 0x0003D8, "Member 'UAthenaNewsModal_C::SpeedLines' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STW_CloseButton) == 0x0003E0, "Member 'UAthenaNewsModal_C::STW_CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWFounderPackButton) == 0x0003E8, "Member 'UAthenaNewsModal_C::STWFounderPackButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWFounderPackSpacer) == 0x0003F0, "Member 'UAthenaNewsModal_C::STWFounderPackSpacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWUpdateButton) == 0x0003F8, "Member 'UAthenaNewsModal_C::STWUpdateButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWUpdateSpacer) == 0x000400, "Member 'UAthenaNewsModal_C::STWUpdateSpacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, WidgetSwitcher_ExitButtons) == 0x000408, "Member 'UAthenaNewsModal_C::WidgetSwitcher_ExitButtons' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BS_Default) == 0x000410, "Member 'UAthenaNewsModal_C::BS_Default' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BS_SpecialEvent) == 0x000418, "Member 'UAthenaNewsModal_C::BS_SpecialEvent' has a wrong offset!");

}

