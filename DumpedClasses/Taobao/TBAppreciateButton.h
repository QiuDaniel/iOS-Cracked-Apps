//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPoppedCheckButton.h"

@class UILabel;

@interface TBAppreciateButton : TBPoppedCheckButton
{
}

@property(nonatomic) double iconSize;
@property(readonly, nonatomic) UILabel *unappreciatedLabel;
@property(readonly, nonatomic) UILabel *appreciatedLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAppreciateIconSize:(double)arg1;
- (void)setupWithSize:(double)arg1;

@end

