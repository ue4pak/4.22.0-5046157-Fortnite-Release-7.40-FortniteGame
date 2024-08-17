#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBarToolTip

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBarToolTip.XpBarToolTip_C
// 0x00C8 (0x0300 - 0x0238)
class UXpBarToolTip_C final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0238(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_2;                                 // 0x0240(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_29;                                // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_30;                                // 0x0250(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_31;                                // 0x0258(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x0288(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   CommanderXPText;                                   // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   BoostXPText;                                       // 0x02B8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   RestedXPText;                                      // 0x02D0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   BodyText;                                          // 0x02E8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText GetHeaderText();
	class FText GetCommanderXPText();
	class FText GetBoostXPText();
	class FText GetRestedXPText();
	class FText GetBodyText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBarToolTip_C">();
	}
	static class UXpBarToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBarToolTip_C>();
	}
};
static_assert(alignof(UXpBarToolTip_C) == 0x000008, "Wrong alignment on UXpBarToolTip_C");
static_assert(sizeof(UXpBarToolTip_C) == 0x000300, "Wrong size on UXpBarToolTip_C");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_0) == 0x000238, "Member 'UXpBarToolTip_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_2) == 0x000240, "Member 'UXpBarToolTip_C::CommonTextBlock_2' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_29) == 0x000248, "Member 'UXpBarToolTip_C::CommonTextBlock_29' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_30) == 0x000250, "Member 'UXpBarToolTip_C::CommonTextBlock_30' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_31) == 0x000258, "Member 'UXpBarToolTip_C::CommonTextBlock_31' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_0) == 0x000260, "Member 'UXpBarToolTip_C::Image_0' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_1) == 0x000268, "Member 'UXpBarToolTip_C::Image_1' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_2) == 0x000270, "Member 'UXpBarToolTip_C::Image_2' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_3) == 0x000278, "Member 'UXpBarToolTip_C::Image_3' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_5) == 0x000280, "Member 'UXpBarToolTip_C::Image_5' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, HeaderText) == 0x000288, "Member 'UXpBarToolTip_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommanderXPText) == 0x0002A0, "Member 'UXpBarToolTip_C::CommanderXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, BoostXPText) == 0x0002B8, "Member 'UXpBarToolTip_C::BoostXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, RestedXPText) == 0x0002D0, "Member 'UXpBarToolTip_C::RestedXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, BodyText) == 0x0002E8, "Member 'UXpBarToolTip_C::BodyText' has a wrong offset!");

}

