//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuItem.h"

#import "IBHICoding.h"

@class NSString;

@interface IBHIMenuItem : NSMenuItem <IBHICoding>
{
    unsigned long command;
    BOOL submenuParentChoosable;
    BOOL dynamic;
    BOOL previousAlternate;
    BOOL ignoreMeta;
    BOOL sectionHeader;
    BOOL customDraw;
    BOOL autoRepeat;
    BOOL autoDisable;
    BOOL updateSingleItem;
    BOOL includeInCmdKeyMatching;
    NSString *helpTagText;
    NSString *helpTagExtendedText;
    short helpTagDisplaySide;
}

+ (id)classNameForHICoder;
- (void)setChecked:(BOOL)arg1;
- (BOOL)checked;
- (BOOL)isDisabled;
- (void)setDisabled:(BOOL)arg1;
- (void)setHelpTagDisplaySide:(short)arg1;
- (short)helpTagDisplaySide;
- (void)setHelpTagExtendedText:(id)arg1;
- (id)helpTagExtendedText;
- (void)setHelpTagText:(id)arg1;
- (id)helpTagText;
- (void)setIncludeInCmdKeyMatching:(BOOL)arg1;
- (BOOL)includeInCmdKeyMatching;
- (void)setUpdateSingleItem:(BOOL)arg1;
- (BOOL)updateSingleItem;
- (void)setAutoDisable:(BOOL)arg1;
- (BOOL)autoDisable;
- (void)setAutoRepeat:(BOOL)arg1;
- (BOOL)autoRepeat;
- (void)setCustomDraw:(BOOL)arg1;
- (BOOL)customDraw;
- (void)setSectionHeader:(BOOL)arg1;
- (BOOL)sectionHeader;
- (void)setIgnoreMeta:(BOOL)arg1;
- (BOOL)ignoreMeta;
- (void)setNotPreviousAlternate:(BOOL)arg1;
- (BOOL)notPreviousAlternate;
- (void)setPreviousAlternate:(BOOL)arg1;
- (BOOL)previousAlternate;
- (void)setDynamic:(BOOL)arg1;
- (BOOL)dynamic;
- (void)setSubmenuParentChoosable:(BOOL)arg1;
- (BOOL)submenuParentChoosable;
- (void)setCommand:(unsigned long)arg1;
- (unsigned long)command;
- (void)encodeWithHICoder:(id)arg1;
- (id)initWithHIDecoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)buildRuntimeCodingDescription:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;

@end

