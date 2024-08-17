#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentDateEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
// 0x0060 (0x0618 - 0x05B8)
class UTournamentDateEntry_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_DateContent;                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Date;                              // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Time;                              // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Title;                             // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_EntryType;                    // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Strkethrough;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsTitle;                                           // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title;                                             // 0x05F8(0x0018)(Edit, BlueprintVisible)
	bool                                          Two4HourFormat;                                    // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint);
	void RefreshDataBP();
	void EventColor(const struct FFortTournamentDisplayInfo& ShowdownData);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentDateEntry_C">();
	}
	static class UTournamentDateEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentDateEntry_C>();
	}
};
static_assert(alignof(UTournamentDateEntry_C) == 0x000008, "Wrong alignment on UTournamentDateEntry_C");
static_assert(sizeof(UTournamentDateEntry_C) == 0x000618, "Wrong size on UTournamentDateEntry_C");
static_assert(offsetof(UTournamentDateEntry_C, UberGraphFrame) == 0x0005B8, "Member 'UTournamentDateEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonBorder_DateContent) == 0x0005C0, "Member 'UTournamentDateEntry_C::CommonBorder_DateContent' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Date) == 0x0005C8, "Member 'UTournamentDateEntry_C::CommonTextBlock_Date' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Time) == 0x0005D0, "Member 'UTournamentDateEntry_C::CommonTextBlock_Time' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Title) == 0x0005D8, "Member 'UTournamentDateEntry_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonWidgetSwitcher_EntryType) == 0x0005E0, "Member 'UTournamentDateEntry_C::CommonWidgetSwitcher_EntryType' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, Image_Strkethrough) == 0x0005E8, "Member 'UTournamentDateEntry_C::Image_Strkethrough' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, IsTitle) == 0x0005F0, "Member 'UTournamentDateEntry_C::IsTitle' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, Title) == 0x0005F8, "Member 'UTournamentDateEntry_C::Title' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, Two4HourFormat) == 0x000610, "Member 'UTournamentDateEntry_C::Two4HourFormat' has a wrong offset!");

}

