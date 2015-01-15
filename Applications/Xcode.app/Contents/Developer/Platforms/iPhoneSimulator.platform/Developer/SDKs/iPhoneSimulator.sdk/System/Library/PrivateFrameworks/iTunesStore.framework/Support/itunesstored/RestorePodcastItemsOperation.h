//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSArray, NSMutableArray;

@interface RestorePodcastItemsOperation : ISOperation
{
    NSArray *_downloadItems;
    NSMutableArray *_responses;
}

- (id)_newURLOperationForItem:(id)arg1 error:(id *)arg2;
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;
- (id)_addResponseForItem:(id)arg1 operation:(id)arg2;
- (void)_addResponse:(id)arg1;
- (void)run;
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
- (void)dealloc;
- (id)initWithDownloadItems:(id)arg1;

// Remaining properties
@property id <RestorePodcastItemsOperationDelegate> delegate; // @dynamic delegate;

@end
