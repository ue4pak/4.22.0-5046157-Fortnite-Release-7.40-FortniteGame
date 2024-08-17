#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicMinusTeamMics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// 0x0230 (0x0468 - 0x0238)
class UCinematicMinusTeamMics_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherConnectingStranger;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_6;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0260(0x0200)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowingHealth;                                     // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CinematicMinusTeamMics(int32 EntryPoint);
	void Construct();
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic-TeamMics_C">();
	}
	static class UCinematicMinusTeamMics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematicMinusTeamMics_C>();
	}
};
static_assert(alignof(UCinematicMinusTeamMics_C) == 0x000008, "Wrong alignment on UCinematicMinusTeamMics_C");
static_assert(sizeof(UCinematicMinusTeamMics_C) == 0x000468, "Wrong size on UCinematicMinusTeamMics_C");
static_assert(offsetof(UCinematicMinusTeamMics_C, UberGraphFrame) == 0x000238, "Member 'UCinematicMinusTeamMics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, MicIndicator) == 0x000240, "Member 'UCinematicMinusTeamMics_C::MicIndicator' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, SwitcherConnectingStranger) == 0x000248, "Member 'UCinematicMinusTeamMics_C::SwitcherConnectingStranger' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, TextBlock_6) == 0x000250, "Member 'UCinematicMinusTeamMics_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, TextPlayerName) == 0x000258, "Member 'UCinematicMinusTeamMics_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, MemberInfo) == 0x000260, "Member 'UCinematicMinusTeamMics_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UCinematicMinusTeamMics_C, ShowingHealth) == 0x000460, "Member 'UCinematicMinusTeamMics_C::ShowingHealth' has a wrong offset!");

}

