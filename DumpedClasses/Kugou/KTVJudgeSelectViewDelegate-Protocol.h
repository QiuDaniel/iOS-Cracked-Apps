//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVJudgeSelectView, KTVMakeJudgeView, NSString, UIButton;

@protocol KTVJudgeSelectViewDelegate <NSObject>

@optional
- (void)inviteCanvassSuccess;
- (void)shuffleCompleteWithLeftMaskString:(NSString *)arg1 rightMaskString:(NSString *)arg2;
- (void)sendFailOpusWithPkId:(int)arg1 opusId:(int)arg2;
- (void)selectView:(KTVJudgeSelectView *)arg1 toUserSpaceWithPlayerId:(long long)arg2;
- (void)selectView:(KTVJudgeSelectView *)arg1 loadNextJudgeInfoAtIndex:(long long)arg2;
- (void)selectView:(KTVJudgeSelectView *)arg1 followSelectPlayerOfView:(KTVMakeJudgeView *)arg2 followButton:(UIButton *)arg3 complete:(void (^)(unsigned long long))arg4;
- (void)selectView:(KTVJudgeSelectView *)arg1 praiseSelectOpusOfView:(KTVMakeJudgeView *)arg2 complete:(void (^)(_Bool, _Bool, NSDictionary *))arg3;
- (void)selectView:(KTVJudgeSelectView *)arg1 getOpusPlayURLAndKrcAtIndex:(long long)arg2;
- (void)goListenWithOpusId:(long long)arg1;
- (void)goCompetiton:(KTVJudgeSelectView *)arg1;
@end
