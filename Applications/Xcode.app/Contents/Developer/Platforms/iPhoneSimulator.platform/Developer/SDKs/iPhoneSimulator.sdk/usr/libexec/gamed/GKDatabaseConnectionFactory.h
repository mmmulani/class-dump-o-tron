//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;
+ (id)directoryForEnvironment:(long long)arg1;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;
- (id)connectionForReaderWithName:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
