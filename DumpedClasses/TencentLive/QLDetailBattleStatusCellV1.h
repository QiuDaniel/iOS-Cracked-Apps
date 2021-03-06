//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLAppLiveBattleItem, QLJCEONALiveCompeteSchedule, QLSImageView, UILabel;

@interface QLDetailBattleStatusCellV1 : QLBaseTabelViewCell
{
    double _refreshTime;
    QLAppLiveBattleItem *_batteleItem;
    QLSImageView *_team1IconView;
    QLSImageView *_team2IconView;
    UILabel *_team1NameLabel;
    UILabel *_team2NameLabel;
    QLSImageView *_team1StateView;
    QLSImageView *_team2StateView;
    UILabel *_timeLbl;
    UILabel *_competetionNameLbl;
    UILabel *_scorePointLbl;
    QLJCEONALiveCompeteSchedule *_schedule;
    UILabel *_team1Pointslabel;
    UILabel *_team2Pointslabel;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UILabel *team2Pointslabel; // @synthesize team2Pointslabel=_team2Pointslabel;
@property(retain, nonatomic) UILabel *team1Pointslabel; // @synthesize team1Pointslabel=_team1Pointslabel;
@property(retain, nonatomic) QLJCEONALiveCompeteSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) UILabel *scorePointLbl; // @synthesize scorePointLbl=_scorePointLbl;
@property(retain, nonatomic) UILabel *competetionNameLbl; // @synthesize competetionNameLbl=_competetionNameLbl;
@property(retain, nonatomic) UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(retain, nonatomic) QLSImageView *team2StateView; // @synthesize team2StateView=_team2StateView;
@property(retain, nonatomic) QLSImageView *team1StateView; // @synthesize team1StateView=_team1StateView;
@property(retain, nonatomic) UILabel *team2NameLabel; // @synthesize team2NameLabel=_team2NameLabel;
@property(retain, nonatomic) UILabel *team1NameLabel; // @synthesize team1NameLabel=_team1NameLabel;
@property(retain, nonatomic) QLSImageView *team2IconView; // @synthesize team2IconView=_team2IconView;
@property(retain, nonatomic) QLSImageView *team1IconView; // @synthesize team1IconView=_team1IconView;
@property(retain, nonatomic) QLAppLiveBattleItem *batteleItem; // @synthesize batteleItem=_batteleItem;
@property(nonatomic) double refreshTime; // @synthesize refreshTime=_refreshTime;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)setLiveStyle:(_Bool)arg1;
- (void)layoutSubviews;
- (void)startLoadModel;
- (void)setObject:(id)arg1;
- (void)touchActon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

