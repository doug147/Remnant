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

// Function Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Character_Wasteland_Sentinel_Sound_Awareness_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C.OnActionStart");

	UAction_Character_Wasteland_Sentinel_Sound_Awareness_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C.ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Character_Wasteland_Sentinel_Sound_Awareness_C::ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C.ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness");

	UAction_Character_Wasteland_Sentinel_Sound_Awareness_C_ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
