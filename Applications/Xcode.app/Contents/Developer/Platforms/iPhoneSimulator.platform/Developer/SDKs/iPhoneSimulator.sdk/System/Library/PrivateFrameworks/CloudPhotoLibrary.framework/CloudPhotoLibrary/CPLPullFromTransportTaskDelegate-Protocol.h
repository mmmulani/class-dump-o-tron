//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineSyncTaskDelegate.h"

@class CPLPullFromTransportTask, NSData;

@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportDownloadBatchTask>)task:(CPLPullFromTransportTask *)arg1 wantsToDownloadBatchesFromSyncAnchor:(NSData *)arg2 completionHandler:(void (^)(CPLChangeBatch *, NSData *, _Bool, NSError *))arg3;
@end

