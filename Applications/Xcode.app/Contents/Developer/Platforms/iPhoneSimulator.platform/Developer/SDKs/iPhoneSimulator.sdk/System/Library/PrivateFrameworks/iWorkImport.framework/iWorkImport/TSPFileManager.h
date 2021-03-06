//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSPFileManager : NSObject
{
}

+ (_Bool)copyReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 error:(id *)arg4;
+ (id)ioQueue;
+ (_Bool)transcodeReadChannel:(id)arg1 decryptionKey:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;
+ (_Bool)copyReadChannel:(id)arg1 decryptionKey:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;
+ (_Bool)linkOrCopyURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 encryptionKey:(id)arg4 error:(id *)arg5;
+ (_Bool)linkOrCopyURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)linkFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)linkFileAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;

@end

