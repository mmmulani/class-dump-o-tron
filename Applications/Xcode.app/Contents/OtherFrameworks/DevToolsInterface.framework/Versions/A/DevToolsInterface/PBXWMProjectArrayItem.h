//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, PBXProjectDocument;

@interface PBXWMProjectArrayItem : NSObject
{
    NSMutableArray *windowArray;
    NSString *projectName;
    NSString *uniqueProjectName;
    PBXProjectDocument *projectDocument;
}

- (void)logTheMenuHelperWindowArrayContents;
- (void)appendProjectToWindowMenu:(id)arg1 withUniqueNames:(BOOL)arg2 invokingSelector:(SEL)arg3;
- (long long)compareUniqueProjectNames:(id)arg1;
- (long long)compareProjectNames:(id)arg1;
- (void)refreshWMProjectArrayItem;
- (BOOL)removeWMWindowArrayItem:(id)arg1;
- (BOOL)removeWMWindowArrayItemForIndex:(long long)arg1;
- (BOOL)updateWMWindowArrayItem:(id)arg1;
- (id)addWMWindowArrayItem:(id)arg1;
- (id)getWMWindowArrayItem:(id)arg1;
- (BOOL)hasWindow:(id)arg1;
- (long long)indexOfWindowArrayItem:(id)arg1;
- (id)windowArrayItemForIndex:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWMProjectArrayItem:(id)arg1;
- (id)projectPath;
- (BOOL)isNilProject;
- (void)setProjectDocument:(id)arg1;
- (void)_projectWillClose:(id)arg1;
- (id)projectDocument;
- (void)setUniqueProjectName:(id)arg1;
- (id)uniqueProjectName;
- (void)setProjectName:(id)arg1;
- (id)projectName;
- (long long)windowCount;
- (id)windowArray;

@end
