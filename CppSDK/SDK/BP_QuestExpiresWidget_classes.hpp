#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestExpiresWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_QuestExpiresWidget.BP_QuestExpiresWidget_C
// 0x0020 (0x0268 - 0x0248)
class UBP_QuestExpiresWidget_C final : public UFortQuestExpiresWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       QuestExpires;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Style;                                             // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bBreifText;                                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bTempDoesExpire;                                   // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_QuestExpiresWidget(int32 EntryPoint);
	void OnQuestExpirationUpdated();
	void SetData(class UFortQuestItem* InItem);
	void PreConstruct(bool IsDesignTime);
	void Refresh_Expiration_Timer(class UFortQuestItem* Quest);
	void GetFortPC(class AFortPlayerController** AsFort_Player_Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestExpiresWidget_C">();
	}
	static class UBP_QuestExpiresWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestExpiresWidget_C>();
	}
};
static_assert(alignof(UBP_QuestExpiresWidget_C) == 0x000008, "Wrong alignment on UBP_QuestExpiresWidget_C");
static_assert(sizeof(UBP_QuestExpiresWidget_C) == 0x000268, "Wrong size on UBP_QuestExpiresWidget_C");
static_assert(offsetof(UBP_QuestExpiresWidget_C, UberGraphFrame) == 0x000248, "Member 'UBP_QuestExpiresWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_QuestExpiresWidget_C, QuestExpires) == 0x000250, "Member 'UBP_QuestExpiresWidget_C::QuestExpires' has a wrong offset!");
static_assert(offsetof(UBP_QuestExpiresWidget_C, Style) == 0x000258, "Member 'UBP_QuestExpiresWidget_C::Style' has a wrong offset!");
static_assert(offsetof(UBP_QuestExpiresWidget_C, bBreifText) == 0x000260, "Member 'UBP_QuestExpiresWidget_C::bBreifText' has a wrong offset!");
static_assert(offsetof(UBP_QuestExpiresWidget_C, bTempDoesExpire) == 0x000261, "Member 'UBP_QuestExpiresWidget_C::bTempDoesExpire' has a wrong offset!");

}

