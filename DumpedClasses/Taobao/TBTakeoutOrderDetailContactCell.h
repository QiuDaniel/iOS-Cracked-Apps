//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBTakeoutCustomLabel, TBTakeoutOrderContactModel, UIButton, UIView;

@interface TBTakeoutOrderDetailContactCell : UITableViewCell
{
    TBTakeoutOrderContactModel *_model;
    UIButton *_storeContactButton;
    UIButton *_serviceContactButton;
    UIView *_seperatorLine;
    UIView *_topLine;
    TBTakeoutCustomLabel *_providerLabel;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TBTakeoutCustomLabel *providerLabel; // @synthesize providerLabel=_providerLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIButton *serviceContactButton; // @synthesize serviceContactButton=_serviceContactButton;
@property(retain, nonatomic) UIButton *storeContactButton; // @synthesize storeContactButton=_storeContactButton;
@property(nonatomic) __weak TBTakeoutOrderContactModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)toast:(id)arg1;
- (void)contactService;
- (void)contactStore;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
