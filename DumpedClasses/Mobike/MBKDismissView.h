//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MBKViewProtocol.h"

@class MBKDismissViewModel, Mobike_ViewController, NSString, UIButton;

@interface MBKDismissView : UIView <MBKViewProtocol>
{
    UIButton *_dismissButton;
    MBKDismissViewModel *_model;
    id _delegate;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKDismissViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (void)didTapDismissButton:(id)arg1;
- (void)configSubView;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

