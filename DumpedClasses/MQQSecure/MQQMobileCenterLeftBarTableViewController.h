//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQLoginViewControllerDelegate-Protocol.h"
#import "MQQMobileCenterSidebarControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CMMotionManager, MQQAdsModel, NSArray, NSIndexPath, NSMutableDictionary, NSOperationQueue, NSString, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITableView, UITapGestureRecognizer, UIView;

@interface MQQMobileCenterLeftBarTableViewController : MQQBaseViewController <UITableViewDataSource, UITableViewDelegate, MQQMobileCenterSidebarControllerDelegate, MQQLoginViewControllerDelegate, MQQAlertViewDelegate>
{
    NSOperationQueue *_motionOperationQueue;
    double _shakeActionAccelerameter;
    UITableView *_tableView;
    UISwipeGestureRecognizer *_swipeFromleftGesture;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    NSArray *_titles;
    NSMutableDictionary *_deviceInfoDict;
    double _startX;
    NSIndexPath *_selectIndexPath;
    UIView *_maskView;
    CMMotionManager *_motionManager;
    MQQAdsModel *_adsModel;
    struct CGPoint _panBeginPoint;
}

@property(retain, nonatomic) MQQAdsModel *adsModel; // @synthesize adsModel=_adsModel;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(nonatomic) struct CGPoint panBeginPoint; // @synthesize panBeginPoint=_panBeginPoint;
@property(nonatomic) double startX; // @synthesize startX=_startX;
@property(retain, nonatomic) NSMutableDictionary *deviceInfoDict; // @synthesize deviceInfoDict=_deviceInfoDict;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeFromleftGesture; // @synthesize swipeFromleftGesture=_swipeFromleftGesture;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)loginViewController:(id)arg1 didDismissWithLoginInfo:(id)arg2 unifiedAccount:(id)arg3;
- (void)loginViewController:(id)arg1 willDismissWithLoginInfo:(id)arg2 unifiedAccount:(id)arg3;
- (void)refreshDeviceInfo;
- (void)adsButtonClicked:(id)arg1;
- (void)refreshAds;
- (void)relaodLeftBarTableView;
- (void)cmdSwitchUpdateNotification;
- (void)photoBackup;
- (void)accountKeeperStateDidChange:(id)arg1;
- (void)sidebarController:(id)arg1 didHideViewController:(id)arg2;
- (void)sidebarController:(id)arg1 didShowViewController:(id)arg2;
- (void)popOutEncryptAlbum;
- (void)endEncryptedAlbumShakeAction;
- (void)encryptedAlbumShakeAction;
- (void)reloadEncryptedAlbumDisplay;
- (void)outputAccelertionData:(CDStruct_31142d93)arg1;
- (void)startAccelerometer;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)tapGestureAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pushWithTag:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)titleNameWithIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)menuToolsDidChange;
- (void)headshotDidUpdate:(id)arg1;
- (void)dismissThisViewController;
- (void)configureDefaultData:(_Bool)arg1;
- (void)configureTableView;
- (void)loadLeftBarUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)handleCloudTool:(id)arg1;
- (_Bool)pushToPhoneCallShow;
- (_Bool)pushToContactsOptimize;
- (_Bool)pushToPhotosBackup;
- (_Bool)pushToBatteryManager;
- (_Bool)pushToSecretAlbum;
- (_Bool)pushToAccountKeeper;
- (_Bool)pushToQRCodeLogin;
- (_Bool)pushToFeedback;
- (_Bool)pushToAboutSecure;
- (_Bool)pushToDeviceInfo;
- (void)pushViewController:(id)arg1;
- (_Bool)pushToTargetViewControllerWithTag:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

