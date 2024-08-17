#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleArrowButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// 0x0040 (0x0040 - 0x0000)
struct CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable1;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue2;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton) == 0x000008, "Wrong alignment on CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton");
static_assert(sizeof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton) == 0x000040, "Wrong size on CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, EntryPoint) == 0x000000, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable) == 0x000004, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_struct_Variable) == 0x000010, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_struct_Variable1) == 0x000018, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Event_IsDesignTime) == 0x000020, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default) == 0x000024, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue1) == 0x000030, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue2) == 0x000038, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue2' has a wrong offset!");

// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CircleArrowButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CircleArrowButton_C_PreConstruct) == 0x000001, "Wrong alignment on CircleArrowButton_C_PreConstruct");
static_assert(sizeof(CircleArrowButton_C_PreConstruct) == 0x000001, "Wrong size on CircleArrowButton_C_PreConstruct");
static_assert(offsetof(CircleArrowButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CircleArrowButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

