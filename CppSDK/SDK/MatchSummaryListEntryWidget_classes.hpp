#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchSummaryListEntryWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C
// 0x0040 (0x0B80 - 0x0B40)
class UMatchSummaryListEntryWidget_C final : public UAthenaProfileStatListWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       OnestPlace1;                                       // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlueGradBaseFill;                                  // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ElimsText;                                         // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MatchEntryNumber;                                  // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*               MatchTime;                                         // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlacementText;                                     // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                ScoreText;                                         // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MatchSummaryListEntryWidget(int32 EntryPoint);
	void OnStatChanged();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchSummaryListEntryWidget_C">();
	}
	static class UMatchSummaryListEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchSummaryListEntryWidget_C>();
	}
};
static_assert(alignof(UMatchSummaryListEntryWidget_C) == 0x000008, "Wrong alignment on UMatchSummaryListEntryWidget_C");
static_assert(sizeof(UMatchSummaryListEntryWidget_C) == 0x000B80, "Wrong size on UMatchSummaryListEntryWidget_C");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, UberGraphFrame) == 0x000B40, "Member 'UMatchSummaryListEntryWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, OnestPlace1) == 0x000B48, "Member 'UMatchSummaryListEntryWidget_C::OnestPlace1' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, BlueGradBaseFill) == 0x000B50, "Member 'UMatchSummaryListEntryWidget_C::BlueGradBaseFill' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, ElimsText) == 0x000B58, "Member 'UMatchSummaryListEntryWidget_C::ElimsText' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, MatchEntryNumber) == 0x000B60, "Member 'UMatchSummaryListEntryWidget_C::MatchEntryNumber' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, MatchTime) == 0x000B68, "Member 'UMatchSummaryListEntryWidget_C::MatchTime' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, PlacementText) == 0x000B70, "Member 'UMatchSummaryListEntryWidget_C::PlacementText' has a wrong offset!");
static_assert(offsetof(UMatchSummaryListEntryWidget_C, ScoreText) == 0x000B78, "Member 'UMatchSummaryListEntryWidget_C::ScoreText' has a wrong offset!");

}

