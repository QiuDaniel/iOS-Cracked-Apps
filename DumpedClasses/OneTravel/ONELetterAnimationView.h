//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, ONELetterAnimationLayer, UIColor;

@interface ONELetterAnimationView : UIView
{
    ONELetterAnimationLayer *_letterLayer;
    NSArray *_nodes;
    NSArray *_paths;
    NSArray *_masks;
    UIColor *_color;
    double _letterWidth;
    unsigned long long _nodeNumber;
    const double *_maskPathWidths;
}

@property(nonatomic) const double *maskPathWidths; // @synthesize maskPathWidths=_maskPathWidths;
@property(nonatomic) unsigned long long nodeNumber; // @synthesize nodeNumber=_nodeNumber;
@property(nonatomic) double letterWidth; // @synthesize letterWidth=_letterWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *masks; // @synthesize masks=_masks;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
- (void)layoutNodes;
- (void)initNodes;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
