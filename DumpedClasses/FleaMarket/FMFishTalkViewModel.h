//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMChatListViewBaseDO.h"

@class FMFishpondDO, NSArray<FMFishTalkDO>;

@interface FMFishTalkViewModel : FMChatListViewBaseDO
{
    NSArray<FMFishTalkDO> *_sysCommentList;
    FMFishpondDO *_fishpondDO;
}

@property(retain, nonatomic) FMFishpondDO *fishpondDO; // @synthesize fishpondDO=_fishpondDO;
@property(retain, nonatomic) NSArray<FMFishTalkDO> *sysCommentList; // @synthesize sysCommentList=_sysCommentList;
- (void).cxx_destruct;
- (void)sendMessageWithFishTalkDOHelp:(id)arg1;
- (void)sendMessageWithFishTalkDO:(id)arg1;
- (id)getLastDataTimeDO;
- (void)sendMessageWithFaceDO:(id)arg1;
- (void)sendMessageWithImage:(id)arg1;
- (void)sendMessageWithText:(id)arg1;
- (id)announcementTalkDO;
- (void)requestItemFinish:(id)arg1 isSuccess:(_Bool)arg2 errorMsg:(id)arg3;
- (void)requestItem;
- (void)requestFishpondDO;
- (id)init;

@end

