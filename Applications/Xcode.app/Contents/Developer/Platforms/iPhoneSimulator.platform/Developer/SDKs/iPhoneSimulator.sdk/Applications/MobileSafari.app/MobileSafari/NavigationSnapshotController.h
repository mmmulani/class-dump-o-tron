//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "_UINavigationInteractiveTransitionBaseDelegate.h"

@class NSDate, NSString, NSTimer, UIImageView, UIView, _UINavigationInteractiveTransitionBase;

@interface NavigationSnapshotController : NSObject <UIGestureRecognizerDelegate, _UINavigationInteractiveTransitionBaseDelegate>
{
    UIView *_webContentView;
    UIView *_parentView;
    UIImageView *_leftShadow;
    UIView *_dimmingView;
    UIView *_transitionContainerView;
    UIView *_presentedSnapshot;
    NSTimer *_snapshotExpirationTimer;
    NSTimer *_snapshotDelayDuringLoadTimer;
    NSDate *_startTimeOfDelayDuringLoadTimer;
    NSTimer *_samePageNavigationExpirationTimer;
    NSDate *_startTimeOfSamePageNavigation;
    _Bool _showWebContentAfterNavigationAnimation;
    _UINavigationInteractiveTransitionBase *_backTransitionController;
    _UINavigationInteractiveTransitionBase *_forwardTransitionController;
    _Bool _navigationGestureActive;
    _Bool _webContentHidden;
    id <NavigationSnapshotControllerDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isWebContentHidden) _Bool webContentHidden; // @synthesize webContentHidden=_webContentHidden;
@property(readonly, nonatomic, getter=isNavigationGestureActive) _Bool navigationGestureActive; // @synthesize navigationGestureActive=_navigationGestureActive;
@property(nonatomic) __weak id <NavigationSnapshotControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionDidComplete:(_Bool)arg1 toPosition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (id)_toViewForTransitionToPosition:(long long)arg1;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (_Bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)_invalidateAllSnapshotTimers;
- (void)_invalidateSnapshotExpirationTimer;
- (void)_snapshotExpirationTimerFired:(id)arg1;
- (void)_startSnapshotExpirationTimer;
- (void)_invalidateSnapshotDelayDuringLoadTimer;
- (void)snapshotDocumentDidFinishLoading;
- (void)_snapshotDelayDuringLoadTimerFired:(id)arg1;
- (void)_startSnapshotDelayDuringLoadTimer;
- (_Bool)_shouldStartSnapshotDelayDuringLoadTimer;
- (void)setSnapshot:(id)arg1 forTabDocument:(id)arg2;
- (double)_screenCenterX;
- (void)_showWebContentHidingPresentedSnapshotAnimated:(_Bool)arg1;
- (void)_invalidateSamePageNavigationExpirationTimer;
- (void)_samePageNavigationExpirationTimerFired:(id)arg1;
- (void)_startSamePageNavigationExpirationTimer;
- (void)showWebContentHiddenBySamePageNavigation;
- (void)showWebContentHiddenByNavigationWithDelayHeuristics;
- (void)showWebContentHiddenByNavigationAnimated:(_Bool)arg1;
- (id)_topViewBeforeGestureBegan;
- (id)_snapshotForPosition:(long long)arg1;
- (void)_removeNavigationSnapshot:(id)arg1;
- (long long)_historyPositionForTransitionController:(id)arg1;
- (void)dealloc;
- (id)initWithSnapshotParentView:(id)arg1 webContentView:(id)arg2 gestureRecognizerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
