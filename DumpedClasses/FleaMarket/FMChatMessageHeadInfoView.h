//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMButton, FMImageView, MASConstraint, UILabel;

@interface FMChatMessageHeadInfoView : UIView
{
    FMImageView *_infoImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    FMImageView *_statusImageView;
    UILabel *_statusLabel;
    FMButton *_moreButton;
    UILabel *_errorLabel;
    MASConstraint *statusLeftWithIcon;
    MASConstraint *statusLeftWithoutIcon;
    MASConstraint *actionRightWithMore;
    MASConstraint *actionRightWithoutMore;
    _Bool _hasLoad;
    FMButton *_actionButton;
}

@property(nonatomic) _Bool hasLoad; // @synthesize hasLoad=_hasLoad;
@property(readonly, nonatomic) FMButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)showMoreActionSheetWithOrderInfoDO:(id)arg1;
- (void)showMoreActionSheetWithHeadInfoDO:(id)arg1;
- (void)moreActionTapped;
- (void)doHeadAction:(id)arg1;
- (void)actionButtonTapped;
- (void)infoImageTapped;
- (void)infoTapped;
- (void)setSubTitleLabelText:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)setInfoImageView:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)resolvedTopicItem;
- (void)showErrorMessage:(id)arg1;
- (void)setItemDO:(id)arg1;
- (void)setPostFeeTextWithOrderInfoDO:(id)arg1;
- (void)setTotalFeeTextWithOrderInfoDO:(id)arg1;
- (void)setOrderInfoDO:(id)arg1;
- (void)setHeadInfoDO:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)setupErrorLabel;
- (void)setupBottomLineView;
- (void)setupActionButton;
- (void)setStatusImageAndLabel;
- (void)setupSubTitleLabel;
- (void)setupTitleLabel;
- (void)setupInfoImageView;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end
