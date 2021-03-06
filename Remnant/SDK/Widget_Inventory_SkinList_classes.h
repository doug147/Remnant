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

// WidgetBlueprintGeneratedClass Widget_Inventory_SkinList.Widget_Inventory_SkinList_C
// 0x003F (FullSize[0x0288] - InheritedSize[0x0249])
class UWidget_Inventory_SkinList_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_8HN3[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFocusGroup*                                 FocusGroup;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                                    ItemGrid;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                ItemID;                                                    // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MU1S[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSkinEquipped;                                            // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget_Inventory_SkinItem_C*                SelectedWidget;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory_SkinList.Widget_Inventory_SkinList_C");
		return ptr;
	}


	void DoAction();
	void Init(int ItemID);
	void Refresh();
	void OnEquipped();
	void OnSelected(class UWidget_Inventory_SkinItem_C* Widget);
	void ExecuteUbergraph_Widget_Inventory_SkinList(int EntryPoint);
	void OnSkinEquipped__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
