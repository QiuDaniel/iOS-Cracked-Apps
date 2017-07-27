//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZUploadManagerSendBoxDelegate.h"

@class NSString, QZPhotoPreUploader, QZUploadManager;

@interface QZMoodUploader : NSObject <QZUploadManagerSendBoxDelegate>
{
    QZUploadManager *_uploadManager;
    QZPhotoPreUploader *_preUploader;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)uploadManager:(id)arg1 updateStatus:(long long)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 beginOperation:(id)arg2 taskID:(long long)arg3 taskDetail:(id)arg4;
- (void)uploadManager:(id)arg1 finishOperation:(id)arg2 taskID:(long long)arg3 taskDetail:(id)arg4;
- (void)uploadManager:(id)arg1 fail:(id)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 sucess:(id)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 total:(long long)arg2 recv:(long long)arg3 operation:(id)arg4 taskID:(long long)arg5 taskDetail:(id)arg6;
- (void)uploadPhoto:(id)arg1 seq:(long long)arg2;
- (void)addJob:(id)arg1;
- (id)uploadManager;
- (id)initWithUploadManager:(id)arg1 preUploader:(id)arg2;
- (void)uploadMood:(id)arg1 seq:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
