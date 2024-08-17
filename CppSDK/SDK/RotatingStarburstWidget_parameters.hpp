#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotatingStarburstWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RotatingStarburstWidget.RotatingStarburstWidget_C.ExecuteUbergraph_RotatingStarburstWidget
// 0x0048 (0x0048 - 0x0000)
struct RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget) == 0x000004, "Wrong alignment on RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget");
static_assert(sizeof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget) == 0x000048, "Wrong size on RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget");
static_assert(offsetof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget, EntryPoint) == 0x000000, "Member 'RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000040, "Member 'RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'RotatingStarburstWidget_C_ExecuteUbergraph_RotatingStarburstWidget::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function RotatingStarburstWidget.RotatingStarburstWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct RotatingStarburstWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotatingStarburstWidget_C_Tick) == 0x000004, "Wrong alignment on RotatingStarburstWidget_C_Tick");
static_assert(sizeof(RotatingStarburstWidget_C_Tick) == 0x00003C, "Wrong size on RotatingStarburstWidget_C_Tick");
static_assert(offsetof(RotatingStarburstWidget_C_Tick, MyGeometry) == 0x000000, "Member 'RotatingStarburstWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(RotatingStarburstWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'RotatingStarburstWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

