//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFlightCostDetailModel, NSString;

@interface CTFlightCostDetailViewModel : NSObject
{
    long long _cellType;
    NSString *_title;
    NSString *_subTitle;
    CTFlightCostDetailModel *_detailModel;
}

+ (id)creatCostDetaiViewlWithTitle:(id)arg1 cellType:(long long)arg2 detailModel:(id)arg3;
@property(retain, nonatomic) CTFlightCostDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;

@end

