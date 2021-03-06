//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWMovieBaseTableViewControllerDelegate-Protocol.h"
#import "GWScrollTabViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GWBoundScrollView, GWSalingMovieListViewController, GWScrollTabView, GWWillSaleMovieListViewController, NSMutableArray, NSString, UIButton, UIPageControl, UIView;

@interface GWMovieViewController : GWBaseViewController <GWScrollTabViewDelegate, UIScrollViewDelegate, GWMovieBaseTableViewControllerDelegate>
{
    unsigned long long _selectedMovieType;
    UIButton *_searchButton;
    long long _currentPage;
    GWSalingMovieListViewController *_salingMovieViewController;
    GWWillSaleMovieListViewController *_willSaleMovieListViewController;
    GWScrollTabView *_topButtonView;
    GWBoundScrollView *_mainScrollView;
    UIView *_headView;
    UIPageControl *_pageControl;
    NSMutableArray *_tableViewList;
}

+ (id)createGWMovieViewController;
@property(retain, nonatomic) NSMutableArray *tableViewList; // @synthesize tableViewList=_tableViewList;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak GWBoundScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(nonatomic) __weak GWScrollTabView *topButtonView; // @synthesize topButtonView=_topButtonView;
@property(retain, nonatomic) GWWillSaleMovieListViewController *willSaleMovieListViewController; // @synthesize willSaleMovieListViewController=_willSaleMovieListViewController;
@property(retain, nonatomic) GWSalingMovieListViewController *salingMovieViewController; // @synthesize salingMovieViewController=_salingMovieViewController;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) unsigned long long selectedMovieType; // @synthesize selectedMovieType=_selectedMovieType;
- (void).cxx_destruct;
- (unsigned long long)scollTabNumberOfTitle:(id)arg1;
- (id)scollTab:(id)arg1 titleWithIndex:(unsigned long long)arg2;
- (void)onTabClicked:(long long)arg1;
- (void)onFinishRequest:(id)arg1;
- (void)onBeginRequest:(id)arg1 IsClearOld:(_Bool)arg2;
- (void)showMessage:(id)arg1;
- (void)showError:(id)arg1;
- (void)onVideoButtonClick:(id)arg1 MovieName:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)gotoPageWithPageIndex:(long long)arg1 UseAnima:(_Bool)arg2;
- (void)handleTableViewsScrollToTopState:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadAllControls;
- (void)exchangedFocusScrollView;
- (void)disableFocusScrollView;
- (void)selectedCityChanged:(id)arg1;
- (void)backProcess;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)jumpToSearchMode;
- (void)configSingleRightItemBar:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

