#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Backpack

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_Backpack.GCN_Athena_Backpack_C
// 0x0010 (0x0438 - 0x0428)
class AGCN_Athena_Backpack_C final : public AFortGameplayCueNotify_Looping
{
public:
	class USkeletalMeshComponent*                 BackpackSkelMesh;                                  // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerPawn;                                        // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Backpack_C">();
	}
	static class AGCN_Athena_Backpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_Backpack_C>();
	}
};
static_assert(alignof(AGCN_Athena_Backpack_C) == 0x000008, "Wrong alignment on AGCN_Athena_Backpack_C");
static_assert(sizeof(AGCN_Athena_Backpack_C) == 0x000438, "Wrong size on AGCN_Athena_Backpack_C");
static_assert(offsetof(AGCN_Athena_Backpack_C, BackpackSkelMesh) == 0x000428, "Member 'AGCN_Athena_Backpack_C::BackpackSkelMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Backpack_C, PlayerPawn) == 0x000430, "Member 'AGCN_Athena_Backpack_C::PlayerPawn' has a wrong offset!");

}

