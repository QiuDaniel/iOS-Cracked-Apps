//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OtherPushMessageClearV2Request : CTBusinessBean
{
    int _businessType;
    int _operateType;
    NSString *_deviceToken;
    NSString *_pushMessageIds;
}

@property(copy, nonatomic) NSString *pushMessageIds; // @synthesize pushMessageIds=_pushMessageIds;
@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

