//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQReadInJoyMessageViewDelegate.h"
#import "QQReadInJoySubsDelegate.h"
#import "ReadInJoyMessageDelegate.h"
#import "TabControllerDelegate.h"

@class NSDate, NSMutableArray, NSString, QQReadInJoySubsViewController;

@interface QQReadInJoyMessageViewController : QQViewController <QQReadInJoyMessageViewDelegate, TabControllerDelegate, QQReadInJoySubsDelegate, ReadInJoyMessageDelegate>
{
    NSMutableArray *_messageArticleLists;
    NSMutableArray *_messageStrategyLists;
    NSMutableArray *_messageAlgorithmLists;
    NSDate *_enterDate;
    NSMutableArray *_dates;
    NSMutableArray *_labelList;
    _Bool _firstTimeLoadData;
    _Bool _isFirstAppearFromMsgTab;
    _Bool _isFromSearch;
    _Bool _isForceRefresh;
    _Bool _isForPageVC;
    _Bool _firstAppearFromTab;
    QQReadInJoySubsViewController *_subViewController;
    double _enterTime;
}

+ (double)kdUseDuration;
+ (void)handleMsgUnreadCountCleanWithUin:(id)arg1;
@property(nonatomic) _Bool firstAppearFromTab; // @synthesize firstAppearFromTab=_firstAppearFromTab;
@property(nonatomic) _Bool isForPageVC; // @synthesize isForPageVC=_isForPageVC;
@property(nonatomic) _Bool isForceRefresh; // @synthesize isForceRefresh=_isForceRefresh;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
@property(retain, nonatomic) QQReadInJoySubsViewController *subViewController; // @synthesize subViewController=_subViewController;
- (void)TabController:(id)arg1 didUnSelect:(id)arg2 to:(id)arg3;
- (void)TabController:(id)arg1 didSelect:(id)arg2 from:(id)arg3;
- (void)interestSettingUpdated;
- (void)readInJoyTabUnSelected;
- (void)readInJoyMessageTabClicked:(_Bool)arg1;
- (_Bool)shouldShowRefreshTip;
- (void)dataReportForUseDuration;
- (double)getUseDuration;
- (void)goInterestLabelSetting;
- (void)refreshRIJChangeMessage:(id)arg1;
- (void)setRefreshTime:(double)arg1 channelId:(unsigned int)arg2;
- (_Bool)shouldRefresh:(unsigned int)arg1;
- (void)loadSearchChannelData;
- (void)readInJoyViewWillDisappear;
- (void)dealloc;
- (void)TabController:(id)arg1 cleanup:(id)arg2;
- (void)updateReadInJoyOperationBitmap:(unsigned int)arg1;
- (void)updateOutRIJTime;
- (void)updateGoRIJTime;
- (void)becomeActive;
- (void)resignActive;
- (void)loadReadInJoyViewNew;
- (void)refreshChannelDataNewWithTips;
- (void)refreshChannelDataNew;
- (_Bool)checkNeedRefreshNew;
- (void)reportDataExpose;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onExitReadInJoy;
- (void)updateReadInJoyBrief;
- (void)parentTabWillDisappear;
- (void)loadOldChannelData;
- (void)readInJoyViewWillAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)leftButtonDidReset;
- (void)TabController:(id)arg1 menuLongPress:(id)arg2;
- (void)setControllerApperant;
- (void)openOrCloseNightMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)accountChanged;
- (void)viewDidLoad;
- (void)preloadWebResource;
- (void)reportExitFeeds;
- (void)reportEnterFeeds;
- (void)recordDuration;
- (void)resetDuration;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

