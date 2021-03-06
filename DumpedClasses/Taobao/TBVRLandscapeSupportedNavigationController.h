//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBNavigationController.h"

@class UIViewController;

@interface TBVRLandscapeSupportedNavigationController : TBNavigationController
{
    _Bool landScapeLeft;
    _Bool _shouldNotDismiss;
    _Bool _pushedFromVRVC;
    id <TBVRLandscapeSupportedNavigationControllerDelegate> _liveNavDelegate;
    UIViewController *_sourceViewController;
}

@property(nonatomic) _Bool pushedFromVRVC; // @synthesize pushedFromVRVC=_pushedFromVRVC;
@property(nonatomic) _Bool shouldNotDismiss; // @synthesize shouldNotDismiss=_shouldNotDismiss;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak id <TBVRLandscapeSupportedNavigationControllerDelegate> liveNavDelegate; // @synthesize liveNavDelegate=_liveNavDelegate;
- (void).cxx_destruct;
- (_Bool)secondVCisVRVC;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 transitionStyle:(int)arg3;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)isActiveViewController;
- (void)handlePan:(id)arg1;
- (id)initWithRootViewController:(id)arg1 landScapeLeft:(_Bool)arg2;

@end

