//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTTrainPickUpTicketIntroCell : UITableViewCell
{
    UIButton *_numberBtn;
    UILabel *_titleLabel;
    UIImageView *_imgView;
    NSLayoutConstraint *_imgTopConstraint;
    NSLayoutConstraint *_imgBottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *imgBottomConstraint; // @synthesize imgBottomConstraint=_imgBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imgTopConstraint; // @synthesize imgTopConstraint=_imgTopConstraint;
@property(nonatomic) __weak UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *numberBtn; // @synthesize numberBtn=_numberBtn;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

