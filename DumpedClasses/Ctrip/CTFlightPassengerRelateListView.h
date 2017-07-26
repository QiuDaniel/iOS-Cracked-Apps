//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightCommonUpPushSubView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UILabel, UITableView;

@interface CTFlightPassengerRelateListView : CTFlightCommonUpPushSubView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _interNationaled;
    int _collectAction;
    NSString *_interDepartDate;
    id <CTFlightPassengerRelateListViewDelegate> _delegate;
    UILabel *_titleLabel;
    UITableView *_tableView;
    NSMutableArray *_passengerList;
}

@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList=_passengerList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool interNationaled; // @synthesize interNationaled=_interNationaled;
@property(nonatomic) __weak id <CTFlightPassengerRelateListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int collectAction; // @synthesize collectAction=_collectAction;
@property(copy, nonatomic) NSString *interDepartDate; // @synthesize interDepartDate=_interDepartDate;
- (void).cxx_destruct;
- (void)handleRelateWithNode:(id)arg1;
- (void)handleEditNodeWithIndex:(long long)arg1;
- (void)hanldeAddCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)calRowHeight:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupcollectAction:(int)arg1 interDepartDate:(id)arg2 interNationaled:(_Bool)arg3;
- (void)awakeFromNib;
- (double)contentHeight;
- (void)sortArrayNode:(_Bool)arg1;
- (void)resetCustomCertificates;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
