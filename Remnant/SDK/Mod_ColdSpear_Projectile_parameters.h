#pragma once

// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_ExplosionFX
struct AMod_ColdSpear_Projectile_C_MC_ExplosionFX_Params
{
};

// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_BuildupFX
struct AMod_ColdSpear_Projectile_C_MC_BuildupFX_Params
{
};

// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.OnProjectileHit
struct AMod_ColdSpear_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.ExecuteUbergraph_Mod_ColdSpear_Projectile
struct AMod_ColdSpear_Projectile_C_ExecuteUbergraph_Mod_ColdSpear_Projectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
