//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWCountDownTimeNumberView, NSString, NSTimer;

@interface GWHomeCountDownTimeView : UIView
{
    GWCountDownTimeNumberView *_dayNumberView;
    GWCountDownTimeNumberView *_hourNumberView;
    GWCountDownTimeNumberView *_minuteNumberView;
    GWCountDownTimeNumberView *_secondNumberView;
    GWCountDownTimeNumberView *_msecNumberView;
    double _numAndTextMargin;
    NSString *_viewID;
    UIView *_contentView;
    double _animationDuration;
    NSTimer *_animationTimer;
    long long _countDownInt;
}

@property(nonatomic) long long countDownInt; // @synthesize countDownInt=_countDownInt;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
@property(nonatomic) double numAndTextMargin; // @synthesize numAndTextMargin=_numAndTextMargin;
@property(retain, nonatomic) GWCountDownTimeNumberView *msecNumberView; // @synthesize msecNumberView=_msecNumberView;
@property(retain, nonatomic) GWCountDownTimeNumberView *secondNumberView; // @synthesize secondNumberView=_secondNumberView;
@property(retain, nonatomic) GWCountDownTimeNumberView *minuteNumberView; // @synthesize minuteNumberView=_minuteNumberView;
@property(retain, nonatomic) GWCountDownTimeNumberView *hourNumberView; // @synthesize hourNumberView=_hourNumberView;
@property(retain, nonatomic) GWCountDownTimeNumberView *dayNumberView; // @synthesize dayNumberView=_dayNumberView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createSubviews;
- (void)setCountDownTimeToView:(id)arg1;
- (void)calculateTime:(long long)arg1;
- (void)setDays:(long long)arg1 andHours:(long long)arg2 andMinutes:(long long)arg3 andSeconds:(long long)arg4;
- (void)startTimer;
- (void)stopTimer;
- (void)animationTimerInvalidate;
- (void)initWithTimer;
- (void)caculateTimeRun;

@end

