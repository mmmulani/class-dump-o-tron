//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class TPRingView, UIColor, UIView;

@interface TPSuperBottomBarButton : UIButton
{
    UIView *_overlayView;
    TPRingView *_ringView;
    _Bool _usesSmallerFontSize;
    long long _orientation;
    UIColor *_originalBackgroundColor;
    struct CGSize _buttonSize;
}

+ (double)defaultWidth;
+ (id)defaultFont;
+ (double)defaultHeight;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(retain, nonatomic) UIColor *originalBackgroundColor; // @synthesize originalBackgroundColor=_originalBackgroundColor;
@property(nonatomic) _Bool usesSmallerFontSize; // @synthesize usesSmallerFontSize=_usesSmallerFontSize;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)newOverlayView;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithAction:(int)arg1;
- (void)configureForCancelAction;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
