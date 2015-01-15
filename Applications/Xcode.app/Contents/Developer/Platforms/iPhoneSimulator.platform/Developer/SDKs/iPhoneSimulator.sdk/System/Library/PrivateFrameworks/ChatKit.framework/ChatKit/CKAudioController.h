//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKAudioPlayerDelegate.h"

@class CKAudioPlayer, CKMediaObject, NSArray, NSMutableArray, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate>
{
    unsigned long long _currentIndex;
    _Bool _shouldUseSpeaker;
    _Bool _playing;
    _Bool _paused;
    _Bool _interrupted;
    NSMutableArray *_mediaObjects;
    id <CKAudioControllerDelegate> _delegate;
    CKAudioPlayer *_audioPlayer;
}

@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) CKAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool shouldUseSpeaker; // @synthesize shouldUseSpeaker=_shouldUseSpeaker;
@property(nonatomic) id <CKAudioControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setMediaObjects:) NSMutableArray *_mediaObjects; // @synthesize _mediaObjects;
- (void)audioSessionInterruption:(id)arg1;
- (void)playListenEndSound:(CDUnknownBlockType)arg1;
- (void)playListenSound:(CDUnknownBlockType)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
@property(readonly, nonatomic) double currentMediaObjectDuration;
@property(readonly, nonatomic) double currentMediaObjectTime;
@property(readonly, retain, nonatomic) CKMediaObject *currentMediaObject;
- (void)stop;
- (void)pause;
- (void)play;
- (void)addMediaObjects:(id)arg1;
- (void)addMediaObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *mediaObjects;
- (id)initWithMediaObjects:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
