//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface ARTNode : UIView
{
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (void)renderLayerTo:(struct CGContext *)arg1;
- (void)renderTo:(struct CGContext *)arg1;
- (void)invalidate;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;

@end

