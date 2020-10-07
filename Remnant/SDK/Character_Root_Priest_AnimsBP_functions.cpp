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

// Function Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Root_Priest_AnimsBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C.BlueprintUpdateAnimation");

	UCharacter_Root_Priest_AnimsBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C.ExecuteUbergraph_Character_Root_Priest_AnimsBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacter_Root_Priest_AnimsBP_C::ExecuteUbergraph_Character_Root_Priest_AnimsBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C.ExecuteUbergraph_Character_Root_Priest_AnimsBP");

	UCharacter_Root_Priest_AnimsBP_C_ExecuteUbergraph_Character_Root_Priest_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
