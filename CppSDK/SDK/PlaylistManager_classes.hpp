#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlaylistManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlaylistManager.PlaylistManager_C
// 0x0000 (0x0038 - 0x0038)
class UPlaylistManager_C final : public UFortPlaylistManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlaylistManager_C">();
	}
	static class UPlaylistManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaylistManager_C>();
	}
};
static_assert(alignof(UPlaylistManager_C) == 0x000008, "Wrong alignment on UPlaylistManager_C");
static_assert(sizeof(UPlaylistManager_C) == 0x000038, "Wrong size on UPlaylistManager_C");

}

