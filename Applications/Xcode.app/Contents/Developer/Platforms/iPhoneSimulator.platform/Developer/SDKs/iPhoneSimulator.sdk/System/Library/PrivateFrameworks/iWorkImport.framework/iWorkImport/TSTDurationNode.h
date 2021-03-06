//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

__attribute__((visibility("hidden")))
@interface TSTDurationNode : TSTExpressionNode
{
    struct TSTDurationWrapper mValue;
    _Bool mBlank;
}

@property(nonatomic, getter=isBlank) _Bool blank; // @synthesize blank=mBlank;
@property(nonatomic) struct TSTDurationWrapper value; // @synthesize value=mValue;
- (id).cxx_construct;
- (id)description;
- (void)saveToArchive:(struct DurationNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct DurationNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)format;
- (struct TSTDurationWrapper)durationWrapper;
- (id)date;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)string;
- (int)tokenType;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 asBlank:(_Bool)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

