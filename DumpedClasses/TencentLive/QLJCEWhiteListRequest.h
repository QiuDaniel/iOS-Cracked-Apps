//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEWhiteListRequest : JceObjectV2
{
    int jcev2_p_1_r_version;
    NSString *jcev2_p_2_r_rule_name;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_rule_name, setter=setJce_rule_name:) NSString *jcev2_p_2_r_rule_name; // @synthesize jcev2_p_2_r_rule_name;
@property(nonatomic, getter=jce_version, setter=setJce_version:) int jcev2_p_1_r_version; // @synthesize jcev2_p_1_r_version;
- (void).cxx_destruct;
- (id)init;

@end

