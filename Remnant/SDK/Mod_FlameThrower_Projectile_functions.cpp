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
// Functions
//---------------------------------------------------------------------------

// Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_FlameThrower_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.ReceiveBeginPlay");

	AMod_FlameThrower_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.OnProjectileHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AMod_FlameThrower_Projectile_C::OnProjectileHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.OnProjectileHit");

	AMod_FlameThrower_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.ExecuteUbergraph_Mod_FlameThrower_Projectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_FlameThrower_Projectile_C::ExecuteUbergraph_Mod_FlameThrower_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlameThrower_Projectile.Mod_FlameThrower_Projectile_C.ExecuteUbergraph_Mod_FlameThrower_Projectile");

	AMod_FlameThrower_Projectile_C_ExecuteUbergraph_Mod_FlameThrower_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
