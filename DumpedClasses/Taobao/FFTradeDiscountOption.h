//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FFTradeDiscountOption : NSObject
{
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *templateId;
@property(readonly, nonatomic) NSString *promotionName;
@property(readonly, nonatomic) NSString *fullTitle;
@property(readonly, nonatomic) NSString *cheapPromotion;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1;

@end

