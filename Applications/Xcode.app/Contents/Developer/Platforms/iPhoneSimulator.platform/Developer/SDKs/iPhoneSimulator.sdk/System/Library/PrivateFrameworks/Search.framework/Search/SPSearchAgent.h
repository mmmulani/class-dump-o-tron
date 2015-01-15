//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"
#import "SPDaemonQueryDelegate.h"

@class NSArray, NSMutableArray, NSObject<SPSearchAgentDelegate>, NSString, SPDaemonQueryToken, SPSearchResultSection;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver>
{
    SPDaemonQueryToken *_currentToken;
    NSString *_prefixWithNoResults;
    NSMutableArray *_sections;
    NSArray *_searchDomains;
    unsigned int _resultCount;
    int _options;
    SPSearchResultSection *_topHitResultSection;
    SPSearchResultSection *_searchThroughSection;
    _Bool _searchThroughAllowed;
    _Bool _observersAdded;
    _Bool _queryComplete;
    NSObject<SPSearchAgentDelegate> *_delegate;
}

@property(nonatomic) NSObject<SPSearchAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) _Bool queryComplete; // @synthesize queryComplete=_queryComplete;
@property(readonly, nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(nonatomic) int options; // @synthesize options=_options;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(int)arg1;
- (void)internetDomainsChanged;
- (void)stuffChanged;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)searchDaemonQueryReset:(id)arg1;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (_Bool)cleanupObsoleteResults;
- (_Bool)setQueryString:(id)arg1;
- (_Bool)_shouldIgnoreQuery:(id)arg1;
- (id)queryString;
- (void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasResults;
- (void)updateSearchThroughWithString:(id)arg1;
- (void)removeSectionAtIndex:(unsigned int)arg1;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned long long)sectionCount;
- (void)clear;
- (void)invalidate;
- (void)addDeserializer:(id)arg1;
- (void)addSections:(id)arg1;
- (id)_indexesOfCompatibleSection:(id)arg1;
- (void)handleOptionsForNewSections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
