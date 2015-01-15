//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MainChromeTopBarContent.h"

@class MainChromeViewController, NSString, SettingsController, UIBarButtonItem, UINavigationBar;

__attribute__((visibility("hidden")))
@interface SettingsTopBar : NSObject <MainChromeTopBarContent>
{
    UINavigationBar *_navigationBar;
    UIBarButtonItem *_doneButton;
    SettingsController *_owner;
}

@property(nonatomic) __weak SettingsController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_done;
- (id)customTopBarView;

// Remaining properties
@property(nonatomic) MainChromeViewController *chromeViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
