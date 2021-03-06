//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "ITBOCellHeight.h"
#import "ITBOModify.h"

@class NSMutableArray, NSMutableArray<TBOComment>, NSMutableArray<TBOFavor>, NSMutableArray<TBOTag>, NSString, TBOAttributeText, TBOItemFeed, TBOUser;

@interface TBOFeed : TBJSONModel <ITBOCellHeight, ITBOModify>
{
    double _feedDetailHeight;
    double _feedDetailFooterHeight;
    double _descHeight;
    double _coreFeedHeight;
    double _commentNumViewHeight;
    double _commentNumViewWidth;
    double _likeNumViewWidth;
    double _likeNumViewHeight;
    double _cellSeperatorHeight;
    _Bool _isModify;
    _Bool _isLikeClicked;
    _Bool _isJustCommented;
    _Bool _showMore;
    _Bool _liked;
    _Bool _isTop;
    _Bool _isElite;
    _Bool _isOffline;
    _Bool _disableUserLogoClick;
    _Bool _isLastCell;
    NSString *_feedId;
    NSString *_feedUrl;
    TBOUser *_user;
    unsigned long long _type;
    NSString *_topicId;
    NSString *_topicName;
    NSMutableArray *_content;
    TBOItemFeed *_questionItem;
    NSMutableArray<TBOTag> *_tags;
    long long _totalComments;
    long long _totalLike;
    NSString *_createTime;
    double _timeStamp;
    NSMutableArray<TBOComment> *_balaComments;
    NSMutableArray<TBOFavor> *_balaFavors;
    NSString *_likeWord;
    NSString *_desc;
    TBOAttributeText *_descPreview;
    NSString *_giftUrl;
    NSString *_createAt;
    NSString *_link;
    NSString *_voteTo;
    NSString *_topicUrl;
    NSString *_pageName;
}

+ (_Bool)isValidFeedType:(unsigned long long)arg1;
@property(nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) _Bool disableUserLogoClick; // @synthesize disableUserLogoClick=_disableUserLogoClick;
@property(retain, nonatomic) NSString *topicUrl; // @synthesize topicUrl=_topicUrl;
@property(retain, nonatomic) NSString *voteTo; // @synthesize voteTo=_voteTo;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *createAt; // @synthesize createAt=_createAt;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) NSString *giftUrl; // @synthesize giftUrl=_giftUrl;
@property(retain, nonatomic) TBOAttributeText *descPreview; // @synthesize descPreview=_descPreview;
@property(nonatomic) _Bool isElite; // @synthesize isElite=_isElite;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *likeWord; // @synthesize likeWord=_likeWord;
@property(retain, nonatomic) NSMutableArray<TBOFavor> *balaFavors; // @synthesize balaFavors=_balaFavors;
@property(retain, nonatomic) NSMutableArray<TBOComment> *balaComments; // @synthesize balaComments=_balaComments;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long totalLike; // @synthesize totalLike=_totalLike;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) long long totalComments; // @synthesize totalComments=_totalComments;
@property(retain, nonatomic) NSMutableArray<TBOTag> *tags; // @synthesize tags=_tags;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(nonatomic) _Bool isJustCommented; // @synthesize isJustCommented=_isJustCommented;
@property(nonatomic) _Bool isLikeClicked; // @synthesize isLikeClicked=_isLikeClicked;
@property(retain, nonatomic) TBOItemFeed *questionItem; // @synthesize questionItem=_questionItem;
@property(retain, nonatomic) NSMutableArray *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TBOUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) _Bool isModify; // @synthesize isModify=_isModify;
- (void).cxx_destruct;
- (double)getLikeNumViewWidth;
- (double)getCommentNumViewWidth;
- (double)getCommentNumViewHeight;
- (double)getLikeNumViewHeight;
- (_Bool)hasDesc;
- (unsigned long long)getFeedType;
- (_Bool)hasNotImage;
- (void)setContentWithObjArray:(id)arg1 feedType:(unsigned long long)arg2;
- (id)shareImageURL;
- (long long)formatStringToType:(id)arg1;
- (double)getHeaderHeight;
- (double)getFooterHeight;
- (double)getCoreFeedHeight;
- (double)getMoreCommentAreaHeight;
- (double)getDescHeight;
- (double)getFooterHeight4FeedDetail;
- (double)getCellHeight4FeedDetail;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

