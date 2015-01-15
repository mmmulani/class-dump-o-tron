//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRPhoneSearch, NSCache;

@interface _CRPhoneSearchCache : NSObject
{
    char *_lastSearchString;
    unsigned long long _lastSearchStringLength;
    NSCache *_cache;
    CRPhoneSearch *_lastPhoneSearch;
}

@property(retain, nonatomic) CRPhoneSearch *lastPhoneSearch; // @synthesize lastPhoneSearch=_lastPhoneSearch;
- (id)copySearcherForPattern:(const char *)arg1;
- (void)flush;
- (void)dealloc;

@end
