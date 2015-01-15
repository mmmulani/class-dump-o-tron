//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _declineCode;
    int _errorCode;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    unsigned int _sendDuration;
    struct {
        unsigned int timestamp:1;
        unsigned int declineCode:1;
        unsigned int errorCode:1;
        unsigned int isVideo:1;
        unsigned int onLockScreen:1;
        unsigned int sendDuration:1;
    } _has;
}

@property(nonatomic) unsigned int onLockScreen; // @synthesize onLockScreen=_onLockScreen;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) unsigned int sendDuration; // @synthesize sendDuration=_sendDuration;
@property(nonatomic) unsigned int declineCode; // @synthesize declineCode=_declineCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOnLockScreen;
@property(nonatomic) _Bool hasIsVideo;
@property(nonatomic) _Bool hasSendDuration;
@property(nonatomic) _Bool hasDeclineCode;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end
