//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRCGestureFinger : NSObject
{
    unsigned long long _identifier;
    struct CGPoint _location;
}

- (struct CGPoint)location;
- (unsigned long long)identifier;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2;

@end
