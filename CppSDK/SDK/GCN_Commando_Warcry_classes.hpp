#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Commando_Warcry

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Commando_Warcry.GCN_Commando_Warcry_C
// 0x0000 (0x0428 - 0x0428)
class AGCN_Commando_Warcry_C final : public AFortGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Commando_Warcry_C">();
	}
	static class AGCN_Commando_Warcry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Commando_Warcry_C>();
	}
};
static_assert(alignof(AGCN_Commando_Warcry_C) == 0x000008, "Wrong alignment on AGCN_Commando_Warcry_C");
static_assert(sizeof(AGCN_Commando_Warcry_C) == 0x000428, "Wrong size on AGCN_Commando_Warcry_C");

}

