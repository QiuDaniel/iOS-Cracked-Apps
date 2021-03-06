//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "WPOrderListCellDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIView, WPOrderListCell, WPTicketModel;

@interface WPMovieOrderListViewController : GWBaseTableViewController <WPOrderListCellDelegate>
{
    NSMutableArray *_ticketArray;
    WPOrderListCell *_unpaidTicketCell;
    WPTicketModel *_unpaidTicketModel;
    NSTimer *_remainTimer;
    long long _page;
    UIView *_animationView;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSTimer *remainTimer; // @synthesize remainTimer=_remainTimer;
@property(retain, nonatomic) WPTicketModel *unpaidTicketModel; // @synthesize unpaidTicketModel=_unpaidTicketModel;
@property(retain, nonatomic) WPOrderListCell *unpaidTicketCell; // @synthesize unpaidTicketCell=_unpaidTicketCell;
@property(retain, nonatomic) NSMutableArray *ticketArray; // @synthesize ticketArray=_ticketArray;
- (void).cxx_destruct;
- (void)pushToHistoryOrderList;
- (void)unpaidStopRemainTimer;
- (void)refreshData;
- (void)unpaidUpdateRemainTimer;
- (void)deleteTicketWithIndex:(long long)arg1 withIsFinished:(_Bool)arg2;
- (void)getNoticeData;
- (void)refreshTicketList;
- (void)fetchOrderListWithPage:(long long)arg1;
- (void)beginRefreshFromFooter;
- (void)beginRefreshFromHeader;
- (void)movieOrderClickTicketPaperWithMovieOrderModel:(id)arg1;
- (void)movieOrderClickGetTicketCodeWithMovieOrderModel:(id)arg1;
- (void)movieOrderClickCommentButton:(id)arg1;
- (void)showAlertViewWithMessage:(id)arg1;
- (void)payOrderSuccess;
- (void)submitPayActionWithResponseObject:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)movieOrderClickBuyButton;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setUpViews;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

