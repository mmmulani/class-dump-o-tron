//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPlistNode, DVTPlistSelection, NSArray;

@protocol DVTPlistViewControllerProtocol <NSObject>
- (void)revealNode:(DVTPlistNode *)arg1;
- (void)propertyListChanged:(DVTPlistNode *)arg1;

@optional
- (void)selectDocumentLocations:(NSArray *)arg1;
- (void)setSelection:(DVTPlistSelection *)arg1 edit:(BOOL)arg2;
- (DVTPlistSelection *)currentSelection;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
@end

