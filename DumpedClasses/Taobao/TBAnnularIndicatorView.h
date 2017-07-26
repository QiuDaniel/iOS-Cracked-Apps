//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBHUDAnimatableIndicator.h"

@class CAShapeLayer, NSString, UIColor;

@interface TBAnnularIndicatorView : UIView <TBHUDAnimatableIndicator>
{
    _Bool _hidesWhenStopped;
    double _startAngle;
    double _endAngle;
    double _annulusWidth;
    UIColor *_annulusColor;
    CAShapeLayer *_annulusLayer;
}

@property(retain, nonatomic) CAShapeLayer *annulusLayer; // @synthesize annulusLayer=_annulusLayer;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(retain, nonatomic) UIColor *annulusColor; // @synthesize annulusColor=_annulusColor;
@property(nonatomic) double annulusWidth; // @synthesize annulusWidth=_annulusWidth;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)annulusPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
