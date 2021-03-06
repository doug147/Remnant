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

// BlueprintGeneratedClass ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C
// 0x001C (FullSize[0x024C] - InheritedSize[0x0230])
class UArmorSkill_ModifySingleStat_C : public UArmorSkill_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ValueTier1;                                                // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueTier2;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueTier3;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StatName;                                                  // 0x0244(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C");
		return ptr;
	}


	void GetValue(int Tier, float* Out);
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_ModifySingleStat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
