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

// BlueprintGeneratedClass Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C
// 0x001F (FullSize[0x0648] - InheritedSize[0x0629])
class AConsumable_OrbOfUndoing_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData_MOJM[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Undoing_Idle;                                            // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URimComponent*                               Rim;                                                       // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnActivate();
	void OnEquipped();
	void ExecuteUbergraph_Consumable_OrbOfUndoing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
