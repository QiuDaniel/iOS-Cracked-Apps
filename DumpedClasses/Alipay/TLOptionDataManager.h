//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SyncUpCallback.h"

@class NSOperationQueue, NSString;

@interface TLOptionDataManager : NSObject <SyncUpCallback>
{
    NSOperationQueue *_optionSyncUpQueue;
}

+ (id)createFeedPraiseOptionWithFeedId:(id)arg1;
+ (id)createFeedCommentOptionWithFeedId:(id)arg1 replyCommentId:(id)arg2 replyUserId:(id)arg3 replyUserLoginId:(id)arg4 content:(id)arg5;
@property(retain, nonatomic) NSOperationQueue *optionSyncUpQueue; // @synthesize optionSyncUpQueue=_optionSyncUpQueue;
- (void).cxx_destruct;
- (void)queryLocalPlumpOptionList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryLocalPlumpOptionListWithFeedId:(id)arg1 type:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (_Bool)delFeed:(id)arg1;
- (void)delFeed:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)delLocalFeed:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)delFeedPraise:(id)arg1;
- (void)delFeedPraise:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)addFeedPraise:(id)arg1;
- (void)addFeedPraise:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)delFeedComment:(id)arg1;
- (void)delFeedComment:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)addFeedComment:(id)arg1;
- (void)addFeedComment:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
