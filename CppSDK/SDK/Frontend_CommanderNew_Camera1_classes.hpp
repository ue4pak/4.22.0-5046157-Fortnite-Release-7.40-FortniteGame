#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_CommanderNew_Camera1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C
// 0x0010 (0x0890 - 0x0880)
class AFrontend_CommanderNew_Camera1_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Frontend_CommanderNew_Camera1(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_CommanderNew_Camera1_C">();
	}
	static class AFrontend_CommanderNew_Camera1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_CommanderNew_Camera1_C>();
	}
};
static_assert(alignof(AFrontend_CommanderNew_Camera1_C) == 0x000010, "Wrong alignment on AFrontend_CommanderNew_Camera1_C");
static_assert(sizeof(AFrontend_CommanderNew_Camera1_C) == 0x000890, "Wrong size on AFrontend_CommanderNew_Camera1_C");
static_assert(offsetof(AFrontend_CommanderNew_Camera1_C, UberGraphFrame) == 0x000880, "Member 'AFrontend_CommanderNew_Camera1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_CommanderNew_Camera1_C, Arrow) == 0x000888, "Member 'AFrontend_CommanderNew_Camera1_C::Arrow' has a wrong offset!");

}

