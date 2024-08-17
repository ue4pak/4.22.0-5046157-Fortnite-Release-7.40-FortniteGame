#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserListHeaderEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
// 0x0028 (0x0B78 - 0x0B50)
class UUserListHeaderEntry_C final : public USocialUserListHeaderEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnExpansion;                                       // 0x0B58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ExpandDirectionTick;                               // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_EntryContent;                                   // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint);
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserListHeaderEntry_C">();
	}
	static class UUserListHeaderEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserListHeaderEntry_C>();
	}
};
static_assert(alignof(UUserListHeaderEntry_C) == 0x000008, "Wrong alignment on UUserListHeaderEntry_C");
static_assert(sizeof(UUserListHeaderEntry_C) == 0x000B78, "Wrong size on UUserListHeaderEntry_C");
static_assert(offsetof(UUserListHeaderEntry_C, UberGraphFrame) == 0x000B50, "Member 'UUserListHeaderEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, OnExpansion) == 0x000B58, "Member 'UUserListHeaderEntry_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, OnHover) == 0x000B60, "Member 'UUserListHeaderEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, ExpandDirectionTick) == 0x000B68, "Member 'UUserListHeaderEntry_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, SB_EntryContent) == 0x000B70, "Member 'UUserListHeaderEntry_C::SB_EntryContent' has a wrong offset!");

}

