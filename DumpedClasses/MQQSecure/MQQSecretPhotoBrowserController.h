//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlbumBrowserScrollViewDataSource-Protocol.h"
#import "MQQAlbumBrowserScrollViewDelegate-Protocol.h"
#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQSelectEncryptAlbumDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MBProgressHUD, MQQAlbumBrowserBottomBar, MQQAlbumBrowserScrollView, MQQAlbumBrowserTopBar, MQQButton, MQQENCPhoto, NSArray, NSString, UIImage;

@interface MQQSecretPhotoBrowserController : MQQBaseViewController <MQQAlertViewDelegate, MQQSelectEncryptAlbumDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, MQQAlbumBrowserScrollViewDataSource, MQQAlbumBrowserScrollViewDelegate>
{
    MQQAlbumBrowserTopBar *_topBar;
    MQQAlbumBrowserBottomBar *_secretBottomBar;
    MQQAlbumBrowserScrollView *photoScrollView;
    unsigned long long selectedIndex;
    MQQENCPhoto *photo;
    UIImage *_decryptedPhoto;
    MBProgressHUD *_loadingView;
    _Bool isFullScreen;
    NSArray *_relationArray;
    MQQButton *_moveEncryAlbumButton;
}

@property(retain, nonatomic) MQQButton *moveEncryAlbumButton; // @synthesize moveEncryAlbumButton=_moveEncryAlbumButton;
@property(retain, nonatomic) NSArray *relationArray; // @synthesize relationArray=_relationArray;
@property(retain, nonatomic) UIImage *decryptedPhoto; // @synthesize decryptedPhoto=_decryptedPhoto;
@property(retain, nonatomic) MQQENCPhoto *photo; // @synthesize photo;
- (void)movePhotoToEncryAlbumOK:(id)arg1 toAlbum:(id)arg2;
- (void)movePhotoToEncryAlbumCancel:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)singleClicked:(id)arg1;
- (void)photoProcessedViewDidCompleteAnimating:(_Bool)arg1;
- (_Bool)isVideoForAlbumBrowserScrollViewAtIndex:(long long)arg1;
- (long long)beginPageIndexForAlbumBrowserScrollView:(id)arg1;
- (id)albumBrowserScrollView:(id)arg1 photoAtIndex:(long long)arg2;
- (long long)pageCountForAlbumBrowserScrollView:(id)arg1;
- (void)albumBrowserScrollView:(id)arg1 shouldPlayVideoAtIndex:(long long)arg2;
- (void)albumBrowserScrollView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)decryptPhotoWithError:(id)arg1;
- (void)processPhotoSuccess;
- (void)deletePhoto;
- (void)moveButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)decryptPhoto;
- (void)decryptButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)endRefresh;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

