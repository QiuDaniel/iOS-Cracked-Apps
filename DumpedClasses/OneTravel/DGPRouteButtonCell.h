//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseCardCell.h"

@class UIButton;

@interface DGPRouteButtonCell : DGPBaseCardCell
{
    UIButton *_routeButton;
}

@property(retain, nonatomic) UIButton *routeButton; // @synthesize routeButton=_routeButton;
- (void).cxx_destruct;
- (void)configCell;
- (void)routeButtonPressed:(id)arg1;
- (void)configConstraints;
- (void)setupSubviews;

@end

