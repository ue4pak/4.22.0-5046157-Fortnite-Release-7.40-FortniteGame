#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Basketball_Score_Elite

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Basketball_Score_Elite.GCN_Basketball_Score_Elite_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_Basketball_Score_Elite_C : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Basketball_Score_Elite_C">();
	}
	static class UGCN_Basketball_Score_Elite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Basketball_Score_Elite_C>();
	}
};
static_assert(alignof(UGCN_Basketball_Score_Elite_C) == 0x000008, "Wrong alignment on UGCN_Basketball_Score_Elite_C");
static_assert(sizeof(UGCN_Basketball_Score_Elite_C) == 0x000080, "Wrong size on UGCN_Basketball_Score_Elite_C");

}

