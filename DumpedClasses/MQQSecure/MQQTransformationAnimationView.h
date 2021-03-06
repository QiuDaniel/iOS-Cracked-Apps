//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSString, UIImageView;

@interface MQQTransformationAnimationView : UIView <CAAnimationDelegate>
{
    UIView *_explosionView;
    UIView *_convergeView;
    UIImageView *_convergeImageView;
    long long _transformationAnimationCount;
    long long _particalSize;
    NSMutableArray *_convergeTempArray;
    CADisplayLink *_convergeDisplayLink;
    CDUnknownBlockType _transformationCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType transformationCompletion; // @synthesize transformationCompletion=_transformationCompletion;
@property(retain, nonatomic) CADisplayLink *convergeDisplayLink; // @synthesize convergeDisplayLink=_convergeDisplayLink;
@property(retain, nonatomic) NSMutableArray *convergeTempArray; // @synthesize convergeTempArray=_convergeTempArray;
@property(nonatomic) long long particalSize; // @synthesize particalSize=_particalSize;
@property(readonly, nonatomic) UIView *convergeView; // @synthesize convergeView=_convergeView;
@property(readonly, nonatomic) UIView *explosionView; // @synthesize explosionView=_explosionView;
- (double)randomValueBetweenMinValue:(double)arg1 maxValue:(double)arg2 amounnt:(long long)arg3;
- (void)updateConvergeImageView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startTransformationAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

