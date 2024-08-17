#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// 0x0004 (0x0004 - 0x0000)
struct WM_PinManager_C_ExecuteUbergraph_WM_PinManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager) == 0x000004, "Wrong alignment on WM_PinManager_C_ExecuteUbergraph_WM_PinManager");
static_assert(sizeof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager) == 0x000004, "Wrong size on WM_PinManager_C_ExecuteUbergraph_WM_PinManager");
static_assert(offsetof(WM_PinManager_C_ExecuteUbergraph_WM_PinManager, EntryPoint) == 0x000000, "Member 'WM_PinManager_C_ExecuteUbergraph_WM_PinManager::EntryPoint' has a wrong offset!");

// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// 0x05D0 (0x05D0 - 0x0000)
struct WM_PinManager_C_CreateWorldMapPin final
{
public:
	class FString                                 TheaterId;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AWorldMapPin*                           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTheaterMapData                    CallFunc_GetTheaterData_OutTheaterData;            // 0x0058(0x0560)()
	bool                                          CallFunc_GetTheaterData_ReturnValue;               // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9[0x7];                                      // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWorldMapPin*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_PinManager_C_CreateWorldMapPin) == 0x000010, "Wrong alignment on WM_PinManager_C_CreateWorldMapPin");
static_assert(sizeof(WM_PinManager_C_CreateWorldMapPin) == 0x0005D0, "Wrong size on WM_PinManager_C_CreateWorldMapPin");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, TheaterId) == 0x000000, "Member 'WM_PinManager_C_CreateWorldMapPin::TheaterId' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, ReturnValue) == 0x000010, "Member 'WM_PinManager_C_CreateWorldMapPin::ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetContext_ReturnValue) == 0x000050, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetTheaterData_OutTheaterData) == 0x000058, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetTheaterData_OutTheaterData' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_GetTheaterData_ReturnValue) == 0x0005B8, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_GetTheaterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0005C0, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_PinManager_C_CreateWorldMapPin, CallFunc_FinishSpawningActor_ReturnValue) == 0x0005C8, "Member 'WM_PinManager_C_CreateWorldMapPin::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

