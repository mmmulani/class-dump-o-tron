//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSUTunTimingEvent.h"

@class NSString;

@interface IDSUTunTimingEventIncoming : NSObject <IDSUTunTimingEvent>
{
    double _timestamp;
    double _duration;
    double _processTime;
    double _compressionTime;
    double _kernelTime;
    long long _bytes;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)appendToString:(id)arg1;
- (id)initWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 kernelTime:(double)arg5 bytes:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
