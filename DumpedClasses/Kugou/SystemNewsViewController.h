//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGMessageCenterSuperBLLDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGMessageCenterSystemBLL, NSMutableArray, NSString, UITableView, UIView;

@interface SystemNewsViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, KGMessageCenterSuperBLLDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_tableData;
    UIView *_failView;
    KGMessageCenterSystemBLL *_sysBLL;
}

- (void).cxx_destruct;
- (void)reloadSystemNewsData;
- (_Bool)isThisYear:(id)arg1;
- (id)isShowDate:(id)arg1;
- (id)getGoToURLWithIndex:(long long)arg1;
- (long long)getGoToTypeWithIndex:(long long)arg1;
- (void)goToDifferentPage:(long long)arg1 withUrl:(id)arg2;
- (long long)showPlayBarWay;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)KGMessageCenterDidReceiveOriginData:(id)arg1 messageBLL:(id)arg2;
- (void)loadData;
- (void)ifWifiOnly;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
