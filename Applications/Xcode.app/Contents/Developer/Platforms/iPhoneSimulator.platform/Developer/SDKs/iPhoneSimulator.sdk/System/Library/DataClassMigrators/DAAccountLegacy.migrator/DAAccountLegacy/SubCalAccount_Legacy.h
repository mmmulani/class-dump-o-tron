//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAAccountLegacy/DALegacyAccount.h>

@interface SubCalAccount_Legacy : DALegacyAccount
{
}

- (int)subCalAccountVersion;
- (_Bool)upgradeAccountWithParent:(id)arg1;
- (id)_oldURLsForKeychain;
- (_Bool)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(_Bool)arg2;

@end

