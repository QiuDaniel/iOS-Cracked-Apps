//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEActorRankItem, QLSImageView, UIImageView, UILabel;

@interface QLShowRoomStarRankCell : QLBaseTabelViewCell
{
    QLSImageView *_avartarImg;
    UILabel *_rankIndexLabel;
    UIImageView *_rankIndexImage;
    UILabel *_nameLabel;
    UILabel *_popularityLabel;
    UILabel *_emptyRankLabel;
    QLJCEActorRankItem *_rankItem;
}

+ (id)starTankTopThreeBgColor:(long long)arg1;
+ (double)heightOfShowRoomStarRankCellWithObject:(id)arg1;
@property(retain, nonatomic) QLJCEActorRankItem *rankItem; // @synthesize rankItem=_rankItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setObject:(id)arg1;

@end

