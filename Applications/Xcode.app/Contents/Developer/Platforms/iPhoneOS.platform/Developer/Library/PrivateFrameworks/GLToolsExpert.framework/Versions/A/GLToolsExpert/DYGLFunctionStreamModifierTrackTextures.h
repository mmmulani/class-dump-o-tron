//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYFunctionStreamModifier.h"

@class NSDictionary;

@interface DYGLFunctionStreamModifierTrackTextures : DYFunctionStreamModifier
{
    NSDictionary *_textureIDs;
}

- (void).cxx_destruct;
- (BOOL)shouldModifyTextureOnContext:(unsigned long long)arg1 target:(unsigned int)arg2 archiveModifier:(id)arg3;
- (id)initWithTextures:(id)arg1;

@end

