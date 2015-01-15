//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class DAAccount, DAVSettingsAccountsUIController, NSString;

@interface DAVSettingsAdvancedController : PSListController
{
    _Bool _isReloadingProperties;
    DAAccount *_account;
    DAVSettingsAccountsUIController *_accountController;
    NSString *_placeHolder;
}

@property(nonatomic) _Bool isReloadingProperties; // @synthesize isReloadingProperties=_isReloadingProperties;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) __weak DAVSettingsAccountsUIController *accountController; // @synthesize accountController=_accountController;
@property(nonatomic) __weak DAAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)specifiers;

@end
