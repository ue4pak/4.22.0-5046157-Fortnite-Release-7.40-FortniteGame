#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyBackdrop_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// 0x0118 (0x0118 - 0x0000)
struct FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors1;           // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	class ABP_FortniteLobbyLightSwitcher_C*       CallFunc_Array_Get_Item1;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors2;           // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FortniteLobbyLightSwitcher_C*       CallFunc_Array_Get_Item2;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0088(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera) == 0x000008, "Wrong alignment on FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera");
static_assert(sizeof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera) == 0x000118, "Wrong size on FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, EntryPoint) == 0x000000, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Array_Index_Variable) == 0x000004, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Array_Index_Variable1) == 0x000010, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetTimeOfDayManagerFromContext_ReturnValue) == 0x000028, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetTimeOfDayManagerFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item) == 0x000030, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors1) == 0x000038, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item1) == 0x000048, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors2) == 0x000058, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Loop_Counter_Variable1) == 0x000068, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item2) == 0x000070, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Add_IntInt_ReturnValue1) == 0x00007C, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue1) == 0x000080, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Less_IntInt_ReturnValue1) == 0x000084, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000088, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000110, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

}

