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

// BlueprintGeneratedClass ImpactEffect_Projectile_Launcher.ImpactEffect_Projectile_Launcher_C
// 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
class AImpactEffect_Projectile_Launcher_C : public AImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactEffect_Projectile_Launcher.ImpactEffect_Projectile_Launcher_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
