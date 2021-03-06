//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TXChaorenFlowCardItemModel, TXGradientAndShadowView, UIButton, UILabel, UITextView;

@interface TXSpecialFlowDetailView : UIView
{
    TXChaorenFlowCardItemModel *_model;
    TXGradientAndShadowView *_btnBgView;
    UILabel *_titleLabel;
    UITextView *_contentTextView;
    UIButton *_buyButton;
    UIButton *_closeButton;
    UIView *_disableMaskView;
}

+ (id)PayBtnClicked;
+ (id)CloseBtnClicked;
@property(retain, nonatomic) UIView *disableMaskView; // @synthesize disableMaskView=_disableMaskView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TXGradientAndShadowView *btnBgView; // @synthesize btnBgView=_btnBgView;
@property(retain, nonatomic) TXChaorenFlowCardItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)onPayBtnClick:(id)arg1;
- (void)onCloseBtnClick:(id)arg1;
- (void)setThemeSkin:(_Bool)arg1;
- (void)updateUI;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *CloseBtnClicked; // @dynamic CloseBtnClicked;
@property(readonly, nonatomic) NSString *PayBtnClicked; // @dynamic PayBtnClicked;

@end

