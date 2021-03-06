//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSMutableArray, NSString, XYPHRedPacket;

@interface XYPHPostNoteChooseRedPacketViewController : XYPHBaseViewController <UIViewControllerTransitioningDelegate>
{
    XYPHRedPacket *_selectedRedPacket;
    NSArray *_redPackets;
    NSString *_redPacketDesc;
    id <XYPHPostNoteChooseRedPacketViewControllerDelegate> _delegate;
    NSMutableArray *_redPacketViews;
}

@property(retain, nonatomic) NSMutableArray *redPacketViews; // @synthesize redPacketViews=_redPacketViews;
@property(nonatomic) __weak id <XYPHPostNoteChooseRedPacketViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *redPacketDesc; // @synthesize redPacketDesc=_redPacketDesc;
@property(retain, nonatomic) NSArray *redPackets; // @synthesize redPackets=_redPackets;
@property(retain, nonatomic) XYPHRedPacket *selectedRedPacket; // @synthesize selectedRedPacket=_selectedRedPacket;
- (void).cxx_destruct;
- (void)giveUpButtonTouchUpInside:(id)arg1;
- (void)confirmButtonTouchUpInside:(id)arg1;
- (void)redPacketViewTouchUpInside:(id)arg1;
- (void)closeButtonTouchUpInside:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)setup;
- (void)setupRedPacketView;
- (void)setupCloseButton;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

