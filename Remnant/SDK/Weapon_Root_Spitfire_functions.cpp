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

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.OnRep_FlameActive
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void AWeapon_Root_Spitfire_C::OnRep_FlameActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.OnRep_FlameActive");

	AWeapon_Root_Spitfire_C_OnRep_FlameActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AWeapon_Root_Spitfire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UserConstructionScript");

	AWeapon_Root_Spitfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.SetFlameActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Root_Spitfire_C::SetFlameActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.SetFlameActive");

	AWeapon_Root_Spitfire_C_SetFlameActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ServerSetFlameActive
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWeapon_Root_Spitfire_C::ServerSetFlameActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ServerSetFlameActive");

	AWeapon_Root_Spitfire_C_ServerSetFlameActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UpdateFlameVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Root_Spitfire_C::UpdateFlameVFX(const struct FVector& from, const struct FVector& to)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UpdateFlameVFX");

	AWeapon_Root_Spitfire_C_UpdateFlameVFX_Params params;
	params.from = from;
	params.to = to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ExecuteUbergraph_Weapon_Root_Spitfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWeapon_Root_Spitfire_C::ExecuteUbergraph_Weapon_Root_Spitfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ExecuteUbergraph_Weapon_Root_Spitfire");

	AWeapon_Root_Spitfire_C_ExecuteUbergraph_Weapon_Root_Spitfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
