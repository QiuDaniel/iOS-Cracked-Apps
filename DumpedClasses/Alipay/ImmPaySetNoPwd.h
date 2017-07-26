//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPAutoRotateVC.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ImmPaySettingService, NSArray, NSNumber, NSString, UITableView;

@interface ImmPaySetNoPwd : MMPAutoRotateVC <UITableViewDelegate, UITableViewDataSource>
{
    ImmPaySettingService *_settingService;
    UITableView *_tableView;
    NSArray *_creditArray;
    NSNumber *_currCredit;
}

@property(copy, nonatomic) NSNumber *currCredit; // @synthesize currCredit=_currCredit;
@property(retain, nonatomic) NSArray *creditArray; // @synthesize creditArray=_creditArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak ImmPaySettingService *settingService; // @synthesize settingService=_settingService;
- (void).cxx_destruct;
- (void)doClickNaviLeftAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)selectCredit:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSetting:(id)arg1 credits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
