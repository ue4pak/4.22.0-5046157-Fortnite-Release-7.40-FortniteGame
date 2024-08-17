#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_ZoneModifiers

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
// 0x0008 (0x03C0 - 0x03B8)
class AAnnounce_ZoneModifiers_C final : public AFortClientAnnouncement_ZoneModifiers
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_ZoneModifiers_C">();
	}
	static class AAnnounce_ZoneModifiers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_ZoneModifiers_C>();
	}
};
static_assert(alignof(AAnnounce_ZoneModifiers_C) == 0x000008, "Wrong alignment on AAnnounce_ZoneModifiers_C");
static_assert(sizeof(AAnnounce_ZoneModifiers_C) == 0x0003C0, "Wrong size on AAnnounce_ZoneModifiers_C");
static_assert(offsetof(AAnnounce_ZoneModifiers_C, DefaultSceneRoot) == 0x0003B8, "Member 'AAnnounce_ZoneModifiers_C::DefaultSceneRoot' has a wrong offset!");

}

