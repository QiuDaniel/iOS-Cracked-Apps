//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class NSDate, NSLayoutConstraint, QLInteractLivePromoButton, QLInteractLivePromoViewController, QLInteractLiveSubscribeItem, QLLiveActorsHeadView, UILabel, UIView;

@interface QLInteractLivePromoTableViewCell : QLBaseTabelViewCell
{
    QLInteractLiveSubscribeItem *_liveSubscribeInfo;
    QLInteractLivePromoViewController *_viewController;
    QLInteractLivePromoButton *_promoButton;
    QLLiveActorsHeadView *_avatarView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    NSDate *_lastUpdate;
    NSLayoutConstraint *_avatarViewWidth;
    double _avatarViewWidth_constant;
    UIView *_fakeSeparator;
    NSLayoutConstraint *_fakeSeparatorHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *fakeSeparatorHeight; // @synthesize fakeSeparatorHeight=_fakeSeparatorHeight;
@property(nonatomic) __weak UIView *fakeSeparator; // @synthesize fakeSeparator=_fakeSeparator;
@property(nonatomic) double avatarViewWidth_constant; // @synthesize avatarViewWidth_constant=_avatarViewWidth_constant;
@property(nonatomic) __weak NSLayoutConstraint *avatarViewWidth; // @synthesize avatarViewWidth=_avatarViewWidth;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) __weak UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) __weak UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) __weak QLLiveActorsHeadView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak QLInteractLivePromoButton *promoButton; // @synthesize promoButton=_promoButton;
@property(nonatomic) __weak QLInteractLivePromoViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak QLInteractLiveSubscribeItem *liveSubscribeInfo; // @synthesize liveSubscribeInfo=_liveSubscribeInfo;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)setHiddenFakeSeparator:(_Bool)arg1;
- (void)updateLiveSubscribeInfo:(id)arg1 onViewController:(id)arg2;
- (void)testAutolabelsize:(id)arg1;
- (void)timerLoopPatrolByNotification:(id)arg1;
- (void)hiddenAvatarView:(_Bool)arg1;
- (void)updateUserInterface;
- (void)commonIBDesignble;
- (void)subscribeAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reportInfo;

@end
