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

// BlueprintGeneratedClass Mod_StaticFieldShot_Projectile.Mod_StaticFieldShot_Projectile_C
// 0x0018 (FullSize[0x04A0] - InheritedSize[0x0488])
class AMod_StaticFieldShot_Projectile_C : public AProjectileSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             EyeOfStorm_Projectile_Start_SC;                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_StaticFieldShot_Projectile.Mod_StaticFieldShot_Projectile_C");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Mod_StaticFieldShot_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
