//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGAllCloseDelegate.h"
#import "KGShareViewControllerDelegate.h"
#import "KGViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class ASIHTTPRequest, FXLiveRoomErrorView, KGDefaultNetErrorView, KGWebViewBridge, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SharedInfo, UIView, UIWebView;

@interface KGEmbedWebViewController : KGViewController <KGShareViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, KGAllCloseDelegate, KGViewControllerDelegate, UIWebViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, UIAlertViewDelegate>
{
    _Bool _isSupportBackPrePage;
    _Bool _isLeave;
    _Bool _isCache;
    _Bool _isOfflineHtml;
    _Bool _isLoadFinished;
    _Bool _isJustAddWebView;
    _Bool _isOpenAppstorePage;
    _Bool _isNeedRightItem;
    _Bool _isNeedExitButton;
    _Bool _isCustomRightItem;
    _Bool _isNeedRecoveryEffect;
    _Bool _isHiddenTopRightItem;
    _Bool _isColseOnlyStyle;
    _Bool _isMusicTagView;
    _Bool _isHighMusicView;
    _Bool _isSearchH5InterceptView;
    _Bool _isSearchTagInterceptView;
    _Bool _isSupportSlide;
    _Bool _isHasShareBtnFlag;
    _Bool _sharkState;
    _Bool _showPlayBar;
    _Bool _showHighMusic;
    KGWebViewBridge *_bridge;
    UIWebView *_webView;
    NSString *_url;
    SharedInfo *_webviewShareInfo;
    NSMutableArray *_preUrlArr;
    id <WebViewWillRemoveDelegate> _delegate;
    id <WebViewCallBackDelegate> _callBackDelegate;
    id _parmas;
    NSDictionary *_userAgent;
    UIView *_loadingView;
    KGDefaultNetErrorView *_errorView;
    NSTimer *_timer;
    NSString *_flag;
    long long _sharePlat;
    ASIHTTPRequest *_uploadImage;
    NSMutableDictionary *_tryDomainDic;
    NSMutableArray *_alltryUrls;
    FXLiveRoomErrorView *_showAlert;
}

