#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDuration
struct AMod_WildfireShot_C_GetDotDuration_Params
{
	float                                              Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_WildfireShot.Mod_WildfireShot_C.GetDotDamage
struct AMod_WildfireShot_C_GetDotDamage_Params
{
	float                                              Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyDamage
struct AMod_WildfireShot_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_WildfireShot.Mod_WildfireShot_C.ModifyInspectInfo
struct AMod_WildfireShot_C_ModifyInspectInfo_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData*                           InInstanceData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_WildfireShot.Mod_WildfireShot_C.OnFire
struct AMod_WildfireShot_C_OnFire_Params
{
	struct FVector                                     from;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     to;                                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponSpread;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_WildfireShot.Mod_WildfireShot_C.ExecuteUbergraph_Mod_WildfireShot
struct AMod_WildfireShot_C_ExecuteUbergraph_Mod_WildfireShot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
