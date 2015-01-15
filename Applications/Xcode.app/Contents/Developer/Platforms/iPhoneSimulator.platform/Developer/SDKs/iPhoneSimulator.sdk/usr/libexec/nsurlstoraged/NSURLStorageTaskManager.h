//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class NSData, NSString, NSURLStorageURLCacheDB, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSURLStorageTaskManager : NSOperationQueue
{
    long long _sandboxExtensionHandle;
    int _clientPid;
    NSURLStorageURLCacheDB *_persistentDB;
    NSString *_identityForManager;
    NSXPCConnection *_xpcConnectionToRemoteEndpoint;
    NSData *_sandboxExtensionData;
}

@property int clientPid; // @synthesize clientPid=_clientPid;
@property(retain) NSData *sandboxExtensionData; // @synthesize sandboxExtensionData=_sandboxExtensionData;
@property(retain) NSXPCConnection *xpcConnectionToRemoteEndpoint; // @synthesize xpcConnectionToRemoteEndpoint=_xpcConnectionToRemoteEndpoint;
@property(retain) NSString *identityForManager; // @synthesize identityForManager=_identityForManager;
@property(retain) NSURLStorageURLCacheDB *persistentDB; // @synthesize persistentDB=_persistentDB;
- (void).cxx_destruct;
- (void)updateFileSystemUsageCounters;
- (void)dealloc;
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 clientPid:(int)arg4 withIdentity:(id)arg5;

@end
