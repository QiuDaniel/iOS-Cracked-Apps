//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CAShapeLayer, UIBezierPath;

@interface ALBBTradeEditViewController : UIViewController
{
    UIBezierPath *path;
    CAShapeLayer *shapeLayer;
    UIViewController *_fromViewController;
}

@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reportView;
- (id)init;

@end

