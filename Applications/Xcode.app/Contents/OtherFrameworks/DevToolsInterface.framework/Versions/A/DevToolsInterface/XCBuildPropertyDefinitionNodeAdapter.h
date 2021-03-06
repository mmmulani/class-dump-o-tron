//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCEDataNodeAdapterP.h"

@class NSCell, NSString, XCBuildPropertiesInspectorPane, XCPropertyConditionSet, XCPropertyDefinition, XCPropertyInfoContext;

@interface XCBuildPropertyDefinitionNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    NSCell *_cell;
    XCBuildPropertiesInspectorPane *_inspector;
    XCPropertyInfoContext *_pic;
    XCPropertyDefinition *_pDefinition;
    NSString *_pName;
    XCPropertyConditionSet *_pConditionSet;
}

- (id)propertyValueForNode:(id)arg1;
- (id)conditionSetForNode:(id)arg1;
- (id)propertyNameForNode:(id)arg1;
- (id)propertyDefinitionForNode:(id)arg1;
- (void)addConditionForDataNode:(id)arg1;
- (BOOL)enableAddConditionForDataNode:(id)arg1;
- (BOOL)allowsFlavor:(id)arg1;
- (void)removeDataNode:(id)arg1;
- (void)removeLocalAssignmentForDataNode:(id)arg1;
- (BOOL)userCanRemoveAssignment;
- (BOOL)dataNode:(id)arg1 doubleClickInColumn:(id)arg2;
- (void)openEditorForDataNode:(id)arg1;
- (BOOL)userCanOpenEditorForDataNode:(id)arg1;
- (BOOL)userCanOpenEditor;
- (void)invokeSheetForEditor:(id)arg1;
- (void)_editorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)userCanEditAssignmentInSheet;
- (id)_editorModule;
- (id)propertyDisplayName;
- (BOOL)dataNode:(id)arg1 matchesName:(id)arg2 definition:(id)arg3 conditionSet:(id)arg4;
- (BOOL)dataNode:(id)arg1 matchesPersistentObjectComponent:(id)arg2;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (BOOL)locallyAssigned;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (void)assignCell;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (void)dataNode:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3;
- (void)setDefinitionValue:(id)arg1;
- (void)setNewName:(id)arg1;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (BOOL)dataNode:(id)arg1 isEditingInTableColumn:(id)arg2;
- (id)propertyDefinitionValue;
- (id)valueToStoreForObjectValue:(id)arg1;
- (id)objectValueForExpandedString:(id)arg1 orValue:(id)arg2;
- (void)dataNodeConfigure:(id)arg1;
- (void)assignCurrentValuesFor:(id)arg1;
- (id)categoryAdapterForDataNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

