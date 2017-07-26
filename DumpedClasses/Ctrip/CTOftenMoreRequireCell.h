//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSIndexPath, UILabel, UISwitch;

@interface CTOftenMoreRequireCell : CTCustomeGroupTableViewCell
{
    UILabel *_titleLabel;
    UISwitch *_switchControl;
    NSIndexPath *_dataIndexPath;
    id <CTOftenMoreRequireCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <CTOftenMoreRequireCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSIndexPath *dataIndexPath; // @synthesize dataIndexPath=_dataIndexPath;
@property(retain, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)switchAction:(id)arg1;
- (void)fillContentWithDataModel:(id)arg1 title:(id)arg2 isOn:(_Bool)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithReuseIdentifier:(id)arg1;

@end
