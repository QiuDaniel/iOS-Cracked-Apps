//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYPPStarCommentDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UITableView;

@interface QYPPStarInteractionView : UIView <UITableViewDelegate, UITableViewDataSource, QYPPStarCommentDelegate>
{
    UITableView *_commentOnList;
    UIButton *_more;
    NSArray *_viewModels;
    long long _commentOnListHeight;
    CDUnknownBlockType _commentAudioClick;
    CDUnknownBlockType _commentOnAudioClick;
    CDUnknownBlockType _commentFavoriteClick;
    CDUnknownBlockType _moreClick;
}

@property(copy, nonatomic) CDUnknownBlockType moreClick; // @synthesize moreClick=_moreClick;
@property(copy, nonatomic) CDUnknownBlockType commentFavoriteClick; // @synthesize commentFavoriteClick=_commentFavoriteClick;
@property(copy, nonatomic) CDUnknownBlockType commentOnAudioClick; // @synthesize commentOnAudioClick=_commentOnAudioClick;
@property(copy, nonatomic) CDUnknownBlockType commentAudioClick; // @synthesize commentAudioClick=_commentAudioClick;
@property(nonatomic) long long commentOnListHeight; // @synthesize commentOnListHeight=_commentOnListHeight;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) UIButton *more; // @synthesize more=_more;
@property(retain, nonatomic) UITableView *commentOnList; // @synthesize commentOnList=_commentOnList;
- (void).cxx_destruct;
- (void)starCommentFavoriteClick:(id)arg1 favorite:(_Bool)arg2;
- (void)commentOnAudioClick:(id)arg1 indexPath:(id)arg2 status:(int)arg3;
- (void)starCommentAudioClick:(id)arg1 indexPath:(id)arg2 status:(int)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)onMoreClick;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMoreClickEvent:(CDUnknownBlockType)arg1;
- (void)setFavoriteClickEvent:(CDUnknownBlockType)arg1;
- (void)setCommentOnAudioClickEvent:(CDUnknownBlockType)arg1;
- (void)setCommentAudioClickEvent:(CDUnknownBlockType)arg1;
- (void)setStarCommentOnViewModels:(id)arg1;
- (void)updateStarFavoriteCount:(id)arg1 index:(long long)arg2;
- (void)stopAudio;
- (void)playCommentoOnAudio:(long long)arg1;
- (void)playAudio:(long long)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

