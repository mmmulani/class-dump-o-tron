//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf, IDSUTunDeliveryController, NSData, NSDictionary, NSNumber, NSString;

@protocol IDSUTunDeliveryControllerDelegate <NSObject>

@optional
- (NSDictionary *)deliveryControllerQueuedIncomingMessageDictionary:(IDSUTunDeliveryController *)arg1;
- (void)deliveryControllerHasSpaceforNonUrgentMessages:(IDSUTunDeliveryController *)arg1;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 receivedAppLevelAckWithTopic:(NSString *)arg2 fromID:(NSString *)arg3 peerResponseIdentifier:(NSString *)arg4;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 messageReceived:(NSDictionary *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 dataReceived:(NSData *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10;
- (void)deliveryController:(IDSUTunDeliveryController *)arg1 protobufReceived:(IDSProtobuf *)arg2 topic:(NSString *)arg3 command:(NSNumber *)arg4 fromID:(NSString *)arg5 messageID:(NSNumber *)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(NSString *)arg9 messageUUID:(NSString *)arg10;
@end
