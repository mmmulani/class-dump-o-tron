//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADJavaScriptObject.h"

#import "ADShareSheetJSO_Bindings.h"

@class NSDictionary;

@interface ADShareSheetJSO : ADJavaScriptObject <ADShareSheetJSO_Bindings>
{
    NSDictionary *_activityMappingsDictionary;
}

+ (void)initializeInContext:(id)arg1;
@property(retain, nonatomic) NSDictionary *activityMappingsDictionary; // @synthesize activityMappingsDictionary=_activityMappingsDictionary;
- (void)presentShareSheet:(id)arg1 completionJSFunction:(id)arg2;
- (void)_enqueueDownloadForImageURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentViewControllerWithItems:(id)arg1 excludedActivityTypes:(id)arg2 frame:(struct CGRect)arg3 callbackJSO:(id)arg4;
- (id)_activityTypeForShareType:(id)arg1;
- (id)_shareTypeForActivityType:(id)arg1;
- (void)_cancelInflightDownloads;
- (void)adWillDismiss;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

@end

