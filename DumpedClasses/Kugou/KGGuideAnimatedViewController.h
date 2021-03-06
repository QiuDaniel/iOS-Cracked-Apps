//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class KGGuideAnimationManager, KGGuideBackgroundView, NSString, UIPageControl, UIScrollView;

@interface KGGuideAnimatedViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isEnd;
    id <KGGuideAnimatedViewControllerDelegate> _delegate;
    KGGuideAnimationManager *_guideAnimationManager;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    KGGuideBackgroundView *_backgroundView;
}

@property(retain, nonatomic) KGGuideBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KGGuideAnimationManager *guideAnimationManager; // @synthesize guideAnimationManager=_guideAnimationManager;
@property(nonatomic) __weak id <KGGuideAnimatedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

