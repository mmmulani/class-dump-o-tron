//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCCompilerSpecification.h>

@class NSString<DVTMacroExpansion>;

@interface PBXCompilerSpecificationOpenCL : XCCompilerSpecification
{
    NSString<DVTMacroExpansion> *_executionDescriptionForCreateBitcode;
    NSString<DVTMacroExpansion> *_executionDescriptionForCompile;
    NSString<DVTMacroExpansion> *_progressDescriptionForCreateBitcode;
    NSString<DVTMacroExpansion> *_progressDescriptionForCompile;
}

- (void).cxx_destruct;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 outputDirectory:(id)arg3 withMacroExpansionScope:(id)arg4;
- (id)progressDescriptionForCompile;
- (id)progressDescriptionForCreateBitcode;
- (id)progressDescription;
- (id)executionDescriptionForCompile;
- (id)executionDescriptionForCreateBitcode;
- (id)executionDescription;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end
