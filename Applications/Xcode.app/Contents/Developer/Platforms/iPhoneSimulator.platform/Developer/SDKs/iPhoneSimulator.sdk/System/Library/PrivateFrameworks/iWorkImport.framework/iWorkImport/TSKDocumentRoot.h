//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKAccessControllerDelegate.h"
#import "TSKModel.h"

@class NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<TSKSearchReference>, NSSet, NSString, TSKAccessController, TSKAnnotationAuthorStorage, TSKChangeNotifier, TSKCommandController, TSKCommandHistory, TSKCommandSelectionBehaviorHistory, TSKDocumentSupport, TSKPasteboardController, TSSStylesheet, TSSTheme, TSULocale;

__attribute__((visibility("hidden")))
@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel>
{
    TSKAccessController *_accessController;
    TSKCommandController *_commandController;
    TSKChangeNotifier *_changeNotifier;
    _Bool _isFindActive;
    TSKPasteboardController *_pasteboardController;
    id <TSKUndoRedoState> _undoRedoState;
    TSKAnnotationAuthorStorage *_annotationAuthorStorage;
    NSSet *_filteredAuthors;
    NSMutableArray *_activityLogEntries;
    NSObject<OS_dispatch_queue> *_iCloudTeardownStackQueue;
    NSMutableArray *_iCloudTeardownStack;
    _Bool _isBeingLocalized;
    NSObject<TSKSearchReference> *_activeSearchReference;
    NSDictionary *_searchReferencesToHighlight;
}

+ (Class)commandControllerClass;
@property(retain, nonatomic) NSDictionary *searchReferencesToHighlight; // @synthesize searchReferencesToHighlight=_searchReferencesToHighlight;
@property(retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
@property(readonly, nonatomic) _Bool isBeingLocalized; // @synthesize isBeingLocalized=_isBeingLocalized;
@property(retain, nonatomic) NSSet *filteredAuthors; // @synthesize filteredAuthors=_filteredAuthors;
@property(retain, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage; // @synthesize annotationAuthorStorage=_annotationAuthorStorage;
@property(retain, nonatomic) id <TSKUndoRedoState> undoRedoState; // @synthesize undoRedoState=_undoRedoState;
@property(nonatomic, getter=isFindActive) _Bool findActive; // @synthesize findActive=_isFindActive;
@property(retain, nonatomic) TSKPasteboardController *pasteboardController; // @synthesize pasteboardController=_pasteboardController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(readonly, nonatomic) TSKCommandController *commandController; // @synthesize commandController=_commandController;
@property(readonly, nonatomic) TSKAccessController *accessController; // @synthesize accessController=_accessController;
- (void)gilligan_documentDidRemoveObject:(id)arg1;
- (void)gilligan_documentWillRemoveObject:(id)arg1;
- (void)gilligan_documentWillInsertObject:(id)arg1;
- (void)gilligan_documentDidInsertObject:(id)arg1;
- (void)updateForNonCommandChangesWithWriteLock:(id)arg1;
- (void)willRelinquishReadLock;
- (void)didAcquireReadLock;
@property(readonly, nonatomic) _Bool hasICloudConflict;
- (_Bool)hasICloudTeardownObserver;
- (void)notifyICloudTeardownObservers;
- (void)removeICloudTeardownObserver:(long long)arg1;
- (long long)addObserverForICloudTeardownWithBlock:(CDUnknownBlockType)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (void)coalesceChanges:(id)arg1;
@property(readonly, nonatomic) NSString *cachedRedoActionString;
@property(readonly, nonatomic) NSString *cachedUndoActionString;
@property(readonly, nonatomic) unsigned long long cachedRedoCount;
@property(readonly, nonatomic) unsigned long long cachedUndoCount;
- (void)clearCommandHistory;
@property(readonly, nonatomic) _Bool hasCommands;
@property(readonly, nonatomic) TSKCommandSelectionBehaviorHistory *commandSelectionBehaviorHistory;
@property(readonly, nonatomic) TSKCommandHistory *commandHistory;
@property(readonly, nonatomic) TSKDocumentSupport *documentSupport;
- (id)activityLogEntries;
- (id)additionalDocumentPropertiesForWrite;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1;
- (id)modelEnumeratorForObjectsOfClass:(Class)arg1;
- (id)modelEnumeratorForObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1;
- (id)modelEnumerator;
- (_Bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (_Bool)shouldShowComments;
- (_Bool)isDirectionRightToLeft;
@property(readonly, nonatomic) NSString *creationLanguage;
@property(readonly, nonatomic) unsigned long long writingDirectionForStorage;
@property(readonly, nonatomic) unsigned long long writingDirection;
- (void)documentDidLoad;
- (void)didSaveWithEncryptionChange;
- (_Bool)documentCacheHasAtMostFileProtection:(id)arg1;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (id)dataFromDocumentCachePath:(id)arg1;
@property(readonly, nonatomic) unsigned long long applicationType;
@property(readonly, retain) TSULocale *documentLocale;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (Class)thumbnailImagerClass;
@property(readonly, retain) TSPObject *webState;
- (id)createWebStateRoot;
- (void)enumerateStyleClientsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TSSStylesheet *stylesheet;
- (void)setThemeForTemplateImport:(id)arg1;
@property(retain, nonatomic) TSSTheme *theme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
