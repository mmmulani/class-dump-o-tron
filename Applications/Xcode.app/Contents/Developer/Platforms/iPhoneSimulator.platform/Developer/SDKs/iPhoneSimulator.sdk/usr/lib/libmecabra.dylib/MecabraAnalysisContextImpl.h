//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableString, NSString;

@interface MecabraAnalysisContextImpl : NSObject
{
    NSMutableArray *_candidateContext;
    NSString *_stringContext;
    NSString *_stringBeforeCaret;
    NSMutableString *_candidateContextString;
    _Bool _rebuildCandidateContextString;
}

@property(retain, nonatomic) NSString *stringBeforeCaret; // @synthesize stringBeforeCaret=_stringBeforeCaret;
@property(retain, nonatomic) NSString *stringContext; // @synthesize stringContext=_stringContext;
@property(nonatomic) _Bool rebuildCandidateContextString; // @synthesize rebuildCandidateContextString=_rebuildCandidateContextString;
@property(retain, nonatomic) NSMutableString *candidateContextString; // @synthesize candidateContextString=_candidateContextString;
@property(retain, nonatomic) NSMutableArray *candidateContext; // @synthesize candidateContext=_candidateContext;
- (void)reset;
@property(readonly, nonatomic) NSString *stringContextForAnalysis;
@property(readonly, nonatomic) NSArray *candidateContextForAnalysis;
- (void)revertLastCommittedCandidate;
- (void)addCandidate:(id)arg1;
- (void)adjustCandidateContext;
- (void)clearContextForAddition;
- (CDStruct_4bcfbbae)positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

