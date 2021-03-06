//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface SFWirelessSettingsController : NSObject
{
    id _delegate;
    _Bool _wifiEnabled;
    _Bool _bluetoothEnabled;
    _Bool _deviceSupportsWAPI;
    _Bool _firstCallbackCompleted;
    struct __SFOperation *_information;
    NSObject<OS_dispatch_semaphore> *_firstCallBackSemaphore;
}

@property __weak id <SFWirelessSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(readonly) _Bool deviceSupportsWAPI;
- (void)repairAppleID;
@property(getter=isBluetoothEnabled) _Bool bluetoothEnabled;
@property(getter=isWifiEnabled) _Bool wifiEnabled;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end

