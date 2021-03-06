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

// BlueprintGeneratedClass Mod_Undying.Mod_Undying_C
// 0x0020 (FullSize[0x072C] - InheritedSize[0x070C])
class AMod_Undying_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData_2MXZ[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ResurrectionHealthScalar;                                  // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResurrectionBuffDuration;                                  // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResurrectionBuffDamageScalar;                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLevelResurrectionBuffDuration;                          // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EzlansBandCooldownDuration;                                // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Undying.Mod_Undying_C");
		return ptr;
	}


	void HasEzlansBand(class AActor* Actor, bool* HasEzlans);
	void GetResurrectionBuffDurationScalar(float* Out);
	void GetDispalyHealthScalar(float* Scalar);
	void GetReviveHealthScalar(float* HealthScalar);
	void DoAction(class UActionComponent* ActionComponent, int* ActionID);
	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnChargesChanged(int Charges);
	void OnAttached();
	void AddModPower(float Damage, float BonusModPowerMod);
	void ExecuteUbergraph_Mod_Undying(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
