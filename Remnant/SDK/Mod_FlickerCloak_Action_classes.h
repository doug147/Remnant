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

// BlueprintGeneratedClass Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UMod_FlickerCloak_Action_C : public UAction_Shield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ShieldHealth;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ShieldDuration;                                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C");
		return ptr;
	}


	void GetShieldDecay(float* Out);
	void GetShieldMax(float* Out);
	void OnTick(float DeltaSeconds);
	void ExecuteUbergraph_Mod_FlickerCloak_Action(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