@property(retain, nonatomic) FXLiveRoomErrorView *showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic, getter=isShowHighMusic) _Bool showHighMusic; // @synthesize showHighMusic=_showHighMusic;
@property(nonatomic, getter=isShowPlayBar) _Bool showPlayBar; // @synthesize showPlayBar=_showPlayBar;
@property(retain, nonatomic) NSMutableArray *alltryUrls; // @synthesize alltryUrls=_alltryUrls;
@property(retain, nonatomic) NSMutableDictionary *tryDomainDic; // @synthesize tryDomainDic=_tryDomainDic;
@property(nonatomic) _Bool sharkState; // @synthesize sharkState=_sharkState;
@property(nonatomic) __weak ASIHTTPRequest *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(nonatomic) long long sharePlat; // @synthesize sharePlat=_sharePlat;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(nonatomic) _Bool isHasShareBtnFlag; // @synthesize isHasShareBtnFlag=_isHasShareBtnFlag;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSDictionary *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool isSupportSlide; // @synthesize isSupportSlide=_isSupportSlide;
@property(nonatomic) _Bool isSearchTagInterceptView; // @synthesize isSearchTagInterceptView=_isSearchTagInterceptView;
@property(nonatomic) _Bool isSearchH5InterceptView; // @synthesize isSearchH5InterceptView=_isSearchH5InterceptView;
@property(nonatomic) _Bool isHighMusicView; // @synthesize isHighMusicView=_isHighMusicView;
@property(nonatomic) _Bool isMusicTagView; // @synthesize isMusicTagView=_isMusicTagView;
@property(nonatomic) _Bool isColseOnlyStyle; // @synthesize isColseOnlyStyle=_isColseOnlyStyle;
@property(nonatomic) _Bool isHiddenTopRightItem; // @synthesize isHiddenTopRightItem=_isHiddenTopRightItem;
@property(nonatomic) _Bool isNeedRecoveryEffect; // @synthesize isNeedRecoveryEffect=_isNeedRecoveryEffect;
@property(nonatomic) _Bool isCustomRightItem; // @synthesize isCustomRightItem=_isCustomRightItem;
@property(nonatomic) _Bool isNeedExitButton; // @synthesize isNeedExitButton=_isNeedExitButton;
@property(nonatomic) _Bool isNeedRightItem; // @synthesize isNeedRightItem=_isNeedRightItem;
@property(nonatomic) _Bool isOpenAppstorePage; // @synthesize isOpenAppstorePage=_isOpenAppstorePage;
@property(retain, nonatomic) id parmas; // @synthesize parmas=_parmas;
@property(nonatomic) _Bool isJustAddWebView; // @synthesize isJustAddWebView=_isJustAddWebView;
@property(nonatomic) id <WebViewCallBackDelegate> callBackDelegate; // @synthesize callBackDelegate=_callBackDelegate;
@property(retain, nonatomic) id <WebViewWillRemoveDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLoadFinished; // @synthesize isLoadFinished=_isLoadFinished;
@property(retain, nonatomic) NSMutableArray *preUrlArr; // @synthesize preUrlArr=_preUrlArr;
@property(retain, nonatomic) SharedInfo *webviewShareInfo; // @synthesize webviewShareInfo=_webviewShareInfo;
@property(nonatomic) _Bool isOfflineHtml; // @synthesize isOfflineHtml=_isOfflineHtml;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) _Bool isLeave; // @synthesize isLeave=_isLeave;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isSupportBackPrePage; // @synthesize isSupportBackPrePage=_isSupportBackPrePage;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) KGWebViewBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (_Bool)isNeedRetryURL:(id)arg1;
- (void)checkNeedRetryWithRequest:(id)arg1;
- (void)changeDomainStateWithDomain:(id)arg1 state:(id)arg2;
- (id)retryHttpURL:(id)arg1;
- (_Bool)canTryNext:(id)arg1;
- (void)loadReuestWithURL:(id)arg1 isCache:(_Bool)arg2;
- (id)initWithHalfScreenGameViewBridge:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopTimer;
- (void)timeOut:(id)arg1;
- (void)startTimer;
- (void)unRegisterUserAgent;
- (void)registerUserAgent;
- (long long)showPlayBarWay;
- (void)onPopupClicked:(id)arg1;
- (void)historyWebViewButoonClick:(id)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)requestAgainButtonClick:(id)arg1;
- (void)copyToPasteboardButtonClick:(id)arg1;
- (void)toUrlAction:(id)arg1;
- (void)openInSafariButtonClick:(id)arg1;
- (void)reloadWebViewButtonClick:(id)arg1;
- (void)closePageAction:(id)arg1;
- (void)moreViewItemRefresh:(id)arg1;
- (void)KTVActivityOpusRefresh:(id)arg1;
- (void)backEvent:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)prePageTapped:(id)arg1;
- (void)createCloseBtn:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)pan:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)jumpToAppstorePageInsideApp:(id)arg1;
- (void)filterAppIdAndOpenAppstoreWithUrlString:(id)arg1;
- (id)changeWebUserAgent:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)userDidLogout:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)backAction:(id)arg1;
- (void)loadData;
- (void)p_initPrivateView;
- (void)viewWillRemove;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (_Bool)checkIsAlbumUrl:(id)arg1;
- (void)dealloc;
- (id)initWithCustomRightItemWithTitle:(id)arg1 URL:(id)arg2;
- (id)initNoPlayBarNoRightItemNoSupportPrePageWithTitle:(id)arg1 URL:(id)arg2;
- (id)initByloacalHtmWithTitle:(id)arg1 URL:(id)arg2;
- (id)initNoPlayBarNoRightWithTitle:(id)arg1 URL:(id)arg2;
- (id)initNoPlayBarWithTitle:(id)arg1 URL:(id)arg2;
- (id)initByCacheWithTitle:(id)arg1 URL:(id)arg2;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3;
- (_Bool)clickShareViewController:(id)arg1 withItem:(id)arg2;
- (int)configStateTransformUnicomState:(int)arg1;
- (int)unicomStateTransformConfigState:(int)arg1;
- (void)setTopViewColor:(id)arg1 alpha:(float)arg2;
- (void)getFXUserInfoWithResponseCallback:(CDUnknownBlockType)arg1;
- (void)collectSongList:(id)arg1 AndRep:(CDUnknownBlockType)arg2;
- (id)songList:(id)arg1;
- (id)showMsgStr:(_Bool)arg1;
- (id)fxUserInfo:(id)arg1;
- (id)KTVUserInfo;
- (id)userInfo;
- (void)showPlayBar:(_Bool)arg1;
- (void)showHighMusicHistory;
- (_Bool)isNetworkNotConnected;
- (void)pickImage;
- (void)kgWalletRecharging:(id)arg1 didFinishRecharingWithStatus:(long long)arg2 renewType:(long long)arg3;
- (void)closeCancelWithTag:(long long)arg1;
- (void)closeSuccessWithTag:(long long)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)webViewIn:(id)arg1;
- (void)webViewExit:(id)arg1;
- (void)historyPlayStateChanged:(id)arg1;
- (void)remotePlayStateChanged:(id)arg1;
- (void)playerStateChanged:(id)arg1;
- (void)removeCommand;
- (void)qureyKuBiInfo:(CDUnknownBlockType)arg1;
- (void)queryWithCmdParam:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addCommand;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

