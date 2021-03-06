//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYDataManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, QYMovieAgreeCommentManager, QYMovieCommentListManager, QYMovieUserCommentData;
@protocol QYMovieCommentListViewModelDelegate;

@interface QYMovieCommentListViewModel : NSObject <QYDataManagerDelegate>
{
    id <QYMovieCommentListViewModelDelegate> _delegate;
    QYMovieCommentListManager *_commentListManager;
    QYMovieAgreeCommentManager *_agreeCommentManager;
    NSString *_movieId;
    NSMutableArray *_commentListArray;
    NSString *_feedId;
    NSString *_releaseTime;
    NSMutableArray *_commentListViewModelArray;
    QYMovieUserCommentData *_userCommentData;
}

@property(copy, nonatomic) QYMovieUserCommentData *userCommentData; // @synthesize userCommentData=_userCommentData;
@property(copy, nonatomic) NSMutableArray *commentListViewModelArray; // @synthesize commentListViewModelArray=_commentListViewModelArray;
@property(copy, nonatomic) NSString *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSMutableArray *commentListArray; // @synthesize commentListArray=_commentListArray;
@property(copy, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(retain, nonatomic) QYMovieAgreeCommentManager *agreeCommentManager; // @synthesize agreeCommentManager=_agreeCommentManager;
@property(retain, nonatomic) QYMovieCommentListManager *commentListManager; // @synthesize commentListManager=_commentListManager;
@property(nonatomic) __weak id <QYMovieCommentListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCommentListFailed;
- (void)requestCommentListFinishedWithNoMoreData;
- (void)requestCommentListFinished;
- (id)getBuyTicketCommentList;
- (id)getBadCommentList;
- (id)getGoodCommentList;
- (id)getAllCommentList;
- (void)commentArrayToViewModelArray;
- (void)dataManagerFailed:(id)arg1;
- (void)buildCommentListArray:(id)arg1;
- (void)dataManagerFinished:(id)arg1;
- (void)supportCommentWithType:(_Bool)arg1 data:(id)arg2;
- (void)requestCommentListWithMovieId:(id)arg1 getMore:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

