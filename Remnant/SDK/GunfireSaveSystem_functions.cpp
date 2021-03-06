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
// Functions
//---------------------------------------------------------------------------

// Function GunfireSaveSystem.CommitSaveWithResultCallbackProxy.CommitSaveWithResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommitSaveWithResultCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCommitSaveWithResultCallbackProxy* UCommitSaveWithResultCallbackProxy::STATIC_CommitSaveWithResult(class UObject* WorldContextObject, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.CommitSaveWithResultCallbackProxy.CommitSaveWithResult");

	UCommitSaveWithResultCallbackProxy_CommitSaveWithResult_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UCommitSaveWithResultCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.LoadSaveCallbackProxy.LoadSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadSaveCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULoadSaveCallbackProxy* ULoadSaveCallbackProxy::STATIC_LoadSave(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.LoadSaveCallbackProxy.LoadSave");

	ULoadSaveCallbackProxy_LoadSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ULoadSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.LoadProfileSaveCallbackProxy.LoadProfileSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadProfileSaveCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULoadProfileSaveCallbackProxy* ULoadProfileSaveCallbackProxy::STATIC_LoadProfileSave(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.LoadProfileSaveCallbackProxy.LoadProfileSave");

	ULoadProfileSaveCallbackProxy_LoadProfileSave_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ULoadProfileSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.SaveGamePersistence.PreCommit
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPersistenceManager*     PersistenceManager             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveGamePersistence::PreCommit(class UPersistenceManager* PersistenceManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.SaveGamePersistence.PreCommit");

	USaveGamePersistence_PreCommit_Params params;
	params.PersistenceManager = PersistenceManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GunfireSaveSystem.ReadSaveCallbackProxy.ReadSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UReadSaveCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReadSaveCallbackProxy* UReadSaveCallbackProxy::STATIC_ReadSave(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.ReadSaveCallbackProxy.ReadSave");

	UReadSaveCallbackProxy_ReadSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UReadSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.HasSaveCallbackProxy.HasSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHasSaveCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHasSaveCallbackProxy* UHasSaveCallbackProxy::STATIC_HasSave(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.HasSaveCallbackProxy.HasSave");

	UHasSaveCallbackProxy_HasSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UHasSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.DeleteSaveCallbackProxy.DeleteSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteSaveCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteSaveCallbackProxy* UDeleteSaveCallbackProxy::STATIC_DeleteSave(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.DeleteSaveCallbackProxy.DeleteSave");

	UDeleteSaveCallbackProxy_DeleteSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UDeleteSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.DeleteProfileSaveCallbackProxy.DeleteProfileSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDeleteProfileSaveCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDeleteProfileSaveCallbackProxy* UDeleteProfileSaveCallbackProxy::STATIC_DeleteProfileSave(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.DeleteProfileSaveCallbackProxy.DeleteProfileSave");

	UDeleteProfileSaveCallbackProxy_DeleteProfileSave_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UDeleteProfileSaveCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.HasProfileBackupCallbackProxy.HasProfileBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHasProfileBackupCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHasProfileBackupCallbackProxy* UHasProfileBackupCallbackProxy::STATIC_HasProfileBackup(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.HasProfileBackupCallbackProxy.HasProfileBackup");

	UHasProfileBackupCallbackProxy_HasProfileBackup_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UHasProfileBackupCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.RestoreProfileBackupCallbackProxy.RestoreProfileBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URestoreProfileBackupCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URestoreProfileBackupCallbackProxy* URestoreProfileBackupCallbackProxy::STATIC_RestoreProfileBackup(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.RestoreProfileBackupCallbackProxy.RestoreProfileBackup");

	URestoreProfileBackupCallbackProxy_RestoreProfileBackup_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URestoreProfileBackupCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.HasSlotBackupCallbackProxy.HasSlotBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHasSlotBackupCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHasSlotBackupCallbackProxy* UHasSlotBackupCallbackProxy::STATIC_HasSlotBackup(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.HasSlotBackupCallbackProxy.HasSlotBackup");

	UHasSlotBackupCallbackProxy_HasSlotBackup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UHasSlotBackupCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.RestoreSlotBackupCallbackProxy.RestoreSlotBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URestoreSlotBackupCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URestoreSlotBackupCallbackProxy* URestoreSlotBackupCallbackProxy::STATIC_RestoreSlotBackup(class UObject* WorldContextObject, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.RestoreSlotBackupCallbackProxy.RestoreSlotBackup");

	URestoreSlotBackupCallbackProxy_RestoreSlotBackup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URestoreSlotBackupCallbackProxy>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPersistentReference    Reference                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPersistenceBlueprintFunctionLibrary::STATIC_SetReference(struct FPersistentReference* Reference, class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetReference");

	UPersistenceBlueprintFunctionLibrary_SetReference_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;

}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetDisableCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DisableCommit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPersistenceBlueprintFunctionLibrary::STATIC_SetDisableCommit(class UObject* WorldContextObject, bool DisableCommit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetDisableCommit");

	UPersistenceBlueprintFunctionLibrary_SetDisableCommit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DisableCommit = DisableCommit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPersistentReference    Reference                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UPersistenceBlueprintFunctionLibrary::STATIC_GetReference(class UObject* WorldContextObject, struct FPersistentReference* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetReference");

	UPersistenceBlueprintFunctionLibrary_GetReference_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetProfileSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGameProfile*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USaveGameProfile* UPersistenceBlueprintFunctionLibrary::STATIC_GetProfileSave(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetProfileSave");

	UPersistenceBlueprintFunctionLibrary_GetProfileSave_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetPersistenceManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPersistenceManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPersistenceManager* UPersistenceBlueprintFunctionLibrary::STATIC_GetPersistenceManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetPersistenceManager");

	UPersistenceBlueprintFunctionLibrary_GetPersistenceManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetCurrentSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGameWorld*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USaveGameWorld* UPersistenceBlueprintFunctionLibrary::STATIC_GetCurrentSave(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetCurrentSave");

	UPersistenceBlueprintFunctionLibrary_GetCurrentSave_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CopyReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPersistentReference    from                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPersistentReference    to                             (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPersistenceBlueprintFunctionLibrary::STATIC_CopyReference(const struct FPersistentReference& from, struct FPersistentReference* to)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CopyReference");

	UPersistenceBlueprintFunctionLibrary_CopyReference_Params params;
	params.from = from;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (to != nullptr)
		*to = params.to;

}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CommitSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPersistenceBlueprintFunctionLibrary::STATIC_CommitSave(class UObject* WorldContextObject, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CommitSave");

	UPersistenceBlueprintFunctionLibrary_CommitSave_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.ClearReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPersistentReference    Reference                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPersistenceBlueprintFunctionLibrary::STATIC_ClearReference(struct FPersistentReference* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.ClearReference");

	UPersistenceBlueprintFunctionLibrary_ClearReference_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPersistenceBlueprintFunctionLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
