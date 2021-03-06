//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLRequestModelDelegate.h"

@class NSString, QLLiveV3DetailPollModel;

@interface QLLiveV3PollHelper : NSObject <QLRequestModelDelegate>
{
    QLLiveV3DetailPollModel *_pollModel;
    NSString *_pid;
    NSString *_pollDataKey;
    id _listener;
    CDUnknownBlockType _complitionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType complitionBlock; // @synthesize complitionBlock=_complitionBlock;
@property(nonatomic) __weak id listener; // @synthesize listener=_listener;
@property(copy, nonatomic) NSString *pollDataKey; // @synthesize pollDataKey=_pollDataKey;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) QLLiveV3DetailPollModel *pollModel; // @synthesize pollModel=_pollModel;
- (void).cxx_destruct;
- (void)scheduleNextPollRequest:(_Bool)arg1;
- (void)doActuelyPollRequest;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (_Bool)isCurrentListener:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)startPollWithPID:(id)arg1 pollDataKey:(id)arg2 listener:(id)arg3 scene:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startPollWithPID:(id)arg1 pollDataKey:(id)arg2 listener:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

