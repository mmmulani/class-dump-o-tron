//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendarDataclassOwner;

@interface EKEventsDataclassOwner : NSObject
{
    EKCalendarDataclassOwner *_calendarOwner;
}

- (void).cxx_destruct;
- (id)_syncingAccountForParentAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)_mergeEventsIntoLocalStoreFromStore:(void *)arg1;
- (_Bool)_mergeEventsFromLocalStoreIntoStore:(void *)arg1;
- (void)_setStoreEnabled:(_Bool)arg1 forAccount:(id)arg2 withChildren:(id)arg3;
- (void)_enableLocalStoreIfNecessaryIgnoringAccount:(id)arg1;
- (void)_setLocalStoreEnabled:(_Bool)arg1;
- (_Bool)_isStoreEmptyForAccount:(id)arg1;
- (_Bool)_isLocalStoreEmpty;
- (void *)_copyStoreWithExternalIdentifier:(id)arg1;
- (void *)_copyStoreForAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)_removeStoreForAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)_drainLocalStore;
- (_Bool)_clearAllEventsFromStoreForParentAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)_clearAllEventsFromStore:(void *)arg1;
- (_Bool)_setUpCalStoreForParentAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)_createFacebookStoreForParentAccount:(id)arg1 withChildren:(id)arg2;
- (_Bool)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3;
- (id)actionsForDisablingDataclassOnAccount:(id)arg1;
- (id)actionsForEnablingDataclassOnAccount:(id)arg1;
- (id)actionsForDeletingAccount:(id)arg1;
- (id)actionsForAddingAccount:(id)arg1;
- (_Bool)_isReadOnlyAccount:(id)arg1;
- (id)initWithCalendarOwner:(id)arg1;

@end
