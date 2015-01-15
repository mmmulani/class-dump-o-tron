//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCSingleSignOnPayloadKerberosInfo, NSString;

@interface MCSingleSignOnPayload : MCPayload
{
    NSString *_humanReadableName;
    MCSingleSignOnPayloadKerberosInfo *_kerberosInfo;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) MCSingleSignOnPayloadKerberosInfo *kerberosInfo; // @synthesize kerberosInfo=_kerberosInfo;
@property(retain, nonatomic) NSString *humanReadableName; // @synthesize humanReadableName=_humanReadableName;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)title;
- (id)stubDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
