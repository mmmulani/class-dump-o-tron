//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CloudArtworkOperationQueue, ML3MusicLibrary, MSVWatchdog, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface CloudArtworkImporter : NSObject
{
    ML3MusicLibrary *_musicLibrary;
    long long _sourceType;
    NSURLSession *_artworkDownloadSession;
    NSObject<OS_dispatch_queue> *_artworkDownloadAccessQueue;
    CloudArtworkOperationQueue *_artworkDownloadOperationQueue;
    NSMutableDictionary *_artworkDownloadOperationMap;
    NSString *_powerAssertionIdentifier;
    MSVWatchdog *_artworkDownloadWatchdog;
}

@property(retain, nonatomic) MSVWatchdog *artworkDownloadWatchdog; // @synthesize artworkDownloadWatchdog=_artworkDownloadWatchdog;
@property(copy, nonatomic) NSString *powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property(retain, nonatomic) NSMutableDictionary *artworkDownloadOperationMap; // @synthesize artworkDownloadOperationMap=_artworkDownloadOperationMap;
@property(retain, nonatomic) CloudArtworkOperationQueue *artworkDownloadOperationQueue; // @synthesize artworkDownloadOperationQueue=_artworkDownloadOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkDownloadAccessQueue; // @synthesize artworkDownloadAccessQueue=_artworkDownloadAccessQueue;
@property(retain, nonatomic) NSURLSession *artworkDownloadSession; // @synthesize artworkDownloadSession=_artworkDownloadSession;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void).cxx_destruct;
- (void)_cellularDataRestrictionDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)importCloudArtworkForRequests:(id)arg1;
- (void)importScreenshotForCloudID:(unsigned long long)arg1 token:(id)arg2 mediaType:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importItemArtworkForCloudID:(unsigned long long)arg1 token:(id)arg2 mediaType:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelAllImports;
- (void)dealloc;
- (id)initWithMusicLibrary:(id)arg1 sourceType:(long long)arg2;

@end
