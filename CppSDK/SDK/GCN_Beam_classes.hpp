#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Beam

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Beam.GCN_Beam_C
// 0x0008 (0x0088 - 0x0080)
class UGCN_Beam_C final : public UFortGameplayCueNotify_Simple
{
public:
	float                                         MaxBeamLength;                                     // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Beam_C">();
	}
	static class UGCN_Beam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Beam_C>();
	}
};
static_assert(alignof(UGCN_Beam_C) == 0x000008, "Wrong alignment on UGCN_Beam_C");
static_assert(sizeof(UGCN_Beam_C) == 0x000088, "Wrong size on UGCN_Beam_C");
static_assert(offsetof(UGCN_Beam_C, MaxBeamLength) == 0x000080, "Member 'UGCN_Beam_C::MaxBeamLength' has a wrong offset!");

}

