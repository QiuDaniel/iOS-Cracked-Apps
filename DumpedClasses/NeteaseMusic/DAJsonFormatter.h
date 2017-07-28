//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DAJsonFormatter : NSObject
{
}

+ (id)escapeString:(id)arg1;
+ (id)formatCampaignInfo:(id)arg1 appVersion:(id)arg2 appChannel:(id)arg3;
+ (id)formatEventWith:(id)arg1 inSession:(id)arg2 occurAt:(double)arg3 cost:(double)arg4 userId:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 category:(id)arg8 label:(id)arg9 withAttribute:(id)arg10;
+ (id)formatCloseEventOf:(id)arg1 startAt:(double)arg2 clostAt:(double)arg3 userId:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;
+ (id)formatCloseEventOf:(id)arg1 startAt:(double)arg2 clostAt:(double)arg3 userId:(id)arg4;
+ (id)formatOpenEventOf:(id)arg1 startAt:(double)arg2 sessionNumber:(long long)arg3 withInterval:(double)arg4 latitude:(double)arg5 longitude:(double)arg6;
+ (id)formatOpenEventOf:(id)arg1 startAt:(double)arg2 sessionNumber:(long long)arg3 withInterval:(double)arg4;
+ (id)formatHeaderFor:(long long)arg1 persistedAt:(double)arg2 uploadAt:(double)arg3 appKey:(id)arg4 appVersion:(id)arg5 appChannel:(id)arg6 customUDID:(id)arg7;
+ (id)formatBy:(id)arg1 andValue:(id)arg2 isFirstAttribute:(_Bool)arg3;
+ (id)formatBy:(id)arg1 andDoubleValue:(double)arg2 isFirstAttribute:(_Bool)arg3;
+ (id)formatBy:(id)arg1 andDoubleValue:(double)arg2;
+ (id)formatBy:(id)arg1 andLongValue:(long long)arg2 isFirstAttribute:(_Bool)arg3;
+ (id)formatBy:(id)arg1 andLongValue:(long long)arg2;
+ (id)formatBy:(id)arg1 andStringValue:(id)arg2 isFirstAttribute:(_Bool)arg3;
+ (id)formatBy:(id)arg1 andStringValue:(id)arg2;

@end
