//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAdvertisement, NMMV, UIButton;

@interface NMMVAdBannerView : UIView
{
    UIButton *_closeButton;
    UIButton *_adButton;
    NMAdvertisement *_advertisement;
    NMMV *_mv;
    id _delegate;
}

+ (struct CGSize)adSize;
+ (struct CGSize)closeButtonSize;
+ (struct CGSize)size;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(retain, nonatomic) NMAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void).cxx_destruct;
- (void)closeClicked:(id)arg1;
- (void)adClicked:(id)arg1;
- (void)_addBILogForAction:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
