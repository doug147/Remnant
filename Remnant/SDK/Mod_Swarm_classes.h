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

// BlueprintGeneratedClass Mod_Swarm.Mod_Swarm_C
// 0x0018 (FullSize[0x07B4] - InheritedSize[0x079C])
class AMod_Swarm_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:
	unsigned char                                      UnknownData_YE37[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Damage;                                                    // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeakSpotMod;                                               // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Swarm.Mod_Swarm_C");
		return ptr;
	}


	void GetDuration(float* Out);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnBeginUse();
	void OnEndUse();
	void OnPreviewStart();
	void ExecuteUbergraph_Mod_Swarm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
