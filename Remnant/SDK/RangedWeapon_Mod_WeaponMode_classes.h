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

// BlueprintGeneratedClass RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C
// 0x0037 (FullSize[0x0710] - InheritedSize[0x06D9])
class ARangedWeapon_Mod_WeaponMode_C : public ARemnantRangedWeaponMod_C
{
public:
	unsigned char                                      UnknownData_Y60X[0x7];                                     // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsPlayingForceFeedback;                                   // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GGWV[0x7];                                     // 0x06E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UForceFeedbackEffect*                        WeaponModeForceFeedback;                                   // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsModActive;                                              // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2D6U[0x7];                                     // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ActivateSound;                                             // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  DeactivateSound;                                           // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedWeapon_Mod_WeaponMode.RangedWeapon_Mod_WeaponMode_C");
		return ptr;
	}


	void UpdateWeaponModeForceFeedback();
	void OnActivate();
	void OnAttached();
	void OnDetached();
	void OnActivateMod(EModActiveState ActiveState);
	void OnDeactivate();
	void ExecuteUbergraph_RangedWeapon_Mod_WeaponMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
