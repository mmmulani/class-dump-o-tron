//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSManager, NSString;

@interface GSVolPath : NSObject
{
    long long _storageID;
    int _device;
    unsigned long long _fileID;
    unsigned long long _parentID;
    NSString *_path;
    GSManager *_library;
    unsigned long long _docID;
}

+ (id)volPathOnVolume:(id)arg1 byURL:(id)arg2 error:(id *)arg3;
+ (id)volPathOnVolume:(id)arg1 byPath:(id)arg2 error:(id *)arg3;
+ (id)volPathOnVolume:(id)arg1 byVolPath:(id)arg2 error:(id *)arg3;
+ (id)volPathOnVolume:(id)arg1 byParentID:(unsigned long long)arg2 andName:(const char *)arg3 error:(id *)arg4;
+ (id)volPathOnVolume:(id)arg1 byFileID:(unsigned long long)arg2 error:(id *)arg3;
+ (id)volPathOnVolume:(id)arg1 withFD:(int)arg2 error:(id *)arg3;
+ (id)_volPathOnVolume:(id)arg1 withFD:(int)arg2 byPath:(const char *)arg3 how:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) unsigned long long docID; // @synthesize docID=_docID;
@property(readonly, nonatomic) GSManager *library; // @synthesize library=_library;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) int device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (void)performOnResolvedPath:(CDUnknownBlockType)arg1;
- (_Bool)isValidForCreds:(const struct GSCredential *)arg1 documentIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_canReadFileWithCreds:(const struct GSCredential *)arg1;
- (_Bool)setCopyOnWrite;
@property(readonly, nonatomic) _Bool isInIgnoredLocation;
- (id)description;

@end
