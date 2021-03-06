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

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.Get Player Location
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ValidIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UCharacterMod_Root_Enchanter_C::Get_Player_Location(bool* ValidIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.Get Player Location");

	UCharacterMod_Root_Enchanter_C_Get_Player_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidIndex != nullptr)
		*ValidIndex = params.ValidIndex;


	return params.ReturnValue;
}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UCharacterMod_Root_Enchanter_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnActionStart");

	UCharacterMod_Root_Enchanter_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Root_Enchanter_C::OnSpawn(const struct FVector& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnSpawn");

	UCharacterMod_Root_Enchanter_C_OnSpawn_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ReturnToTimer
// (BlueprintCallable, BlueprintEvent)
void UCharacterMod_Root_Enchanter_C::ReturnToTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ReturnToTimer");

	UCharacterMod_Root_Enchanter_C_ReturnToTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnStartTimer
// (BlueprintCallable, BlueprintEvent)
void UCharacterMod_Root_Enchanter_C::OnStartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnStartTimer");

	UCharacterMod_Root_Enchanter_C_OnStartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnDead_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Root_Enchanter_C::OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnDead_Event_1");

	UCharacterMod_Root_Enchanter_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnCharacterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Root_Enchanter_C::OnCharacterEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnCharacterEvent");

	UCharacterMod_Root_Enchanter_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ExecuteUbergraph_CharacterMod_Root_Enchanter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterMod_Root_Enchanter_C::ExecuteUbergraph_CharacterMod_Root_Enchanter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ExecuteUbergraph_CharacterMod_Root_Enchanter");

	UCharacterMod_Root_Enchanter_C_ExecuteUbergraph_CharacterMod_Root_Enchanter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
