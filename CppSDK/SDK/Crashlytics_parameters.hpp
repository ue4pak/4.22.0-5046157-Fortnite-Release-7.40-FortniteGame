#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crashlytics

#include "Basic.hpp"


namespace SDK::Params
{

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
// 0x0010 (0x0010 - 0x0000)
struct CrashlyticsBlueprintLibrary_LogException final
{
public:
	class FString                                 MESSAGE;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_LogException) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_LogException");
static_assert(sizeof(CrashlyticsBlueprintLibrary_LogException) == 0x000010, "Wrong size on CrashlyticsBlueprintLibrary_LogException");
static_assert(offsetof(CrashlyticsBlueprintLibrary_LogException, MESSAGE) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_LogException::MESSAGE' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
// 0x0010 (0x0010 - 0x0000)
struct CrashlyticsBlueprintLibrary_LogMessage final
{
public:
	class FString                                 MESSAGE;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_LogMessage) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_LogMessage");
static_assert(sizeof(CrashlyticsBlueprintLibrary_LogMessage) == 0x000010, "Wrong size on CrashlyticsBlueprintLibrary_LogMessage");
static_assert(offsetof(CrashlyticsBlueprintLibrary_LogMessage, MESSAGE) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_LogMessage::MESSAGE' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
// 0x0018 (0x0018 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetBooleanKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Value;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetBooleanKey) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetBooleanKey");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetBooleanKey) == 0x000018, "Wrong size on CrashlyticsBlueprintLibrary_SetBooleanKey");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetBooleanKey, Key) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetBooleanKey::Key' has a wrong offset!");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetBooleanKey, Value) == 0x000010, "Member 'CrashlyticsBlueprintLibrary_SetBooleanKey::Value' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
// 0x0018 (0x0018 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetFloatKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetFloatKey) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetFloatKey");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetFloatKey) == 0x000018, "Wrong size on CrashlyticsBlueprintLibrary_SetFloatKey");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetFloatKey, Key) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetFloatKey::Key' has a wrong offset!");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetFloatKey, Value) == 0x000010, "Member 'CrashlyticsBlueprintLibrary_SetFloatKey::Value' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
// 0x0018 (0x0018 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetIntegerKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetIntegerKey) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetIntegerKey");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetIntegerKey) == 0x000018, "Wrong size on CrashlyticsBlueprintLibrary_SetIntegerKey");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetIntegerKey, Key) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetIntegerKey::Key' has a wrong offset!");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetIntegerKey, Value) == 0x000010, "Member 'CrashlyticsBlueprintLibrary_SetIntegerKey::Value' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
// 0x0020 (0x0020 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetStringKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetStringKey) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetStringKey");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetStringKey) == 0x000020, "Wrong size on CrashlyticsBlueprintLibrary_SetStringKey");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetStringKey, Key) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetStringKey::Key' has a wrong offset!");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetStringKey, Value) == 0x000010, "Member 'CrashlyticsBlueprintLibrary_SetStringKey::Value' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
// 0x0010 (0x0010 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetUserEmail final
{
public:
	class FString                                 Email;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetUserEmail) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetUserEmail");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetUserEmail) == 0x000010, "Wrong size on CrashlyticsBlueprintLibrary_SetUserEmail");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetUserEmail, Email) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetUserEmail::Email' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
// 0x0010 (0x0010 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetUserIdentifier final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetUserIdentifier) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetUserIdentifier");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetUserIdentifier) == 0x000010, "Wrong size on CrashlyticsBlueprintLibrary_SetUserIdentifier");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetUserIdentifier, ID) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetUserIdentifier::ID' has a wrong offset!");

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
// 0x0010 (0x0010 - 0x0000)
struct CrashlyticsBlueprintLibrary_SetUserName final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CrashlyticsBlueprintLibrary_SetUserName) == 0x000008, "Wrong alignment on CrashlyticsBlueprintLibrary_SetUserName");
static_assert(sizeof(CrashlyticsBlueprintLibrary_SetUserName) == 0x000010, "Wrong size on CrashlyticsBlueprintLibrary_SetUserName");
static_assert(offsetof(CrashlyticsBlueprintLibrary_SetUserName, Name_0) == 0x000000, "Member 'CrashlyticsBlueprintLibrary_SetUserName::Name_0' has a wrong offset!");

}

