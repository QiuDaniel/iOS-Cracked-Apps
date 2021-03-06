//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FARankingListViewDelegate.h"
#import "FARankingManagerObserver.h"

@class FARankingListView, NSString;

@interface FAMobileRankingViewController : FAViewController <FARankingListViewDelegate, FARankingManagerObserver>
{
    FARankingListView *_currentView;
}

@property(retain, nonatomic) FARankingListView *currentView; // @synthesize currentView=_currentView;
- (void).cxx_destruct;
- (id)getDataForCellWithType:(unsigned long long)arg1;
- (void)didRankItemSelectType:(unsigned long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)startRefershData;
- (void)didGetMobileChartFailWithError:(id)arg1;
- (void)didGetMobileChartSuccess;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

