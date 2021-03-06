//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LSCommentViewPositionDelegate-Protocol.h"
#import "LSLiveBroadcasterDelegate-Protocol.h"
#import "LSLivePlayerDelegate-Protocol.h"

@class LSBizCommentView, LSBizLiveBroadcaster, NSString;
@protocol LSLiveViewDelegate;

@interface LSBizLiveView : UIView <LSLiveBroadcasterDelegate, LSLivePlayerDelegate, LSCommentViewPositionDelegate>
{
    _Bool _isReadyPrepareContact;
    _Bool _keyboardShow;
    int _type;
    LSBizLiveBroadcaster *_liveBroadcaster;
    LSBizCommentView *_commentView;
    id <LSLiveViewDelegate> _delegate;
}

@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isReadyPrepareContact; // @synthesize isReadyPrepareContact=_isReadyPrepareContact;
@property(nonatomic) __weak id <LSLiveViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak LSBizCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) LSBizLiveBroadcaster *liveBroadcaster; // @synthesize liveBroadcaster=_liveBroadcaster;
- (void).cxx_destruct;
- (void)commentViewReset:(id)arg1;
- (void)commentViewPositionChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)doUpAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotification;
- (void)dealloc;
- (void)playTimeUpdate:(double)arg1;
- (void)hostTap;
- (void)fullScreen:(_Bool)arg1;
- (void)replayToEnd;
- (void)shareLive;
- (void)closeLivePlayer;
- (id)hostUserInfo;
- (void)playDurationReturn:(double)arg1;
- (void)playStateChanged:(_Bool)arg1;
- (void)stopLive;
- (void)stopLiveBroadcasting;
- (void)cleanLiveView;
- (void)networkChangeFromWifiToCellar;
- (void)liveShowFocusTap;
- (void)playCurrentTime:(double)arg1;
- (void)beautyModeStatusEditing:(_Bool)arg1;
- (void)liveBroadcasterError:(id)arg1;
- (void)closeLiveBroadcaster;
- (void)startBroadcasting:(id)arg1 urlPath:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 liveType:(int)arg2;
- (void)updateWatcherCount:(long long)arg1 withRole:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

