//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMFloatView.h"

#import "FMShareActionSheetItemProtocol.h"

@class FMItemDO, NSMutableArray, NSString, UILabel, UIView;

@interface FMNPSellPostSuccessTipView : FMFloatView <FMShareActionSheetItemProtocol>
{
    NSMutableArray *_items;
    NSString *_itemId;
    UIView *view;
    UILabel *shareTitle;
    UILabel *_titleLabel;
    FMItemDO *_itemDO;
}

@property(retain, nonatomic) FMItemDO *itemDO; // @synthesize itemDO=_itemDO;
- (void).cxx_destruct;
- (void)goToWebView:(id)arg1;
- (void)goToLink:(id)arg1;
- (void)actionSheetDidClick:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setShareText:(id)arg1;
- (void)setTips:(id)arg1;
- (void)createTitleView;
- (id)createActionView;
- (id)initFloatTip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

