//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, TBLSLocationComponentService, TBLSPOIEntity, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView, UITextField, UIView;

@interface TBLSSwitchDeliverAddressViewController : TBViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _needJumpToCreateDeliverAddressVC;
    id _locationLatitude;
    id _locationLongitude;
    NSString *_locationCityName;
    NSString *_locationCityCode;
    TBLSPOIEntity *_locationPoiEntity;
    NSString *_currAddressID;
    NSString *_keywords;
    UIView *_topView;
    UIButton *_cancleButton;
    UITextField *_searchTextField;
    UITableView *_tableView;
    UITableView *_historyRecordTableView;
    UITableView *_searchRetTableView;
    UITableView *_associateTableView;
    UIView *_currLocationView;
    UIImageView *_currLocationIndicator;
    UILabel *_currLocationLabel;
    UIButton *_currLocationActionButton;
    UIActivityIndicatorView *_currLocationLoadingView;
    NSMutableArray *_deliverAddressDataSource;
    NSMutableArray *_searchRetDataSource;
    NSMutableArray *_associateSearchDataSource;
    TBLSLocationComponentService *_locationComponentService;
    UIView *_emptyView;
    UIImageView *_emptyImageView;
    UILabel *_emptyIndicator;
    UIButton *_emptyActionButton;
    CDUnknownBlockType _homeCallback;
    UIButton *_toCreateDeliverAddressButton;
    UIView *_deliverAddressEmptyIndicatorView;
}

@property(nonatomic) _Bool needJumpToCreateDeliverAddressVC; // @synthesize needJumpToCreateDeliverAddressVC=_needJumpToCreateDeliverAddressVC;
@property(retain, nonatomic) UIView *deliverAddressEmptyIndicatorView; // @synthesize deliverAddressEmptyIndicatorView=_deliverAddressEmptyIndicatorView;
@property(retain, nonatomic) UIButton *toCreateDeliverAddressButton; // @synthesize toCreateDeliverAddressButton=_toCreateDeliverAddressButton;
@property(copy, nonatomic) CDUnknownBlockType homeCallback; // @synthesize homeCallback=_homeCallback;
@property(retain, nonatomic) UIButton *emptyActionButton; // @synthesize emptyActionButton=_emptyActionButton;
@property(retain, nonatomic) UILabel *emptyIndicator; // @synthesize emptyIndicator=_emptyIndicator;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBLSLocationComponentService *locationComponentService; // @synthesize locationComponentService=_locationComponentService;
@property(retain, nonatomic) NSMutableArray *associateSearchDataSource; // @synthesize associateSearchDataSource=_associateSearchDataSource;
@property(retain, nonatomic) NSMutableArray *searchRetDataSource; // @synthesize searchRetDataSource=_searchRetDataSource;
@property(retain, nonatomic) NSMutableArray *deliverAddressDataSource; // @synthesize deliverAddressDataSource=_deliverAddressDataSource;
@property(retain, nonatomic) UIActivityIndicatorView *currLocationLoadingView; // @synthesize currLocationLoadingView=_currLocationLoadingView;
@property(retain, nonatomic) UIButton *currLocationActionButton; // @synthesize currLocationActionButton=_currLocationActionButton;
@property(retain, nonatomic) UILabel *currLocationLabel; // @synthesize currLocationLabel=_currLocationLabel;
@property(retain, nonatomic) UIImageView *currLocationIndicator; // @synthesize currLocationIndicator=_currLocationIndicator;
@property(retain, nonatomic) UIView *currLocationView; // @synthesize currLocationView=_currLocationView;
@property(retain, nonatomic) UITableView *associateTableView; // @synthesize associateTableView=_associateTableView;
@property(retain, nonatomic) UITableView *searchRetTableView; // @synthesize searchRetTableView=_searchRetTableView;
@property(retain, nonatomic) UITableView *historyRecordTableView; // @synthesize historyRecordTableView=_historyRecordTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *currAddressID; // @synthesize currAddressID=_currAddressID;
@property(retain, nonatomic) TBLSPOIEntity *locationPoiEntity; // @synthesize locationPoiEntity=_locationPoiEntity;
@property(retain, nonatomic) NSString *locationCityCode; // @synthesize locationCityCode=_locationCityCode;
@property(retain, nonatomic) NSString *locationCityName; // @synthesize locationCityName=_locationCityName;
@property(retain, nonatomic) id locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(retain, nonatomic) id locationLatitude; // @synthesize locationLatitude=_locationLatitude;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)backPanGestureRecoginzed;
- (void)backItemClicked:(id)arg1;
- (void)moreItemClicked:(id)arg1;
- (void)clearHistoryRecord:(id)arg1;
- (void)reloadKeywordSearch:(id)arg1;
- (void)keywordsAssociate:(id)arg1;
- (void)keywordsSearch:(id)arg1;
- (id)getHeaderViewWithTitle:(id)arg1;
- (void)cancleSearchAction:(id)arg1;
- (void)requestNearbyPOI;
- (void)requestDeliverAddress;
- (void)setupSubViews;
- (void)setupCurrLocationViews;
- (void)setupEmptyViews:(_Bool)arg1;
- (void)requestCurrPosition;
- (void)appEnterForeground:(id)arg1;
- (void)innerCurrLocationAction:(id)arg1;
- (void)currLocationAction:(id)arg1;
- (void)initializeCurrLocationView;
- (void)toCreateDeliverAddressAction:(id)arg1;
- (void)toJumpToDeliverAddressLogic;
- (void)addAddressAction:(id)arg1;
- (void)toLoginAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

