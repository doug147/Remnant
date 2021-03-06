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

// BlueprintGeneratedClass Weapon_ComputedStats.Weapon_ComputedStats_C
// 0x000C (FullSize[0x003C] - InheritedSize[0x0030])
class UWeapon_ComputedStats_C : public UComputedStats
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageScalePerLevel;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_ComputedStats.Weapon_ComputedStats_C");
		return ptr;
	}


	void OnComputeDerivedStats();
	void ExecuteUbergraph_Weapon_ComputedStats(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
