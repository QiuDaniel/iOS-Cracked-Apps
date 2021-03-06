//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPFansGuidePromptView.h"

#import "MLEmojiLabelDelegate-Protocol.h"

@class LOTAnimationView, MLEmojiLabel, NSString, UIButton, UIImageView, UILabel;

@interface QYPPFansGuideGuardEndPromptView : QYPPFansGuidePromptView <MLEmojiLabelDelegate>
{
    UILabel *_lblGuardDuration;
    UILabel *_lblPercent;
    LOTAnimationView *_ivAnimationBg;
    UIImageView *_ivCircleBg;
    UIImageView *_ivCircleIcon;
    UILabel *_lblSignOnTitle;
    MLEmojiLabel *_lblAutoVote;
    UILabel *_lblIncrease;
    UILabel *_lblIncreaseAward;
    UIButton *_btnGuide;
    struct QYPPSignEndPromptViewStruct _signEndDataStruct;
}

@property(retain, nonatomic) UIButton *btnGuide; // @synthesize btnGuide=_btnGuide;
@property(retain, nonatomic) UILabel *lblIncreaseAward; // @synthesize lblIncreaseAward=_lblIncreaseAward;
@property(retain, nonatomic) UILabel *lblIncrease; // @synthesize lblIncrease=_lblIncrease;
@property(retain, nonatomic) MLEmojiLabel *lblAutoVote; // @synthesize lblAutoVote=_lblAutoVote;
@property(retain, nonatomic) UILabel *lblSignOnTitle; // @synthesize lblSignOnTitle=_lblSignOnTitle;
@property(retain, nonatomic) UIImageView *ivCircleIcon; // @synthesize ivCircleIcon=_ivCircleIcon;
@property(retain, nonatomic) UIImageView *ivCircleBg; // @synthesize ivCircleBg=_ivCircleBg;
@property(retain, nonatomic) LOTAnimationView *ivAnimationBg; // @synthesize ivAnimationBg=_ivAnimationBg;
@property(retain, nonatomic) UILabel *lblPercent; // @synthesize lblPercent=_lblPercent;
@property(retain, nonatomic) UILabel *lblGuardDuration; // @synthesize lblGuardDuration=_lblGuardDuration;
@property(nonatomic) struct QYPPSignEndPromptViewStruct signEndDataStruct; // @synthesize signEndDataStruct=_signEndDataStruct;
- (void).cxx_destruct;
- (void)mlEmojiLabel:(id)arg1 didSelectLink:(id)arg2 withType:(int)arg3;
- (void)showWithAnimated:(_Bool)arg1;
- (void)qp_fansSignoutBtnClick:(id)arg1;
- (void)setDicInfoData:(id)arg1;
- (void)loadData;
- (void)creatSubViews;
- (void)layOutHasVoteActivitySubViews;
- (void)layOutNormalSubViews;
- (void)updateHasVoteActivityConfigData;
- (void)configData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

