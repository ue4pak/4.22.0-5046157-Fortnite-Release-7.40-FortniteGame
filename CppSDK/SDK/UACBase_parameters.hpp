#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UACBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function UACBase.UACNetworkComponent.SendClientHello
// 0x0004 (0x0004 - 0x0000)
struct UACNetworkComponent_SendClientHello final
{
public:
	uint32                                        SessionKey;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UACNetworkComponent_SendClientHello) == 0x000004, "Wrong alignment on UACNetworkComponent_SendClientHello");
static_assert(sizeof(UACNetworkComponent_SendClientHello) == 0x000004, "Wrong size on UACNetworkComponent_SendClientHello");
static_assert(offsetof(UACNetworkComponent_SendClientHello, SessionKey) == 0x000000, "Member 'UACNetworkComponent_SendClientHello::SessionKey' has a wrong offset!");

// Function UACBase.UACNetworkComponent.SendPacketToClient
// 0x0018 (0x0018 - 0x0000)
struct UACNetworkComponent_SendPacketToClient final
{
public:
	uint8                                         Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 Packet;                                            // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(UACNetworkComponent_SendPacketToClient) == 0x000008, "Wrong alignment on UACNetworkComponent_SendPacketToClient");
static_assert(sizeof(UACNetworkComponent_SendPacketToClient) == 0x000018, "Wrong size on UACNetworkComponent_SendPacketToClient");
static_assert(offsetof(UACNetworkComponent_SendPacketToClient, Type) == 0x000000, "Member 'UACNetworkComponent_SendPacketToClient::Type' has a wrong offset!");
static_assert(offsetof(UACNetworkComponent_SendPacketToClient, Packet) == 0x000008, "Member 'UACNetworkComponent_SendPacketToClient::Packet' has a wrong offset!");

// Function UACBase.UACNetworkComponent.SendPacketToServer
// 0x0018 (0x0018 - 0x0000)
struct UACNetworkComponent_SendPacketToServer final
{
public:
	uint8                                         Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 Packet;                                            // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(UACNetworkComponent_SendPacketToServer) == 0x000008, "Wrong alignment on UACNetworkComponent_SendPacketToServer");
static_assert(sizeof(UACNetworkComponent_SendPacketToServer) == 0x000018, "Wrong size on UACNetworkComponent_SendPacketToServer");
static_assert(offsetof(UACNetworkComponent_SendPacketToServer, Type) == 0x000000, "Member 'UACNetworkComponent_SendPacketToServer::Type' has a wrong offset!");
static_assert(offsetof(UACNetworkComponent_SendPacketToServer, Packet) == 0x000008, "Member 'UACNetworkComponent_SendPacketToServer::Packet' has a wrong offset!");

}

