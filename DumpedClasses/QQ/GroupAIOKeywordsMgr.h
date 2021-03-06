//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class LYStorage, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, QQLockDictionary;

@interface GroupAIOKeywordsMgr : NSObject <IEngineDispatchDelegate>
{
    LYStorage *_fileStorage;
    NSObject<OS_dispatch_queue> *_groupAIOKeywordsQueue;
    QQLockDictionary *_keywordsDict;
    QQLockDictionary *_inMsgKeywords;
    QQLockDictionary *_outMsgKeywords;
    QQLockDictionary *_showedRuleIds;
    NSMutableArray *_reqRuleIds;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)saveSetting:(id)arg1;
- (void)filterKeywordsDict:(id)arg1;
- (void)updateKeywordsDict:(id)arg1;
- (void)updateRuleDetails:(id)arg1;
- (void)handleConfigureResult:(struct CPBMessageDecoder)arg1;
- (void)rspRuleDetailInfo:(CDStruct_7895f40e)arg1;
- (int)sendRuleDetailInfoReq:(id)arg1;
- (void)reqRuleDetailInfoDelay;
- (void)reqKeywordRuleDetailInfo:(id)arg1;
@property(readonly, nonatomic) int configureVersion;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)groupAIOKeywordsQueue;
- (id)matchGroupAIOKeywords:(id)arg1 keywords:(id)arg2;
- (void)asyncMatchGroupAIOKeywords:(id)arg1 keywords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)matchGroupAIOKeywords:(id)arg1;
- (id)matchContentWithMsgModel:(id)arg1;
- (_Bool)isMsgShouldToMatch:(id)arg1;
- (void)showRuleIdForInMsg:(id)arg1 ruleId:(id)arg2;
- (id)showedRuleIdsForInMsg:(id)arg1;
- (id)needReqDetailRuleIds:(id)arg1 showedRuleIds:(id)arg2;
- (id)needReqDetailRuleIds:(id)arg1;
- (id)filterToShowRuleIds:(id)arg1 showedRuleIds:(id)arg2 groupCode:(id)arg3;
- (id)ruleDetailInfo:(id)arg1;
- (id)msgKeywords:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

