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

// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.GetFilterActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  FilterActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_Blizzard_C::GetFilterActor(class AActor** FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.GetFilterActor");

	UAction_AOE_Mod_Blizzard_C_GetFilterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilterActor != nullptr)
		*FilterActor = params.FilterActor;

}


// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.AddFrostbiteStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_Blizzard_C::AddFrostbiteStack(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.AddFrostbiteStack");

	UAction_AOE_Mod_Blizzard_C_AddFrostbiteStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.TestDriftstone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_Blizzard_C::TestDriftstone(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.TestDriftstone");

	UAction_AOE_Mod_Blizzard_C_TestDriftstone_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_AOE_Mod_Blizzard_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.OnActionStart");

	UAction_AOE_Mod_Blizzard_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.PostDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_Blizzard_C::PostDamage(class AActor* Target, float Falloff, float DamageReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.PostDamage");

	UAction_AOE_Mod_Blizzard_C_PostDamage_Params params;
	params.Target = Target;
	params.Falloff = Falloff;
	params.DamageReceived = DamageReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.ExecuteUbergraph_Action_AOE_Mod_Blizzard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_Blizzard_C::ExecuteUbergraph_Action_AOE_Mod_Blizzard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_Blizzard.Action_AOE_Mod_Blizzard_C.ExecuteUbergraph_Action_AOE_Mod_Blizzard");

	UAction_AOE_Mod_Blizzard_C_ExecuteUbergraph_Action_AOE_Mod_Blizzard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
