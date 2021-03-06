//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMBaseViewController.h"

#import "IOMLiveMessageInputViewDelegate-Protocol.h"
#import "QYBasePlayerControllerDelegate-Protocol.h"

@class IOMCouponsAnimationView, IOMLiveChatViewController, IOMLiveDetailObject, IOMLiveDragView, IOMLiveMessageInputView, IOMLivePromotionView, IOMMenuView, IOMPlayerLayerView, IOMPortraitAnnounceView, IOMSKUSelectViewController, NSMutableArray, NSString, NSTimer, UIControl, UIImageView, UIView;

@interface IOMLiveViewController : IOMBaseViewController <IOMLiveMessageInputViewDelegate, QYBasePlayerControllerDelegate>
{
    _Bool _engineFromFullPlay;
    _Bool _canReply;
    _Bool _getStartMessage;
    _Bool _withoutNetWork;
    _Bool _isPlayFromReplayButton;
    _Bool _showSKU;
    NSString *_liveId;
    CDUnknownBlockType _closeBlock;
    long long _liveRoomStatus;
    IOMPlayerLayerView *_playerLayerView;
    double _lastCurrentTime;
    IOMLiveMessageInputView *_chatInputView;
    UIControl *_chatMaskView;
    UIView *_keyBoardMaskView;
    IOMLiveDragView *_liveDragView;
    IOMLiveDetailObject *_liveDetail;
    IOMLivePromotionView *_promotionView;
    IOMLiveChatViewController *_chatViewController;
    NSMutableArray *_couponsArray;
    UIImageView *_coverImageView;
    UIView *_pushItemCardView;
    IOMCouponsAnimationView *_couponsView;
    IOMSKUSelectViewController *_skuSelectViewController;
    NSTimer *_startTimer;
    long long _tryLivePlayTimes;
    NSString *_pushGoodID;
    IOMPortraitAnnounceView *_announceView;
    IOMMenuView *_menuView;
}

@property(retain, nonatomic) IOMMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) IOMPortraitAnnounceView *announceView; // @synthesize announceView=_announceView;
@property(copy, nonatomic) NSString *pushGoodID; // @synthesize pushGoodID=_pushGoodID;
@property(nonatomic) long long tryLivePlayTimes; // @synthesize tryLivePlayTimes=_tryLivePlayTimes;
@property(retain, nonatomic) NSTimer *startTimer; // @synthesize startTimer=_startTimer;
@property(nonatomic) _Bool showSKU; // @synthesize showSKU=_showSKU;
@property(retain, nonatomic) IOMSKUSelectViewController *skuSelectViewController; // @synthesize skuSelectViewController=_skuSelectViewController;
@property(retain, nonatomic) IOMCouponsAnimationView *couponsView; // @synthesize couponsView=_couponsView;
@property(nonatomic) __weak UIView *pushItemCardView; // @synthesize pushItemCardView=_pushItemCardView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) NSMutableArray *couponsArray; // @synthesize couponsArray=_couponsArray;
@property(retain, nonatomic) IOMLiveChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(retain, nonatomic) IOMLivePromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) IOMLiveDetailObject *liveDetail; // @synthesize liveDetail=_liveDetail;
@property(retain, nonatomic) IOMLiveDragView *liveDragView; // @synthesize liveDragView=_liveDragView;
@property(retain, nonatomic) UIView *keyBoardMaskView; // @synthesize keyBoardMaskView=_keyBoardMaskView;
@property(retain, nonatomic) UIControl *chatMaskView; // @synthesize chatMaskView=_chatMaskView;
@property(retain, nonatomic) IOMLiveMessageInputView *chatInputView; // @synthesize chatInputView=_chatInputView;
@property(nonatomic) _Bool isPlayFromReplayButton; // @synthesize isPlayFromReplayButton=_isPlayFromReplayButton;
@property(nonatomic) _Bool withoutNetWork; // @synthesize withoutNetWork=_withoutNetWork;
@property(nonatomic) double lastCurrentTime; // @synthesize lastCurrentTime=_lastCurrentTime;
@property(nonatomic) _Bool getStartMessage; // @synthesize getStartMessage=_getStartMessage;
@property(nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(retain, nonatomic) IOMPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(nonatomic) long long liveRoomStatus; // @synthesize liveRoomStatus=_liveRoomStatus;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) _Bool engineFromFullPlay; // @synthesize engineFromFullPlay=_engineFromFullPlay;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showErrorView;
- (void)showLoginView;
- (void)handleWillHideKeyboard:(id)arg1;
- (void)handleWillShowKeyboard:(id)arg1;
- (void)reachabilityChanged;
- (void)removeNotificationCenter;
- (void)addNotificationCenter;
- (void)closePushGoodItemAfterTime;
- (void)closePushGoodItem;
- (void)creatTab:(id)arg1 action:(SEL)arg2;
- (void)pushGoodItemCard:(id)arg1;
- (void)useCoupons;
- (void)getLiveCoupons:(id)arg1;
- (void)showPushCoupon:(id)arg1;
- (void)requestShoppingCartNum;
- (void)requestAddShoppingCart:(id)arg1 number:(id)arg2;
- (void)showAddLayerVCFromBottom:(id)arg1;
- (void)closeSKUView;
- (void)showSKUView:(id)arg1;
- (void)pushGoodShowSKU;
- (void)handleAddShoppingCart:(id)arg1;
- (void)handleOpenGoodDetail:(id)arg1;
- (void)refreshCouponsInfo;
- (void)handleCouponsClick:(id)arg1;
- (void)openWebview:(id)arg1;
- (void)clickedShoppingCart;
- (_Bool)textViewCanEdit;
- (void)textViewEnterSend;
- (void)textLengthExceeds;
- (void)viewheightChanged:(float)arg1;
- (void)chatMaskViewClicked;
- (void)didClickedMenuBtn;
- (void)shareCallBackAction:(id)arg1;
- (void)didClickedShareBtn;
- (void)didClickedBackBtn;
- (void)tryShowLivePlayer;
- (void)tryLivePlayerLater;
- (void)getLiveStartMessage;
- (void)handleStartTimer;
- (void)startLuanchTimer;
- (void)replayBtnClicked;
- (void)playerControlPause;
- (void)playerControlPlay;
- (void)playerControlSeek:(long long)arg1;
- (void)replayPredictionVideo;
- (void)playerCallbackPrediction;
- (void)showMainIcon;
- (void)playPrevueVideo:(double)arg1;
- (void)showLivePlayer;
- (void)requestAnnounceIn;
- (void)displayAnnounceView;
- (void)refreshViewFrame;
- (void)refreshLiveStatus;
- (void)requestCouponsInfo;
- (void)requestLiveDetail;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isPlayFromReplayBtn;
- (void)epgCallBack:(id)arg1;
- (_Bool)autoPlay:(id)arg1;
- (void)onContentStartPlay:(id)arg1;
- (void)onAdStartPlay:(id)arg1;
- (void)onPlayStuckWithParam:(long long)arg1;
- (void)onPlayerError:(id)arg1;
- (void)playerNetworkChanged:(id)arg1;
- (void)playbackFinshed:(id)arg1;
- (void)playbackTimeChanged:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)startLoading:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

