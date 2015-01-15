//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MessageAttachmentController : NSObject
{
    NSMutableDictionary *_peerCompletionBlocks;
}

+ (id)sharedInstance;
- (void)remotefileRequest:(id)arg1 attempts:(long long)arg2;
- (void)remoteFileResponse:(id)arg1;
- (void)retrieveLocalFileTransfer:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 requestedSize:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (_Bool)acceptFileTransfer:(id)arg1;
- (void)retrieveAttachmentsForMessage:(id)arg1 inlineAttachments:(id)arg2 displayID:(id)arg3 token:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)sendAttachmentsForMessage:(id)arg1 canSendInline:(_Bool)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 uploadFailureBlock:(CDUnknownBlockType)arg6;
- (void)_sizeLimitsForTransfer:(id)arg1 bigSize:(unsigned long long *)arg2 smallSize:(unsigned long long *)arg3;
- (_Bool)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2;
- (unsigned long long)_largeFileSizeFor:(id)arg1 allowedLargerRepresentation:(_Bool *)arg2;
- (unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
- (unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
- (void)maxTransferFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
@property(readonly, nonatomic) _Bool shouldSendLowResolutionOnly;
- (id)init;

@end
