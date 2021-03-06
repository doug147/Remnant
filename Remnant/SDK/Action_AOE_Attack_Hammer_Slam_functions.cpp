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

// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.IsValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  _Target                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_AOE_Attack_Hammer_Slam_C::IsValidTarget(class AActor* _Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.IsValidTarget");

	UAction_AOE_Attack_Hammer_Slam_C_IsValidTarget_Params params;
	params._Target = _Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.Get Socket Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UAction_AOE_Attack_Hammer_Slam_C::Get_Socket_Location(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.Get Socket Location");

	UAction_AOE_Attack_Hammer_Slam_C_Get_Socket_Location_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
