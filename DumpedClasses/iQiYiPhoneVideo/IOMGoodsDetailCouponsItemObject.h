//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IOMGoodsDetailCouponsItemObject : NSObject
{
    NSString *_discount;
    NSString *_couponsID;
    NSString *_title;
    NSString *_type;
    NSString *_activityName;
    NSString *_activityType;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_subTitle;
    NSString *_titleWithYuan;
}

@property(copy, nonatomic) NSString *titleWithYuan; // @synthesize titleWithYuan=_titleWithYuan;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *couponsID; // @synthesize couponsID=_couponsID;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

