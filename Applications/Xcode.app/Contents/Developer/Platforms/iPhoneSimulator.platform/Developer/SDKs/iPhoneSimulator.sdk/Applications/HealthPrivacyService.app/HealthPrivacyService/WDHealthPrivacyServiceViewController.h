//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HKAuthorizationSettingsViewControllerDelegate.h"
#import "HKHealthPrivacyServiceRemoteViewController.h"

@class HKAuthorizationSettingsViewController, HKHealthStore, NSError, NSString, UINavigationController;

@interface WDHealthPrivacyServiceViewController : UIViewController <HKHealthPrivacyServiceRemoteViewController, HKAuthorizationSettingsViewControllerDelegate>
{
    _Bool _inAuthorizationDelegateTransaction;
    HKHealthStore *_healthStore;
    UINavigationController *_navigationController;
    HKAuthorizationSettingsViewController *_authorizationSettingsController;
    NSError *_transactionError;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(nonatomic) _Bool inAuthorizationDelegateTransaction; // @synthesize inAuthorizationDelegateTransaction=_inAuthorizationDelegateTransaction;
@property(retain, nonatomic) NSError *transactionError; // @synthesize transactionError=_transactionError;
@property(retain, nonatomic) HKAuthorizationSettingsViewController *authorizationSettingsController; // @synthesize authorizationSettingsController=_authorizationSettingsController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (id)_healthPrivacyHostViewController;
- (void)_finishWithError:(id)arg1;
- (void)authorizationSettingsViewControllerDidFinish:(id)arg1 error:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_beginAuthorizationSessionWithIdentifier:(id)arg1;
- (void)setSessionIdentifier:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
