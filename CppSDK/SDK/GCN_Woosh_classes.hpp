#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Woosh

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Woosh.GCN_Woosh_C
// 0x0000 (0x0428 - 0x0428)
class AGCN_Woosh_C final : public AFortGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Woosh_C">();
	}
	static class AGCN_Woosh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Woosh_C>();
	}
};
static_assert(alignof(AGCN_Woosh_C) == 0x000008, "Wrong alignment on AGCN_Woosh_C");
static_assert(sizeof(AGCN_Woosh_C) == 0x000428, "Wrong size on AGCN_Woosh_C");

}

