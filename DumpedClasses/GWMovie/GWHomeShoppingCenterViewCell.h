//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GWImagePolicyView, UILabel;

@interface GWHomeShoppingCenterViewCell : UICollectionViewCell
{
    GWImagePolicyView *_poster;
    UILabel *_titleLable;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) GWImagePolicyView *poster; // @synthesize poster=_poster;
- (void).cxx_destruct;
- (void)updateWithSurround:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

