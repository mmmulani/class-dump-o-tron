//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchResult.h"

__attribute__((visibility("hidden")))
@interface POIPlaceholderSearchResult : SearchResult
{
    _Bool _temporary;
}

@property(readonly, nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
- (_Bool)isPlaceHolder;
- (id)initWithLabelMarker:(id)arg1;

@end

