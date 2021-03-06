//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UICollectionView;

@interface NVMBreakfastTagPicker1 : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isChangeHeight;
    UICollectionView *_tagCollectionView;
    id <NVMBreakfastTagPickerAdapter1> _adapter;
}

@property(nonatomic) _Bool isChangeHeight; // @synthesize isChangeHeight=_isChangeHeight;
@property(retain, nonatomic) id <NVMBreakfastTagPickerAdapter1> adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) UICollectionView *tagCollectionView; // @synthesize tagCollectionView=_tagCollectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)getStringRect:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)updateConstraintsFortagCollectionView:(double)arg1;
- (void)layoutUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

