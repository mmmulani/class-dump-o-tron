//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface XRTwoPartOp : NSOperation
{
    NSOperation *_partOneOp;
    NSOperation *_partTwoOp;
    BOOL _executing;
    BOOL _done;
    BOOL _deferredContinue;
}

- (void).cxx_destruct;
- (id)spaceForPartTwo;
- (id)spaceForPartOne;
- (void)partTwo;
- (void)partOne;
- (void)main;
- (void)continueToPartTwo;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)start;
- (id)init;

@end
