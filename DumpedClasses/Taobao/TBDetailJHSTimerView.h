//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSTimer, UIColor;

@interface TBDetailJHSTimerView : UIControl
{
    double _scheduleInterval;
    double _targetTime;
    NSTimer *_timer;
    double _leftTime;
    UIColor *_timeBackgroudColor;
    UIColor *_timeForegroudColor;
    id <TBDetailJHSTimerViewDelegate> _drawerDelegate;
    id <TBDetailJHSTimerViewDelegate> _strongDrawerDelegate;
}

+ (id)timerViewWithBlackStyle;
@property(retain, nonatomic) id <TBDetailJHSTimerViewDelegate> strongDrawerDelegate; // @synthesize strongDrawerDelegate=_strongDrawerDelegate;
@property(nonatomic) __weak id <TBDetailJHSTimerViewDelegate> drawerDelegate; // @synthesize drawerDelegate=_drawerDelegate;
@property(retain, nonatomic) UIColor *timeForegroudColor; // @synthesize timeForegroudColor=_timeForegroudColor;
@property(retain, nonatomic) UIColor *timeBackgroudColor; // @synthesize timeBackgroudColor=_timeBackgroudColor;
@property(nonatomic) double leftTime; // @synthesize leftTime=_leftTime;
- (void).cxx_destruct;
- (id)serverDate;
- (void)update;
- (void)stop;
- (void)start;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initTimerView;
- (id)initWithDelegateStrongRef:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end
