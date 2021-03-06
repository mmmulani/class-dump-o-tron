//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTPerfMonEvent, NSArray, NSNumber, NSString;

@interface XRPMEvent : NSObject
{
    DTPerfMonEvent *_dtPerfMonEvent;
    NSNumber *_threshold;
    NSArray *_counterNameArray;
}

@property(retain, nonatomic) NSArray *counterNameArray; // @synthesize counterNameArray=_counterNameArray;
@property(retain, nonatomic) NSNumber *threshold; // @synthesize threshold=_threshold;
- (void).cxx_destruct;
- (long long)compare:(id)arg1 usingSortDescriptors:(id)arg2;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *aliasOrMnemonic;
@property(readonly, retain, nonatomic) NSString *alias;
@property(readonly, retain, nonatomic) NSString *mnemonic;
@property(readonly, retain, nonatomic) NSString *explanation;
- (id)initWithMnemonic:(id)arg1 alias:(id)arg2;
- (id)initWithDTEvent:(id)arg1;

@end

