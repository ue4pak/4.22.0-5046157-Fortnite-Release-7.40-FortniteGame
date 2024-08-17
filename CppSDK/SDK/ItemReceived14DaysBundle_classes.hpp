#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceived14DaysBundle

#include "Basic.hpp"

#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceived14DaysBundle.ItemReceived14DaysBundle_C
// 0x0068 (0x02D0 - 0x0268)
class UItemReceived14DaysBundle_C final : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemReceived14DaysBundle_C;         // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CenterRibbon;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Header;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LargeLeftRibbon;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LargeRightRibbon;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Ribbon;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallBottomLeftRibbon;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallBottomRightRibbon;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallTopLeftRibbon;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallTopRightRibbon;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SubHeader;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_BattlePass;                                     // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemReceived14DaysBundle(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceived14DaysBundle_C">();
	}
	static class UItemReceived14DaysBundle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceived14DaysBundle_C>();
	}
};
static_assert(alignof(UItemReceived14DaysBundle_C) == 0x000008, "Wrong alignment on UItemReceived14DaysBundle_C");
static_assert(sizeof(UItemReceived14DaysBundle_C) == 0x0002D0, "Wrong size on UItemReceived14DaysBundle_C");
static_assert(offsetof(UItemReceived14DaysBundle_C, UberGraphFrame_ItemReceived14DaysBundle_C) == 0x000268, "Member 'UItemReceived14DaysBundle_C::UberGraphFrame_ItemReceived14DaysBundle_C' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, CenterRibbon) == 0x000270, "Member 'UItemReceived14DaysBundle_C::CenterRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, CommonTextBlock_0) == 0x000278, "Member 'UItemReceived14DaysBundle_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, Header) == 0x000280, "Member 'UItemReceived14DaysBundle_C::Header' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, LargeLeftRibbon) == 0x000288, "Member 'UItemReceived14DaysBundle_C::LargeLeftRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, LargeRightRibbon) == 0x000290, "Member 'UItemReceived14DaysBundle_C::LargeRightRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, Ribbon) == 0x000298, "Member 'UItemReceived14DaysBundle_C::Ribbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, SmallBottomLeftRibbon) == 0x0002A0, "Member 'UItemReceived14DaysBundle_C::SmallBottomLeftRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, SmallBottomRightRibbon) == 0x0002A8, "Member 'UItemReceived14DaysBundle_C::SmallBottomRightRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, SmallTopLeftRibbon) == 0x0002B0, "Member 'UItemReceived14DaysBundle_C::SmallTopLeftRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, SmallTopRightRibbon) == 0x0002B8, "Member 'UItemReceived14DaysBundle_C::SmallTopRightRibbon' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, SubHeader) == 0x0002C0, "Member 'UItemReceived14DaysBundle_C::SubHeader' has a wrong offset!");
static_assert(offsetof(UItemReceived14DaysBundle_C, Is_BattlePass) == 0x0002C8, "Member 'UItemReceived14DaysBundle_C::Is_BattlePass' has a wrong offset!");

}

