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

// Function PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C.GetEditorLabel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UPlayStateEffect_FadeHUD_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C.GetEditorLabel");

	UPlayStateEffect_FadeHUD_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C.Apply
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayStateComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayStateEffect*        Previous                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayStateEffect_FadeHUD_C::Apply(class UPlayStateComponent* Component, class UPlayStateEffect* Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C.Apply");

	UPlayStateEffect_FadeHUD_C_Apply_Params params;
	params.Component = Component;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
