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

// BlueprintGeneratedClass Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C
// 0x001D (FullSize[0x02E0] - InheritedSize[0x02C3])
class UAction_Mod_VeilOfTheBlackTear_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_K9BE[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Radius;                                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B4HB[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_VeilOfTheBlackTear_Shield_C*             Shield;                                                    // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C");
		return ptr;
	}


	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
