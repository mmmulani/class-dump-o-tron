//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput_zh/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased
{
    _Bool _suchengEnabled;
    _Bool _supportsEnglish;
}

@property _Bool supportsEnglish; // @synthesize supportsEnglish=_supportsEnglish;
@property _Bool suchengEnabled; // @synthesize suchengEnabled=_suchengEnabled;
- (_Bool)validateCode:(id)arg1 withOption:(unsigned long long)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (int)mecabraInputMethodType;

@end
