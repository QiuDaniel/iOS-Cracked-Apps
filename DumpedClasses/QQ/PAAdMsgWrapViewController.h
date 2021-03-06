//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAAdMsgPageViewController.h"

#import "PAAdMsgVCDelegate.h"
#import "PAAdMsgViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, PAAdMsgCoverViewController, PAAdMsgViewModel, PAAdMsgWebviewController, UIPanGestureRecognizer;

@interface PAAdMsgWrapViewController : PAAdMsgPageViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PAAdMsgVCDelegate, PAAdMsgViewControllerProtocol>
{
    UIPanGestureRecognizer *_panGesture;
    _Bool _readyForPanGesture;
    PAAdMsgCoverViewController *_coverViewController;
    PAAdMsgWebviewController *_articleViewController;
    PAAdMsgViewModel *_viewModel;
}

@property(retain, nonatomic) PAAdMsgViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PAAdMsgWebviewController *articleViewController; // @synthesize articleViewController=_articleViewController;
@property(retain, nonatomic) PAAdMsgCoverViewController *coverViewController; // @synthesize coverViewController=_coverViewController;
- (void).cxx_destruct;
- (void)loadStatusBar;
- (void)adMsgReportNegFeedback;
- (void)closePAAdMsgViewController;
- (_Bool)needDismissWhenAVChat;
- (void)pageDidChanged;
- (void)pageViewController:(id)arg1 didShowPage:(long long)arg2;
- (void)reloadArticleViewController;
- (void)reloadCoverViewController;
- (id)viewControllerForPage:(long long)arg1;
- (unsigned long long)numberOfPage;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)presentInViewController:(id)arg1;
- (_Bool)shouldHandlePanGesture;
- (void)panGestureAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)appDidBecomeActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

