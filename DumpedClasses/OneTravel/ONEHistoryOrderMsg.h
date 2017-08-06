//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString;

@interface ONEHistoryOrderMsg : JSONModel
{
    NSString *_orderId;
    NSString *_productId;
    NSString *_order;
    NSDictionary *_extraInfo;
    CDUnknownBlockType _switchBusinessBlock;
}

@property(copy, nonatomic) CDUnknownBlockType switchBusinessBlock; // @synthesize switchBusinessBlock=_switchBusinessBlock;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)needSwitchBusiness;

@end
