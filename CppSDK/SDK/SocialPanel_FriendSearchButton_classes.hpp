#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_FriendSearchButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C
// 0x0030 (0x0B68 - 0x0B38)
class USocialPanel_FriendSearchButton_C final : public UFortFriendSearchButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0B40(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                ClickCapture;                                      // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SharingIcon;                                       // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_UserName;                                     // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanel_FriendSearchButton(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnUnhovered();
	struct FEventReply On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_FriendSearchButton_C">();
	}
	static class USocialPanel_FriendSearchButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_FriendSearchButton_C>();
	}
};
static_assert(alignof(USocialPanel_FriendSearchButton_C) == 0x000008, "Wrong alignment on USocialPanel_FriendSearchButton_C");
static_assert(sizeof(USocialPanel_FriendSearchButton_C) == 0x000B68, "Wrong size on USocialPanel_FriendSearchButton_C");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, UberGraphFrame) == 0x000B38, "Member 'USocialPanel_FriendSearchButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, OnHovered) == 0x000B40, "Member 'USocialPanel_FriendSearchButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, ClickCapture) == 0x000B48, "Member 'USocialPanel_FriendSearchButton_C::ClickCapture' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, MenuAnchor_Actions) == 0x000B50, "Member 'USocialPanel_FriendSearchButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, SharingIcon) == 0x000B58, "Member 'USocialPanel_FriendSearchButton_C::SharingIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchButton_C, Text_UserName) == 0x000B60, "Member 'USocialPanel_FriendSearchButton_C::Text_UserName' has a wrong offset!");

}

