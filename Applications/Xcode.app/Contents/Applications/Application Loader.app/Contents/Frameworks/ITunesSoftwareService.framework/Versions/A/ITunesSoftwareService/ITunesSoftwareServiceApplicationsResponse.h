//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesSoftwareService/ITunesSoftwareServiceResponse.h>

#import "ITunesSoftwareServiceApplicationsResponse.h"

@class NSArray, NSString;

@interface ITunesSoftwareServiceApplicationsResponse : ITunesSoftwareServiceResponse <ITunesSoftwareServiceApplicationsResponse>
{
    NSArray *_applications;
    NSString *_alertMessage;
}

- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)setAlertMessage:(id)arg1;
- (id)alertMessage;
- (void)setApplications:(id)arg1;
- (id)applications;
- (void)dealloc;

@end

