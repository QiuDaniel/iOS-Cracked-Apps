//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIFont, UILabel;

@interface QLFanTuanTailTextLabelView : UIView
{
    struct CGSize _adaptiveTitleSize;
    struct CGSize _adaptiveTailSize;
    UILabel *_titleLabel;
    UILabel *_tailLabel;
    NSString *_titleText;
    NSString *_tailText;
    UIFont *_titleFont;
    UIFont *_tailTitleFont;
    double _interGap;
}

@property(nonatomic, setter=interGap:) double interGap; // @synthesize interGap=_interGap;
@property(retain, nonatomic) UIFont *tailTitleFont; // @synthesize tailTitleFont=_tailTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *tailText; // @synthesize tailText=_tailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)adaptiveSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1 tailTextColor:(id)arg2;
- (void)setTitleText:(id)arg1 tailText:(id)arg2;
- (void)setTitleFont:(id)arg1 tailTitleFont:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

