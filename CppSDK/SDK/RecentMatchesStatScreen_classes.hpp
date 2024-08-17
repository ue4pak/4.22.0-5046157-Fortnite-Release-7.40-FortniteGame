#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RecentMatchesStatScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RecentMatchesStatScreen.RecentMatchesStatScreen_C
// 0x0050 (0x03A8 - 0x0358)
class URecentMatchesStatScreen_C final : public UAthenaProfileStatsRecentMatchesBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentWidgetSwitcher;                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LoadingState;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NoDataState;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaProfileStatBox*                  ProfileStatBox;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProfileStatsMatchesSubScreen_C*        ProfileStatsMatchesSubScreen;                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ScreenStateSwitcher;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_RecentMatchesStatScreen(int32 EntryPoint);
	void OnRecentMatcheChanged();
	void OnDataRecieved();
	void OnNoData();
	void OnStartFetchingData();
	void OnActivated();
	void OnDeactivated();
	void Construct();
	void HandleBack(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RecentMatchesStatScreen_C">();
	}
	static class URecentMatchesStatScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URecentMatchesStatScreen_C>();
	}
};
static_assert(alignof(URecentMatchesStatScreen_C) == 0x000008, "Wrong alignment on URecentMatchesStatScreen_C");
static_assert(sizeof(URecentMatchesStatScreen_C) == 0x0003A8, "Wrong size on URecentMatchesStatScreen_C");
static_assert(offsetof(URecentMatchesStatScreen_C, UberGraphFrame) == 0x000358, "Member 'URecentMatchesStatScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, CircularThrobber_0) == 0x000360, "Member 'URecentMatchesStatScreen_C::CircularThrobber_0' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, ContentWidgetSwitcher) == 0x000368, "Member 'URecentMatchesStatScreen_C::ContentWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, LoadingState) == 0x000370, "Member 'URecentMatchesStatScreen_C::LoadingState' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, NoDataState) == 0x000378, "Member 'URecentMatchesStatScreen_C::NoDataState' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, ProfileStatBox) == 0x000380, "Member 'URecentMatchesStatScreen_C::ProfileStatBox' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, ProfileStatsMatchesSubScreen) == 0x000388, "Member 'URecentMatchesStatScreen_C::ProfileStatsMatchesSubScreen' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, ScreenStateSwitcher) == 0x000390, "Member 'URecentMatchesStatScreen_C::ScreenStateSwitcher' has a wrong offset!");
static_assert(offsetof(URecentMatchesStatScreen_C, BackAction) == 0x000398, "Member 'URecentMatchesStatScreen_C::BackAction' has a wrong offset!");

}

