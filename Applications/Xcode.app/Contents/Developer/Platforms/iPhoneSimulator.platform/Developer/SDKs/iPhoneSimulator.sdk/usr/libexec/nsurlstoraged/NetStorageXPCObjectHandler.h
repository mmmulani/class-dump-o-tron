//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkStorageXPCProtocol.h"

@class NSMutableString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NetStorageXPCObjectHandler : NSObject <NetworkStorageXPCProtocol>
{
    NSMutableString *_identifierRead;
    NSMutableString *_identifierWrite;
    NSMutableString *_identifierShrink;
    NSXPCConnection *_xpcConnection;
}

@property __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)setMinSizeForVMCachedResource:(long long)arg1 withIdentifier:(id)arg2;
- (void)currentDiskUsageWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMaxSize:(long long)arg1 withIdentifier:(id)arg2;
- (void)copyAllPartitionNamesWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)copyAllHostNamesForOptionalPartition:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 identifier:(id)arg3;
- (void)deleteResponsesSinceDate:(id)arg1 withIdentifier:(id)arg2;
- (void)deleteAllResponsesWithIdentifier:(id)arg1;
- (void)deleteResponseForRequestWithKey:(id)arg1 withIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addCachedResponseWithDictionary:(id)arg1 identifier:(id)arg2 key:(id)arg3;
- (void)addCachedResponse:(id)arg1 identifier:(id)arg2 key:(id)arg3;
- (void)cachedResponseForKey:(id)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)storageTaskManagerExistsWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4;
- (void)cleanupTaskManagers;
- (void)dealloc;
- (id)init;

@end
