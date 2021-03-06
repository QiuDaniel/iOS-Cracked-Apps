//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ArticleInfoManagerDelegate.h"

@class ArticleInfoManager, NSString, TTDetailModel;

@interface TTPhotoDetailViewModel : NSObject <ArticleInfoManagerDelegate>
{
    ArticleInfoManager *_articleInfoManager;
    TTDetailModel *_detailModel;
}

@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) ArticleInfoManager *articleInfoManager; // @synthesize articleInfoManager=_articleInfoManager;
- (void).cxx_destruct;
- (void)articleInfoManagerFetchInfoFailed:(id)arg1;
- (void)articleInfoManager:(id)arg1 getStatus:(id)arg2;
- (id)tt_requstForWebContentPhotoView:(id)arg1;
- (void)p_updateArticleByDict:(id)arg1;
- (id)infomationAntiHijackJS;
- (id)p_webContentArticleLoadURLString:(id)arg1;
- (unsigned long long)p_currentArticleType;
- (void)tt_startFetchInformationWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)initViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

