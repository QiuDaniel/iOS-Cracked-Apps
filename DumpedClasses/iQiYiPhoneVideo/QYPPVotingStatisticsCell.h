//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QIYIPaopaoBaseCell.h"

@class UIImageView, UILabel;

@interface QYPPVotingStatisticsCell : QIYIPaopaoBaseCell
{
    CDUnknownBlockType _avatarClickBlk;
    UIImageView *_iconView;
    UILabel *_voteTitleLabel;
    UILabel *_selectedLabel;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_desLabel;
}

@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) UILabel *voteTitleLabel; // @synthesize voteTitleLabel=_voteTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType avatarClickBlk; // @synthesize avatarClickBlk=_avatarClickBlk;
- (void).cxx_destruct;
- (void)singleTapAvatar:(id)arg1;
- (void)setupCellWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

