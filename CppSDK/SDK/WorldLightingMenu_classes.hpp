#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorldLightingMenu

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WorldLightingMenu.WorldLightingMenu_C
// 0x0008 (0x0350 - 0x0348)
class AWorldLightingMenu_C final : public AFortLevelScriptActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WorldLightingMenu_C">();
	}
	static class AWorldLightingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWorldLightingMenu_C>();
	}
};
static_assert(alignof(AWorldLightingMenu_C) == 0x000008, "Wrong alignment on AWorldLightingMenu_C");
static_assert(sizeof(AWorldLightingMenu_C) == 0x000350, "Wrong size on AWorldLightingMenu_C");
static_assert(offsetof(AWorldLightingMenu_C, DefaultSceneRoot) == 0x000348, "Member 'AWorldLightingMenu_C::DefaultSceneRoot' has a wrong offset!");

}

