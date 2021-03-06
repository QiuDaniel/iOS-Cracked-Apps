//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIImageView, UILabel;

@interface YWCKTipView : UIView
{
    UIImageView *_tipImageView;
    UILabel *_tipLabel;
    CALayer *_arrowLayer;
    struct CGPoint _fitArrowPositionOffset;
}

@property(nonatomic) struct CGPoint fitArrowPositionOffset; // @synthesize fitArrowPositionOffset=_fitArrowPositionOffset;
@property(nonatomic) __weak CALayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
- (void).cxx_destruct;
- (struct CGRect)fitFrameForArrowPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;

@end

