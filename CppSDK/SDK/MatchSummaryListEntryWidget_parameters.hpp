#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchSummaryListEntryWidget

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.ExecuteUbergraph_MatchSummaryListEntryWidget
// 0x0004 (0x0004 - 0x0000)
struct MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget) == 0x000004, "Wrong alignment on MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget");
static_assert(sizeof(MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget) == 0x000004, "Wrong size on MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget");
static_assert(offsetof(MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget, EntryPoint) == 0x000000, "Member 'MatchSummaryListEntryWidget_C_ExecuteUbergraph_MatchSummaryListEntryWidget::EntryPoint' has a wrong offset!");

// Function MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C.Update
// 0x0120 (0x0120 - 0x0000)
struct MatchSummaryListEntryWidget_C_Update final
{
public:
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue1;      // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue2;      // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetMatchEndTime_ReturnValue;              // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStat_ReturnValue;                      // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStat_ReturnValue1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x00D8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0100(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStat_ReturnValue2;                     // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchSummaryListEntryWidget_C_Update) == 0x000008, "Wrong alignment on MatchSummaryListEntryWidget_C_Update");
static_assert(sizeof(MatchSummaryListEntryWidget_C_Update) == 0x000120, "Wrong size on MatchSummaryListEntryWidget_C_Update");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000000, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_MakeLiteralGameplayTag_ReturnValue1) == 0x000008, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_MakeLiteralGameplayTag_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_MakeLiteralGameplayTag_ReturnValue2) == 0x000010, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_MakeLiteralGameplayTag_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_GetBaseStatView_ReturnValue) == 0x000018, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_GetBaseStatView_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_DynamicCast_AsAthena_Match_Stat_View) == 0x000020, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_DynamicCast_AsAthena_Match_Stat_View' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_GetMatchEndTime_ReturnValue) == 0x000030, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_GetMatchEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_GetStat_ReturnValue) == 0x000038, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_GetStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_Round_ReturnValue) == 0x00003C, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_GetStat_ReturnValue1) == 0x000040, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_GetStat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_MakeStruct_FormatArgumentData1) == 0x000088, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_MakeArray_Array) == 0x0000C8, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, K2Node_MakeArray_Array1) == 0x0000D8, "Member 'MatchSummaryListEntryWidget_C_Update::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_Format_ReturnValue1) == 0x000100, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_Format_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000118, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchSummaryListEntryWidget_C_Update, CallFunc_GetStat_ReturnValue2) == 0x00011C, "Member 'MatchSummaryListEntryWidget_C_Update::CallFunc_GetStat_ReturnValue2' has a wrong offset!");

}

