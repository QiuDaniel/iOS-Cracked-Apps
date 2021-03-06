//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKCellConfigProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface HomeCarrierCell : UITableViewCell <WKCellConfigProtocol>
{
    UILabel *_lblName;
    NSString *_footerText;
    UIImageView *_cmcc;
    UIImageView *_chinanet;
    UIImageView *_unicom;
}

@property(retain, nonatomic) UIImageView *unicom; // @synthesize unicom=_unicom;
@property(retain, nonatomic) UIImageView *chinanet; // @synthesize chinanet=_chinanet;
@property(retain, nonatomic) UIImageView *cmcc; // @synthesize cmcc=_cmcc;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) UILabel *lblName; // @synthesize lblName=_lblName;
- (void).cxx_destruct;
- (void)configureCellWithModel:(id)arg1;
- (void)updateData;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

