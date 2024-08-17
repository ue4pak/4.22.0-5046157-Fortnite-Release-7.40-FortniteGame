#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineStatusButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnlineStatusButton.OnlineStatusButton_C
// 0x0068 (0x0B98 - 0x0B30)
class UOnlineStatusButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover_Online;                                    // 0x0B38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractionIcon;                                   // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_InteractionName;                              // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ELocalUserOnlineStatus                        LocalOnlineStatusOption;                           // 0x0B60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B61[0x3];                                      // 0x0B61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Online;                                            // 0x0B64(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x0B74(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x0B84(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OnlineStatusButton(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnlineStatusButton_C">();
	}
	static class UOnlineStatusButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineStatusButton_C>();
	}
};
static_assert(alignof(UOnlineStatusButton_C) == 0x000008, "Wrong alignment on UOnlineStatusButton_C");
static_assert(sizeof(UOnlineStatusButton_C) == 0x000B98, "Wrong size on UOnlineStatusButton_C");
static_assert(offsetof(UOnlineStatusButton_C, UberGraphFrame) == 0x000B30, "Member 'UOnlineStatusButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, OnHover_Online) == 0x000B38, "Member 'UOnlineStatusButton_C::OnHover_Online' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, Border_OnlineStatusIndicator) == 0x000B40, "Member 'UOnlineStatusButton_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, InteractionIcon) == 0x000B48, "Member 'UOnlineStatusButton_C::InteractionIcon' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, MenuAnchor_Actions) == 0x000B50, "Member 'UOnlineStatusButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, Text_InteractionName) == 0x000B58, "Member 'UOnlineStatusButton_C::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, LocalOnlineStatusOption) == 0x000B60, "Member 'UOnlineStatusButton_C::LocalOnlineStatusOption' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, Online) == 0x000B64, "Member 'UOnlineStatusButton_C::Online' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, Away) == 0x000B74, "Member 'UOnlineStatusButton_C::Away' has a wrong offset!");
static_assert(offsetof(UOnlineStatusButton_C, Offline) == 0x000B84, "Member 'UOnlineStatusButton_C::Offline' has a wrong offset!");

}

