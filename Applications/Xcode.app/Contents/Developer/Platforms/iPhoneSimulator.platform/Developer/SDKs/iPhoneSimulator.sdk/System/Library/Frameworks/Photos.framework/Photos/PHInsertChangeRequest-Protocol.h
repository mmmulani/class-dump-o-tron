//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHChangeRequest.h"

@class NSManagedObject, PLPhotoLibrary;

@protocol PHInsertChangeRequest <PHChangeRequest>
@property(readonly, getter=isNew) _Bool new;
- (_Bool)canGenerateUUIDLocally;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
- (id)initForNewObject;
@end
