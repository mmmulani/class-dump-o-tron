//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GitDiffCallbackPayload : NSObject
{
    CDUnknownBlockType _fileDiffBlock;
    CDUnknownBlockType _hunkDiffBlock;
    CDUnknownBlockType _lineDiffBlock;
}

@property(copy) CDUnknownBlockType lineDiffBlock; // @synthesize lineDiffBlock=_lineDiffBlock;
@property(copy) CDUnknownBlockType hunkDiffBlock; // @synthesize hunkDiffBlock=_hunkDiffBlock;
@property(copy) CDUnknownBlockType fileDiffBlock; // @synthesize fileDiffBlock=_fileDiffBlock;
- (void).cxx_destruct;

@end
