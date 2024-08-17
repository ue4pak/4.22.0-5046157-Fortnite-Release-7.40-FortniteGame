#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshNetwork

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "ReplicationGraph_classes.hpp"
#include "MeshNetwork_structs.hpp"


namespace SDK
{

// Class MeshNetwork.MeshBeaconClient
// 0x0038 (0x03E8 - 0x03B0)
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                         Pad_3B0[0x20];                                     // 0x03B0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bConnectedToRoot;                                  // 0x03D0(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3D1[0x17];                                     // 0x03D1(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ConnectedToRoot();
	void ServerUpdateLevelVisibility(class FName PackageName, bool bIsVisible);
	void ServerUpdateMultipleLevelsVisibility(const TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconClient">();
	}
	static class AMeshBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconClient>();
	}
};
static_assert(alignof(AMeshBeaconClient) == 0x000008, "Wrong alignment on AMeshBeaconClient");
static_assert(sizeof(AMeshBeaconClient) == 0x0003E8, "Wrong size on AMeshBeaconClient");
static_assert(offsetof(AMeshBeaconClient, bConnectedToRoot) == 0x0003D0, "Member 'AMeshBeaconClient::bConnectedToRoot' has a wrong offset!");

// Class MeshNetwork.MeshBeaconHost
// 0x0008 (0x0420 - 0x0418)
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                         MaxConnections;                                    // 0x0418(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconHost">();
	}
	static class AMeshBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconHost>();
	}
};
static_assert(alignof(AMeshBeaconHost) == 0x000008, "Wrong alignment on AMeshBeaconHost");
static_assert(sizeof(AMeshBeaconHost) == 0x000420, "Wrong size on AMeshBeaconHost");
static_assert(offsetof(AMeshBeaconHost, MaxConnections) == 0x000418, "Member 'AMeshBeaconHost::MaxConnections' has a wrong offset!");

// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0028 (0x0120 - 0x00F8)
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x18];                                      // 0x00F8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LastViewer;                                        // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 LastViewTarget;                                    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplicationGraphNode_AlwaysRelevant_ForConnection">();
	}
	static class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReplicationGraphNode_AlwaysRelevant_ForConnection>();
	}
};
static_assert(alignof(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000008, "Wrong alignment on UMeshReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(sizeof(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000120, "Wrong size on UMeshReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(offsetof(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewer) == 0x000110, "Member 'UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::LastViewer' has a wrong offset!");
static_assert(offsetof(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewTarget) == 0x000118, "Member 'UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::LastViewTarget' has a wrong offset!");

// Class MeshNetwork.MeshBeaconHostObject
// 0x0008 (0x0360 - 0x0358)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_358[0x8];                                      // 0x0358(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshBeaconHostObject">();
	}
	static class AMeshBeaconHostObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshBeaconHostObject>();
	}
};
static_assert(alignof(AMeshBeaconHostObject) == 0x000008, "Wrong alignment on AMeshBeaconHostObject");
static_assert(sizeof(AMeshBeaconHostObject) == 0x000360, "Wrong size on AMeshBeaconHostObject");

// Class MeshNetwork.MeshConnection
// 0x0000 (0x18E8 - 0x18E8)
class UMeshConnection final : public UIpConnection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshConnection">();
	}
	static class UMeshConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshConnection>();
	}
};
static_assert(alignof(UMeshConnection) == 0x000008, "Wrong alignment on UMeshConnection");
static_assert(sizeof(UMeshConnection) == 0x0018E8, "Wrong size on UMeshConnection");

// Class MeshNetwork.MeshNetDriver
// 0x0000 (0x0778 - 0x0778)
class UMeshNetDriver final : public UIpNetDriver
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetDriver">();
	}
	static class UMeshNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetDriver>();
	}
};
static_assert(alignof(UMeshNetDriver) == 0x000008, "Wrong alignment on UMeshNetDriver");
static_assert(sizeof(UMeshNetDriver) == 0x000778, "Wrong size on UMeshNetDriver");

