//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKPropertyComparisonFilter : _HKFilter
{
    NSString *_lhPropertyName;
    NSString *_rhPropertyName;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) NSString *rhPropertyName; // @synthesize rhPropertyName=_rhPropertyName;
@property(readonly, nonatomic) NSString *lhPropertyName; // @synthesize lhPropertyName=_lhPropertyName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3;

@end
