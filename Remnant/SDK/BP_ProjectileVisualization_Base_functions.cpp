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

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PreDraw
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileVisualizationParams Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FProjectileVisualizationContext Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_ProjectileVisualization_Base_C::PreDraw(const struct FProjectileVisualizationParams& Params, struct FProjectileVisualizationContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PreDraw");

	ABP_ProjectileVisualization_Base_C_PreDraw_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;


	return params.ReturnValue;
}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.GetRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileVisualization_Base_C::GetRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.GetRadius");

	ABP_ProjectileVisualization_Base_C_GetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PostDrawPath
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FProjectileVisualizationParams Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FProjectileVisualizationContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FLinearColor            DrawColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileVisualization_Base_C::PostDrawPath(const struct FProjectileVisualizationParams& Params, const struct FProjectileVisualizationContext& Context, const struct FLinearColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PostDrawPath");

	ABP_ProjectileVisualization_Base_C_PostDrawPath_Params params;
	params.Params = Params;
	params.Context = Context;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.ExecuteUbergraph_BP_ProjectileVisualization_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileVisualization_Base_C::ExecuteUbergraph_BP_ProjectileVisualization_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.ExecuteUbergraph_BP_ProjectileVisualization_Base");

	ABP_ProjectileVisualization_Base_C_ExecuteUbergraph_BP_ProjectileVisualization_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
