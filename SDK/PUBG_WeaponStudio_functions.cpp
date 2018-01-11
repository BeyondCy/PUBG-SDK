// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponStudio_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponStudio.WeaponStudio_C.OnLoad_Test
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::OnLoad_Test()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58885);

	AWeaponStudio_C_OnLoad_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.OnAttachmentLoad
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::OnAttachmentLoad()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58884);

	AWeaponStudio_C_OnAttachmentLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.UpdateAttachment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::UpdateAttachment()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58864);

	AWeaponStudio_C_UpdateAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponStudio_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58862);

	AWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponStudio_C::SetItem(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58860);

	AWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponStudio_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58859);

	AWeaponStudio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponStudio_C::ExecuteUbergraph_WeaponStudio(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(58840);

	AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
