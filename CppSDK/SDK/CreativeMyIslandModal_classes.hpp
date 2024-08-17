#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeMyIslandModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreativeMyIslandModal.CreativeMyIslandModal_C
// 0x00A8 (0x03F8 - 0x0350)
class UCreativeMyIslandModal_C final : public UFortCreativeSettingsFlow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCreativeIslandDescriptionPanel_C*      CreativeIslandDescriptionPanel;                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativePermissionKnobs_C*             CreativePermissionKnobs;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeIslandToolsPanel_C*            CreativeTools;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Description;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Game;                                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeGameOptionMutatorKnobs_C*      GameOptions;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      GameSettings;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           Left;                                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeMinigameGameKnobsModal_C*      MiniGameSettings;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Permissions;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           Right;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Tools;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UIconTextButton_C*>              TabButtonList;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCommonButtonGroup*                     NewVar_0;                                          // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PanelAppear_Sound;                                 // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PanelDismiss_Sound;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInPreview;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CreativeMyIslandModal(int32 EntryPoint);
	void SetUpOnClosedDelegates();
	void BndEvt__Description_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Permissions_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Setup_Tabs();
	void Construct();
	void BndEvt__UserActionMenuInputButton_0_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CycleRight();
	void CycleLeft();
	void Close();
	void OnActivated();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleClose(bool* NewParam);
	void Player_in_Read_Only_Volume_(bool* bInReadOnlyVolume);
	void PassInputModeToActivePanel(bool bUsingGamepad);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativeMyIslandModal_C">();
	}
	static class UCreativeMyIslandModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeMyIslandModal_C>();
	}
};
static_assert(alignof(UCreativeMyIslandModal_C) == 0x000008, "Wrong alignment on UCreativeMyIslandModal_C");
static_assert(sizeof(UCreativeMyIslandModal_C) == 0x0003F8, "Wrong size on UCreativeMyIslandModal_C");
static_assert(offsetof(UCreativeMyIslandModal_C, UberGraphFrame) == 0x000350, "Member 'UCreativeMyIslandModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, In) == 0x000358, "Member 'UCreativeMyIslandModal_C::In' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, CreativeIslandDescriptionPanel) == 0x000360, "Member 'UCreativeMyIslandModal_C::CreativeIslandDescriptionPanel' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, CreativePermissionKnobs) == 0x000368, "Member 'UCreativeMyIslandModal_C::CreativePermissionKnobs' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, CreativeTools) == 0x000370, "Member 'UCreativeMyIslandModal_C::CreativeTools' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Description) == 0x000378, "Member 'UCreativeMyIslandModal_C::Description' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Game) == 0x000380, "Member 'UCreativeMyIslandModal_C::Game' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, GameOptions) == 0x000388, "Member 'UCreativeMyIslandModal_C::GameOptions' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, GameSettings) == 0x000390, "Member 'UCreativeMyIslandModal_C::GameSettings' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Left) == 0x000398, "Member 'UCreativeMyIslandModal_C::Left' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, MiniGameSettings) == 0x0003A0, "Member 'UCreativeMyIslandModal_C::MiniGameSettings' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Permissions) == 0x0003A8, "Member 'UCreativeMyIslandModal_C::Permissions' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Right) == 0x0003B0, "Member 'UCreativeMyIslandModal_C::Right' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, Tools) == 0x0003B8, "Member 'UCreativeMyIslandModal_C::Tools' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, WidgetSwitcher_0) == 0x0003C0, "Member 'UCreativeMyIslandModal_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, TabButtonList) == 0x0003C8, "Member 'UCreativeMyIslandModal_C::TabButtonList' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, NewVar_0) == 0x0003D8, "Member 'UCreativeMyIslandModal_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, PanelAppear_Sound) == 0x0003E0, "Member 'UCreativeMyIslandModal_C::PanelAppear_Sound' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, PanelDismiss_Sound) == 0x0003E8, "Member 'UCreativeMyIslandModal_C::PanelDismiss_Sound' has a wrong offset!");
static_assert(offsetof(UCreativeMyIslandModal_C, bInPreview) == 0x0003F0, "Member 'UCreativeMyIslandModal_C::bInPreview' has a wrong offset!");

}

