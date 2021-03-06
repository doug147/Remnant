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

// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.Trigger
struct AItem_Trinket_TriggerOnMeleeHit_C_Trigger_Params
{
	struct FDamageInfo                                 Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.OnHitTarget
struct AItem_Trinket_TriggerOnMeleeHit_C_OnHitTarget_Params
{
	struct FDamageInfo                                 DamageInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit
struct AItem_Trinket_TriggerOnMeleeHit_C_ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
