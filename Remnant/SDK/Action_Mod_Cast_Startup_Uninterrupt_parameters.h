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

// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.FilterIncomingDamage
struct UAction_Mod_Cast_Startup_Uninterrupt_C_FilterIncomingDamage_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                             // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.OnTick
struct UAction_Mod_Cast_Startup_Uninterrupt_C_OnTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt
struct UAction_Mod_Cast_Startup_Uninterrupt_C_ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
