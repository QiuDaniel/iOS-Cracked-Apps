//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface CouponStatusProgressInfomationModel : CTBusinessBean
{
    int _type;
    NSString *_title;
    NSMutableArray *_couponStatusNodeInfoList;
}

@property(retain, nonatomic) NSMutableArray *couponStatusNodeInfoList; // @synthesize couponStatusNodeInfoList=_couponStatusNodeInfoList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

