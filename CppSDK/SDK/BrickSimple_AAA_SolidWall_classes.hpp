#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrickSimple_AAA_SolidWall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BrickSimple_AAA_SolidWall.BrickSimple_AAA_SolidWall_C
// 0x0000 (0x0D00 - 0x0D00)
class ABrickSimple_AAA_SolidWall_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BrickSimple_AAA_SolidWall_C">();
	}
	static class ABrickSimple_AAA_SolidWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABrickSimple_AAA_SolidWall_C>();
	}
};
static_assert(alignof(ABrickSimple_AAA_SolidWall_C) == 0x000008, "Wrong alignment on ABrickSimple_AAA_SolidWall_C");
static_assert(sizeof(ABrickSimple_AAA_SolidWall_C) == 0x000D00, "Wrong size on ABrickSimple_AAA_SolidWall_C");

}

