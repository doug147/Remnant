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

// BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Fusebox_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C");
		return ptr;
	}


	void HasFuseInFusebox(bool* Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
