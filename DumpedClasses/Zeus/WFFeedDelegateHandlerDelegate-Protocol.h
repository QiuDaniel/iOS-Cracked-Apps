//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WFKNativeChannel;

@protocol WFFeedDelegateHandlerDelegate <NSObject>

@optional
- (void)WFFeedDelegateHandlerShowDislikeWarming;
- (void)WFFeedDelegateHandlerTableViewAwayFromTop;
- (void)WFFeedDelegateHandlerTableViewSrollToTop;
- (void)WFFeedDelegateHandlerFooterRefreshFinishedWithCount:(int)arg1 channel:(WFKNativeChannel *)arg2;
- (void)WFFeedDelegateHandlerCacheLoadFinishedWithCount:(int)arg1;
- (void)WFFeedDelegateHandlerTableViewShouldReturnTopWithAnimated:(_Bool)arg1;
- (void)WFFeedDelegateHandlerTableViewShouldReloadData;
- (void)WFFeedDelegateHandlerFirstLoadFinishedWithCount:(int)arg1;
- (void)WFFeedDelegateHandlerShowWarmingWithCount:(int)arg1;
- (void)WFFeedDelegateHandlerPushWebControllerWithUrl:(NSString *)arg1;
- (void)WFFeedDelegateHandlerErrorViewShouldShow:(_Bool)arg1;
@end

