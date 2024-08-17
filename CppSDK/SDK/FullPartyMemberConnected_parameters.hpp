#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyMemberConnected

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected
// 0x0008 (0x0008 - 0x0000)
struct FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected) == 0x000004, "Wrong alignment on FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected");
static_assert(sizeof(FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected) == 0x000008, "Wrong size on FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected");
static_assert(offsetof(FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected, EntryPoint) == 0x000000, "Member 'FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected::EntryPoint' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected, K2Node_Event_IsDesignTime) == 0x000004, "Member 'FullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FullPartyMemberConnected_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FullPartyMemberConnected_C_PreConstruct) == 0x000001, "Wrong alignment on FullPartyMemberConnected_C_PreConstruct");
static_assert(sizeof(FullPartyMemberConnected_C_PreConstruct) == 0x000001, "Wrong size on FullPartyMemberConnected_C_PreConstruct");
static_assert(offsetof(FullPartyMemberConnected_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FullPartyMemberConnected_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo
// 0x02A0 (0x02A0 - 0x0000)
struct FullPartyMemberConnected_C_UpdateMemberInfo final
{
public:
	struct FFortTeamMemberInfo                    NewMemberInfo;                                     // 0x0000(0x0200)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x0200(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue1;                  // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInLocalPlayersParty_ReturnValue;        // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0246(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x0247(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue; // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_Select2_Default;                            // 0x0260(0x0028)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_289[0x3];                                      // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FullPartyMemberConnected_C_UpdateMemberInfo) == 0x000008, "Wrong alignment on FullPartyMemberConnected_C_UpdateMemberInfo");
static_assert(sizeof(FullPartyMemberConnected_C_UpdateMemberInfo) == 0x0002A0, "Wrong size on FullPartyMemberConnected_C_UpdateMemberInfo");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, NewMemberInfo) == 0x000000, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::NewMemberInfo' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, PlayerNetId) == 0x000200, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::PlayerNetId' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetContext_ReturnValue) == 0x000228, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_bool_Variable) == 0x000230, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_bool_Variable1) == 0x000231, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable) == 0x000232, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable1) == 0x000233, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetContext_ReturnValue1) == 0x000238, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable2) == 0x000240, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable3) == 0x000241, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_bool_Variable2) == 0x000242, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable4) == 0x000243, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_IsInLocalPlayersParty_ReturnValue) == 0x000244, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_IsInLocalPlayersParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_byte_Variable5) == 0x000245, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, K2Node_Select_Default) == 0x000246, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, Temp_bool_Variable3) == 0x000247, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, K2Node_Select1_Default) == 0x000248, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetContext_ReturnValue2) == 0x000250, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000258, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_BooleanAND_ReturnValue) == 0x000259, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue) == 0x00025A, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_BooleanAND_ReturnValue1) == 0x00025B, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, K2Node_Select2_Default) == 0x000260, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, K2Node_Select3_Default) == 0x000288, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetTotalHomebaseRating_Rating) == 0x00028C, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x000290, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000294, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateMemberInfo, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000298, "Member 'FullPartyMemberConnected_C_UpdateMemberInfo::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions
// 0x0008 (0x0008 - 0x0000)
struct FullPartyMemberConnected_C_UpdateDimensions final
{
public:
	struct FVector2D                              NewDimensions;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FullPartyMemberConnected_C_UpdateDimensions) == 0x000004, "Wrong alignment on FullPartyMemberConnected_C_UpdateDimensions");
static_assert(sizeof(FullPartyMemberConnected_C_UpdateDimensions) == 0x000008, "Wrong size on FullPartyMemberConnected_C_UpdateDimensions");
static_assert(offsetof(FullPartyMemberConnected_C_UpdateDimensions, NewDimensions) == 0x000000, "Member 'FullPartyMemberConnected_C_UpdateDimensions::NewDimensions' has a wrong offset!");

}

