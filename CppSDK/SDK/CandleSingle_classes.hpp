#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CandleSingle

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CandleSingle.CandleSingle_C
// 0x0010 (0x0D10 - 0x0D00)
class ACandleSingle_C final : public AParent_BuildingPropActor_C
{
public:
	class UStaticMeshComponent*                   SM_FlameShape;                                     // 0x0D00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0D08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CandleSingle_C">();
	}
	static class ACandleSingle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACandleSingle_C>();
	}
};
static_assert(alignof(ACandleSingle_C) == 0x000008, "Wrong alignment on ACandleSingle_C");
static_assert(sizeof(ACandleSingle_C) == 0x000D10, "Wrong size on ACandleSingle_C");
static_assert(offsetof(ACandleSingle_C, SM_FlameShape) == 0x000D00, "Member 'ACandleSingle_C::SM_FlameShape' has a wrong offset!");
static_assert(offsetof(ACandleSingle_C, PointLight) == 0x000D08, "Member 'ACandleSingle_C::PointLight' has a wrong offset!");

}

