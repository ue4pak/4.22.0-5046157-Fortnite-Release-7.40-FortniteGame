#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorMetaObstacle

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DoorMetaObstacle.DoorMetaObstacle_C
// 0x0000 (0x00C8 - 0x00C8)
class UDoorMetaObstacle_C final : public UNavAreaMeta_SwitchByAgent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DoorMetaObstacle_C">();
	}
	static class UDoorMetaObstacle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoorMetaObstacle_C>();
	}
};
static_assert(alignof(UDoorMetaObstacle_C) == 0x000008, "Wrong alignment on UDoorMetaObstacle_C");
static_assert(sizeof(UDoorMetaObstacle_C) == 0x0000C8, "Wrong size on UDoorMetaObstacle_C");

}

