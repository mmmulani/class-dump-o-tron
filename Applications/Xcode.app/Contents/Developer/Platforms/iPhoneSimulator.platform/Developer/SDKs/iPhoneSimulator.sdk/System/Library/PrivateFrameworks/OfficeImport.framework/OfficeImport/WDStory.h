//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject
{
    OADDrawable *mHead;
    _Bool mOle;
}

- (_Bool)isOle;
- (void)setOle:(_Bool)arg1;
- (id)text;
- (id)head;
- (void)dealloc;
- (id)initWithHead:(id)arg1;

@end
