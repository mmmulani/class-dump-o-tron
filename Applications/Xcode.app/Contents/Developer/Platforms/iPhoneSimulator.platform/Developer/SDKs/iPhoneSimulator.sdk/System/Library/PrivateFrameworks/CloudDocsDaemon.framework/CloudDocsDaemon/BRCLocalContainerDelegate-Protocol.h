//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCLocalContainer;

@protocol BRCLocalContainerDelegate <NSObject>
- (void)containerDidBecomeBackground:(BRCLocalContainer *)arg1;
- (void)containerDidBecomeForeground:(BRCLocalContainer *)arg1;
- (void)didInitialSyncDownForContainer:(BRCLocalContainer *)arg1;
- (void)willInitialSyncDownForContainer:(BRCLocalContainer *)arg1;
- (void)endWriteCoordinationInContainer:(BRCLocalContainer *)arg1;
- (_Bool)startWriteCoordinationInContainer:(BRCLocalContainer *)arg1;
- (void)endReadCoordinationInContainer:(BRCLocalContainer *)arg1;
- (_Bool)startReadCoordinationInContainer:(BRCLocalContainer *)arg1;
- (void)didMarkItemNeedsUploadInContainer:(BRCLocalContainer *)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didMarkItemNeedsDownloadInContainer:(BRCLocalContainer *)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didChangeApplyChangesStatusForContainer:(BRCLocalContainer *)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(BRCLocalContainer *)arg1;
- (void)didChangeSyncStatusForContainer:(BRCLocalContainer *)arg1;
- (void)didChangeReaderStatusForContainer:(BRCLocalContainer *)arg1;
- (void)didChangeLostScanStatusForContainer:(BRCLocalContainer *)arg1;
@end

