//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MapsAutoLayoutContext, UILabel;

__attribute__((visibility("hidden")))
@interface StarkGuidanceToggleOverlaySign : UIView
{
    MapsAutoLayoutContext *_layoutContext;
    UILabel *_label;
    _Bool _guidanceEnabled;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool guidanceEnabled; // @synthesize guidanceEnabled=_guidanceEnabled;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updateText;
- (void)_updateStyling;
- (id)initWithFrame:(struct CGRect)arg1;

@end

