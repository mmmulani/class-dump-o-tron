//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSession.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>
{
}

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_sessionLogDomain;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
