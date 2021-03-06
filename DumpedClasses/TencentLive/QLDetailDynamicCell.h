//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLRequestModelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QLDetailDynamicDataModel, QLJCEONADynamicPanel, UITableView;

@interface QLDetailDynamicCell : QLBaseTabelViewCell <QLRequestModelDelegate, UITableViewDataSource, UITableViewDelegate>
{
    QLDetailDynamicDataModel *_dataModel;
    UITableView *_tableView;
    QLJCEONADynamicPanel *_dynamicPanel;
    NSString *_lastVidReferKey;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (double)getHeightWithData:(id)arg1 uInfo:(id)arg2;
@property(copy, nonatomic) NSString *lastVidReferKey; // @synthesize lastVidReferKey=_lastVidReferKey;
@property(retain, nonatomic) QLJCEONADynamicPanel *dynamicPanel; // @synthesize dynamicPanel=_dynamicPanel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)addExtraNotification;
- (void)updateMomentNotification:(id)arg1;
- (id)findStarCommentList;
- (void)doMergeFeedListIfNecessary:(long long)arg1;
- (void)deleteMomentItemNotification:(id)arg1;
- (void)freshDynamicCommentlist:(id)arg1;
- (void)handleLocalPublishSucess:(id)arg1;
- (void)handlePublishFailToServer:(id)arg1;
- (void)handlePublishSucessToServer:(id)arg1;
- (void)prepareForReuse;
- (_Bool)isContainDynamicDataCell;
- (id)getCurrentPlayingVid;
- (void)doLoadDynamicModelByCurrentVideoChanged;
- (void)layoutTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)reloadTableView;
- (void)doPostHeightChangeNotification;
- (void)startLoadModel;
- (void)itemCellDidInvisible;
- (void)itemCellDidShowUp;
- (void)refreshDynamicData;
- (void)reportShowUp;
- (void)playIndexChanged:(id)arg1;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

