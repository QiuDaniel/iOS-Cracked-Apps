//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYApm : NSObject
{
}

+ (void)replace:(id)arg1 withNewValue:(id)arg2 inAnotherStr:(id)arg3;
+ (id)parseSwitchReconfiguration:(id)arg1;
+ (void)reconfigureSwitch;
+ (void)sendNetworkData:(id)arg1;
+ (id)tracedViewControllers;
+ (void)sendViewControllerData:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 pageType:(long long)arg4 pageInfo:(id)arg5;
+ (void)setAnrConfiguration:(id)arg1;
+ (void)setPingbackMonitorConfiguration:(id)arg1;
+ (void)setViewControllerConfiguration:(id)arg1;
+ (void)setSwitchConfiguration:(id)arg1;
+ (void)setLaunchTimeConfiguration:(id)arg1;
+ (void)setNetworkConfiguration:(id)arg1;
+ (void)startQYApm;

@end

