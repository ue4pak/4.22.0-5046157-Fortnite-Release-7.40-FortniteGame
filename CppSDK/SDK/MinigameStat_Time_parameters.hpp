#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameStat_Time

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MinigameStat_Time.MinigameStat_Time_C.FormatStat
// 0x0238 (0x0238 - 0x0000)
struct MinigameStat_Time_C_FormatStat final
{
public:
	int32                                         InCount;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromMilliseconds_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinutes_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMinutes_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetMilliseconds_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeconds_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x00B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00D0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0110(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x0150(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData4;             // 0x01A0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x01F8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0208(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0220(0x0018)()
};
static_assert(alignof(MinigameStat_Time_C_FormatStat) == 0x000008, "Wrong alignment on MinigameStat_Time_C_FormatStat");
static_assert(sizeof(MinigameStat_Time_C_FormatStat) == 0x000238, "Wrong size on MinigameStat_Time_C_FormatStat");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, InCount) == 0x000000, "Member 'MinigameStat_Time_C_FormatStat::InCount' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, ReturnValue) == 0x000008, "Member 'MinigameStat_Time_C_FormatStat::ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, Temp_bool_Variable) == 0x000020, "Member 'MinigameStat_Time_C_FormatStat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000024, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_FromMilliseconds_ReturnValue) == 0x000028, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_FromMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_GetMinutes_ReturnValue) == 0x000030, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_GetMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_GetTotalMinutes_ReturnValue) == 0x000034, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_GetTotalMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000050, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_GetMilliseconds_ReturnValue) == 0x000098, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_GetMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_GetSeconds_ReturnValue) == 0x00009C, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_GetSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Conv_IntToText_ReturnValue1) == 0x0000A0, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Conv_IntToText_ReturnValue2) == 0x0000B8, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeStruct_FormatArgumentData1) == 0x0000D0, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeStruct_FormatArgumentData2) == 0x000110, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeStruct_FormatArgumentData3) == 0x000150, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeArray_Array) == 0x000190, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeStruct_FormatArgumentData4) == 0x0001A0, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeStruct_FormatArgumentData4' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Format_ReturnValue) == 0x0001E0, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_MakeArray_Array1) == 0x0001F8, "Member 'MinigameStat_Time_C_FormatStat::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, CallFunc_Format_ReturnValue1) == 0x000208, "Member 'MinigameStat_Time_C_FormatStat::CallFunc_Format_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_FormatStat, K2Node_Select_Default) == 0x000220, "Member 'MinigameStat_Time_C_FormatStat::K2Node_Select_Default' has a wrong offset!");

// Function MinigameStat_Time.MinigameStat_Time_C.Compare
// 0x0010 (0x0010 - 0x0000)
struct MinigameStat_Time_C_Compare final
{
public:
	int32                                         FirstScore;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SecondScore;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameStat_Time_C_Compare) == 0x000004, "Wrong alignment on MinigameStat_Time_C_Compare");
static_assert(sizeof(MinigameStat_Time_C_Compare) == 0x000010, "Wrong size on MinigameStat_Time_C_Compare");
static_assert(offsetof(MinigameStat_Time_C_Compare, FirstScore) == 0x000000, "Member 'MinigameStat_Time_C_Compare::FirstScore' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_Compare, SecondScore) == 0x000004, "Member 'MinigameStat_Time_C_Compare::SecondScore' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_Compare, ReturnValue) == 0x000008, "Member 'MinigameStat_Time_C_Compare::ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameStat_Time_C_Compare, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'MinigameStat_Time_C_Compare::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

}

