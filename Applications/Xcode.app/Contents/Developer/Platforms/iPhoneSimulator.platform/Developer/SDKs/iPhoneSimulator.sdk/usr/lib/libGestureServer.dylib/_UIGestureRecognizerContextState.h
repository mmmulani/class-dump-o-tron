//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIGestureRecognizerContextState : NSObject
{
    unsigned int _contextId;
    unsigned int _ancestorContextId;
    double _initialTouchTimestamp;
    double _lastTouchTimestamp;
    double _lastAncestorTouchTimestamp;
    long long _gestureRecognizerState;
    long long _ancestorGestureRecognizerState;
    _Bool _didReset;
    _Bool _ancestorDidReset;
}

@end

