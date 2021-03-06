//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    int _applySkipCount;
    id <RadiosPreferencesDelegate> _delegate;
    _Bool _isCachedAirplaneModeValid;
    _Bool _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool notifyForExternalChangeOnly;
}

@property(nonatomic) _Bool notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;
@property(nonatomic) id <RadiosPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_e097db04 *)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)refresh;
@property(nonatomic) _Bool airplaneMode;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

