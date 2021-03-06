//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKFeedCmtPraiseBtnViewDelegate-Protocol.h"
#import "WKFeedCopyLabelDelegate-Protocol.h"
#import "WKFeedMoreTextBtnViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, WKFeedCmtHttpHandler, WKFeedCmtPraiseBtnView, WKFeedCommentModel, WKFeedCopyLabel, WKFeedMoreTextBtnView;
@protocol WKFeedCmtFloorViewDelegate;

@interface WKFeedCmtFloorView : UIView <WKFeedCopyLabelDelegate, WKFeedCmtPraiseBtnViewDelegate, WKFeedMoreTextBtnViewDelegate>
{
    _Bool _isUnFold;
    _Bool _hiddenFoldTextBtn;
    WKFeedCommentModel *_newsCmt;
    unsigned long long _floorNum;
    unsigned long long _floorCount;
    unsigned long long _totalFloorOfUnFold;
    WKFeedCmtHttpHandler *_cmtHttpHandler;
    id <WKFeedCmtFloorViewDelegate> _delegate;
    WKFeedCmtPraiseBtnView *_upBtn;
    UILabel *_floorNumLabel;
    UIImageView *_bgImageView;
    WKFeedCopyLabel *_cmtLabel;
    UILabel *_userNameLabel;
    UILabel *_praiseLabel;
    WKFeedMoreTextBtnView *_moreTextView;
    unsigned long long _oldType;
}

@property(nonatomic) unsigned long long oldType; // @synthesize oldType=_oldType;
@property(nonatomic) _Bool hiddenFoldTextBtn; // @synthesize hiddenFoldTextBtn=_hiddenFoldTextBtn;
@property(nonatomic) __weak WKFeedMoreTextBtnView *moreTextView; // @synthesize moreTextView=_moreTextView;
@property(nonatomic) __weak UILabel *praiseLabel; // @synthesize praiseLabel=_praiseLabel;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak WKFeedCopyLabel *cmtLabel; // @synthesize cmtLabel=_cmtLabel;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak UILabel *floorNumLabel; // @synthesize floorNumLabel=_floorNumLabel;
@property(nonatomic) __weak WKFeedCmtPraiseBtnView *upBtn; // @synthesize upBtn=_upBtn;
@property(nonatomic) __weak id <WKFeedCmtFloorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WKFeedCmtHttpHandler *cmtHttpHandler; // @synthesize cmtHttpHandler=_cmtHttpHandler;
@property(nonatomic) unsigned long long totalFloorOfUnFold; // @synthesize totalFloorOfUnFold=_totalFloorOfUnFold;
@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold=_isUnFold;
@property(nonatomic) unsigned long long floorCount; // @synthesize floorCount=_floorCount;
@property(nonatomic) unsigned long long floorNum; // @synthesize floorNum=_floorNum;
@property(retain, nonatomic) WKFeedCommentModel *newsCmt; // @synthesize newsCmt=_newsCmt;
- (void).cxx_destruct;
- (void)WKFeedCmtPraiseBtnViewBtnClick;
- (void)WKFeedCopyLabelCopyClick;
- (void)WKFeedCopyLabelReplyClick;
- (void)WKFeedMoreTextUnFoldBtnViewUnFoldClick;
- (void)createMoreTextBtn;
- (void)updateTextFoldBtn;
- (_Bool)getHiddenFoldTextBtn;
- (void)createViews;
- (id)initWithComment:(id)arg1 floorNum:(unsigned long long)arg2 floorCount:(unsigned long long)arg3 totalCountOfUnFold:(unsigned long long)arg4;
- (id)init;
- (id)initWithComment:(id)arg1 floorNum:(unsigned long long)arg2 floorCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

