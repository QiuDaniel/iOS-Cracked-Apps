//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class NSMutableArray, NSString, QLMessageOperationConfig, QLMessageOperationInfo;

@interface QLMessageOperationTask : QLDataRequestModel
{
    NSString *_uniqueId;
    CDUnknownBlockType _comBlock;
    NSMutableArray *_uploadingPhotos;
    int _uploadRetryCount;
    int _uploadPhotoCount;
    int _uploadVoiceCount;
    QLMessageOperationInfo *_optInfo;
    QLMessageOperationConfig *_optConfig;
}

+ (id)generateUniqueId:(id)arg1;
+ (void)runRequests;
+ (id)threadForOperation;
@property(nonatomic) __weak QLMessageOperationConfig *optConfig; // @synthesize optConfig=_optConfig;
@property(retain, nonatomic) QLMessageOperationInfo *optInfo; // @synthesize optInfo=_optInfo;
- (void).cxx_destruct;
- (void)requestDidTimeOut;
- (void)requestDidFail:(id)arg1;
- (void)requestDidSucceed;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)cancel;
- (void)sendMessageDidFinish:(id)arg1;
- (void)uploadVoiceDidFinish;
- (void)uploadPhotoDidFinish:(id)arg1;
- (_Bool)needUploadLocalVoice:(id)arg1;
- (_Bool)needUploadWithUrlPath:(id)arg1;
- (_Bool)needUploadWithFilePath:(id)arg1;
- (void)callBlock:(_Bool)arg1;
- (void)startMessageRequest;
- (_Bool)uploadTheLocalVoice;
- (void)uploadFileVoice;
- (_Bool)uploadNextLocalPhoto;
- (void)uploadUrlPhoto:(id)arg1;
- (void)uploadFilePhoto:(id)arg1;
- (id)initWithInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *taskId;
- (void)uploadVoiceDidFinishNotification:(id)arg1;
- (void)apolloUploadApolloFileVoice:(id)arg1;
- (long long)vgpsRequestDidFinish:(id)arg1 uploadingPhotos:(id)arg2;
- (id)vgpsRequestForUploadUrlPhoto:(id)arg1;
- (id)vgpsRequestForUploadFilePhoto:(id)arg1;
- (long long)coralRequestDidFinish:(id)arg1 uploadingPhotos:(id)arg2 bizType:(int)arg3;
- (id)coralRequestForUploadUrlPhoto:(id)arg1 bizType:(int)arg2;
- (id)coralRequestForUploadFilePhoto:(id)arg1 bizType:(int)arg2;
- (long long)messageRequestDidFinish:(id)arg1;
- (id)sendMessageRequest;

@end

