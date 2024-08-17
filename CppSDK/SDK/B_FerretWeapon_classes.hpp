#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FerretWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Dual_Generic_FerretVehicle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C
// 0x0008 (0x0E90 - 0x0E88)
class AB_FerretWeapon_C final : public AB_Ranged_Dual_Generic_FerretVehicle_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_FerretWeapon_C;                   // 0x0E88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_FerretWeapon(int32 EntryPoint);
	void FerretSnowmanCheck();
	void K2_OnUnEquip();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_FerretWeapon_C">();
	}
	static class AB_FerretWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_FerretWeapon_C>();
	}
};
static_assert(alignof(AB_FerretWeapon_C) == 0x000008, "Wrong alignment on AB_FerretWeapon_C");
static_assert(sizeof(AB_FerretWeapon_C) == 0x000E90, "Wrong size on AB_FerretWeapon_C");
static_assert(offsetof(AB_FerretWeapon_C, UberGraphFrame_B_FerretWeapon_C) == 0x000E88, "Member 'AB_FerretWeapon_C::UberGraphFrame_B_FerretWeapon_C' has a wrong offset!");

}

