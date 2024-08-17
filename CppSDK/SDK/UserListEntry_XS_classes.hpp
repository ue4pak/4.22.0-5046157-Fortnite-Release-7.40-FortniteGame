#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserListEntry_XS

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SocialUMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UserListEntry_XS.UserListEntry_XS_C
// 0x0128 (0x0C98 - 0x0B70)
class UUserListEntry_XS_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EncourageEpicFriend;                         // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Online;                                            // 0x0BB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x0BC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x0BD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           bLocked;                                           // 0x0BE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            UserNameOnline;                                    // 0x0BF8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UserNameOfflineAway;                               // 0x0C20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UserNameBlocked;                                   // 0x0C48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPlatOnlyFriend;                                  // 0x0C70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C71[0x3];                                      // 0x0C71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x0C74(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x0C84(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UserListEntry_XS(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnUserPresenceChanged(EOnlineStatus OnlineStatus);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void HandleOnlineIndicatorView(EOnlineStatus OnlineStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserListEntry_XS_C">();
	}
	static class UUserListEntry_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserListEntry_XS_C>();
	}
};
static_assert(alignof(UUserListEntry_XS_C) == 0x000008, "Wrong alignment on UUserListEntry_XS_C");
static_assert(sizeof(UUserListEntry_XS_C) == 0x000C98, "Wrong size on UUserListEntry_XS_C");
static_assert(offsetof(UUserListEntry_XS_C, UberGraphFrame) == 0x000B70, "Member 'UUserListEntry_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Selected) == 0x000B78, "Member 'UUserListEntry_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Hovered) == 0x000B80, "Member 'UUserListEntry_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, AnimatedInputBorder) == 0x000B88, "Member 'UUserListEntry_XS_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Arrow) == 0x000B90, "Member 'UUserListEntry_XS_C::Arrow' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Border_OnlineStatusIndicator) == 0x000B98, "Member 'UUserListEntry_XS_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x000BA0, "Member 'UUserListEntry_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, EntryBorder) == 0x000BA8, "Member 'UUserListEntry_XS_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Image_EncourageEpicFriend) == 0x000BB0, "Member 'UUserListEntry_XS_C::Image_EncourageEpicFriend' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Online) == 0x000BB8, "Member 'UUserListEntry_XS_C::Online' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Offline) == 0x000BC8, "Member 'UUserListEntry_XS_C::Offline' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, Away) == 0x000BD8, "Member 'UUserListEntry_XS_C::Away' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, bLocked) == 0x000BE8, "Member 'UUserListEntry_XS_C::bLocked' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, UserNameOnline) == 0x000BF8, "Member 'UUserListEntry_XS_C::UserNameOnline' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, UserNameOfflineAway) == 0x000C20, "Member 'UUserListEntry_XS_C::UserNameOfflineAway' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, UserNameBlocked) == 0x000C48, "Member 'UUserListEntry_XS_C::UserNameBlocked' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, IsPlatOnlyFriend) == 0x000C70, "Member 'UUserListEntry_XS_C::IsPlatOnlyFriend' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, EncourageEpicFriend_IdleColor) == 0x000C74, "Member 'UUserListEntry_XS_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UUserListEntry_XS_C, EncourageEpicFriend_HoveredColor) == 0x000C84, "Member 'UUserListEntry_XS_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}

