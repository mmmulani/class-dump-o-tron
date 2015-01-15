//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChromeViewController, GroupAnimation, MKAnnotationView, NSDictionary;

@protocol ChromeModeController <NSObject>
@property(nonatomic) ChromeViewController *chromeViewController;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id <ChromeModeController>)arg2;
- (void)becomeCurrentModeWithViews:(id <MapsChromeViews>)arg1 animated:(_Bool)arg2 state:(NSDictionary *)arg3 fromMode:(id <ChromeModeController>)arg4;

@optional
- (void)chromeDidBecomeSuppressed;
- (void)willProvideAnnotationView:(MKAnnotationView *)arg1 forAnnotation:(id <MKAnnotation>)arg2;
- (id)mapViewDelegate;
- (void)animateBarsToCurrentStateWithAnimation:(GroupAnimation *)arg1;
- (double)hiddenTopMargin;
- (_Bool)shouldSlideTopBar;
- (void)didUpdateHFPPreferenceForAudioSetting:(_Bool)arg1;
- (void)didPickRouteForAudioSetting;
- (void)didHideAudioSettings;
- (void)didShowAudioSettings;
- (_Bool)needsAudioControl;
- (void)didRemoveFromChromeViewController;
- (void)willRemoveFromChromeViewController;
- (void)layoutForUnobscuredBoundsChange;
- (void)modeDidDisappear:(_Bool)arg1;
- (void)modeWillDisappear:(_Bool)arg1;
- (void)modeDidAppear:(_Bool)arg1;
- (void)modeWillAppear:(_Bool)arg1;
- (void)willPopForSuppression;
- (_Bool)popsWhenSuppressed;
- (NSDictionary *)viewState;
@end
