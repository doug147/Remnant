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

// BlueprintGeneratedClass Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C
// 0x002C (FullSize[0x0CFC] - InheritedSize[0x0CD0])
class AWeapon_Swamp_PrideOfTheIskal_C : public AWeapon_HandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                        // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween;                                                     // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Body;                                                  // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C");
		return ptr;
	}


	void SetInactiveVFX();
	void SetActiveVFX();
	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void OnActivateMod_Event_1(EModActiveState ActiveState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
