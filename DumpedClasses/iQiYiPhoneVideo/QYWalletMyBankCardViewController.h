//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UIFadeAlertDeletage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IQYCardInfoManager, IQYCardPrepareOrderManager, IQYWalletInfo, NSDictionary, NSMutableArray, NSString, UITableView;

@interface QYWalletMyBankCardViewController : QYCommonViewController <IQYDataLoadManagerDelegate, UITableViewDelegate, UITableViewDataSource, UIFadeAlertDeletage>
{
    NSDictionary *_closeData;
    IQYCardInfoManager *_cardInfoManager;
    IQYCardPrepareOrderManager *_cardPrepareOrderManager;
    NSString *_orderCode;
    UITableView *_tableView;
    NSMutableArray *_myBankCards;
    IQYWalletInfo *_walletInfo;
}

@property(retain, nonatomic) IQYWalletInfo *walletInfo; // @synthesize walletInfo=_walletInfo;
@property(retain, nonatomic) NSMutableArray *myBankCards; // @synthesize myBankCards=_myBankCards;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) IQYCardPrepareOrderManager *cardPrepareOrderManager; // @synthesize cardPrepareOrderManager=_cardPrepareOrderManager;
@property(retain, nonatomic) IQYCardInfoManager *cardInfoManager; // @synthesize cardInfoManager=_cardInfoManager;
@property(readonly, nonatomic) NSDictionary *closeData; // @synthesize closeData=_closeData;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)walletDidCompleteSecurityInfoNotification:(id)arg1;
- (void)walletBindBankCardSuccess:(id)arg1;
- (void)retryRequest;
- (void)setAddBtnUserInteractionEnabled:(_Bool)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)__toInputBankCardNumPage;
- (void)toAddMyBankCard:(id)arg1;
- (void)hiddenLoadingActivityView;
- (void)showLoadingActivityView;
- (void)addBankCardAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showNoBankCardView;
- (void)loadView;
- (void)checkWalletInfo;
- (void)loadMyBankCardInfo;
- (void)qyCommonViewAppear;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

