//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CTTourSearchFilterItem, UILabel;

@interface CTTourSearchFilterCollectionTextCell : UICollectionViewCell
{
    CTTourSearchFilterItem *_item;
    UILabel *_textLabel;
}

@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) CTTourSearchFilterItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
