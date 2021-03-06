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

// BlueprintGeneratedClass Trait_FlashCaster.Trait_FlashCaster_C
// 0x001F (FullSize[0x0110] - InheritedSize[0x00F1])
class UTrait_FlashCaster_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_P6SA[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ModCastingSpeedMod;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModCastingSpeedModInc;                                     // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModCastingSpeedAnimPlayRate;                               // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModCastingSpeedAnimPlayRateInc;                            // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_FlashCaster.Trait_FlashCaster_C");
		return ptr;
	}


	void GetModCastingSpeedAnimPlayRate(float* Out);
	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetModCastingSpeedMod(float* Out);
	void OnComputeStats();
	void OnPostComputeStats();
	void ExecuteUbergraph_Trait_FlashCaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
