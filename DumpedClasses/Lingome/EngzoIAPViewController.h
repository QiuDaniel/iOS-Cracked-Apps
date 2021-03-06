//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView;

@interface EngzoIAPViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_fundLabel;
    NSArray *_products;
    UITableView *_tableView;
    UILabel *_subscriptionDescLabel;
}

@property(retain, nonatomic) UILabel *subscriptionDescLabel; // @synthesize subscriptionDescLabel=_subscriptionDescLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) __weak UILabel *fundLabel; // @synthesize fundLabel=_fundLabel;
- (void).cxx_destruct;
- (void)failedTransaction:(id)arg1;
- (_Bool)hidesBottomBarWhenPushed;
- (void)processPayment:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshLiulibi;
- (void)productPurchased:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)alertProcuctFetchError;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)requestProducts;
- (id)getSubscriptionIds;
- (id)getProductIds;
- (void)privacyPage;
- (void)openSubscriptionManagePage;
- (void)updateSubscriptionDesLabel:(id)arg1;
- (void)addFooterView;
- (void)viewDidLoad;
- (id)tk_pageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

