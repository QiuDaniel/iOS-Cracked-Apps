//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCELiveStoreRedDotRequest : JceObjectV2
{
    int jcev2_p_2_o_requestType;
    long long jcev2_p_0_r_score;
    NSString *jcev2_p_1_r_pollDataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_requestType, setter=setJce_requestType:) int jcev2_p_2_o_requestType; // @synthesize jcev2_p_2_o_requestType;
@property(retain, nonatomic, getter=jce_pollDataKey, setter=setJce_pollDataKey:) NSString *jcev2_p_1_r_pollDataKey; // @synthesize jcev2_p_1_r_pollDataKey;
@property(nonatomic, getter=jce_score, setter=setJce_score:) long long jcev2_p_0_r_score; // @synthesize jcev2_p_0_r_score;
- (void).cxx_destruct;
- (id)init;

@end

