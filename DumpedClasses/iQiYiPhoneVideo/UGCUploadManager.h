//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UploadEngineDelegate-Protocol.h"

@class NSString, QYUploadTaskHistory;

@interface UGCUploadManager : NSObject <UploadEngineDelegate>
{
    QYUploadTaskHistory *_uploadingHistory;
}

+ (void)autoStartUploadTasks;
+ (void)_saveUploadHistory_now;
+ (void)_saveUploadHistory;
+ (id)sharedInstance;
+ (id)latestUpdateLogPaths;
+ (void)clearUploadDebug;
+ (void)showUploadDebug:(long long)arg1;
+ (_Bool)pauseAllTask;
+ (_Bool)stopAllActiveTask;
+ (_Bool)pauseTask:(id)arg1;
+ (_Bool)startTask:(id)arg1;
+ (id)uploadListByUserId:(id)arg1 sourceType:(long long)arg2;
+ (id)uploadListBySourceType:(long long)arg1;
+ (id)uploadListByUserId:(id)arg1;
+ (id)uploadModelByFileID:(id)arg1;
+ (void)removeAllTasksBySourceType:(long long)arg1;
+ (void)removeAllTasksByUserID:(id)arg1;
+ (void)removeTaskByFileID:(id)arg1;
+ (void)removeTask:(id)arg1 needClear:(_Bool)arg2;
+ (void)removeTask:(id)arg1;
+ (void)updateTask:(id)arg1;
+ (void)addTask:(id)arg1;
+ (void)updateAllTasksByUserInfo:(id)arg1;
+ (void)markUploadWifiOnly:(_Bool)arg1;
+ (void)setNeedCustomizeErrorMsg:(_Bool)arg1 fromSource:(long long)arg2;
+ (void)__changeVideoMeta:(id)arg1;
+ (void)changeVideoPrivatePolicy:(id)arg1 toStatus:(long long)arg2;
+ (void)cancleUploadVideos:(id)arg1;
+ (void)deleteCloudVides:(id)arg1 userID:(id)arg2;
@property(retain, nonatomic) QYUploadTaskHistory *uploadingHistory; // @synthesize uploadingHistory=_uploadingHistory;
- (void).cxx_destruct;
- (void)__onAppDidEnterBackground:(id)arg1;
- (void)__userDefaultSettingDidChanged:(id)arg1;
- (void)__ugcUploadNetworkChanged:(id)arg1;
- (void)notifyUploadState:(id)arg1 state:(id)arg2 error:(id)arg3;
- (void)notifyUploadProgress:(id)arg1;
- (void)notifyUploadCountChange:(id)arg1 state:(id)arg2;
- (void)uploadTask:(id)arg1 uploadThumb:(id)arg2 error:(id)arg3;
- (void)uploadTask:(id)arg1 uploadMetaData:(id)arg2 error:(id)arg3;
- (void)uploadTask:(id)arg1 uploadVideo:(id)arg2 error:(id)arg3;
- (void)uploadTask:(id)arg1 didPauseModel:(id)arg2;
- (void)uploadTask:(id)arg1 willPauseModel:(id)arg2;
- (void)uploadTask:(id)arg1 finishBlock:(id)arg2 speed:(double)arg3;
- (void)uploadTask:(id)arg1 finishFileID:(id)arg2;
- (void)uploadTask:(id)arg1 finishThumb:(id)arg2;
- (void)uploadTask:(id)arg1 finishMetaData:(id)arg2;
- (void)uploadTask:(id)arg1 finishAllBlock:(id)arg2;
- (void)uploadTask:(id)arg1 didStartModel:(id)arg2;
- (void)uploadTask:(id)arg1 willStartModel:(id)arg2;
- (void)startNextTask;
- (id)init;
- (void)dealloc;
- (void)__removeTasks:(id)arg1 needStartNext:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

