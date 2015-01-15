//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderContext.h"

#import "ReaderEventsListener.h"
#import "ReaderFontControlDelegate.h"
#import "WKNavigationDelegate.h"

@class NSMutableDictionary, NSString, TabDocumentWK2, _WKRemoteObjectInterface;

@interface ReaderContextWK2 : ReaderContext <ReaderEventsListener, WKNavigationDelegate, ReaderFontControlDelegate>
{
    _Bool _readerAvailable;
    TabDocumentWK2 *_tabDocument;
    id <ReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    CDUnknownBlockType _readerMailContentComptionHandler;
}

- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didSetReaderTextZoomIndex:(unsigned long long)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (void)setReaderShouldUseNarrowLayout:(_Bool)arg1;
- (void)collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)collectReadingListInfoWithBookmarkID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (id)readerURL;
- (void)loadNewArticle;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 textZoomIndex:(unsigned long long)arg2 scrollOffsetDictionary:(id)arg3 useNarrowLayout:(_Bool)arg4;
- (void)didCreateReaderWebView:(id)arg1;
- (void)clearUnusedReaderResourcesSoon;
- (void)clearAvailability;
- (void)createArticleFinder;
- (id)scrollPositionInformation;
- (void)deactivateReaderNow:(int)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (_Bool)hasMultiplePages;
- (id)mailingAndPrintingFrame;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
- (id)webView;
- (id)readerControllerProxy;
- (void)_setUpReaderActivityListener;
- (void)dealloc;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
