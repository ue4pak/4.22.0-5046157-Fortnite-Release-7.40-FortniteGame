#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_BG_HalfWall

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_BG_HalfWall.PBWA_BG_HalfWall_C
// 0x0000 (0x0CE8 - 0x0CE8)
class APBWA_BG_HalfWall_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_BG_HalfWall_C">();
	}
	static class APBWA_BG_HalfWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_BG_HalfWall_C>();
	}
};
static_assert(alignof(APBWA_BG_HalfWall_C) == 0x000008, "Wrong alignment on APBWA_BG_HalfWall_C");
static_assert(sizeof(APBWA_BG_HalfWall_C) == 0x000CE8, "Wrong size on APBWA_BG_HalfWall_C");

}

