//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMListViewDO.h"

@class FMReviewDetail, NSString;

@interface FMReviewDetailModel : FMListViewDO
{
    _Bool _checkRedPackage;
    NSString *_tradeId;
    NSString *_ratedUid;
    NSString *_raterUid;
    NSString *_bizCode;
    NSString *_sellerId;
    NSString *_itemId;
    NSString *_onlyArDIDI;
    FMReviewDetail *_detail;
}

@property(retain, nonatomic) FMReviewDetail *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *onlyArDIDI; // @synthesize onlyArDIDI=_onlyArDIDI;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(nonatomic) _Bool checkRedPackage; // @synthesize checkRedPackage=_checkRedPackage;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(copy, nonatomic) NSString *raterUid; // @synthesize raterUid=_raterUid;
@property(copy, nonatomic) NSString *ratedUid; // @synthesize ratedUid=_ratedUid;
@property(copy, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
- (void).cxx_destruct;
- (void)requestFinish:(_Bool)arg1 data:(id)arg2 msg:(id)arg3;
- (void)requestItem;

@end
