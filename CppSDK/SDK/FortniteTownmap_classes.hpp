#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteTownmap

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortniteTownmap.FortniteTownmap_C
// 0x0000 (0x0348 - 0x0348)
class AFortniteTownmap_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortniteTownmap_C">();
	}
	static class AFortniteTownmap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortniteTownmap_C>();
	}
};
static_assert(alignof(AFortniteTownmap_C) == 0x000008, "Wrong alignment on AFortniteTownmap_C");
static_assert(sizeof(AFortniteTownmap_C) == 0x000348, "Wrong size on AFortniteTownmap_C");

}

