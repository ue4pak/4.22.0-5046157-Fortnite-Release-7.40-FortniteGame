#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseHistoryScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PurchaseHistoryScreen.PurchaseHistoryScreen_C
// 0x00C0 (0x04A8 - 0x03E8)
class UPurchaseHistoryScreen_C final : public UFortPurchaseHistoryScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                         BacchusCloseButton;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_Summary;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                          Button_ClosePostApproval;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_ItemSelect;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_Reason;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_SubmitRequest;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_1;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemsToReturn;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  MainSwitcher;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxItemstoReturn;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_ItemList;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultDesc;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultMtxMsg;                                 // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultTitle;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTicketCounter_C*                       TicketCounter;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ChosenItem;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ChosenReason;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UUserWidget*>                    TicketArray;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Should_Use_Back_Action;                            // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PurchaseHistoryScreen(int32 EntryPoint);
	void OnInputMethodChanged_Event_0(bool bUsingGamepad);
	void UpdateItemList(const TArray<class UCommonTextBlock*>& ItemsToReturn_0);
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex);
	void OnBeginRefundSubmission();
	void BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnNoPurchasesAvailable();
	void OnActivated();
	void OnPopulateView(EPurchaseReturnStep CurrentStep);
	void Construct();
	void BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void HandleBack(bool* PassThrough);
	void ToggleBackAction(bool bShouldShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseHistoryScreen_C">();
	}
	static class UPurchaseHistoryScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseHistoryScreen_C>();
	}
};
static_assert(alignof(UPurchaseHistoryScreen_C) == 0x000008, "Wrong alignment on UPurchaseHistoryScreen_C");
static_assert(sizeof(UPurchaseHistoryScreen_C) == 0x0004A8, "Wrong size on UPurchaseHistoryScreen_C");
static_assert(offsetof(UPurchaseHistoryScreen_C, UberGraphFrame) == 0x0003E8, "Member 'UPurchaseHistoryScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, BacchusCloseButton) == 0x0003F0, "Member 'UPurchaseHistoryScreen_C::BacchusCloseButton' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Border_Summary) == 0x0003F8, "Member 'UPurchaseHistoryScreen_C::Border_Summary' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Button_ClosePostApproval) == 0x000400, "Member 'UPurchaseHistoryScreen_C::Button_ClosePostApproval' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Button_ItemSelect) == 0x000408, "Member 'UPurchaseHistoryScreen_C::Button_ItemSelect' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Button_Reason) == 0x000410, "Member 'UPurchaseHistoryScreen_C::Button_Reason' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Button_SubmitRequest) == 0x000418, "Member 'UPurchaseHistoryScreen_C::Button_SubmitRequest' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, CircularThrobber_0) == 0x000420, "Member 'UPurchaseHistoryScreen_C::CircularThrobber_0' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, FortRichTextBlock_1) == 0x000428, "Member 'UPurchaseHistoryScreen_C::FortRichTextBlock_1' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, ItemsToReturn) == 0x000430, "Member 'UPurchaseHistoryScreen_C::ItemsToReturn' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, MainSwitcher) == 0x000438, "Member 'UPurchaseHistoryScreen_C::MainSwitcher' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, ScrollBoxItemstoReturn) == 0x000440, "Member 'UPurchaseHistoryScreen_C::ScrollBoxItemstoReturn' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Switcher_ItemList) == 0x000448, "Member 'UPurchaseHistoryScreen_C::Switcher_ItemList' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Text_ResultDesc) == 0x000450, "Member 'UPurchaseHistoryScreen_C::Text_ResultDesc' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Text_ResultMtxMsg) == 0x000458, "Member 'UPurchaseHistoryScreen_C::Text_ResultMtxMsg' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Text_ResultTitle) == 0x000460, "Member 'UPurchaseHistoryScreen_C::Text_ResultTitle' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, TicketCounter) == 0x000468, "Member 'UPurchaseHistoryScreen_C::TicketCounter' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, VBox_ChosenItem) == 0x000470, "Member 'UPurchaseHistoryScreen_C::VBox_ChosenItem' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, VBox_ChosenReason) == 0x000478, "Member 'UPurchaseHistoryScreen_C::VBox_ChosenReason' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, BackAction) == 0x000480, "Member 'UPurchaseHistoryScreen_C::BackAction' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, TicketArray) == 0x000490, "Member 'UPurchaseHistoryScreen_C::TicketArray' has a wrong offset!");
static_assert(offsetof(UPurchaseHistoryScreen_C, Should_Use_Back_Action) == 0x0004A0, "Member 'UPurchaseHistoryScreen_C::Should_Use_Back_Action' has a wrong offset!");

}

