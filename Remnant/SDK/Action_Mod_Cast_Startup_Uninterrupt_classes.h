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

// BlueprintGeneratedClass Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C
// 0x000D (FullSize[0x02D0] - InheritedSize[0x02C3])
class UAction_Mod_Cast_Startup_Uninterrupt_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_Z7JA[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C");
		return ptr;
	}


	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnTick(float DeltaSeconds);
	void ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
