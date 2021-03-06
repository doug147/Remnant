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

// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.UpdateLevelVisibility
struct UWidget_MiniMap_Player_C_UpdateLevelVisibility_Params
{
	int                                                DisplayLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MyLevel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.OnRegisteredToPanel
struct UWidget_MiniMap_Player_C_OnRegisteredToPanel_Params
{
	class UMiniMapPanel*                               MiniMapPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.ExecuteUbergraph_Widget_MiniMap_Player
struct UWidget_MiniMap_Player_C_ExecuteUbergraph_Widget_MiniMap_Player_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
