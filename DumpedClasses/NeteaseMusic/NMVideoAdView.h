//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMAdSkipButtonDelegate.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NMAdSkipButton, NSString, UIButton;

@interface NMVideoAdView : UIView <NMAdSkipButtonDelegate>
{
    UIButton *_wifiTipView;
    UIButton *_adTipView;
    NMAdSkipButton *_skipButton;
    UIButton *_voiceButton;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    _Bool _isObserversAdded;
    _Bool _recoverPlayingAfterAd;
    NSString *_adId;
    NSString *_localVideoUrl;
    NSString *_videoUrl;
    NSString *_actionUrl;
    long long _adDuration;
    id <NMVideoAdViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long adDuration; // @synthesize adDuration=_adDuration;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *localVideoUrl; // @synthesize localVideoUrl=_localVideoUrl;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (void)skipButtonFinishCountingDown:(id)arg1;
- (void)skipButtonClicked:(id)arg1;
- (void)dealloc;
- (_Bool)isMusicPlaying;
- (void)finishPlayingVideoAd;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateVoiceButtonState:(_Bool)arg1;
- (void)voiceButtonClicked:(id)arg1;
- (void)showTipViews;
- (void)showAdAndTipViews;
- (void)playVideo;
- (void)checkIsPlayable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllObservers;
- (void)addObservers;
- (void)prepareForPlay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
