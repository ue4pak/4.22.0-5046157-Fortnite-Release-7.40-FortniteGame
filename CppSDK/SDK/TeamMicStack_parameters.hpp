#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMicStack

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
// 0x0280 (0x0280 - 0x0000)
struct TeamMicStack_C_ExecuteUbergraph_TeamMicStack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate1;             // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate2;             // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortTeamMemberInfo>            CallFunc_GetTeamMembers_TeamMembers;               // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFortTeamMemberInfo                    CallFunc_Array_Get_Item;                           // 0x0068(0x0200)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26D[0x3];                                      // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0270(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack) == 0x000008, "Wrong alignment on TeamMicStack_C_ExecuteUbergraph_TeamMicStack");
static_assert(sizeof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack) == 0x000280, "Wrong size on TeamMicStack_C_ExecuteUbergraph_TeamMicStack");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, EntryPoint) == 0x000000, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate1) == 0x00001C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate2) == 0x00002C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000048, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetTeamMembers_TeamMembers) == 0x000058, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetTeamMembers_TeamMembers' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Array_Get_Item) == 0x000068, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Array_Length_ReturnValue) == 0x000268, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Less_IntInt_ReturnValue) == 0x00026C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate3) == 0x000270, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
// 0x0010 (0x0010 - 0x0000)
struct TeamMicStack_C_HandleTeamMemberRemoved final
{
public:
	int32                                         Member_Index;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TeamMicStack_C_HandleTeamMemberRemoved) == 0x000004, "Wrong alignment on TeamMicStack_C_HandleTeamMemberRemoved");
static_assert(sizeof(TeamMicStack_C_HandleTeamMemberRemoved) == 0x000010, "Wrong size on TeamMicStack_C_HandleTeamMemberRemoved");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, Member_Index) == 0x000000, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::Member_Index' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_RemoveChildAt_ReturnValue) == 0x00000C, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000D, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
// 0x0228 (0x0228 - 0x0000)
struct TeamMicStack_C_HandleTeamMemberChanged final
{
public:
	struct FFortTeamMemberInfo                    Member_Info;                                       // 0x0000(0x0200)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayersUniqueID_ReturnValue;       // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_215[0x3];                                      // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCinematicMinusTeamMics_C*              CallFunc_Array_Get_Item;                           // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TeamMicStack_C_HandleTeamMemberChanged) == 0x000008, "Wrong alignment on TeamMicStack_C_HandleTeamMemberChanged");
static_assert(sizeof(TeamMicStack_C_HandleTeamMemberChanged) == 0x000228, "Wrong size on TeamMicStack_C_HandleTeamMemberChanged");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, Member_Info) == 0x000000, "Member 'TeamMicStack_C_HandleTeamMemberChanged::Member_Info' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Array_Length_ReturnValue) == 0x000200, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_GetContext_ReturnValue) == 0x000208, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Subtract_IntInt_ReturnValue) == 0x000210, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_IsLocalPlayersUniqueID_ReturnValue) == 0x000214, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_IsLocalPlayersUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Array_Get_Item) == 0x000218, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Less_IntInt_ReturnValue) == 0x000220, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers
// 0x0270 (0x0270 - 0x0000)
struct TeamMicStack_C_ShiftTeamMembers final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x0200)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0200(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentIndex;                                      // 0x0204(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UHUDMinusTeamMemberInfo_C*>      K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHUDMinusTeamMemberInfo_C*              CallFunc_Array_Get_Item;                           // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCinematicMinusTeamMics_C*              CallFunc_Create_ReturnValue;                       // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMicStack_C_ShiftTeamMembers) == 0x000008, "Wrong alignment on TeamMicStack_C_ShiftTeamMembers");
static_assert(sizeof(TeamMicStack_C_ShiftTeamMembers) == 0x000270, "Wrong size on TeamMicStack_C_ShiftTeamMembers");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, TeamMemberInfo) == 0x000000, "Member 'TeamMicStack_C_ShiftTeamMembers::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, Index_0) == 0x000200, "Member 'TeamMicStack_C_ShiftTeamMembers::Index_0' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CurrentIndex) == 0x000204, "Member 'TeamMicStack_C_ShiftTeamMembers::CurrentIndex' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, Temp_int_Array_Index_Variable) == 0x000208, "Member 'TeamMicStack_C_ShiftTeamMembers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, K2Node_MakeArray_Array) == 0x000210, "Member 'TeamMicStack_C_ShiftTeamMembers::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Greater_IntInt_ReturnValue) == 0x000220, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Array_Get_Item) == 0x000228, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Array_Length_ReturnValue) == 0x000230, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_GetOwningPlayer_ReturnValue) == 0x000238, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Create_ReturnValue) == 0x000240, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, K2Node_MakeStruct_Margin) == 0x000248, "Member 'TeamMicStack_C_ShiftTeamMembers::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, Temp_int_Loop_Counter_Variable) == 0x000258, "Member 'TeamMicStack_C_ShiftTeamMembers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000260, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ShiftTeamMembers, CallFunc_Add_IntInt_ReturnValue) == 0x00026C, "Member 'TeamMicStack_C_ShiftTeamMembers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
// 0x0238 (0x0238 - 0x0000)
struct TeamMicStack_C_AppendTeamMember final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x0200)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                         CurrentIndex;                                      // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0204(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCinematicMinusTeamMics_C*              CallFunc_Create_ReturnValue;                       // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMicStack_C_AppendTeamMember) == 0x000008, "Wrong alignment on TeamMicStack_C_AppendTeamMember");
static_assert(sizeof(TeamMicStack_C_AppendTeamMember) == 0x000238, "Wrong size on TeamMicStack_C_AppendTeamMember");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, TeamMemberInfo) == 0x000000, "Member 'TeamMicStack_C_AppendTeamMember::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CurrentIndex) == 0x000200, "Member 'TeamMicStack_C_AppendTeamMember::CurrentIndex' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, K2Node_MakeStruct_Margin) == 0x000204, "Member 'TeamMicStack_C_AppendTeamMember::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_GetOwningPlayer_ReturnValue) == 0x000218, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_Create_ReturnValue) == 0x000220, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_Array_Add_ReturnValue) == 0x000228, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000230, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}

