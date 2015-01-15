//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbstractFileImporter.h"

@interface PublicationFileImporter : AbstractFileImporter
{
}

+ (void)initialize;
- (id)bindParserToPackages:(id)arg1 error:(id *)arg2;
- (id)prepareStringParser:(id)arg1;
- (id)cleanupPackages;
- (void)cleanupPackage:(id)arg1;
- (BOOL)bindAllElements:(id)arg1 error:(id *)arg2;
- (BOOL)bindAllElements:(id)arg1 row:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)bindSubectCategories:(id)arg1 package:(id)arg2 metadata:(id)arg3 row:(unsigned long long)arg4 error:(id *)arg5;
- (id)bindSubectCategory:(id)arg1 row:(unsigned long long)arg2 subjectNum:(unsigned long long)arg3 dto:(id)arg4 error:(id *)arg5;
- (BOOL)bindTargetAudiences:(id)arg1 package:(id)arg2 metadata:(id)arg3 row:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)bindProducts:(id)arg1 package:(id)arg2 metadata:(id)arg3 row:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)bindContributors:(id)arg1 package:(id)arg2 metadata:(id)arg3 row:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)bindRelatedContent:(id)arg1 package:(id)arg2 metadata:(id)arg3 row:(unsigned long long)arg4 error:(id *)arg5;
- (id)cleanIsbn:(id)arg1;
- (id)buildBlankPackageElement:(id *)arg1;

@end
