//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

#import "NSDraggingSource.h"

@class NSString;

@interface IDEiPhoneOrganizerDraggableImageView : NSImageView <NSDraggingSource>
{
    id <IDEiPhoneOrganizerDraggableImageViewDelegate> _delegate;
    BOOL _dragging;
}

@property __weak id <IDEiPhoneOrganizerDraggableImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

