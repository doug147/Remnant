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

// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_VeilOfTheBlackTear_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStart");

	UAction_Mod_VeilOfTheBlackTear_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_VeilOfTheBlackTear_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStop");

	UAction_Mod_VeilOfTheBlackTear_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_VeilOfTheBlackTear_C::ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear");

	UAction_Mod_VeilOfTheBlackTear_C_ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
