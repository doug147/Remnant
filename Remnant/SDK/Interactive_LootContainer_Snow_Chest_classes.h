#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_LootContainer_Snow_Chest.Interactive_LootContainer_Snow_Chest_C
// 0x000F (FullSize[0x0458] - InheritedSize[0x0449])
class AInteractive_LootContainer_Snow_Chest_C : public AInteractive_LootContainer_Base_C
{
public:
	unsigned char                                      UnknownData_UH63[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               DropValidationShape;                                       // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_LootContainer_Snow_Chest.Interactive_LootContainer_Snow_Chest_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