// Class MeshNetwork.MeshNetworkComponent
// 0x00A8 (0x01A0 - 0x00F8)
class UMeshNetworkComponent final : public UActorComponent
{
public:
	EMeshNetworkRelevancy                         MeshRelevancy;                                     // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, double>                     AggregationTimeouts;                               // 0x0100(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAggregatedFunction> AggregatedFunctions;                               // 0x0150(0x0050)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

public:
	EMeshNetworkNodeType GetMeshNetworkNodeType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetworkComponent">();
	}
	static class UMeshNetworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetworkComponent>();
	}
};
static_assert(alignof(UMeshNetworkComponent) == 0x000008, "Wrong alignment on UMeshNetworkComponent");
static_assert(sizeof(UMeshNetworkComponent) == 0x0001A0, "Wrong size on UMeshNetworkComponent");
static_assert(offsetof(UMeshNetworkComponent, MeshRelevancy) == 0x0000F8, "Member 'UMeshNetworkComponent::MeshRelevancy' has a wrong offset!");
static_assert(offsetof(UMeshNetworkComponent, AggregationTimeouts) == 0x000100, "Member 'UMeshNetworkComponent::AggregationTimeouts' has a wrong offset!");
static_assert(offsetof(UMeshNetworkComponent, AggregatedFunctions) == 0x000150, "Member 'UMeshNetworkComponent::AggregatedFunctions' has a wrong offset!");

// Class MeshNetwork.MeshNetworkSubsystem
// 0x0070 (0x0098 - 0x0028)
class UMeshNetworkSubsystem final : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                   OnMeshNodeTypeChanged;                             // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnConnectedToRootChanged;                          // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnGameServerNodeTypeChanged;                       // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMeshMetaDataUpdated;                             // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x18];                                      // 0x0068(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	EMeshNetworkNodeType                          NodeType;                                          // 0x0080(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EMeshNetworkNodeType                          GameServerNodeType;                                // 0x0081(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bConnectedToRoot;                                  // 0x0082(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_83[0x15];                                      // 0x0083(0x0015)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(const struct FMeshMetaDataStruct& MetaData);

	bool GetConnectedToRoot() const;
	EMeshNetworkNodeType GetGameServerNodeType() const;
	EMeshNetworkNodeType GetMeshNetworkNodeType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshNetworkSubsystem">();
	}
	static class UMeshNetworkSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshNetworkSubsystem>();
	}
};
static_assert(alignof(UMeshNetworkSubsystem) == 0x000008, "Wrong alignment on UMeshNetworkSubsystem");
static_assert(sizeof(UMeshNetworkSubsystem) == 0x000098, "Wrong size on UMeshNetworkSubsystem");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshNodeTypeChanged) == 0x000028, "Member 'UMeshNetworkSubsystem::OnMeshNodeTypeChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnConnectedToRootChanged) == 0x000038, "Member 'UMeshNetworkSubsystem::OnConnectedToRootChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnGameServerNodeTypeChanged) == 0x000048, "Member 'UMeshNetworkSubsystem::OnGameServerNodeTypeChanged' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshMetaDataUpdated) == 0x000058, "Member 'UMeshNetworkSubsystem::OnMeshMetaDataUpdated' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, NodeType) == 0x000080, "Member 'UMeshNetworkSubsystem::NodeType' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, GameServerNodeType) == 0x000081, "Member 'UMeshNetworkSubsystem::GameServerNodeType' has a wrong offset!");
static_assert(offsetof(UMeshNetworkSubsystem, bConnectedToRoot) == 0x000082, "Member 'UMeshNetworkSubsystem::bConnectedToRoot' has a wrong offset!");

// Class MeshNetwork.MeshReplicationGraph
// 0x0010 (0x0470 - 0x0460)
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*        AlwaysRelevantNode;                                // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_468[0x8];                                      // 0x0468(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplicationGraph">();
	}
	static class UMeshReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReplicationGraph>();
	}
};
static_assert(alignof(UMeshReplicationGraph) == 0x000008, "Wrong alignment on UMeshReplicationGraph");
static_assert(sizeof(UMeshReplicationGraph) == 0x000470, "Wrong size on UMeshReplicationGraph");
static_assert(offsetof(UMeshReplicationGraph, AlwaysRelevantNode) == 0x000460, "Member 'UMeshReplicationGraph::AlwaysRelevantNode' has a wrong offset!");

}

