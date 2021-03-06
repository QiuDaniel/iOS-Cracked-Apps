//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DynamicRelaseProtocol.h"

@class NSString;

@interface APTemplateSyncManager : NSObject <DynamicRelaseProtocol>
{
}

+ (void)registerDynamicRleasePlatform;
+ (void)handleDynamicReleaseResponses:(id)arg1;
+ (id)templateFromDynamicReleaseResponse:(id)arg1;
+ (void)registerNotification;
+ (_Bool)whetherNeedUpdate:(id)arg1 localTpl:(id)arg2;
+ (id)defaultManager;
- (void)processTplToDownload:(id)arg1;
- (void)updateSyncTemplate;
- (void)downloadTpls:(id)arg1 isSyncUpdate:(_Bool)arg2 retryCount:(int)arg3;
- (void)downloadTpls:(id)arg1 retryCount:(int)arg2;
- (void)saveTemplatesFromSync:(id)arg1 withInfo:(id)arg2;
- (id)templateFromSyncMessage:(id)arg1;
- (void)handleSyncPush:(id)arg1;
- (void)syncPushNotification:(id)arg1;
- (void)notifySyncPushHandleComplete:(id)arg1;
- (void)registerInSyncService;
- (void)observeSyncPushNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

