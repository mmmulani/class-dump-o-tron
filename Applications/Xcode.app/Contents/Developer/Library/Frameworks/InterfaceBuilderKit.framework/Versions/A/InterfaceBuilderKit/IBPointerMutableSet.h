//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

@interface IBPointerMutableSet : NSMutableSet
{
    struct __CFSet *store;
}

- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
