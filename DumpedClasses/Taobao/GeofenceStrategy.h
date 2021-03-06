//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GeofenceStrategy : NSObject
{
}

+ (long long)maxRetryTimesWhileFailed;
+ (double)retryTimeIntervalWhileFailed;
+ (void)recordEventUploadTime;
+ (_Bool)fenceEventNeedUpload:(id)arg1;
+ (void)recordDataVerifyTime;
+ (_Bool)dataNeedVerify;
+ (void)recordLocationUpdateTime;
+ (double)lastLocationUpdateTime;
+ (void)recordDataUpdateTime;
+ (void)setDataUpdateTimeInterval:(double)arg1;
+ (_Bool)dataNeedUpdate;
+ (unsigned long long)locationAccuracyLevel;
+ (_Bool)switchOn;
+ (_Bool)enable;
+ (void)config;
+ (id)sharedInstance;
- (void)groupConfig:(id)arg1;
- (void)config;

@end

