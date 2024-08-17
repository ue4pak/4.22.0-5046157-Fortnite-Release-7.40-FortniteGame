#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Bush

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
// 0x03A0 (0x03A0 - 0x0000)
struct GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena1;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena2;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x009C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0130(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x01E8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x01F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0210(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x02C8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x02D8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x02F8(0x0010)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;        // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0320(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0350(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x035C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0368(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0380(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x000010, "Wrong alignment on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(sizeof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x0003A0, "Wrong size on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, EntryPoint) == 0x000000, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_bool_Variable) == 0x000004, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable) == 0x000008, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable1) == 0x000010, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000020, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsValid_ReturnValue1) == 0x000030, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_GetVelocity_ReturnValue) == 0x000034, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_VSize_ReturnValue) == 0x000044, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_FClamp_ReturnValue) == 0x00004C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000050, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_FloatFloat_ReturnValue1) == 0x000051, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000054, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena1) == 0x000060, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess1) == 0x000068, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsLocallyControlled_ReturnValue) == 0x000069, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000070, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Select_Default) == 0x000078, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena2) == 0x000090, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess2) == 0x000098, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x00009C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_MyTarget1) == 0x000128, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_Parameters1) == 0x000130, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_ParticleComponents1) == 0x0001E8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_AudioComponents1) == 0x0001F8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_MyTarget) == 0x000208, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_Parameters) == 0x000210, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_ParticleComponents) == 0x0002C8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_AudioComponents) == 0x0002D8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_BurstCameraShakeInstance) == 0x0002E8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_BurstDecalInstance) == 0x0002F0, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_CreateDelegate_OutputDelegate1) == 0x0002F8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000308, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000310, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x000314, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Add_FloatFloat_ReturnValue) == 0x000318, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_GetTransform_ReturnValue) == 0x000320, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Location) == 0x000350, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Rotation) == 0x00035C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Scale) == 0x000368, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Roll) == 0x000374, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Pitch) == 0x000378, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Yaw) == 0x00037C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_MakeRotator_ReturnValue) == 0x000380, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000390, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_Athena_Bush_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_OnRemoval");
static_assert(sizeof(GCN_Athena_Bush_C_OnRemoval) == 0x0000F0, "Wrong size on GCN_Athena_Bush_C_OnRemoval");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_Bush_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_Bush_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Athena_Bush_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Athena_Bush_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Athena_Bush_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCN_Athena_Bush_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_OnLoopingStart");
static_assert(sizeof(GCN_Athena_Bush_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCN_Athena_Bush_C_OnLoopingStart");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCN_Athena_Bush_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCN_Athena_Bush_C_OnLoopingStart::AudioComponents' has a wrong offset!");

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCN_Athena_Bush_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Athena_Bush_C_ReceiveTick");
static_assert(sizeof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Athena_Bush_C_ReceiveTick");
static_assert(offsetof(GCN_Athena_Bush_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Athena_Bush_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

