//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/SoftwareMetadataElementBase.h>

@interface SoftwareMetadataElement : SoftwareMetadataElementBase
{
}

+ (void)initialize;
- (BOOL)addSoftwareMetadataInfoFromElement:(id)arg1 error:(id *)arg2;
- (id)findSameInAppPurchase:(id)arg1;
- (void)addInAppPurchase:(id)arg1;
- (void)addInAppPurchases:(id)arg1;
- (id)findNonFamilyInAppPurchaseWithProductId:(id)arg1;
- (id)nonFamilyInAppPurchases;
- (id)familyWithNameInsertingIfNeeded:(id)arg1;
- (id)init;

@end
