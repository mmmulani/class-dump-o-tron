//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalSearchDataSink.h"
#import "SPSearchDatastore.h"

@class CalSpotlightSearch, NSString, SPSearchQuery;

@interface CalSearchDatastore : NSObject <SPSearchDatastore, CalSearchDataSink>
{
    struct CalDatabase *_database;
    CalSpotlightSearch *_calSearch;
    id <SPSearchResultsPipe> _pipe;
    SPSearchQuery *_searchQuery;
    struct __CFDictionary *_queryCache;
}

- (void)dealloc;
- (id)resultForIdentifier:(id)arg1 domain:(unsigned int)arg2;
- (id)displayIdentifierForDomain:(unsigned int)arg1;
- (id)searchDomains;
- (void)calSearchComplete:(id)arg1;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;
- (id)_summaryStringForDate:(id)arg1 location:(id)arg2 isAllDay:(_Bool)arg3;
- (void)performQuery:(id)arg1 withResultsPipe:(id)arg2;
- (_Bool)calSearchShouldStopSearching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

