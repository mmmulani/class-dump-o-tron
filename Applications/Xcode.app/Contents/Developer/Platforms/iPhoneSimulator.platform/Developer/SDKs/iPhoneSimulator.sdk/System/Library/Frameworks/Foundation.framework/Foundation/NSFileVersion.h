//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface NSFileVersion : NSObject
{
    NSURL *_fileURL;
    id _addition;
    id _deadVersionIdentifier;
    id _nonLocalVersion;
    NSURL *_contentsURL;
    _Bool _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    _Bool _isResolved;
    _Bool _contentsURLIsAccessed;
    NSString *_clientID;
    NSString *_name;
    _Bool _discardable;
}

+ (_Bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (id)_ubiquityOnlyVersionsOfItemAtURL:(id)arg1 includeSaved:(_Bool)arg2;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(_Bool)arg5;
+ (_Bool)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id *)arg3;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id *)arg4 error:(id *)arg5;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id *)arg5 error:(id *)arg6;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (struct NSObject *)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2;
+ (struct NSObject *)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (_Bool)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2 error:(id *)arg3;
+ (id)_makeTemporaryStorageIdentifier;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(_Bool *)arg2 error:(id *)arg3;
+ (_Bool)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (id)_supportedGenerationalStorageClientIDs;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(_Bool)arg1;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_removeConflictObserver:(void *)arg1;
+ (void *)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(CDUnknownBlockType)arg2;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (_Bool)_conflictsExistForItemAtURL:(id)arg1;
+ (_Bool)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionsOfItemAtURL:(id)arg1;
@property(getter=isDiscardable) _Bool discardable; // @synthesize discardable=_discardable;
- (_Bool)removeAndReturnError:(id *)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_oldReplaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(getter=isResolved) _Bool resolved;
@property(readonly) _Bool hasThumbnail;
@property(readonly) _Bool hasLocalContents;
@property(readonly, getter=isUbiquitous) _Bool ubiquitous;
@property(readonly, getter=isConflict) _Bool conflict;
@property(readonly, retain) id <NSCoding> persistentIdentifier;
@property(readonly) unsigned long long size;
@property(readonly, copy) NSDate *modificationDate;
@property(readonly, copy) NSString *localizedNameOfSavingComputer;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSString *originalPOSIXName;
@property(readonly, copy) NSURL *URL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)_preserveConflictVersionLocally;
@property(readonly, getter=_isBackup) _Bool _isBackup;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (_Bool)_setDocumentInfo:(id)arg1;
- (id)_documentInfo;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (id)_initWithAddition:(id)arg1;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(_Bool)arg6 revision:(id)arg7;
- (id)restoreOverItemAtURL:(id)arg1 error:(id *)arg2;

@end

