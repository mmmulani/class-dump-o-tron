//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRDispatchObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface XRDispatchSource : XRDispatchObject <NSCoding>
{
    NSString *_pointer;
    NSString *_handler;
    NSString *_cancelHandler;
    NSString *_identifier;
    BOOL _isCancelled;
    NSMutableDictionary *_pendingItems;
    int _serial;
}

@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property int serial; // @synthesize serial=_serial;
@property(retain) NSString *cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain) NSString *handler; // @synthesize handler=_handler;
@property(readonly) NSString *pointer; // @synthesize pointer=_pointer;
- (BOOL)itemMatch:(id)arg1;
- (id)identifier;
- (id)invokeCompleteOnQueue:(id)arg1 forThread:(id)arg2 duration:(unsigned long long)arg3 cpuUsage:(float)arg4 timestamp:(unsigned long long)arg5;
- (BOOL)invokeBeginOnQueue:(id)arg1 withItem:(id)arg2 forThread:(id)arg3 timestamp:(unsigned long long)arg4;
- (BOOL)pushOnQueue:(id)arg1 stackTrace:(id)arg2 timestamp:(unsigned long long)arg3 iterations:(unsigned long long)arg4 sync:(BOOL)arg5 pending:(BOOL)arg6;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPointer:(id)arg1 queueIdentifier:(id)arg2;

@end

