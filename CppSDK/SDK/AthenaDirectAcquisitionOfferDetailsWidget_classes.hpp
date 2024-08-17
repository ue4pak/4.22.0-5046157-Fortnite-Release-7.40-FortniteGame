#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferDetailsWidget

#include "Basic.hpp"

#include "GameSubCatalog_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C
// 0x0168 (0x0600 - 0x0498)
class UAthenaDirectAcquisitionOfferDetailsWidget_C final : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Idle;                                              // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x04B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         AffilateInfo;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       AffiliateName;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOffer_SalesTextBanner_C* AthenaDirectAcquisitionOffer_PercentageOffBanner;  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         BacchusCloseButton;                                // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_Next;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_Previous;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CameraFramingWidget;                               // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CatalogOfferName;                                  // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CatalogOfferSB;                                    // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockAlreadyOwnedItems;                  // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockRemainingItems;                     // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Currency1ItemImage2;                               // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Currency1VB;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventStoreHostPanels_C*                EventStoreHostPanels;                              // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      GiftButton;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*                ItemInfoHeaderWidget;                              // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemRewardsSB;                                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LeftPanelSB;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                           MTXButton;                                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MTXButtonBox;                                      // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MultipleItemCB;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText;                                 // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               O_Sale_PreviousPrice;                              // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         OfferDetailsHB;                                    // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OwnedSwitcher;                                     // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OwnedText;                                         // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         PageLeftBtn;                                       // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         PageRightBtn;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PreviewStylesButton;                               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_MainContent;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                        SwipePanel;                                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_2FA;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice1;                            // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice1;                                // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanPurchase;                                       // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPurchasing;                                      // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA[0x2];                                      // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberToPurchase;                                  // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPurchaseLeft;                                   // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPurchaseRight;                                  // 0x05F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanChangeQuantity;                                 // 0x05F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3[0x5];                                      // 0x05F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           DelayGiftingHandle;                                // 0x05F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint);
	void OnOfferSet();
	void BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0();
	void DelayGiftTimerUp();
	void UpdateItemViewModeBP();
	void OnDeactivated();
	void BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateCenterandBinding();
	void HandleVaultViewItem(class UFortItem* Item);
	void OnBeginIntro();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PurchaseAmountRight();
	void PurchaseAmountLeft();
	void Show_Not_Enough_Currency();
	void OnUpdateStatus();
	void Construct();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void DialogResult_9E262B7A4CA17B2146A54B8A29CFC473(EFortDialogResult Result, class FName ResultName);
	void UpdateFromOffer();
	void HandleBack(bool* PassThrough);
	void PopDetails();
	void SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage);
	void HandlePurchaseOfferComplete(bool Success, TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void AttemptPurchase();
	void Update_Locked_Information();
	void UpdateAvailability();
	void UpdatePurchaseQuantity();
	void UpdateSaleStatus();
	void SetupSaleInfo(bool bHasSale, const class FString& BannerOverrideTag, const class FText& NormalPrice, bool bHasBattlePassStars, int32 NumOfBattlePassStars);
	class UWidget* GetWidgetForFramingViewedItem();
	void UpdateItemList();
	void UpdateCatalogOfferName();
	void ExecutePurchase();
	void DeclinePurchase();
	void FixupBackpack(class UFortItemDefinition* ItemDef, TArray<struct FFortItemQuantityPair>& AllItemQuantityPairs, class UAthenaSeasonReward_C* RewardWidget);
	void UpdateViewedItem(class UFortItem* ViewedItem);
	void UpdatePreviewButton();
	void UpdateCamera();
	void HandleGetVBucksClicked();
	void CanGiftOffer(EOfferPurchaseError* Result);
	void UpdateFromOffer_RefreshButtons();
	void Owned_Bundle_Item_Count(int32* Owned_Items, int32* UnOwned_Items, bool* bNoneOwned, bool* bAllOwned);
	void IsSingleGrantedItem(bool* Result);
	EFortItemCardSize GetCardSize();
	void GetShowCard(bool* Result);
	bool GetShowDetails();
	bool GetShowDescription();
	void CreateAndAddRewardItem(const struct FFortItemQuantityPair& ItemQuantity, int32 ItemIndex, TArray<struct FFortItemQuantityPair>& SortedItemQuantities);
	void GetOfferDetailsSlotMargin(struct FMargin* Margin);
	ESlateVisibility GetPagingVisibility();
	void UpdateDetails(class UFortItem* Reward);
	bool IsItemDefOwned(const class UFortItemDefinition* ItemDef);
	void GetSortedItems(TArray<struct FFortItemQuantityPair>* ItemQuantityPairs);
	class FText GetDisplayName(const struct FFortItemQuantityPair& ItemQuantityPair);
	void SetupPrerollItemHeaderInfo();
	void GetSalesText(class FText* NewParam);
	void SetupDynamicBundle();
	void SetupPurchaseButtonStateAndText();
	bool DoesOfferAllowQuantity();
	bool IsDynamicBundle();
	void EnableGiftButton();
	void DisableGiftButton();
	bool IsNonRefundable();
	int32 GetOwnedIndex();
	void ShowHideGiftingButton();
	bool GetHasBattlepassStars();
	int32 GetNumBattlepassStars();
	void SetupPurchaseButtonForQuantity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOfferDetailsWidget_C">();
	}
	static class UAthenaDirectAcquisitionOfferDetailsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOfferDetailsWidget_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionOfferDetailsWidget_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionOfferDetailsWidget_C");
