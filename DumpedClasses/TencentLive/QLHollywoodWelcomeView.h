//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView, UILabel;

@interface QLHollywoodWelcomeView : UIView
{
    UILabel *label;
    UIImageView *arrowView;
    NSString *_url;
    NSString *_viewID;
    NSArray *_hollywoodReportKV;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHollywoodReportKV:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setViewID:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)clickView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
