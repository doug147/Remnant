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

// Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_AOE_Mod_ColdSpear_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.OnActionStart");

	UAction_AOE_Mod_ColdSpear_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.ExecuteUbergraph_Action_AOE_Mod_ColdSpear
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_Mod_ColdSpear_C::ExecuteUbergraph_Action_AOE_Mod_ColdSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.ExecuteUbergraph_Action_AOE_Mod_ColdSpear");

	UAction_AOE_Mod_ColdSpear_C_ExecuteUbergraph_Action_AOE_Mod_ColdSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
