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

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.Get_Icon_Brush_1
struct UWidget_Recipe_Ingredient_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.HasRequiredQuantity
struct UWidget_Recipe_Ingredient_C_HasRequiredQuantity_Params
{
	bool                                               Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetTextColor
struct UWidget_Recipe_Ingredient_C_GetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientAmount
struct UWidget_Recipe_Ingredient_C_GetIngredientAmount_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C.GetIngredientName
struct UWidget_Recipe_Ingredient_C_GetIngredientName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
