//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MPUTransportControl : NSObject <NSCopying>
{
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _supportsLongPress;
    _Bool _acceptsTapsWhenDisabled;
    int _group;
    long long _type;
}

+ (long long)_transportControlTypeForCommand:(unsigned int)arg1;
+ (_Bool)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (_Bool)_transportControlAcceptsTapsWhenDisabledForType:(long long)arg1;
+ (int)_ordinalForTransportControlType:(long long)arg1;
+ (int)_groupForTransportControlType:(long long)arg1;
+ (id)transportControlWithType:(long long)arg1 group:(int)arg2;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 controlsCount:(unsigned long long)arg2;
@property(nonatomic) _Bool acceptsTapsWhenDisabled; // @synthesize acceptsTapsWhenDisabled=_acceptsTapsWhenDisabled;
@property(nonatomic) _Bool supportsLongPress; // @synthesize supportsLongPress=_supportsLongPress;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) int group; // @synthesize group=_group;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (long long)_compare:(id)arg1 ordering:(long long)arg2;
- (long long)_priority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 group:(int)arg2;

@end

