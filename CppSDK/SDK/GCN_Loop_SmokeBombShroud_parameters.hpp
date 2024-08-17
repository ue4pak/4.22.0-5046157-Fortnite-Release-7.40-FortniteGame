#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_SmokeBombShroud

#include "Basic.hpp"


namespace SDK::Params
{

// Function GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C.GetSkeletalMeshes
// 0x0040 (0x0040 - 0x0000)
struct GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes) == 0x000008, "Wrong alignment on GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes");
static_assert(sizeof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes) == 0x000040, "Wrong size on GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_GetChildrenComponents_Children) == 0x000010, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_Array_Get_Item) == 0x000020, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000030, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes, CallFunc_Array_AddUnique_ReturnValue) == 0x00003C, "Member 'GCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

}

