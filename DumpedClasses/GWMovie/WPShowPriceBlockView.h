//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIScrollView, WPShowTimesModel, WPShowsPriceModel;

@interface WPShowPriceBlockView : UIView
{
    _Bool _isHighlight;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIScrollView *_subTitleScrollView;
    WPShowsPriceModel *_viewModel;
    WPShowTimesModel *_currentTimesModel;
    UIImageView *_iconImageView;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(retain, nonatomic) WPShowTimesModel *currentTimesModel; // @synthesize currentTimesModel=_currentTimesModel;
@property(retain, nonatomic) WPShowsPriceModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIScrollView *subTitleScrollView; // @synthesize subTitleScrollView=_subTitleScrollView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)fillSubTitleWithPriceModel:(id)arg1;
- (void)fillPriceTitleWithPriceModel:(id)arg1;
- (id)iconFileNameWith:(id)arg1;
- (void)configShowPriceBlockViewWithModel:(id)arg1 withHighlight:(_Bool)arg2;
- (void)changeSelectedStatus:(id)arg1;
- (void)configShowPriceBlockViewWithModel:(id)arg1;
- (void)setViews;
- (id)initWithFrame:(struct CGRect)arg1 withType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

