#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavLink_StairF

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavLink_StairF.NavLink_StairF_C
// 0x0000 (0x0080 - 0x0080)
class UNavLink_StairF_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_StairF_C">();
	}
	static class UNavLink_StairF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_StairF_C>();
	}
};
static_assert(alignof(UNavLink_StairF_C) == 0x000008, "Wrong alignment on UNavLink_StairF_C");
static_assert(sizeof(UNavLink_StairF_C) == 0x000080, "Wrong size on UNavLink_StairF_C");

}

