//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTMapAndTableRowItem.h"

@class NSString, RTPrivacyLOI;

@interface RTRoutesItem : NSObject <RTMapAndTableRowItem>
{
    RTPrivacyLOI *_privacyLOI;
}

@property(retain, nonatomic) RTPrivacyLOI *privacyLOI; // @synthesize privacyLOI=_privacyLOI;
- (void).cxx_destruct;
- (void)populateSubtitleStyleCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
