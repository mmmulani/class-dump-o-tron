//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class DVTMacroDefinitionTable, NSMutableArray, NSString, XCBuildRuleDGSnapshot;

@interface XCBuildFileRefArrayDGSnapshot : NSObject <NSFastEnumeration>
{
    NSString *_identifier;
    NSMutableArray *_fileRefs;
    BOOL _fileRefsAreFrozen;
    NSMutableArray *_addSettingsToTableBlocks;
    DVTMacroDefinitionTable *_buildSettings;
    XCBuildRuleDGSnapshot *_buildRule;
    NSString *_bucketName;
}

+ (id)buildFileRefArrayWithIdentifier:(id)arg1 buildFileRef:(id)arg2;
@property(copy) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property XCBuildRuleDGSnapshot *buildRule; // @synthesize buildRule=_buildRule;
@property(readonly) BOOL fileRefsAreFrozen; // @synthesize fileRefsAreFrozen=_fileRefsAreFrozen;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)firstReference;
- (id)allReferences;
- (void)printForDebugging;
- (id)description;
- (id)buildSettings;
- (void)addBuildSettingsToTableBlock:(CDUnknownBlockType)arg1;
- (void)removeBuildFileAtIndex:(unsigned long long)arg1;
- (void)insertBuildFileRef:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addBuildFileRef:(id)arg1;
- (id)fileAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)freezeFileRefs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 buildFileRef:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1 macroExpansionScope:(id)arg2;

@end

