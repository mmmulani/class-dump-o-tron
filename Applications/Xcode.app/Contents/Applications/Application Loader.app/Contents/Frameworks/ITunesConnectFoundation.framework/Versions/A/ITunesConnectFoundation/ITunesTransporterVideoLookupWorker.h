//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/ITunesTransporterWorker.h>

@class NSCalendarDate, NSString;

@interface ITunesTransporterVideoLookupWorker : ITunesTransporterWorker
{
    BOOL _validVendorID;
    NSString *_assetTitle;
    NSCalendarDate *_releaseDate;
    NSString *_mediaType;
    NSCalendarDate *_airDate;
    NSString *_providerShortName;
    NSString *_vendorIdentifier;
}

- (id)releaseDate;
- (id)airDate;
- (id)mediaType;
- (id)assetTitle;
- (BOOL)isValidVendorID;
- (void)transporterCompleted;
- (id)parseAssetInformationFromString:(id)arg1;
- (id)vendorIdentifier;
- (id)providerShortName;
- (void)dealloc;
- (id)init;

@end