static_assert(sizeof(UAthenaDirectAcquisitionOfferDetailsWidget_C) == 0x000600, "Wrong size on UAthenaDirectAcquisitionOfferDetailsWidget_C");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, UberGraphFrame) == 0x000498, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Idle) == 0x0004A0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Idle' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Outro) == 0x0004A8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Intro) == 0x0004B0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, AffilateInfo) == 0x0004B8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::AffilateInfo' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, AffiliateName) == 0x0004C0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::AffiliateName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, AthenaDirectAcquisitionOffer_PercentageOffBanner) == 0x0004C8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::AthenaDirectAcquisitionOffer_PercentageOffBanner' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, AthenaDirectAcquisitonDetails_BattlePassStarDetails) == 0x0004D0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::AthenaDirectAcquisitonDetails_BattlePassStarDetails' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, BacchusCloseButton) == 0x0004D8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::BacchusCloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Button_Next) == 0x0004E0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Button_Next' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Button_Previous) == 0x0004E8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Button_Previous' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CameraFramingWidget) == 0x0004F0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CameraFramingWidget' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CatalogOfferName) == 0x0004F8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CatalogOfferName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CatalogOfferSB) == 0x000500, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CatalogOfferSB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Check) == 0x000508, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Check' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CommonBorder_0) == 0x000510, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CommonTextBlockAlreadyOwnedItems) == 0x000518, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CommonTextBlockAlreadyOwnedItems' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CommonTextBlockRemainingItems) == 0x000520, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CommonTextBlockRemainingItems' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Currency1ItemImage2) == 0x000528, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Currency1ItemImage2' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Currency1VB) == 0x000530, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Currency1VB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, EventStoreHostPanels) == 0x000538, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::EventStoreHostPanels' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, GiftButton) == 0x000540, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::GiftButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ItemInfoHeaderWidget) == 0x000548, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ItemInfoHeaderWidget' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ItemRewardsSB) == 0x000550, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ItemRewardsSB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, LeftPanelSB) == 0x000558, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::LeftPanelSB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, MTXButton) == 0x000560, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::MTXButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, MTXButtonBox) == 0x000568, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::MTXButtonBox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, MultipleItemCB) == 0x000570, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::MultipleItemCB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, NonrefundableText) == 0x000578, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::NonrefundableText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, O_Sale_PreviousPrice) == 0x000580, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::O_Sale_PreviousPrice' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OfferDetailsHB) == 0x000588, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OfferDetailsHB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OwnedSwitcher) == 0x000590, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OwnedSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OwnedText) == 0x000598, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OwnedText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, PageLeftBtn) == 0x0005A0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::PageLeftBtn' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, PageRightBtn) == 0x0005A8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::PageRightBtn' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, PreviewStylesButton) == 0x0005B0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::PreviewStylesButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, PurchaseButton) == 0x0005B8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, SB_MainContent) == 0x0005C0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::SB_MainContent' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, SwipePanel) == 0x0005C8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Text_2FA) == 0x0005D0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Text_2FA' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextOfferDisplayPrice1) == 0x0005D8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextOfferDisplayPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextOriginalPrice1) == 0x0005E0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextOriginalPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchase) == 0x0005E8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, IsPurchasing) == 0x0005E9, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::IsPurchasing' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, NumberToPurchase) == 0x0005EC, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::NumberToPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchaseLeft) == 0x0005F0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchaseLeft' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchaseRight) == 0x0005F1, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchaseRight' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanChangeQuantity) == 0x0005F2, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanChangeQuantity' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, DelayGiftingHandle) == 0x0005F8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::DelayGiftingHandle' has a wrong offset!");

}

