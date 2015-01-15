//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<DVTMacroExpansion>, NSString, NSString<DVTMacroExpansion>, PBXObjectID;

@interface XCTargetHeadermapCreationInfo : NSObject
{
    NSString *_requestedConfigName;
    NSString *_effectiveConfigName;
    BOOL _ignoresProductType;
    BOOL _includesNonPublicNonPrivateHeaders;
    PBXObjectID *_targetGlobalID;
    NSString *_targetName;
    NSString<DVTMacroExpansion> *_productName;
    NSArray<DVTMacroExpansion> *_headerPaths;
}

- (void).cxx_destruct;
- (id)description;
- (id)headerPaths;
- (id)productName;
- (id)targetGlobalID;
- (BOOL)includesNonPublicNonPrivateHeaders;
- (BOOL)ignoresProductType;
- (id)effectiveConfigurationName;
- (id)requestedConfigurationName;
- (id)initForTarget:(id)arg1 configurationName:(id)arg2 ignoreProductType:(BOOL)arg3 includeNonPublicNonPrivateHeaders:(BOOL)arg4;

@end
