#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_SelectQuestItem.Widget_SelectQuestItem_C
// 0x003F (FullSize[0x0288] - InheritedSize[0x0249])
class UWidget_SelectQuestItem_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_KLLN[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_6;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_41;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_102;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_InventoryList_C*                     QuestInventory;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemUsed;                                                // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SelectQuestItem.Widget_SelectQuestItem_C");
		return ptr;
	}


	void UseItem(class UClass* ItemBP);
	void Construct();
	void BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature(int ItemID);
	void ExecuteUbergraph_Widget_SelectQuestItem(int EntryPoint);
	void OnItemUsed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
