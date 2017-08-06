//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "OHAttributedLabelDelegate.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, NSString, OHAttributedLabel;

@interface KTVWithdrawBoundAliResult : UIView <OHAttributedLabelDelegate>
{
    KGThemeImageView *resultImg;
    KGThemeLabel *resultLabel;
    OHAttributedLabel *resultDesLabel;
    KGThemeButton *againBtn;
    KGThemeButton *backToWealthBtn;
    id <KTVWithdrawResultViewDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVWithdrawResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)backAction;
- (void)againAction;
- (void)setType:(unsigned long long)arg1 andSuccess:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
