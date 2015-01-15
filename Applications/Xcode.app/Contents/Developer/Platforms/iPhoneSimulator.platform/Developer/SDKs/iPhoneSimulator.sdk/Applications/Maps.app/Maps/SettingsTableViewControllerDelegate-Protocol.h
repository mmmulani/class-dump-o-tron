//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapAttribution, NSSet;

@protocol SettingsTableViewControllerDelegate <NSObject>
- (void)presentAttributions;
- (void)proceedToEnvironmentsSelector;
- (void)proceedToReportAProblem;
- (void)dropPin;
- (void)setTrafficDisplayed:(_Bool)arg1;
- (void)setViewMode:(long long)arg1;
- (_Bool)canDisplayTraffic;
- (NSSet *)disallowedViewModes;
- (_Bool)viewModeSwitchingAvailable;
- (long long)viewMode;
- (void)toggle3D;
- (_Bool)is3DModeEnabled;
- (_Bool)canShow3DMode;
- (_Bool)showsRadarComposer;
- (_Bool)showsEnvironments;
- (_Bool)showsDropPin;
- (_Bool)isTrafficDisplayed;
- (MKMapAttribution *)mapAttribution;
@end
