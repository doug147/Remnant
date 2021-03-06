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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}


};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (FullSize[0x0770] - InheritedSize[0x0768])
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_BPZY[0x8];                                     // 0x0768(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}


};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (FullSize[0x18F0] - InheritedSize[0x18E8])
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                            // 0x18E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OR5H[0x7];                                     // 0x18E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
