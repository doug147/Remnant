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

// BlueprintGeneratedClass Character_Player_ComputedStats.Character_Player_ComputedStats_C
// 0x002C (FullSize[0x005C] - InheritedSize[0x0030])
class UCharacter_Player_ComputedStats_C : public UComputedStats
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageModMin;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageModMax;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EquipLoadMin;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EquipLoadMax;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritChanceMin;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritChanceMax;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequiredExperience;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequiredExperienceInc;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequiredExperienceExp;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Player_ComputedStats.Character_Player_ComputedStats_C");
		return ptr;
	}


	void ClampEncumbrance();
	void ModifyDamageVisualStats();
	void GenerateTotalDamageModStat(const struct FName& OutputStat, const struct FName& DamageModStat, const struct FName& DamageScalarStat);
	void ModifyCritChance();
	void ModifyEquipLoad();
	void ModifyDamageBonus(const struct FName& Attribute, const struct FName& AttributeMod, const struct FName& DamageBonusStat);
	void ModifyDamageBonuses();
	void ModifyResistances();
	void OnComputeStats();
	void OnPostComputeStats();
	void OnComputeDerivedStats();
	void ExecuteUbergraph_Character_Player_ComputedStats(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
