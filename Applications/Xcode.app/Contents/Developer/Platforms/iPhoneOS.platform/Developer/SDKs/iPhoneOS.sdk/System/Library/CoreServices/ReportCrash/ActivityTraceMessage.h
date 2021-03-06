//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ActivityTraceMessage : NSObject
{
    unsigned int _offset;
    unsigned long long _timeStamp;
    NSString *_imageUUIDString;
    NSString *_imagePath;
    NSString *_traceMessage;
}

@property(readonly, retain) NSString *traceMessage; // @synthesize traceMessage=_traceMessage;
@property unsigned int offset; // @synthesize offset=_offset;
@property(readonly, retain) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(readonly, retain) NSString *imageUUIDString; // @synthesize imageUUIDString=_imageUUIDString;
@property(readonly) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void)dealloc;
- (id)initWithTimeStamp:(unsigned long long)arg1 UUIDBytes:(const char *)arg2 imagePath:(const char *)arg3 offset:(unsigned int)arg4 traceMessage:(char *)arg5;

@end

