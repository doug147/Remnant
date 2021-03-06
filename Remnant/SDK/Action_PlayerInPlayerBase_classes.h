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

// BlueprintGeneratedClass Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C
// 0x0009 (FullSize[0x0231] - InheritedSize[0x0228])
class UAction_PlayerInPlayerBase_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bActivated;                                                // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C");
		return ptr;
	}


	void OnTick(float DeltaSeconds);
	void ExecuteUbergraph_Action_PlayerInPlayerBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
