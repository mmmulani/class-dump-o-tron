//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesSoftwareService/MZAbstractWebServiceFileSender.h>

@class NSString;

@interface MZWebServiceValidateHostedContentIAPPackage : MZAbstractWebServiceFileSender
{
    NSString *_appleId;
    NSString *_packagePath;
    NSString *_productId;
}

+ (void)initialize;
- (void)setProductId:(id)arg1;
- (id)productId;
- (void)setPackagePath:(id)arg1;
- (id)packagePath;
- (void)setAppleId:(id)arg1;
- (id)appleId;
- (id)generateArgumentsWithError:(id *)arg1;
- (id)skipProcessingMessage;
- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (void)dealloc;
- (id)init;

@end
