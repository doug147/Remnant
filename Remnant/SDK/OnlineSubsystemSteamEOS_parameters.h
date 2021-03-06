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

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginPersistenceAuth
struct UGunfireCrossplayManager_LoginPersistenceAuth_Params
{
};

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginEpicFromSteam
struct UGunfireCrossplayManager_LoginEpicFromSteam_Params
{
	bool                                               bCreateHeadlessAccount;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LinkEpicFromSteam
struct UGunfireCrossplayManager_LinkEpicFromSteam_Params
{
};

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.GetGunfireCrossplayManager
struct UGunfireCrossplayManager_GetGunfireCrossplayManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGunfireCrossplayManager*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.DeletePersistenceAuth
struct UGunfireCrossplayManager_DeletePersistenceAuth_Params
{
};

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.BeginCrossplayLogin
struct UGunfireCrossplayManager_BeginCrossplayLogin_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
