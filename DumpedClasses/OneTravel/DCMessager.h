//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALAPNSManagerDelegate.h"
#import "DISocketDataManagerDelegate.h"
#import "DISocketDataManagerIMDelegate.h"
#import "ONEAppDelegateStoreDelegate.h"

@class ALAPNSMsg, NSMutableArray, NSString;

@interface DCMessager : NSObject <ONEAppDelegateStoreDelegate, DISocketDataManagerDelegate, ALAPNSManagerDelegate, DISocketDataManagerIMDelegate>
{
    NSMutableArray *_msgIdList;
    ALAPNSMsg *_launAPNSMsg;
}

+ (id)sharedMessager;
@property(retain, nonatomic) ALAPNSMsg *launAPNSMsg; // @synthesize launAPNSMsg=_launAPNSMsg;
@property(retain, nonatomic) NSMutableArray *msgIdList; // @synthesize msgIdList=_msgIdList;
- (void).cxx_destruct;
- (_Bool)checkMsgId:(id)arg1;
- (void)handleNewRecoverOrderMsg:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleRecoverOrderMsg:(id)arg1;
- (void)handlePushMsg:(id)arg1;
- (void)handleHistoryOrderEvent:(id)arg1;
- (void)apnsManager:(id)arg1 didPublishAPNSMsg:(id)arg2 filter:(id)arg3;
- (_Bool)apnsManager:(id)arg1 shouldPublishAPNSMsg:(id)arg2;
- (unsigned long long)productIdentification;
- (void)dISocketDataManagerDidReceivePushMsgModel:(id)arg1;
- (void)handleWechatBaseResp:(id)arg1;
- (void)handleAliAppPayResp:(id)arg1;
- (void)application_delegate:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)application_delegate:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application_delegate:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application_delegate:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (_Bool)application_delegate:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)handleAPNSRemoteNotification:(id)arg1;
- (void)handleAPNSLaunchOptions:(id)arg1;
- (void)recvLocalAPNSMsger:(id)arg1;
- (_Bool)couludHandleMessage;
- (void)receiveMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
