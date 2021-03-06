//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KGPurchasedMusicHeaderViewDelegate.h"
#import "NoMusicViewDelegate.h"

@class KGDefaultNetErrorView, KGMusicControlViewController, KGMusicTableViewAdapter, KGPurchasedMusicHeaderView, NSMutableArray, NSString, NoMuicView, UIView;

@interface KGMyPurchasedMusicPackageViewController : KGScrollPageViewController <KGMusicTableViewAdapterDelegate, KGMusicTableViewAdapterDataSource, NoMusicViewDelegate, KGPurchasedMusicHeaderViewDelegate>
{
    _Bool _isLoadingFirstPage;
    _Bool _isShowLoadingDog;
    UIView *_headerView;
    NSMutableArray *_arrMusics;
    long long _musicCount;
    NSString *_btnTitle;
    KGMusicTableViewAdapter *_tableViewAdapter;
    KGMusicControlViewController *_musicControl;
    NoMuicView *_noMusicView;
    KGPurchasedMusicHeaderView *_topView;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) KGPurchasedMusicHeaderView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NoMuicView *noMusicView; // @synthesize noMusicView=_noMusicView;
@property(retain, nonatomic) KGMusicControlViewController *musicControl; // @synthesize musicControl=_musicControl;
@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(nonatomic) _Bool isShowLoadingDog; // @synthesize isShowLoadingDog=_isShowLoadingDog;
@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(nonatomic) _Bool isLoadingFirstPage; // @synthesize isLoadingFirstPage=_isLoadingFirstPage;
@property(nonatomic) long long musicCount; // @synthesize musicCount=_musicCount;
@property(copy, nonatomic) NSMutableArray *arrMusics; // @synthesize arrMusics=_arrMusics;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)setHeaderTipViewHidden;
- (void)sendClickHopperStatistic;
- (void)sendExposureHopperStatistic;
- (void)sendBIForRepurchased;
- (void)didClickedButtonWithType:(unsigned long long)arg1;
- (void)gotoSingleSongBestseller;
- (void)gotoBuyMusicPackagePage;
- (id)getSongInfosFromEntity:(id)arg1;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateUI;
- (void)hiddenBlankView;
- (void)showBlankView;
- (void)addCharacterImageForTableviewCell:(id)arg1 andIsCheckBoxStyle:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (void)requestAgain;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (void)addMoreDataActionWithTabelView:(id)arg1;
- (void)getNextPage;
- (void)getData;
- (void)showOnlyWifiView;
- (void)requestData;
- (void)didReceiveMemoryWarning;
- (void)changeShotBgColor:(id)arg1 isShow:(_Bool)arg2;
- (void)viewManagerChangeState:(int)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)dealloc;
- (void)checkShouldReload;
- (void)cancelAction;
- (void)refreshSubView;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

