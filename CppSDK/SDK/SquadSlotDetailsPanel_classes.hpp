#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotDetailsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadSlotDetailsPanel.SquadSlotDetailsPanel_C
// 0x0080 (0x0318 - 0x0298)
class USquadSlotDetailsPanel_C final : public UFortSquadSlotDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           LockedSlotDetailsPanel;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LockedSlotTextBlock;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayItemDetails;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PreviewEmptySlotTextBlock;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SelectionHintTextBlock;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SlottedItemDetailsSwitcher;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             SlottingRestrictionsBox;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SlottingRestrictionsTextBlock;                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SquadSlotLabelTextBlock;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ItemType;                                          // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint);
	void ResetDetailsSwitcher();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void Construct();
	void HandleSquadSlotStateChangedBP();
	void HandleDifferentSquadSlotSetBP();
	void GetRestrictionReasonsAsText(TArray<EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text);
	void Set_Scroll_Box_to_Nav_Scroll_Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSlotDetailsPanel_C">();
	}
	static class USquadSlotDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSlotDetailsPanel_C>();
	}
};
static_assert(alignof(USquadSlotDetailsPanel_C) == 0x000008, "Wrong alignment on USquadSlotDetailsPanel_C");
static_assert(sizeof(USquadSlotDetailsPanel_C) == 0x000318, "Wrong size on USquadSlotDetailsPanel_C");
static_assert(offsetof(USquadSlotDetailsPanel_C, UberGraphFrame) == 0x000298, "Member 'USquadSlotDetailsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, LockedSlotDetailsPanel) == 0x0002A0, "Member 'USquadSlotDetailsPanel_C::LockedSlotDetailsPanel' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, LockedSlotTextBlock) == 0x0002A8, "Member 'USquadSlotDetailsPanel_C::LockedSlotTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, OverlayItemDetails) == 0x0002B0, "Member 'USquadSlotDetailsPanel_C::OverlayItemDetails' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, PreviewEmptySlotTextBlock) == 0x0002B8, "Member 'USquadSlotDetailsPanel_C::PreviewEmptySlotTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SelectionHintTextBlock) == 0x0002C0, "Member 'USquadSlotDetailsPanel_C::SelectionHintTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottedItemDetailsSwitcher) == 0x0002C8, "Member 'USquadSlotDetailsPanel_C::SlottedItemDetailsSwitcher' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottingRestrictionsBox) == 0x0002D0, "Member 'USquadSlotDetailsPanel_C::SlottingRestrictionsBox' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SlottingRestrictionsTextBlock) == 0x0002D8, "Member 'USquadSlotDetailsPanel_C::SlottingRestrictionsTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, SquadSlotLabelTextBlock) == 0x0002E0, "Member 'USquadSlotDetailsPanel_C::SquadSlotLabelTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, DisplayName) == 0x0002E8, "Member 'USquadSlotDetailsPanel_C::DisplayName' has a wrong offset!");
static_assert(offsetof(USquadSlotDetailsPanel_C, ItemType) == 0x000300, "Member 'USquadSlotDetailsPanel_C::ItemType' has a wrong offset!");

}

