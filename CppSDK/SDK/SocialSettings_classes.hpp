#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialSettings

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialSettings.SocialSettings_C
// 0x0000 (0x0248 - 0x0248)
class USocialSettings_C final : public UFortSocialSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialSettings_C">();
	}
	static class USocialSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSettings_C>();
	}
};
static_assert(alignof(USocialSettings_C) == 0x000008, "Wrong alignment on USocialSettings_C");
static_assert(sizeof(USocialSettings_C) == 0x000248, "Wrong size on USocialSettings_C");

}

