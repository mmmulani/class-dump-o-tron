//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IDSEncryptionController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_contextMap;
}

+ (id)sharedInstance;
- (void)noteRemoteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6;
- (void)noteRemoteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6;
- (void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6;
- (void)noteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)decryptMessageData:(id)arg1 fromToken:(id)arg2 type:(long long)arg3 error:(long long *)arg4;
- (id)encryptMessageData:(id)arg1 toToken:(id)arg2 type:(long long *)arg3 error:(long long *)arg4;
- (void)decryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 fromURI:(id)arg4 token:(id)arg5 service:(id)arg6 type:(long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)encryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 toURI:(id)arg4 toToken:(id)arg5 service:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)checkThread;
- (void)dealloc;
- (id)init;

@end

