//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIButton, UILabel, __LCUserInfoView;
@protocol __LCNavigationDelegate;

@interface __LCNavigationBar : UIView
{
    UIButton *_closeButton;
    UIButton *_doneButton;
    UILabel *_titleLabel;
    __LCUserInfoView *_userinfoView;
    double _barWidth;
    double _barHeight;
    long long _style;
    id <__LCNavigationDelegate> _delegate;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <__LCNavigationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)itemAction:(id)arg1;
- (void)createBackButton;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;
- (void)updateLivingDuration:(double)arg1;
- (void)updateFollowCount:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

