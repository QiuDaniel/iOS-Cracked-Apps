//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthUIPresenting-Protocol.h"
#import "FBFlipViewControllerDelegate-Protocol.h"
#import "FBFlyUpViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UINavigationController, UIViewController;
@protocol FBAuthUIPresenterAnimationDelegate, OS_dispatch_queue;

@interface FBDBLPadUIPresenter : NSObject <FBFlipViewControllerDelegate, FBFlyUpViewControllerDelegate, UINavigationControllerDelegate, FBAuthUIPresenting>
{
    _Bool _topViewIsTransient;
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _modalPresentationBlock;
    UINavigationController *_navController;
    UIViewController *_flipController;
    UINavigationController *_flipNavController;
    NSObject<OS_dispatch_queue> *_navOperationQueue;
    _Bool _navOperationQueueNeedsResume;
    _Bool _resetNavStackOnPush;
    id <FBAuthUIPresenterAnimationDelegate> _animationDelegate;
}

@property(nonatomic) __weak id <FBAuthUIPresenterAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)_resumeQueue;
- (void)_pauseQueueIfNeeded;
- (void)_dismissFlipControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_popNavViewControllerIfTop:(id)arg1 animated:(_Bool)arg2;
- (void)_popFlipViewControllerIfTop:(id)arg1 animated:(_Bool)arg2;
- (id)_newNavControllerWithRootViewController:(id)arg1;
- (void)_pushNavViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pushFlipViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_onQueuePopTransientViewControllerAnimated:(_Bool)arg1;
- (void)_onQueuePopViewControllerAnimated:(_Bool)arg1;
- (void)_replaceAllWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_onQueueReplaceAllWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_onQueueReplaceTopViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_onQueueResetStackOnNextPush;
- (void)_onQueueSetTopViewControllerIsTransient:(_Bool)arg1;
- (void)_onQueuePushTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_onQueuePushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flyUpViewControllerDidTapBackground:(id)arg1;
- (void)flipViewControllerDidTapBackground:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)dismissPresenter;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetPresenterForReuse;
- (void)resetStackOnNextPush;
- (void)presentToastWithTitle:(id)arg1 message:(id)arg2;
- (void)popTransientViewControllerAnimated:(_Bool)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)replaceAllWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)replaceTopViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setTopViewControllerIsTransient:(_Bool)arg1;
- (void)pushTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPresentationBlock:(CDUnknownBlockType)arg1 modalPresentationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

