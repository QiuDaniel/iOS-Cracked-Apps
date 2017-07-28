//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCMarqueeLabel, NMAirplayButton, NSString, UIButton;

@interface NMVideoTopBar : UIView
{
    UIButton *_backButton;
    MCMarqueeLabel *_titleLabel;
    UIButton *_shareButton;
    NMAirplayButton *_airPlayButton;
    _Bool _hideShareButton;
    _Bool _showAirPlay;
    id <NMVideoTopBarDelegate> _delegate;
    NSString *_title;
}

@property(nonatomic) _Bool showAirPlay; // @synthesize showAirPlay=_showAirPlay;
@property(nonatomic) _Bool hideShareButton; // @synthesize hideShareButton=_hideShareButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <NMVideoTopBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShareButtonEnable:(_Bool)arg1;
- (void)shareAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
