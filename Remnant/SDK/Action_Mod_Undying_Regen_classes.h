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

// BlueprintGeneratedClass Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C
// 0x0014 (FullSize[0x023C] - InheritedSize[0x0228])
class UAction_Mod_Undying_Regen_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RegenTime;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              RemainingRegen;                                            // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RegenRate;                                                 // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C");
		return ptr;
	}


	void OnActionStart();
	void OnTick(float DeltaSeconds);
	void ExecuteUbergraph_Action_Mod_Undying_Regen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
