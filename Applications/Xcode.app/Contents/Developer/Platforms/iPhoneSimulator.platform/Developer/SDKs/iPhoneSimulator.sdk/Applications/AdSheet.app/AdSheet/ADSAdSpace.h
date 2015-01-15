//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ADSAdSpace_RPC.h"

@class ADSAdSpaceController, ADSCreativeContainerView, ADSSession, NSSet, NSString, NSURL;

@interface ADSAdSpace : UIViewController <ADSAdSpace_RPC>
{
    ADSSession *_session;
    _Bool _shouldNotCycle;
    _Bool _setupComplete;
    _Bool _hasSentVisibleWithoutContentError;
    _Bool _hasLoadedAdOrSentError;
    _Bool _closed;
    int _creativeType;
    id <ADAdSpace_RPC><NSObject> _clientAdSpace;
    double _creationTimestamp;
    double _lastVisibleTimestamp;
    ADSAdSpaceController *_adSpaceController;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_section;
    NSString *_authenticationUserName;
    NSSet *_context;
    long long _visibility;
    ADSCreativeContainerView *_creativeContainerView;
    long long _options;
    struct CGRect _frame;
}

+ (id)_exportedInterface;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) ADSCreativeContainerView *creativeContainerView; // @synthesize creativeContainerView=_creativeContainerView;
@property(nonatomic) _Bool hasLoadedAdOrSentError; // @synthesize hasLoadedAdOrSentError=_hasLoadedAdOrSentError;
@property(nonatomic) _Bool hasSentVisibleWithoutContentError; // @synthesize hasSentVisibleWithoutContentError=_hasSentVisibleWithoutContentError;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) ADSAdSpaceController *adSpaceController; // @synthesize adSpaceController=_adSpaceController;
@property(nonatomic) double lastVisibleTimestamp; // @synthesize lastVisibleTimestamp=_lastVisibleTimestamp;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(nonatomic) _Bool shouldNotCycle; // @synthesize shouldNotCycle=_shouldNotCycle;
@property(readonly, nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(retain, nonatomic) id <ADAdSpace_RPC><NSObject> clientAdSpace; // @synthesize clientAdSpace=_clientAdSpace;
- (void)didMoveToParentViewController:(id)arg1;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)viewDidLoad;
- (void)_priv_loadAd:(id)arg1;
- (void)_priv_adSpaceDidDisappear;
- (void)_priv_adSpaceDidAppear;
- (void)_remote_playbackFailedForURL:(id)arg1;
- (void)_remote_playbackFinishedForContentHash:(id)arg1;
- (void)_remote_playbackResumed;
- (void)_remote_playbackPaused;
- (void)_remote_playbackStartedForImpressionSource:(int)arg1;
- (void)_remote_reportPreRollDidStop;
- (void)_remote_reportPreRollDidStart;
- (void)_remote_interstitialCreativeWasDismissed;
- (void)_remote_interstitialRemovedFromSuperview;
- (void)_remote_bannerCancelAction;
- (void)_remote_bannerRefuseAction;
- (void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_remote_setShouldNotCycle:(_Bool)arg1;
- (void)_remote_setAdSpaceType:(int)arg1;
- (void)_remote_setVisibility:(long long)arg1;
- (void)_remote_setContext:(id)arg1;
- (void)_remote_setAuthenticationUserName:(id)arg1;
- (void)_remote_setSection:(id)arg1;
- (void)_priv_cycleImpressionImmediately;
- (void)_priv_setServerURL:(id)arg1;
- (void)_remote_setIdentifier:(id)arg1;
- (void)_remote_close;
- (void)_remote_setupComplete;
@property(readonly, nonatomic) _Bool shouldCycleAfterAction;
@property(readonly, nonatomic) _Bool policyEngineManagesLoading;
@property(readonly, nonatomic) _Bool excludedFromControllerPool;
@property(nonatomic) __weak ADSSession *session;
- (id)description;
- (void)close;
- (void)_remote_configureForClientAdSpace:(id)arg1 configuration:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end
