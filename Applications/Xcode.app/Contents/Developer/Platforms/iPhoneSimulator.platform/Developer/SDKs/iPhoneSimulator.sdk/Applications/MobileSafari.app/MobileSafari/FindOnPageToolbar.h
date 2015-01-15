//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIInputView.h"

#import "UISearchBarDelegate.h"

@class NSArray, NSString, NSTimer, UIActivityIndicatorView, UIBarButtonItem, UILabel, UISearchBar, UIToolbar;

@interface FindOnPageToolbar : UIInputView <UISearchBarDelegate>
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    UILabel *_currentMatchLabel;
    UIBarButtonItem *_currentMatchBarButtonItem;
    UIBarButtonItem *_matchLabelLeftSpacer;
    UISearchBar *_inputBar;
    UIBarButtonItem *_inputFieldBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    id <FindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UIActivityIndicatorView *_indicatorView;
    NSArray *_keyCommands;
    _Bool _ownedByAddressView;
    _Bool _useActivityView;
}

+ (id)toolbarWithItems:(id)arg1;
+ (id)sharedToolbar;
@property(nonatomic) _Bool useActivityView; // @synthesize useActivityView=_useActivityView;
@property(nonatomic) _Bool ownedByAddressView; // @synthesize ownedByAddressView=_ownedByAddressView;
- (void).cxx_destruct;
- (void)_showPreviousResult;
- (void)_showNextResult;
- (id)keyCommands;
- (double)_widthForInputBarButton;
- (void)_showActivityIndicatorIfNeeded;
- (void)updateFindOnPageDelegate;
- (id)inputField;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_transitionToFindOnPageMode;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_doUpdateSearchText;
- (void)_done;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)didEndSplitTransition;
- (void)updateUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
