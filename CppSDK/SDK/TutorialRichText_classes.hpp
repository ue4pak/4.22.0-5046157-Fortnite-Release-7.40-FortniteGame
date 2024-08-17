#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialRichText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialRichText.TutorialRichText_C
// 0x0028 (0x0260 - 0x0238)
class UTutorialRichText_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0248(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_TutorialRichText(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialRichText_C">();
	}
	static class UTutorialRichText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialRichText_C>();
	}
};
static_assert(alignof(UTutorialRichText_C) == 0x000008, "Wrong alignment on UTutorialRichText_C");
static_assert(sizeof(UTutorialRichText_C) == 0x000260, "Wrong size on UTutorialRichText_C");
static_assert(offsetof(UTutorialRichText_C, UberGraphFrame) == 0x000238, "Member 'UTutorialRichText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialRichText_C, FortRichTextBlock_0) == 0x000240, "Member 'UTutorialRichText_C::FortRichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UTutorialRichText_C, Text) == 0x000248, "Member 'UTutorialRichText_C::Text' has a wrong offset!");

}

