//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDWRMLinkPrefInit : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _countCellular;
    unsigned int _countWifi;
    struct {
        unsigned int timestamp:1;
        unsigned int countCellular:1;
        unsigned int countWifi:1;
    } _has;
}

@property(nonatomic) unsigned int countCellular; // @synthesize countCellular=_countCellular;
@property(nonatomic) unsigned int countWifi; // @synthesize countWifi=_countWifi;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCountCellular;
@property(nonatomic) _Bool hasCountWifi;
@property(nonatomic) _Bool hasTimestamp;

@end
