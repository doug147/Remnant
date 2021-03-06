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

// BlueprintGeneratedClass Trinket_BrutalMark.Trinket_BrutalMark_C
// 0x0024 (FullSize[0x0608] - InheritedSize[0x05E4])
class ATrinket_BrutalMark_C : public AItem_Trinket_TriggerOnEquip_C
{
public:
	unsigned char                                      UnknownData_RDDS[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RangedDamageMod;                                           // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeDamageMod;                                            // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModDamageMod;                                              // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SummonedCreatureDamageMod;                                 // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnemyHeatlhThreshold;                                      // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayDuration;                                             // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_BrutalMark.Trinket_BrutalMark_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnEquipped();
	void ExecuteUbergraph_Trinket_BrutalMark(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
