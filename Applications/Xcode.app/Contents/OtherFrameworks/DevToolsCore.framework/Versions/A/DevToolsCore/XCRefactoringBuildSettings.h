//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface XCRefactoringBuildSettings : NSObject
{
    NSDictionary *_buildSettings;
    int _status;
}

- (int)buildSettingsStatus;
- (id)buildSettings;
- (void)dealloc;
- (id)initWithBuildSettings:(id)arg1 status:(int)arg2;

@end
