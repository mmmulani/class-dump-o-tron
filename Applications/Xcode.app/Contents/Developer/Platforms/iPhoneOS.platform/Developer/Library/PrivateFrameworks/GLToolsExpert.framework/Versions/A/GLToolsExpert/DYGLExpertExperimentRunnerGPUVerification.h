//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertExperimentRunner.h>

__attribute__((visibility("hidden")))
@interface DYGLExpertExperimentRunnerGPUVerification : DYGLExpertExperimentRunner
{
    unsigned long long _frameTime;
}

@property(nonatomic) unsigned long long frameTime; // @synthesize frameTime=_frameTime;
- (void)processFinishedExperiments;
- (id)executeAndWait;
- (id)numberOfExperiments;
- (id)description;
- (id)initWithExpert:(id)arg1 withKind:(int)arg2;

@end

