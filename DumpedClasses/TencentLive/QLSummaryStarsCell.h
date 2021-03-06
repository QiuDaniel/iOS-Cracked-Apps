//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseModelCellV1.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class GMGridView, NSArray, NSString;

@interface QLSummaryStarsCell : QLBaseModelCellV1 <GMGridViewDataSource, GMGridViewActionDelegate, UIScrollViewDelegate>
{
    GMGridView *_gridView;
    NSArray *_aryItems;
    NSString *_modelCellTitle;
}

@property(copy, nonatomic) NSString *modelCellTitle; // @synthesize modelCellTitle=_modelCellTitle;
@property(retain, nonatomic) NSArray *aryItems; // @synthesize aryItems=_aryItems;
- (void).cxx_destruct;
- (id)modelTitle;
- (_Bool)modelCanAccessMore;
- (double)modelItemCellHeight;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)reloadData;
- (id)horizontalGridView;
- (void)layoutSubviews;
- (double)headerHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

