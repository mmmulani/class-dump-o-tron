//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding>
{
    _Bool _beta;
    NSMutableDictionary *_etags;
    _Bool _placeholder;
    _Bool _profileValidated;
    NSMutableDictionary *_propertyValues;
}

@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_initWithITunesMetadata:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)setETag:(id)arg1 forAssetType:(id)arg2 error:(id *)arg3;
- (id)ETagForAssetType:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
