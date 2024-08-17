#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayName

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DisplayName.DisplayName_C
// 0x0018 (0x03C0 - 0x03A8)
class UDisplayName_C final : public UFortDisplayNameWidget
{
public:
	class UCommonBorder*                          DisplayNameBorder;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditText_Number;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Number;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisplayName_C">();
	}
	static class UDisplayName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisplayName_C>();
	}
};
static_assert(alignof(UDisplayName_C) == 0x000008, "Wrong alignment on UDisplayName_C");
static_assert(sizeof(UDisplayName_C) == 0x0003C0, "Wrong size on UDisplayName_C");
static_assert(offsetof(UDisplayName_C, DisplayNameBorder) == 0x0003A8, "Member 'UDisplayName_C::DisplayNameBorder' has a wrong offset!");
static_assert(offsetof(UDisplayName_C, EditText_Number) == 0x0003B0, "Member 'UDisplayName_C::EditText_Number' has a wrong offset!");
static_assert(offsetof(UDisplayName_C, VBox_Number) == 0x0003B8, "Member 'UDisplayName_C::VBox_Number' has a wrong offset!");

}

