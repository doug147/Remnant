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

// WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C
// 0x0017 (FullSize[0x0260] - InheritedSize[0x0249])
class UWidget_BossHealthBars_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_TI2C[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C");
		return ptr;
	}


	void RemoveBoss(class ACharacterGunfire* Character);
	void AddBoss(class ACharacterGunfire* Character);
	void Construct();
	void OnBossRelevant_Event_1(class ACharacterGunfire* Character);
	void OnBossNotRelevant_Event_1(class ACharacterGunfire* Character);
	void ExecuteUbergraph_Widget_BossHealthBars(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
