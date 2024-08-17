#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AlterationOption.AlterationOption_C
// 0x0060 (0x0BD8 - 0x0B78)
class UAlterationOption_C final : public UFortAlterationOption
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PerkLoad;                                          // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLoadGuard*                       CommonLoadGuard_0;                                 // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Description;                                       // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageAlteration;                                   // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBackground;                                   // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLockPerk;                                     // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PipsBackground;                                    // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxIcon;                                      // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Spacer;                                            // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UpgradePips;                                       // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MaxPipCount;                                       // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EFortBrushSize                                IconSize;                                          // 0x0BD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AlterationOption(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType bNewInputType);
	void OnSetup();
	void SetupPips();
	void IntroReset();
	void IntroPlay();
	void InitIcon();
	void HasValidBrush(bool* ValidBrush);
	struct FSlateBrush GetValidBrush();
	void SetWidgetSettings(EFortBrushSize InIconSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AlterationOption_C">();
	}
	static class UAlterationOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAlterationOption_C>();
	}
};
static_assert(alignof(UAlterationOption_C) == 0x000008, "Wrong alignment on UAlterationOption_C");
static_assert(sizeof(UAlterationOption_C) == 0x000BD8, "Wrong size on UAlterationOption_C");
static_assert(offsetof(UAlterationOption_C, UberGraphFrame) == 0x000B78, "Member 'UAlterationOption_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, PerkLoad) == 0x000B80, "Member 'UAlterationOption_C::PerkLoad' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, CommonLoadGuard_0) == 0x000B88, "Member 'UAlterationOption_C::CommonLoadGuard_0' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, Description) == 0x000B90, "Member 'UAlterationOption_C::Description' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, ImageAlteration) == 0x000B98, "Member 'UAlterationOption_C::ImageAlteration' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, ImageBackground) == 0x000BA0, "Member 'UAlterationOption_C::ImageBackground' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, ImageLockPerk) == 0x000BA8, "Member 'UAlterationOption_C::ImageLockPerk' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, PipsBackground) == 0x000BB0, "Member 'UAlterationOption_C::PipsBackground' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, ScaleBoxIcon) == 0x000BB8, "Member 'UAlterationOption_C::ScaleBoxIcon' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, Spacer) == 0x000BC0, "Member 'UAlterationOption_C::Spacer' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, UpgradePips) == 0x000BC8, "Member 'UAlterationOption_C::UpgradePips' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, MaxPipCount) == 0x000BD0, "Member 'UAlterationOption_C::MaxPipCount' has a wrong offset!");
static_assert(offsetof(UAlterationOption_C, IconSize) == 0x000BD4, "Member 'UAlterationOption_C::IconSize' has a wrong offset!");

}

