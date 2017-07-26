//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PEGradientLabel, TRANSFERPRODQueryReceiverInfoResp, TTTAttributedLabel, UIImageView, UILabel;

@interface PECollectorHeaderView : UIView
{
    id <PECollectorHeaderViewDelegate> _delegate;
    UIImageView *_headImageView;
    UILabel *_collectorLabel;
    PEGradientLabel *_gradientLabel;
    TTTAttributedLabel *_amountLabel;
    UILabel *_memoLabel;
    TRANSFERPRODQueryReceiverInfoResp *_reciverInfo;
    NSString *_collectAmount;
    NSString *_collectMemo;
}

@property(retain, nonatomic) NSString *collectMemo; // @synthesize collectMemo=_collectMemo;
@property(retain, nonatomic) NSString *collectAmount; // @synthesize collectAmount=_collectAmount;
@property(retain, nonatomic) TRANSFERPRODQueryReceiverInfoResp *reciverInfo; // @synthesize reciverInfo=_reciverInfo;
@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) TTTAttributedLabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) PEGradientLabel *gradientLabel; // @synthesize gradientLabel=_gradientLabel;
@property(retain, nonatomic) UILabel *collectorLabel; // @synthesize collectorLabel=_collectorLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <PECollectorHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headTapped;
- (void)buildHeadView;
- (void)didMoveToSuperview;
- (_Bool)receiverIsBizAccount;
- (id)initWithRecevierResponse:(id)arg1 amount:(id)arg2 memo:(id)arg3;

@end
