//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesActivity, MZLookupMetadataSubItemInfo, NSArray, NSDictionary, NSString;

@interface MetadataLookupBean : NSObject
{
    NSString *_identifier;
    ITunesActivity *_activity;
    NSArray *_activityVersions;
    NSDictionary *_userInfoForWorker;
    MZLookupMetadataSubItemInfo *_subItemInfo;
    id _metadataLookupSubItemSubsetDelegate;
}

+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activityVersions:(id)arg2 userInfoForWorker:(id)arg3 metadataLookupSubItemSubsetDelegate:(id)arg4;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activityVersions:(id)arg2 userInfoForWorker:(id)arg3 subItemInfo:(id)arg4;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activityVersions:(id)arg2 userInfoForWorker:(id)arg3;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activityVersions:(id)arg2;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activity:(id)arg2 userInfoForWorker:(id)arg3 metadataLookupSubItemSubsetDelegate:(id)arg4;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activity:(id)arg2 userInfoForWorker:(id)arg3 subItemInfo:(id)arg4;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activity:(id)arg2 userInfoForWorker:(id)arg3;
+ (id)metadataLookupBeanWithIdentifier:(id)arg1 activity:(id)arg2;
@property(nonatomic) id metadataLookupSubItemSubsetDelegate; // @synthesize metadataLookupSubItemSubsetDelegate=_metadataLookupSubItemSubsetDelegate;
@property(retain, nonatomic) MZLookupMetadataSubItemInfo *subItemInfo; // @synthesize subItemInfo=_subItemInfo;
@property(retain, nonatomic) NSDictionary *userInfoForWorker; // @synthesize userInfoForWorker=_userInfoForWorker;
@property(retain, nonatomic) NSArray *activityVersions; // @synthesize activityVersions=_activityVersions;
@property(retain, nonatomic) ITunesActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 activity:(id)arg2 activityVersions:(id)arg3 userInfoForWorker:(id)arg4 subItemInfo:(id)arg5 metadataLookupSubItemSubsetDelegate:(id)arg6;

@end

